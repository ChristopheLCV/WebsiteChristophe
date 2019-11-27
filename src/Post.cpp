#include "Post.h"

//ctor
Post::Post()
{
    // add constructed post to list of all posts
    objects.push_back(this);
}

Post::~Post()
{
    //dtor
}

vector<Post *> Post::objects;

