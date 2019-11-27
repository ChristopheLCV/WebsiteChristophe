#include "User.h"

User::User()
{
    //ctor
}

User::~User()
{
    objects.push_back(this);
}

bool User::subscribeEvent(void)
{
    return true;
}

bool User::unsubscribeEvent(void)
{
    return true;
}

vector<User *> User::objects;
