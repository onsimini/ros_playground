#include <ros/ros.h>
#include <std_msgs/String.h>

void callback_data(const std_msgs::String& msg){
	ROS_INFO("Message received : %s", msg.data.c_str());
}

int main(int argc, char **argv){
	ros::init(argc, argv, "cpp_robot_receiver");
	ros::NodeHandle nh;
	ros::Subscriber sub = nh.subscribe("/robot_transmitter", 1000, callback_data);
	ros::spin();
}
