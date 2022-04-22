#include <stdio.h>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <errno.h>
#include <string>
#include <iostream>
//#include "matriz.cpp"
//#include "Mpaginada.cpp"
#include <map>
//#include <cartas.h>
using namespace std;

#define PORT 8080

int main (int argc, char const *argv[]){
    //map<int,cartas> al; 
    //al = getmatriz(al);
    //printf("%s",al);

    
    
    /*
    for (int i = 0; i < 10; i++){
        cout << al[i][0] << "\n";
    }*/

    //Server
    int obj_server, sock, reader;
    struct sockaddr_in address;
    struct client;
    int opted = 1;
    int address_length = sizeof(address);
    unsigned int len;
    char buffer[2024] = {0};
    char *message = "";

    if ((obj_server = socket(AF_INET, SOCK_STREAM, 0)) == 0){
        perror("Error al abrir el socket");
        exit(EXIT_FAILURE);
    }
    if ( setsockopt(obj_server,SOL_SOCKET, SO_REUSEADDR, &opted, sizeof( opted))){
        perror("No se puede settear el socket");
        exit(EXIT_FAILURE);
    }
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);
    if(bind(obj_server,(struct sockaddr *) &address, sizeof(address))<0){
        perror("Binding of socket failed !");
        exit(EXIT_FAILURE);
    }if (listen(obj_server, 3)< 0){
        perror("Cant listen from the server !");
        exit(EXIT_FAILURE);
    }
    while(1){
        if ((sock=accept(obj_server,(struct sockaddr *)&address,(socklen_t*)&address_length))<0){
            perror("Accept");
            exit(EXIT_FAILURE);
        }
        while(1){
            reader = read(sock, buffer, 1024);
            message = "";
            if(reader == -1){
                perror("[SERVER ERROR]");
                
            }
            else if (reader == 0){
                perror("Client socket closed");
                close(sock);
                break;
            }
            else{
            //printf("%s\n ",al);
            printf ("Servidor : Mensaje enviado! \n");
            if (string(buffer) == "Button2" || string(buffer) == "Button31"){
                message = ":/Images/P1 (3).png";
                printf("%s\n","B2");
            }
            if(string(buffer)== "Button3"|| string(buffer) == "Button32"){
                //message = (al[1].getimage());
                message = ":/Images/P1 (4).png";
                printf("%s\n","B3");
            }
            if(string(buffer)== "Button4"|| string(buffer) == "Button33"){
                //message = (al[1].getimage());
                message = ":/Images/P1 (5).png";
                printf("%s\n","B4");
            }
            if(string(buffer) =="Button1"|| string(buffer) == "Button34"){
                message = ":/Images/P1 (2).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button5"|| string(buffer) == "Button35"){
                message = ":/Images/P1 (6).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button6"|| string(buffer) == "Button36"){
                message = ":/Images/P1 (7).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button7"|| string(buffer) == "Button37"){
                message = ":/Images/P1 (8).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button8"|| string(buffer) == "Button38"){
                message = ":/Images/P1 (9).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button9"|| string(buffer) == "Button39"){
                message = ":/Images/P1 (10).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button10"|| string(buffer) == "Button40"){
                message = ":/Images/P1 (11).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button11"|| string(buffer) == "Button41"){
                message = ":/Images/P1 (12).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button12"|| string(buffer) == "Button42"){
                message = ":/Images/P1 (13).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button13"|| string(buffer) == "Button43"){
                message = ":/Images/P1 (14).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button14"|| string(buffer) == "Button44"){
                message = ":/Images/P1 (15).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button15"|| string(buffer) == "Button45"){
                message = ":/Images/P1 (16).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button16"|| string(buffer) == "Button46"){
                message = ":/Images/P1 (17).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button17"|| string(buffer) == "Button47"){
                message = ":/Images/P1 (18).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button19"|| string(buffer) == "Button48"){
                message = ":/Images/P1 (20).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button20"|| string(buffer) == "Button49"){
                message = ":/Images/P1 (21).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button21"|| string(buffer) == "Button50"){
                message = ":/Images/P1 (22).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button22"|| string(buffer) == "Button51"){
                message = ":/Images/P1 (23).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button23"|| string(buffer) == "Button52"){
                message = ":/Images/P1 (24).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button25"|| string(buffer) == "Button53"){
                message = ":/Images/P1 (26).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button26"|| string(buffer) == "Button54"){
                message = ":/Images/P1 (27).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button18"|| string(buffer) == "Button55"){
                message = ":/Images/P1 (28).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button28"|| string(buffer) == "Button56"){
                message = ":/Images/P1 (29).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button29"|| string(buffer) == "Button57"){
                message = ":/Images/P1 (30).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button30"|| string(buffer) == "Button58"){
                message = ":/Images/P1 (25).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button24"|| string(buffer) == "Button59"){
                message = ":/Images/P1 (19).png";
                printf("%s\n","False");
                }
            if(string(buffer) =="Button27"|| string(buffer) == "Button60"){
                message = ":/Images/P1 (31).png";
                printf("%s\n","False");
            }
            
            printf("%s\n", buffer);
            send(sock,message, strlen(message), 0);
            }
            cout << string(buffer) << "\n";
        }
    }
    return 0;
    
}
    
