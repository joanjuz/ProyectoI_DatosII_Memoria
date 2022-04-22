#ifndef MPAGINADA_H
#define MPAGINADA_H
#include <iostream>
#include <cartas.h>
#include <map>
#pragma once
using namespace std;

class Mpaginada
{
    public:
    void setCartaM(int, cartas, map<int,cartas>);
    map<int,cartas> getMatrizP(map<int,cartas>);

};

#endif