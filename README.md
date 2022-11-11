# TTK22_practical_session

## Catkin tools

```sh
sudo apt-get update
sudo apt-get install python3-catkin-tools
```
OR 
```sh
sudo pip3 install -U catkin_tools
```

## Setting up worksapces
```sh
mkdir -p workspaces/ttk22_ws & cd workspaces/ttk22_ws
mkdir src & cd src
```

## Creating ROS package
```sh
catkin_create_pkg example_package roscpp std_msgs rospy message_generation
catkin build
catkin config -DCMAKE_BUILD_TYPE=Release
```
 
