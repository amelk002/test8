#ifndef __OR_CPP__
#define __OR_CPP__

#include "Connector.h"
#include "OR.h"

//Constructors
OR::OR(Base* lhs, Base* Right): Connector(lhs,Right) {}
OR::OR(): Connector() {}

//executes its right child if its left child has executed
//returns true if both children execute successfully
//otherwise returns false
bool OR::execute(int in, int out) {
    if(!lhs->execute(in,out)) {
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
