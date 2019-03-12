#include <iostream>
using namespace std;



int F(int ans) {
    if(ans == 0) {
        return 1;
    }else if(ans == 1) {
        return 1;
    }else {
        return F(ans - 1) + F(ans - 2);
    }
}


int main() {
    int m= 0;
    cin >> m;
    cout << F(m) << endl;

}
