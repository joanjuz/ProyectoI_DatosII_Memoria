#include <Mpaginada.h>
#include <iostream>
#include <hash_map>
#include <map>
#include <string>
#include <cartas.h>
using namespace std;

void Mpaginada::setCartaM(int idCarta,cartas Carta,map<int,cartas> MwKeys){
    MwKeys.insert(pair<int,cartas>(idCarta,Carta));
}
map<int,cartas> Mpaginada::getMatrizP(map<int,cartas> MwKeys){
    return MwKeys;
}