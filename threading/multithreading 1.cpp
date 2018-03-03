#include <boost/thread.hpp>

void task1() {
    // do stuff
}

void task2() {
    // do stuff
}

int main (int argc, char ** argv) {
    using namespace boost;

    // Create int a, int b
    // Create thread a, thread b

    // assign task 1 to thread a
    // so task = thread(task1), now assign it to thread b
    // thread b = thread(task2)

    thread a = thread(task1);
    thread b = thread(task2);

    // do other stuff
    b.join();
    a.join();
    return 0;
}
