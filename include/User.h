#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;

class User
{
    public:
        string name;

        User();
        virtual ~User();

        //getEvents()
        virtual bool subscribeEvent(void) = 0;
        virtual bool unsubscribeEvent(void) = 0;
        //isSubscribed()
    protected:

    private:
};

#endif // USER_H
