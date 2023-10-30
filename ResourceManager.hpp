#pragma once

#include "Resource.hpp"
//#include "include/Resource.hpp"

#include<iostream>

class ResourceManager
{
    // Twoja implementacja tutaj
public:
    ResourceManager() { a = 10; 
    std::cout<<"hello"<<std::endl;
    Resource moje_zasoby();
    }
    ~ResourceManager() {}

    double get() {
        return a;
    }
private:
    double a;
};
