#ifndef __SEMICOLON_CPP__
#define __SEMICOLON_CPP__

#include "Connectors.h"

//constructors
Semi::Semi(Base* Left, Base* Right): Connector(Left,Right) {}
Semi::Semi(): Connector() {}

//executes both of its children regardless of the success of the
//other child
//returns true or false based on the success of the right child
bool Semi::execute(int in, int out) {
    Left->execute(in,out);
    if(Right->execute(in,out)) {
        return true;
    }
    else {
        return false;
   }
}

#endif
