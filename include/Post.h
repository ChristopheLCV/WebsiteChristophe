#ifndef POST_H
#define POST_H
#include"Thread.h"
#include <iostream>
#include <vector>
using namespace std;

class Post
{
    public:
        string text;
        string author;
        Thread *parent;
        static vector<Post *> objects;

        Post();
        virtual ~Post();

    protected:

    private:
};

#endif // POST_H
