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






roscore
rosrun package_name node_name
rosnode list
rosnode info node_name
rostopic list
rostopic echo /topic
rostopic echo /info
