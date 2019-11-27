#ifndef USER_H
#define USER_H
#include <iostream>
#include <vector>
using namespace std;

class User
{
    public:
        string name;

        User();
        virtual ~User();
        static vector<User *> objects;

        //getEvents()
        bool subscribeEvent(void);
        bool unsubscribeEvent(void);
        //isSubscribed()
        virtual void toto ( void ) = 0;
    protected:

    private:
};

#endif // USER_H
