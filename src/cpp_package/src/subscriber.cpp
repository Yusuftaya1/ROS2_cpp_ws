#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class MySubscriber : public rclcpp::Node{
    private:
        rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_;
        void SubscriberCallback(const std_msgs::msg::String::SharedPtr msg);

    public:
        MySubscriber():Node("exam_sub"){
            sub_ = this->create_subscription<std_msgs::msg::String>(
            "/my_message", 10, std::bind(&MySubscriber::SubscriberCallback,
            this, std::placeholders::_1));           
        }
};

void MySubscriber::SubscriberCallback(const std_msgs::msg::String::SharedPtr msg){
    RCLCPP_INFO(this->get_logger(), "I received the message : '%s'", msg->data.c_str());
}

int main(int argc, char * argv[]){
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MySubscriber>());
  rclcpp::shutdown();
  return 0;
}