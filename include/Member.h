#ifndef MEMBER_H
#define MEMBER_H
#include <iostream>
using namespace std;

#include <User.h>


class Member : public User
{
    public:
        int role;
        string password;

        Member();
        virtual ~Member();
        bool subscribeEvent(void);
        bool unsubscribeEvent(void);
    protected:

    private:
};

#endif // MEMBER_H
