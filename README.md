# 🪲 Scarab

## 📱 Description
Inspired by my favorite game of all time, Rocket League, Scarab is an autonomous robotic car capable of playing soccer (in the future)!

Scarab is a project I have been wanting to work on for over a year now, and this summer I decided stop worrying about my limited knowledge of robotics, hardware, computer vision, machine learning, etc and **just do it**.

## 🛠️ Tools
* 3D Printing : Autodesk Fusion, Elegoo Cura, Elegoo Neptune 3 Pro
* Hardware : Arduino UNO, Raspberry Pi 3 + Camera Module 
* Software : C++ (Arduino), Python (CV)

## 🧠 What I Learned So Far
* Operating a 3D printer
* Designing models in Fusion 360 for 3D printing
* Building an RC car from scratch
* Headless Raspberry Pi Setup
* Raspberry Pi <-> Arduino Serial Communication
* Fundamentals of Computer Vision (OpenCV) 

## 🗺️ Roadmap
* Reinforcement learning through Unity + ML-Agents
* Transfer the model to Scarab and fine tune in the real world using CV

## 📸 Dev Log

### July 11, 2025
Built 2.0!
Fixed a lot of the issues that I noted in 1.0. To test it out I was able
to control the car using wasd on my keyboard -> raspi -> arduino -> wheel motors. Honestly surprised with how smooth it drives...

This build is more than enough to start testing some of the harder aspects of this project.
<div style="display: flex; gap: 10px; align-items: flex-start;">
  <img src="images/7_chassis.png" alt="chassis of 2.0" height="200"/>
  <img src="images/7_bottom.png" alt="bottom of 2.0" height="200"/>
  <img src="images/7_top.png" alt="top of 2.0" height="200"/>
</div>

### July 6, 2025
Channelled my highschool architecture drafting to create a blueprint for 2.0.
<div style="display: flex; gap: 10px; align-items: flex-start;">
  <img src="images/6_top.png" alt="top of 2.0" height="200"/>
  <img src="images/6_bottom.png" alt="bottom of 2.0" height="200"/>
</div>

### July 2, 2025
Since it was my first time building an RC car and I really had no clue where to start, I followed some guides online and built 1.0.

This build has 3 major issues, which I plan to address in 2.0
1. No space for a camera / brain
2. Using zipties to hold wheels in place resulted in heavy drift while driving straight
3. No wire management -> visually unappealing
4. Controlled via an IR sensor (not very autonomous imo)
<div style="display: flex; gap: 10px; align-items: flex-start;">
  <img src="images/5_scarab.png" alt="scarab 1.0" height="200"/>
</div>

### June 27, 2025
Bought a 3D printer! It took a couple days to get consistently good prints, but I ended up with a solid print of a car chassis I found online.
<div style="display: flex; gap: 10px; align-items: flex-start;">
  <img src="images/4_printer.png" alt="3d printer" height="200"/>
  <img src="images/4_prints.png" alt="a bunch of 3d prints" height="200"/>
  <img src="images/4_chassis.png" alt="3d printed chassis" height="200"/>
</div>

### June 7, 2025
Created a Python script w/ OpenCV to track a blue ping pong ball, and send controls to the arduino to keep the ball centered.
<div style="display: flex; gap: 10px; align-items: flex-start;">
  <img src="images/3_tracking1.png" alt="pi tracking ping pong ball" height="200"/>
  <img src="images/3_tracking2.png" alt="pi tracking ping pong ball" height="200"/>
</div>

### June 6, 2025
Tested serial communication between the pi and arduino for the first time with a little circuit (left of camera -> red, right of camera -> blue).
<div style="display: flex; gap: 10px; align-items: flex-start;">
  <img src="images/2_red.PNG" alt="raspi with arduino red" height="200"/>
  <img src="images/2_blue.PNG" alt="raspi with arduino blue" height="200"/>
</div>

### May 26, 2025
Set up Raspberry Pi and used the camera for the first time
<div style="display: flex; gap: 10px; align-items: flex-start;">
  <img src="images/1_camera.jpg" alt="Arduino camera" height="200"/>
</div>