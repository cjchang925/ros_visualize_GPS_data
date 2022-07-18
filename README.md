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
cd devel/lib/show_gps
./show_gps
```
Open RViz and add "Marker"  
Frame: map  
Topic: /gps  
Play bag and see the magic!
