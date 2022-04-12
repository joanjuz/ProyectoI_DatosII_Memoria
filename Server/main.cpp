#include <stdio.h>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <errno.h>
#include "Matriz.cpp"

#define PORT 8080

int main (int argc, char const *argv[]){
    string memoria[30][2];
    auto al = getmatriz(memoria);
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
    char buffer[1024] = {0};
    char *message = "Mensaje del servidor !";

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
            if(reader == -1){
                perror("[SERVER ERROR]");
                
            }
            else if (reader == 0){
                perror("Client socket closed");
                close(sock);
                break;
            }
            else{
            printf("%s\n", buffer);
            send(sock,message, strlen(message), 0);
            printf ("Servidor : Mensaje enviado! \n");
            if (string(buffer) == "Hola!"){
                printf("%s\n","true");
            }else{
                printf("%s\n","False");
                }
            }
            cout << string(buffer) << "\n";
        }
    }
    
}
    
