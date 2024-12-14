#include "rclcpp/rclcpp.hpp"
#include "cpp_package/srv/capital_full_name.hpp"
#include <boost/algorithm/string.hpp>

using CapitalFullName = cpp_package::srv::CapitalFullName;

class MyServiceNode : public rclcpp::Node{
    private:
        rclcpp::Service<cpp_package::srv::CapitalFullName>::SharedPtr service_;
        void ComposeFullName(const std::shared_ptr<CapitalFullName::Request> request , std::shared_ptr<CapitalFullName::Response> response);
    public:
        MyServiceNode() : Node("service_node"){
            RCLCPP_INFO(this->get_logger(), "I am ready to capitalize your full name");
            service_ = this->create_service<CapitalFullName>("create_cap_full_name" , 
                std::bind(&MyServiceNode::ComposeFullName, this, std::placeholders::_1, std::placeholders::_2 ));
        }
};

void MyServiceNode::ComposeFullName(const std::shared_ptr<CapitalFullName::Request> request , std::shared_ptr<CapitalFullName::Response> response){
    std::string fullname = request->name + " " + request->surname;
    std::string capitalFullName = boost::to_upper_copy<std::string>(fullname);
    response->capitalfullname = capitalFullName;
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming name: %s" "\tIncoming surname: %s", request->name.c_str(), request->surname.c_str());
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sending back the capitalize full name: [%s]", response->capitalfullname.c_str());
}

int main(int argc, char **argv){
  rclcpp::init(argc, argv);
  auto node = std::make_shared<MyServiceNode>();
  rclcpp::spin(node);   // the service starts to wait and manage requests
  rclcpp::shutdown();
}