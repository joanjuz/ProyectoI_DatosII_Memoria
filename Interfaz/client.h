#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include <string>
#include <cstring>



class Client
{
public:
    Client();
    std::string abrir_socket(char *message);
};

#endif // CLIENT_H
