#ifndef __Or_CPP__
#define __Or_CPP__

#include "Connectors.h"

//Constructors
Or::Or(Base* Left, Base* Right): Connector(Left,Right) {}
Or::Or(): Connector() {}

//executes its right child if its left child has executed
//returns true if both children execute successfully
//otherwise returns false
bool Or::execute(int in, int out) {
    if(!Left->execute(in,out)) {
        if(Right->execute(in,out)) {
            return true;
        }
        else {
            return false;
        }
    }
    return true;
}


#endif
