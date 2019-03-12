#include<iostream>

using namespace std;

int main() {
    int ans = 0;
    int sum = 0;
    int min = 3678363;
    int max = -3678363;
    int tmp;

    cin >> ans;
    for(int i = 0; i < ans; i++){
        cin >>  tmp;
        if(tmp >= max) {
            max = tmp;
        }


        if(tmp <= min) {
            min = tmp;
        }

        sum += tmp;
    }

    cout << sum << " " << min << " " << max << endl;	


}
