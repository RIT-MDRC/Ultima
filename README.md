# Project Name: Ultima

## Team Member(s)
- Clinten Hopkins (cmh3586@rit.edu)
- Nat Wilson (nmw6290@rit.edu)
- Jake Pregitzer (jwp2545@rit.edu)
- Liam Huff (lsh8197@rit.edu)
- Joe O'Neil (jmo8310@rit.edu)
- Ardit Koti (ak1935@rit.edu)
- Micheal Makris (mkm7486@rit.edu)

## Maintainer(s)
- Clinten Hopkins (cmh3586@rit.edu)
- Jake Pregitzer (jwp2545@rit.edu)
- Joe O'Neil (jmo8310@rit.edu)
- Ardit Koti (ak1935@rit.edu)

## Description
The source code for RIT's Inteligent Ground Vehicle Competetion (IGVC) team.

## Installation
Install OpenCV
```
sudo apt update
sudo apt install libopencv-dev python3-opencv
```
Install the ROS - OpenCV Bridge and the vision library
```
sudo apt-get install ros-humble-cv-bridge
sudo apt-get install ros-humble-vision-opencv
```
Clone this repo.
```
git clone https://github.com/RIT-MDRC/Ultima.git
```
`cd` in the root of your ROS workspace, run the following commands.  
```
git submodules init
git submodules update
```
Build the camera\_lite\_interfaces and camera\_lite
```
colcon build --packages-select camera_lite_interfaces
colcon build --packages-select camera_lite
```
Open a new terminal window to run the nodes. `cd` into the root of your ROS work
space and run the following commands.
```
. install/setup.bash
ros2 run camera_lite camera_node --ros-args --remap /camera/image_raw:=/image
```
Open a new terminal window to run the nodes. `cd` into the root of your ROS work
space and run the following commands.
```
. install/setup.bash
ros2 run image_tools showimage
```

## How To Use


## Known Issues

## Releases

|   Date   | Version |
|----------|---------|
| N/A |   N/A  |
