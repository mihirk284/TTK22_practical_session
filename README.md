# TTK22_practical_session

Mihir Kulkarni \
Contact: mihir.kulkarni@ntnu.no

---
## Lecture Slides and Videos available [here](https://rsl.ethz.ch/education-students/lectures/ros.html) 

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