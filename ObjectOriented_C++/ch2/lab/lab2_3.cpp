#include<iostream>


using namespace std;


int main() {

	int num = 0;
    cin >> num;

    int max  = num;
    for(int i = 1; i <= num; i++) {
        for(int k = 1; k < max; k++) {
            cout << " ";
        }
        for(int j = 0; j < (2*i-1); j++) {
            cout << "*";
        }
        cout << endl;
        max--;
    }


    for(int i = (num - 1); i >= 0; i--) {
        for(int k = -1; k < max; k++)
            cout << " ";

        for(int j = 0; j < (2*i-1); j++) {
            cout << "*";
        }
        cout << endl;
        max++;
    }

	return 0;
}
