#!/usr/bin/env python2

import rospy
from std_msgs.msg import String

if __name__ == '__main__':
	rospy.init_node('robot_transmitter')
	pub = rospy.Publisher("/robot_transmitter", String, queue_size=10)

	rate = rospy.Rate(2)
	while not rospy.is_shutdown():
		msg = String()
		msg.data = "hello, I am the robot ..."
		pub.publish(msg)
		rate.sleep()

	rospy.loginfo("Node stopped.")
