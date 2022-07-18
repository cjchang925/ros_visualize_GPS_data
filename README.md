# ros_visualize_GPS_data

## System
**Ubuntu 18.04 LTS** or later  
**ROS 1 Melodic** or later


## Usage
Run the commands below to clone and compile the package.  
```bash
cd ~/catkin_ws/src
git clone git@github.com:cjchang925/ros_visualize_GPS_data.git
cd ..
catkin_make
roslaunch show_gps show_gps.launch bag_filename:={ABSOLUTE_PATH_TO_YOUR_ROS_BAG}
```
## Note
+ Please check src/main.cpp to modify the topic name of the GPS data in your bag.
+ Any PR is welcomed :)
