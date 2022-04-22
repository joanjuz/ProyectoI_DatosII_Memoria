#ifndef CARTAS_H
#define CARTAS_H
#include <iostream>
#include <string>
#pragma once
using namespace std;

class cartas
{
private:
    /* data */
    int id;
    bool open;
    char* image;
public:
    cartas(/* args */);
    ~cartas();
    void setid(int);
    int getid();
    bool getopen();
    char* getimage();
    void setopen(bool);
    void setimage();
};

cartas::cartas(/* args */)
{
}

cartas::~cartas()
{
}





#endif