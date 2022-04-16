#include "getimage.h"
#include <iostream>
#include "client.h"
Client user;
getImage::getImage()
{
}
    char* getImage::imdir(char button){
        std::string image = user.abrir_socket(&button);
        char* dir;
        dir = &image[0];
        return dir;
    }
