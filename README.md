# TTK22_practical_session

Mihir Kulkarni \
Contact: mihir.kulkarni@ntnu.no

---
## Lecture Slides and Videos available [here](https://rsl.ethz.ch/education-students/lectures/ros.html) 

---
## ROS Installations

1) Directly to your Linux (20.04 or lower version OS) computer \
Ubuntu 20.04 - http://wiki.ros.org/noetic/Installation \
Ubuntu 18.04 - https://wiki.ros.org/melodic/Installation

OR 

2) Virtual Machine (Preferably on 20.04)\
Instructions: https://github.com/sutd-robotics/virtualbox-ubuntu-ros

**Note: There is no difference with respoect to implementation for the assignment if your computer has either 18.04 - ROS Melodic, or 20.04 - ROS Noetic.**

---

## Catkin Tools

Reference and documentation [here](https://catkin-tools.readthedocs.io/en/latest/).

```sh
sudo apt-get update
sudo apt-get install python3-catkin-tools
```
OR 
```sh
sudo pip3 install -U catkin_tools
```

---

## Packages and workspaces

### Setting up workspaces

Tutorial [here](http://wiki.ros.org/catkin/Tutorials/create_a_workspace).

```sh
mkdir -p workspaces/ttk22_ws & cd workspaces/ttk22_ws
mkdir src & cd src
```

### Creating ROS package

Tutorial [here](http://wiki.ros.org/ROS/Tutorials/CreatingPackage).

Using catkin tools

```sh
catkin_create_pkg example_package roscpp std_msgs rospy message_generation
catkin build
catkin config -DCMAKE_BUILD_TYPE=Release
```

---


## Talker & Listener

Tutorial [here](http://wiki.ros.org/ROS/Tutorials/WritingPublisherSubscriber%28c%2B%2B%29).

## Launch files

Tutorial [here](http://wiki.ros.org/roslaunch/XML).

---
