import serial
import sys
import tty
import termios
import time

# Set up serial connection to Arduino
SERIAL_PORT = '/dev/ttyACM0'  # Adjust if needed
BAUD_RATE = 9600

try:
    arduino = serial.Serial(SERIAL_PORT, BAUD_RATE, timeout=1)
    time.sleep(2)
    print(f"Connected to {SERIAL_PORT}")
except serial.SerialException:
    print(f"Failed to connect to {SERIAL_PORT}")
    sys.exit(1)

# Function to read a single character (non-blocking)
def get_key():
    fd = sys.stdin.fileno()
    old_settings = termios.tcgetattr(fd)
    try:
        tty.setraw(sys.stdin.fileno())
        ch = sys.stdin.read(1)  # Read 1 char without Enter
    finally:
        termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)
    return ch

# Mapping keys to Arduino commands
key_to_command = {
    'w': 'F',
    'a': 'R',
    's': 'B',
    'd': 'L',
    ' ': 'S'  # space for stop
}

print("Control the robot with W/A/S/D. Press 'q' to quit.")

try:
    while True:
        key = get_key()
        if key == 'q':
            print("Exiting...")
            break
        elif key in key_to_command:
            cmd = key_to_command[key]
            arduino.write(cmd.encode())
            print(f"Sent: {cmd}")

        if arduino.in_waiting > 0:
            response = arduino.readline().decode().strip()
            if response:
                print(f"Arduino: {response}")

except KeyboardInterrupt:
    print("Stopped by user.")
finally:
    arduino.close()