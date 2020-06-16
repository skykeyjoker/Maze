#include "walls.h"

Walls::Walls(char* type)
{   this->type=new char[10];
    this->type=type;
}

char* Walls::getType(){return type;}
