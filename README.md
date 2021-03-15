# ros_playground
ROS playground

I put the source of ros setup in my .bachrc, but don t forget to source before using ros.
```
	source /opt/ros/kinetic/setup.bash
```

start with a catkin workspace:
```
	mkdir -p ./catkin_ws/src
	cd ./catkin_ws
	catkin_make
	source devel/setup.bash
	echo $ROS_PACKAGE_PATH
```

add a new package:
```
	cd ./catkin_ws/src
	catkin_create_pkg beginner_tutorials std_msgs rospy roscpp
	cd ..
	catkin_make
```

Start ros in terminal 1:
```
	roscore
```

In a new terminal 2, Start a new node and check list and info:
```
	rosrun turtlesim turtlesim_node __name:=my_turtle #'__name' rename the node
	rosnode list
	rosnode info /my_turtle
	rosnode ping my_turtle #ping the node to see if it is alive
```










```
	rostopic list
	rostopic echo /topic
	rostopic echo /info
	rostopic type /topic
	rostopic pub /topic type args
```
