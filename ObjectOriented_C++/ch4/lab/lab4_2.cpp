#include <iostream>
using namespace std;

class Integer{
private:
    int _num;
//getLength()函数获取_num长度
    int getLength();
public:
//Integer类构造函数
    Integer(int num);
//反转_num
    int inversed();
};

Integer::Integer(int num) {
    this->_num  = num;
}

int Integer::getLength() {
    return this->_num;
}

int Integer::inversed() {
    int result = 0;
    do{
        result *= 10;
        result += this->_num % 10;
        this->_num /= 10;

    }while(this->_num);

    return result;
}

int main() {
    int n;
    cin >> n;
    Integer integer(n);
    cout << integer.inversed() << endl;
    return 0;
}


