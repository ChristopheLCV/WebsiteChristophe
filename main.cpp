#include <iostream>
#include <algorithm>
#include "Event.h"
#include "Member.h"
#include "Post.h"
#include "Guest.h"
#include "Thread.h"

using namespace std;

void displayThreadTitle ( Thread * thr  )
{
   cout << thr->getTitle() << endl;
}

int main()
{
    new Thread("Thread 1");
    new Thread("Thread 2");
    new Thread("Thread 3");

    for_each(Thread::objects.begin(), Thread::objects.end(),displayThreadTitle);
    return 0;
}
