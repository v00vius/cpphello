//
// 23-04-23 19:40:47
//
#include <iostream>
#include <memory>

class HelloWorld
{
public:
    HelloWorld()
    {
        std::cout << "Hello world!" << std::endl;
    }
};

int main()
{
    auto hello = HelloWorld {};

    return 0;
}
