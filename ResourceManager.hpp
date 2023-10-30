#pragma once

#include "Resource.hpp"

#include<iostream>

class ResourceManager
{
    // Twoja implementacja tutaj
public:
    ResourceManager() {
    moje_zasoby=new Resource();
    }
    ~ResourceManager() {
        delete moje_zasoby;
    }

    double get() {
        return moje_zasoby->get();//moje_zasoby.get();
    }
private:
    Resource* moje_zasoby;
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
    void zmien_dlugosc(int n){
        double* bufor = new double[n];
        for(int i=0; i<n;i++) i<dlugosc ? bufor[i]=wektor[i] : bufor[i]=2;
        dlugosc=n;
        delete[] wektor;
        wektor=bufor;
    }
    double operator[](int n){
        if(n<0) n=0;
        if(n>dlugosc) this->zmien_dlugosc(n);
        return wektor[n];
    }

    int get_vol();
    int dlugosc;
private:
    double pojemnosc=15;
    double* wektor;
};

  int  Wektor::get_vol(){
        return this->pojemnosc;
    }