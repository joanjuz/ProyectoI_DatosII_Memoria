#include "client.h"
#include <stdio.h>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <arpa/inet.h>
#define PORT 8080
#include <cstring>
#include <iostream>
#include <string.h>
#include <string>
#include <string_view>

Client::Client()
{
}
    std::string Client::abrir_socket(char *message){
        int obj_socket = 0, reader;
        struct sockaddr_in serv_addr;
        char buffer[2024] = {0};

        if ((obj_socket = socket (AF_INET, SOCK_STREAM, 0))< 0){
                printf("Error en creacion del socket");
                return NULL;
        }
        serv_addr.sin_family = AF_INET;
        serv_addr.sin_port = htons(PORT);

        if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<= 0){
            printf("\n Direccion ivalida! Esta IP no es soportada !\n");
            return NULL;
        }
        if(connect(obj_socket, (struct sockaddr *)&serv_addr, sizeof(serv_addr))< 0){
            printf("Connection Failed : No se puede establecer conexion con este socket");
            return NULL;
        }
        send(obj_socket, message, strlen(message), 0);
        printf("\nClient : Mensaje enviado! !\n");
        reader = read(obj_socket,buffer, 1024);
        printf("%s\n", buffer);
        std::string mess = std::string(buffer);
        std::cout << mess << "\n";
        close(obj_socket);
        return mess;

    }


