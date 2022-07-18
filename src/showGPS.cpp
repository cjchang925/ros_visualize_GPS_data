#include <ros/ros.h>
#include <sensor_msgs/NavSatFix.h>
#include <visualization_msgs/Marker.h>
#include <queue>
#include <iostream>

int marker_id = 0;
class Node {
public:
    void gpsCallback(const sensor_msgs::NavSatFix::Ptr& data);
    Node(int argc, char** argv) {
        std::cout << "Constructing node\n";
        ros::init(argc, argv, "showGPS");
        ros::NodeHandle n;
        pub = n.advertise<visualization_msgs::Marker>("gps", 1000);
        sub = n.subscribe("fix", 1000, &Node::gpsCallback, this);
        ros::spin();
    }
    ros::Subscriber sub;
    ros::Publisher pub;
};

void Node::gpsCallback(const sensor_msgs::NavSatFix::Ptr& data) {
    std::cout << "Call callback function\n";
    visualization_msgs::Marker marker;
    marker.header.frame_id = "map";
    marker.header.stamp = ros::Time();
    marker.ns = "gps_namespace";
    marker.id = marker_id++;
    marker.type = visualization_msgs::Marker::SPHERE;
    marker.pose.position.x = data->latitude * 10000.0 - 247855.0;
    marker.pose.position.y = data->longitude * 10000.0 - 1209970.0;
    marker.pose.position.z = data->altitude - 116.048;
    marker.color.a = 1.0;
    marker.color.r = 0.0;
    marker.color.g = 1.0;
    marker.color.b = 0.0;
    marker.pose.orientation.x = 0.0;
    marker.pose.orientation.y = 0.0;
    marker.pose.orientation.z = 0.0;
    marker.pose.orientation.w = 1.0;
    marker.scale.x = 0.1;
    marker.scale.y = 0.1;
    marker.scale.z = 0.1;
    std::cout << "Ready to publish\n";
    pub.publish(marker);
}

int main(int argc, char **argv) {
  std::cout << "Start\n";
  Node(argc, argv);
  return 0;
}