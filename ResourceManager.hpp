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
    Resource moje_zasoby{};
    }
    ~ResourceManager() {}

    double get() {
        return 0;//moje_zasoby.get();
    }
private:
    double a;
};

class Wektor{
public:
    Wektor(int n):dlugosc(n){
        wektor=new double[dlugosc];
        for(int i=0; i<dlugosc; i++) wektor[i]=0;
    }
    ~Wektor(){
        delete[] wektor;
    }
    void print(){
        for(int i=0; i<dlugosc; i++) std::cout<<wektor[i]<<std::endl;
    }
    double* wektor;
    int dlugosc;
};