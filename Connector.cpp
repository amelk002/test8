#ifndef __CONNECTOR_CPP__
#define __CONNECTOR_CPP__

#include "Connector.h"

Connector::Connector(Base* Left, Base* Right) {
    this->Left = Left;
    this->Right = Right;
}

Connector::Connector()  {
    this->Left = NULL;
    this->Left = NULL;
}
string Connector::get_data() {
    return "error called get data on connector";
}
#endif
