
#include <iostream>
using namespace std;
class Integer {
private:
    int _num;
public:
//构造函数
    Integer(int num);
//计算当前Integer 和 b之间的最大公约数
    int gcd(Integer b);
};

Integer::Integer(int num) {
    this->_num = num;
}

int Integer::gcd(Integer b) {
    int ele = b._num;
    //求最多公约数
    int result = 0;
    int max = (ele < this->_num) ?  ele : this->_num;
    for(int  i = max; i >=0; i--) {
        if((ele % i == 0) && (this->_num % i == 0)) {
            result = i;
            break;
        }
    }
    return result;
}


int main(){
    int a, b;
    cin >> a >> b;
    Integer A(a);
    Integer B(b);
    cout << A.gcd(B) << endl;
    return 0;
}


