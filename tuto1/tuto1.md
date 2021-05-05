tuto1.md

in catkin_wp/src/my_package/scripts folder, create your python node node.py
add the excutable access to it (chmod +x node.py) to let it be accessible by rosrun

'''
#!/usr/bin/env python2

import rospy

if __name__ == '__main__':
	rospy.init_node('node_name')

	rospy.loginfo("This node has been started")

	rate = rospy.Rate(1) #1Hz

	while not rospy.is_shutdown():
		rospy.loginfo("Node message ...")
		rate.sleep()

	rospy.loginfo("This node has been stoped")

'''




to be compare :

catkin_init_workspace vs catkin_make
