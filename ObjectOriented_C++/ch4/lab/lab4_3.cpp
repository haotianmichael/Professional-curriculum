#include <iostream>
#include <cmath>
using namespace std;

class Equation{
private:
    int _a, _b, _c;
public:
    Equation(int a, int b, int c);
    void solve();

};

Equation::Equation(int a, int b, int c) {
    this->_a = a;
    this->_b = b;
    this->_c = c;
}

void Equation::solve() {

    if(this->_a == 0) {

        if(this->_b == 0) {
            if(this->_c == 0) {
                cout << 5 << endl;
            } else {
                cout << 4 << endl;
            }
        } else {
            // 一次方程
            cout << 6 << endl;
            printf("%.2f\n", -_c * 1.0/_b);
        }
        return;
    }

    double result1 = 0.0, result2 = 0.0;
    double wdA = pow((double)this->_b, 2) - (4 * this->_c * this->_a);

    if(wdA > 0) {
        //两个不相等的实根
        cout << "1" << endl;
        // result1 = ((double)-this->_b + sqrt(wdA)) / ( 2.0 * this->_a);
        //result2 = ((double)-this->_b - sqrt(wdA)) / ( 2.0 * this->_a);
        if (this->_a > 0) {
            printf("%.2f %.2f\n", (-_b - sqrt(wdA))/2/_a, (-_b + sqrt(wdA))/2/_a);
        } else {
            printf("%.2f %.2f\n", (-_b + sqrt(wdA))/2/_a, (-_b - sqrt(wdA))/2/_a);
        }
        /**
        if(result1 > result2) {
            printf("%.2f ", result1);
            printf("%.2f\n", result2);
        }else {
            printf("%.2f ", result2);
            printf("%.2f\n", result1);
        }**/

    }else if(wdA == 0) {
        //两个相等的实根
        cout << "2" << endl;
        // result1 = ((double)this->_b) / (2.0 * this->_a);
        //printf("%0.2f", result1);
        printf("%.2f\n", -_b * 1.0 /2/_a);


    }else if(wdA < 0) {
        //两个共轭复根
        cout << "3" << endl;
    }

}


int main(){
    int a, b, c;
    cin >> a >> b >> c;
    Equation tmp(a, b, c);
    tmp.solve();
    return 0;
}


