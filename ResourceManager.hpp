#pragma once

#include "include/Resource.hpp"

#include<iostream>

class ResourceManager
{
    // Twoja implementacja tutaj
public:
    ResourceManager() { a = 10; 
    std::cout<<"hello"<<std::endl;   }
    ~ResourceManager() {}

    double get() {
        return a;
    }
private:
    double a;
};
