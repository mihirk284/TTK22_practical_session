#include "ros/ros.h"

#include "std_srvs/SetBool.h"

#include <sstream>

int global_counter = 0;
bool even_numbers = false;


bool doTask(std_srvs::SetBool::Request &req, std_srvs::SetBool::Response &res)
{
    if (req.data != even_numbers)
    {
        even_numbers = req.data;
        global_counter = 0;
        res.success = true;
        res.message = "Change status to " + std::to_string(even_numbers);
    }
    else
    {
        res.success = false;
        res.message = "Status is already " + std::to_string(even_numbers) + ". No change done.";
    }
    return true;
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "service_server");
    ros::NodeHandle nh;
    ros::ServiceServer service = nh.advertiseService("change_to_odd_numbers", doTask);

    ros::Rate loop_rate(1);

    while(ros::ok())
    {
        std::cout << "Current counter value is " << (2*global_counter + int(even_numbers)) << std::endl;
        ros::spinOnce();
        loop_rate.sleep();
        ++global_counter;
    }
}
