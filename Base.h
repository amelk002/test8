#ifndef __BASE_H__
#define __BASE_H__

#include <string>
using namespace std;
class Base {
    public:
    virtual bool execute(int in, int out) = 0;
    virtual string Input() = 0;
};

#endif
