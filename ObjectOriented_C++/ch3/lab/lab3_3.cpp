#include <iostream>
#include <cmath>
using namespace std;

bool isC(int ans) {
    bool is = false;
    if(ans == 1)
        is = false;
    else {
        while(ans % 2 == 0) {
            ans /= 2;
        }
        while(ans % 3 == 0) {
            ans /= 3;
        }
        while(ans % 5 == 0){
            ans /= 5;
        }
        if(ans == 1) {
            is = true;
        }
    }
    return is;
}


int main() {
    int sample;
    cin >> sample;
    if(isC(sample)){
        cout << "True" << endl;
    }else {
        cout << "False" << endl;
    }

}
