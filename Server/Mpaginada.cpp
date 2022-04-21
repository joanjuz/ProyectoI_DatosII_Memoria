#include <iostream>
#include <hash_map>
#include <map>
#include <string>
#include "Cartas.cpp"
using namespace std;

void setCartaM(int idCarta,Cartas Carta,map<int,Cartas> MwKeys){
    MwKeys.insert(pair<int,Cartas>(idCarta,Carta));
}
map<int,Cartas> getMatrizP(map<int,Cartas> MwKeys){
    return MwKeys;
}