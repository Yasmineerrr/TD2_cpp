#include <iostream>
using namespace std;
class Test {
private:
    static int count;

public:
    void call() {
        count++;
    }

    static int getCallCount() {
        return count;
    }
};

int Test::count = 0;

int main() {
    Test t;

    t.call();
    t.call();

    cout << "La fonction 'call' a été appelée " << Test::getCallCount() << " fois." <<endl;

    return 0;
}
