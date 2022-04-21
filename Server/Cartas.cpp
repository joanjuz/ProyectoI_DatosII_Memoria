#include <iostream>
#include <string>
using namespace std;

class Cartas
{
private:
    /* data */
    int id;
    bool open;
    string image;
public:
    Cartas(/* args */);
    ~Cartas();
    void setid(int ida){
        id = ida;

    }
    void setopen(bool isopen){
        open = isopen;
    }
    void setimage(){
        switch(id){
            case '0':
                image = "../Images/P1 (0).jpg";
                break;
            case '1':
                image = "../Images/P1 (2).jpg";
                break;
            case '2':
                image = "../Images/P1 (3).jpg";
                break;
            case '3':
                image = "../Images/P1 (4).jpg";
                break;
            case '4':
                image = "../Images/P1 (5).jpg";
                break;
            case '5':
                image = "../Images/P1 (6).jpg";
                break;
            case '6':
                image = "../Images/P1 (7).jpg";
                break;
            case '7':
                image = "../Images/P1 (8).jpg";
                break;
            case '8':
                image = "../Images/P1 (9).jpg";
                break;
            case '9':
                image = "../Images/P1 (10).jpg";
                break;
            case '10':
                image = "../Images/P1 (11).jpg";
                break;
        }
    }
    int getid(){
        return id;
    }
    bool getopen(){
        return open;
    }
    string getimage(){
        return image;
    }
};

