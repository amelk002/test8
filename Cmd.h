#ifndef __CMD_H__
#define __CMD_H__
#include "Base.h"
#include <queue>
#include <string>
using namespace std;


class Cmd: public Base {
    protected:
    char *command;
    queue<char*> flags;
    public:
    Cmd(char *command, queue<char*> flags);
    Cmd(queue<char*> flags);
    Cmd(char *command);
    Cmd();

 void add_flag(char *a);
    virtual bool execute(int in, int out);
    string Input();

};
#endif
