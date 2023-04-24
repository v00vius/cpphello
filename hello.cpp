//
// hello.cpp
//
#include <iostream>

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
    auto hello = HelloWorld();
    // Alternative ways to create an object 'hello' of a class 'HelloWorld' are:
    //  auto hello = HelloWorld {};
    //  HelloWorld hello;

    return 0;
}
