#ifndef THREAD_H
#define THREAD_H
#include <iostream>
#include <vector>
using namespace std;

class Thread
{
    public:
        Thread(string _title);
        virtual ~Thread();
        string getTitle ( void );

        string title;
        static vector<Thread *> objects;

    protected:

    private:
};

#endif // THREAD_H
