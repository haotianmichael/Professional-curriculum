#include <iostream>

using namespace std;


void bubbleSort(int *array, int num) {
for(int i = 0; i < num; i++) {
        for(int j = i+1; j < num; j++) {
            if(array[i] < array[j]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }

}


int main() {
    int ans = 0;
    cin >> ans;

    int *array = new int[ans];
    for(int i = 0; i < ans; i++) {
        cin >> array[i];
    }

    //表示每一次运算中的最大值
    int *repeatAray = new int[ans];
    int sum = 0;
    for(int i = 0; i < ans; i++) {
        for(int j = i; j < ans; j++) {
            if(sum  <= (sum + array[j])) {
                sum += array[j];
            }else {
                repeatAray[i] = sum;
                sum = 0;
                break;
            }
            if(j == (ans-1)) {
                repeatAray[i] = sum;
                sum = 0;
                break;
            }
        }
    }

    bubbleSort(repeatAray, ans);

    /*
    for(int i = 0; i < ans; i++) {
        cout << repeatAray[i] << endl;
    }*/

    cout << repeatAray[0] << endl;
}
