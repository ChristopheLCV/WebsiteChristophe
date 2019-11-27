#ifndef EVENT_H
#define EVENT_H
#include <iostream>
#include <vector>
using namespace std;


class Event
{
    public:
        string title;
        string date;
        static vector<Event *> objects;

        Event();
        virtual ~Event();

    protected:

    private:
};

#endif // EVENT_H
