#include <ros/ros.h>
#include <std_msgs/String.h>

int main(int argc, char **argv){
	ros::init(argc, argv, "cpp_robot_transmitter");
	ros::NodeHandle nh;
	ROS_INFO("Node has been started");
	ros::Publisher pub = nh.advertise<std_msgs::String>("/robot_transmitter", 10);
	ros::Rate rate(3);
	while(ros::ok()){
		std_msgs::String msg;
		msg.data = "message fron the CPP puplisher";
		pub.publish(msg);
		rate.sleep();
	}
	ROS_INFO("Node has been stopped");
}
