// Talker ROS node

#include "ros/ros.h"

#include "std_msgs/Int32.h"
#include <sstream>


int main(int argc, char** argv)
{
    ros::init(argc, argv, "talker");
    ros::NodeHandle nh;

    std::string topic_name;
    
    nh.getParam("chatter_topic_name", topic_name);
    ros::Publisher p = nh.advertise<std_msgs::Int32>("topic_name", 10, false);

    ros::Rate loop_rate(10);

    int count = 0;

    while (ros::ok())
    {
        std_msgs::Int32 msg;
        msg.data = count;
        p.publish(msg);
        std::cout << "Sent number is " << count << std::endl;
        loop_rate.sleep(); // sleep for one cycle of 10 Hz === 0.1s        
        ++count;
        ros::spinOnce();
    }
    return 0;
}