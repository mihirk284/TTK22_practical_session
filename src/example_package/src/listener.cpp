// Talker ROS node

#include "ros/ros.h"

#include "std_msgs/Int32.h"
#include <sstream>


void callback_fn(const std_msgs::Int32 &msg)
{
    int recieved_number = msg.data;
    std::cout << "Recieved number is " << msg.data << std::endl;

    if (recieved_number == 100)
    {
        ros::shutdown();
    }
}


int main(int argc, char** argv)
{
    ros::init(argc, argv, "listener");
    ros::NodeHandle nh;

    std::string topic_name;
    nh.getParam("chatter_topic_name", topic_name);

    ros::Subscriber sub = nh.subscribe("topic_name", 10, callback_fn);

    ros::spin();
    return 0;
}