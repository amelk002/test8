#ifndef __And_CPP__
#define __AND_CPP__

#include "Connectors.h"


//constructors
And::And(Base* Left, Basse* Right): Connector(Left,Right) {}
And::And(): Connector() {}

//executes its right child if its left child has executed
//returns true if both children execute successfully
//otherwise returns false
bool And::execute(int in, int out) {
    if(Left->execute(in,out)){
       if(Right->execute(in,out)){
           return true;
       }
       else {
           return false;
       }
    }
    else {
        return false;
     }
}
#endif
