#!/usr/bin/env python2

import rospy
from std_msgs.msg import String

def callback_data(msg):
	rospy.loginfo("Message received: ")
	rospy.loginfo(msg)

if __name__ == '__main__':
	rospy.init_node('robot_receiver')
	sub = rospy.Subscriber("/robot_transmitter", String, callback_data)

	rate = rospy.spin()
