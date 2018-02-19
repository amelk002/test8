#ifndef __ConnectorS_H__
#define __ConnectorS_H__
#include "Base.h"
#include "stdlib.h"
using namespace std;


class Connector: public Base {
    protected:
    Base* Left;
    Base* Right;

    public:
    Connector(Base* Left, Base* Right);
    Connector();


    virtual bool execute(int in, int out) = 0;
    virtual string Input();
};


class And: public Connector {
    public:
    And(Base* Left, Base* Right);
    And();
    virtual bool execute(int in, int out);
};

class Or: public Connector {
    public:
    Or(Base* Left, Base* Right);
    Or();
    virtual bool execute(int in, int out);
};

class Semi: public Connector {
    public:
    Semi(Base* Left, Base* Right);
    Semi();
    virtual bool execute(int in, int out);
};

#endif
