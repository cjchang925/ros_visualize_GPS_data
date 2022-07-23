# ros_visualize_GPS_data

## System Requirement
+ **Ubuntu 18.04 LTS** or later  
+ **ROS 1 Melodic** or later


## Usage
+ Run the commands below to clone and compile the package.  
```bash
$ cd ~/catkin_ws/src
$ git clone git@github.com:cjchang925/ros_visualize_GPS_data.git
$ cd ..
$ source devel/setup.bash
$ catkin_make
$ roslaunch show_gps show_gps.launch bag_filename:={ABSOLUTE_PATH_TO_YOUR_ROS_BAG}
```
## Note
+ Please check `src/showGPS.cpp` to modify the topic name of the GPS data in your bag.
+ The GPS data is modified to make the points closed to (0, 0, 0) based on the GPS data of National Yang Ming Chiao Tung University(Chiao Tung Campus, latitude: 24.78550, longitude: 120.99700, altitude: 116.048), please modify `src/showGPS.cpp` to fit your own need.
+ Any PR is welcome : )
