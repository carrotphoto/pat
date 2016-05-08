//
// Created by Ribbon Charm on 16/4/30.
//

#ifndef PAT_BASE_H
#define PAT_BASE_H

class base {
protected:
    string in;
    string out;
public:
    virtual void run();

    virtual void input();

    virtual void output();

};


#endif //PAT_BASE_H
