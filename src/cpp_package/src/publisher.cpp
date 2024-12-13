#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class MyPublisher : public rclcpp::Node{
    private:
        rclcpp::TimerBase::SharedPtr timer_;
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_;

        std::string PubName = "pub_test";
        size_t counter_;
        void timer_callback(){
            std_msgs::msg::String message;
            message.data = "hello world" + std::to_string(counter_++ );
            RCLCPP_INFO(this->get_logger(),"Publishing: '%s' ", message.data.c_str());
            pub_->publish(message);
        }

    public:
        MyPublisher() : Node("node_test") , counter_(0){
            pub_ = this->create_publisher<std_msgs::msg::String>(PubName,10);
            timer_ = this->create_wall_timer(
                std::chrono::milliseconds(500), std::bind(&MyPublisher::timer_callback, this));
                
        }
};

int main(int argc, char * argv[]){
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MyPublisher>());
  rclcpp::shutdown();
  return 0;
}