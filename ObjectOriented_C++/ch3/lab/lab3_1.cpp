#include <iostream>
#include <cmath>
using namespace std;

bool triangle(double a, double b, double c ) {
    bool  is = false;
    if(pow(a, 2) == pow(b, 2) + pow(c, 2)) {
        is = true;
    }else if(pow(b, 2) == pow(a, 2) + pow(c, 2)) {
        is = true;
    }else if(pow(c, 2) == pow(b, 2) + pow(a, 2)) {
        is = true;
    }
    return is;
}


int main() {
    int a, c, b;
    cin >> a >> b >> c;
    if(triangle(a, b, c)) {
        cout << "True" << endl;
    }else {
        cout << "False" << endl;
    }

}
