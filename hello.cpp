#include <iostream>
#include <string>
#include "GetName.h"
#include "hello.h"
void hello()
{
    std::cout << "Hello, MIPT!\nWhat's your name?\n";
    std::string name = GetName();
    std::cout << "My name is " << name << '\n';

}

