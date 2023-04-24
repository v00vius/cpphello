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

    // Alternative ways to create an object of a class 'HelloWorld' are:
    //  1. auto hello = HelloWorld {};
    //  2. HelloWorld hello;
    //  3. auto* phello = new HelloWorld();
    //     delete phello;
    //  4. auto phello = std::make_unique<HelloWorld>();

    return 0;
}
