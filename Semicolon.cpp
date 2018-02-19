#ifndef __SEMICOLON_CPP__
#define __SEMICOLON_CPP__

#include "Connector.h"
#include "Semicolon.h"

//constructors
Semicolon::Semicolon(Base* Left, Base* Right): Connector(Left,Right) {}
Semicolon::Semicolon(): Connector() {}

//executes both of its children regardless of the success of the
//other child
//returns true or false based on the success of the right child
bool Semicolon::execute(int in, int out) {
    Left->execute(in,out);
    if(Right->execute(in,out)) {
        return true;
    }
    else {
        return false;
   }
}

#endif
