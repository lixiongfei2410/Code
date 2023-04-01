#include <iostream>
#include <thread>

using namespace std;

void hello ()
{
    cout << "hello,thread" << endl;
}

int main() {

    cout << "hello,world" << endl;
    std::thread t(hello); // 创建线程
    t.join();

    return 0;
}
