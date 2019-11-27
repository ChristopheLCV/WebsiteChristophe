#include "Event.h"

Event::Event()
{
    // add constructed object to list of all objects
    objects.push_back(this);
}

Event::~Event()
{
    //dtor
}

vector<Event *> Event::objects;
