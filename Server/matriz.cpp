#include <stdio.h>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <errno.h>
#include <time.h>
#include <iostream>
#include <cstdio>
#include "Mpaginada.cpp"
#include <map>
#include <cartas.h>
using namespace std;

auto getmatriz(map<int,cartas>mPaginada){
    string MatrizImgs[30][2];//Matriz con 30 imagenes, con Nombre, Imagen
    int cartas_l = 29;
    int cartascargadas = 0;
    for (int id = 0; id == cartas_l;id++){
        cartas carta;
        if(cartascargadas<10){
            carta.setid(id);
            carta.setopen(false);
            carta.setimage();
            setCartaM(id,carta,mPaginada);
        }else{
            carta.setid(id);
            carta.setopen(false);
        }
    }
    return mPaginada;
    /*
    string* ptr = *MatrizImgs;
    MatrizImgs[0][0] = "P1 (1)";
    MatrizImgs[0][1] = "../Images/P1 (1).jpg";
    MatrizImgs[1][0] = "P1 (29)";
    MatrizImgs[1][1] = "../Images/P1 (29).jpg";
    MatrizImgs[2][0] = "P1 (30)";
    MatrizImgs[2][1] = "../Images/P1 (30).jpg";
    MatrizImgs[3][0] = "P1 (31)";
    MatrizImgs[3][1] = "../Images/P1 (31).jpg";
    MatrizImgs[4][0] = "P1 (32)";
    MatrizImgs[4][1] = "../Images/P1 (32).jpg";
    MatrizImgs[5][0] = "P1 (33)";
    MatrizImgs[5][1] = "../Images/P1 (33).jpg";
    MatrizImgs[6][0] = "P1 (34)";
    MatrizImgs[6][1] = "../Images/P1 (34).jpg";
    MatrizImgs[7][0] = "P1 (35)";
    MatrizImgs[7][1] = "../Images/P1 (35).jpg";
    MatrizImgs[8][0] = "P1 (36)";
    MatrizImgs[8][1] = "../Images/P1 (36).jpg";
    MatrizImgs[9][0] = "P1 (37)";
    MatrizImgs[9][1] = "../Images/P1 (37).jpg";
    */
    /*
    MatrizImgs[10][0] = "P1 (38)";
    MatrizImgs[10][1] = "../Images/P1 (38).jpg";
    MatrizImgs[11][0] = "P1 (39)";
    MatrizImgs[11][1] = "../Images/P1 (39).jpg";
    MatrizImgs[12][0] = "P1 (40)";
    MatrizImgs[12][1] = "../Images/P1 (40).jpg";
    MatrizImgs[13][0] = "P1 (41)";
    MatrizImgs[13][1] = "../Images/P1 (41).jpg";
    MatrizImgs[14][0] = "P1 (42)";
    MatrizImgs[14][1] = "../Images/P1 (42).jpg";
    MatrizImgs[15][0] = "P1 (43)";
    MatrizImgs[15][1] = "../Images/P1 (43).jpg";
    MatrizImgs[16][0] = "P1 (44)";
    MatrizImgs[16][1] = "../Images/P1 (44).jpg";
    MatrizImgs[17][0] = "P1 (45)";
    MatrizImgs[17][1] = "../Images/P1 (45).jpg";
    MatrizImgs[18][0] = "P1 (46)";
    MatrizImgs[18][1] = "../Images/P1 (46).jpg";
    MatrizImgs[19][0] = "P1 (47)";
    MatrizImgs[19][1] = "../Images/P1 (47).jpg";
    MatrizImgs[20][0] = "P1 (48)";
    MatrizImgs[20][1] = "../Images/P1 (48).jpg";
    MatrizImgs[21][0] = "P1 (49)";
    MatrizImgs[21][1] = "../Images/P1 (49).jpg";
    MatrizImgs[22][0] = "P1 (50)";
    MatrizImgs[22][1] = "../Images/P1 (50).jpg";
    MatrizImgs[23][0] = "P1 (51)";
    MatrizImgs[23][1] = "../Images/P1 (51).jpg";
    MatrizImgs[24][0] = "P1 (52)";
    MatrizImgs[24][1] = "../Images/P1 (52).jpg";
    MatrizImgs[25][0] = "P1 (53)";
    MatrizImgs[25][1] = "../Images/P1 (53).jpg";
    MatrizImgs[26][0] = "P1 (54)";
    MatrizImgs[26][1] = "../Images/P1 (54).jpg";
    MatrizImgs[27][0] = "P1 (55)";
    MatrizImgs[27][1] = "../Images/P1 (55).jpg";
    MatrizImgs[28][0] = "P1 (56)";
    MatrizImgs[28][1] = "../Images/P1 (56).jpg";
    MatrizImgs[29][0] = "P1 (57)";
    MatrizImgs[29][1] = "../Images/P1 (57).jpg";
    */
}