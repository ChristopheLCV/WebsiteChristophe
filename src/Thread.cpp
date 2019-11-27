#include "Thread.h"

Thread::Thread(string _title)
{
    objects.push_back(this);
    title = _title;
}

Thread::~Thread()
{
    //dtor
}

string Thread::getTitle( void )
{
   return title;
}

vector<Thread *> Thread::objects;
