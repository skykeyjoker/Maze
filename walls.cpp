#include "walls.h"

walls::walls(char* type)
{   this->type=new char[10];
    this->type=type;
}

char* getType(){return *type;}
