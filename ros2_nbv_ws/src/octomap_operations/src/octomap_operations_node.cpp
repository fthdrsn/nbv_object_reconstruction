#include "octomap_operations.hpp"
#include <rclcpp/rclcpp.hpp>
#include<signal.h>


static std::atomic_bool kill_this_process(false);

void sig_int_handler(int)
{
    kill_this_process = true;
}

int main(int argc, char** argv)
{

    if(signal(SIGINT, sig_int_handler) == SIG_ERR)
        throw std::runtime_error("Error setting the signal int handler.");

    rclcpp::init(argc, argv);
    auto node = std::make_shared<octomap_operations::OctomapOperations>();
    
    RCLCPP_INFO(node->get_logger(), "Starting octomap_operations_node...");
    
    while (rclcpp::ok() && !kill_this_process)
    {
        rclcpp::spin_some(node);
    }
    return 0;
}
