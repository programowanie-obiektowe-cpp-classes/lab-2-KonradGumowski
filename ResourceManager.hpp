#pragma once

#include "Resource.hpp"

class ResourceManager
{
    // Twoja implementacja tutaj
public:
    ResourceManager() {
        a = 10;
    };
    ~ResourceManager() {};

    double get() {
        return a;
    }
private:
    double a;
};
