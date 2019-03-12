#include <iostream>
using namespace std;

class Mouse{

public:
    static int num;
    Mouse();
    ~Mouse();
    Mouse(const Mouse &mouse);
};

int Mouse::num = 0;


Mouse::Mouse() {
    Mouse::num ++;
}

Mouse::~Mouse() {
    Mouse::num--;
}
Mouse::Mouse(const Mouse &mouse) {
    ++Mouse::num;
}


void fn(Mouse m);

int main()
{
    Mouse::num = 0;
    Mouse a;
    cout << Mouse::num << endl;
    Mouse b(a);  //拷贝构造
    cout << Mouse::num << endl;
    for (int i = 0; i < 10; ++i)
    {
        Mouse x;
        cout << Mouse::num << endl;
    }
    fn(a);  //拷贝构造
    cout << Mouse::num << endl;
    return 0;
}

void fn(Mouse m)
{
    cout << Mouse::num << endl;
    Mouse n(m);
    cout << Mouse::num << endl;
}


