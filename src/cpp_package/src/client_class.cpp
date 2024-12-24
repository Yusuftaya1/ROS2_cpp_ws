#include "cpp_package/srv/capital_full_name.hpp"
#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;
using CapitalFullName = cpp_package::srv::CapitalFullName;

class MyClientNode : public rclcpp::Node{
    private:
        const std::string name_;
        const std::string surname_;
        rclcpp::Client<CapitalFullName>::SharedPtr client_;
        void ServerResponse();

    public:
        MyClientNode(std::string passedNodeName="VOID", std::string passedName="VOID", std::string passedSurname="VOID"): Node(passedNodeName), name_(passedName), surname_(passedSurname){
                client_ = this->create_client<CapitalFullName>("create_cap_full_name");
                this->ServerResponse();
        }
};

void MyClientNode::ServerResponse(){
    auto request = std::make_shared<CapitalFullName::Request>();
    request->name = name_;
    request->surname = surname_;
    std::chrono::seconds myPause = 1s;

    while (!client_->wait_for_service(1s)) {
        if (!rclcpp::ok()){
            RCLCPP_ERROR(rclcpp::get_logger("rclcpp"),"Interrupted while waiting for the service. Exiting.");
        }
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"SERVICE NOT AVAILABLE, waiting again...");
    }

    auto result = client_->async_send_request(request);

    if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result) == rclcpp::FutureReturnCode::SUCCESS){
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Capitalized full name: %s" , result.get()->capitalfullname.c_str());
    } 

    else{
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service create_cap_full_name");
    }
}

int main(int argc, char **argv){
  rclcpp::init(argc, argv);
  while (rclcpp::ok()){
    std::string name = "";
    std::string surname = "";
    std::cout << "Insert the name -> ";
    std::cin >> name;
    std::cout << "Insert the surname -> ";
    std::cin >> surname;
    auto node = std::make_shared<MyClientNode>("client_node", name, surname);
  }
  rclcpp::shutdown();
}