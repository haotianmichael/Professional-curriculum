#include<iostream>

using namespace std;

int main() {

    int origin;
    int midnumber;
    int sum = 0;
    int eleT = 1;

    cin >> origin;
    do{
        midnumber = origin % 10;
        sum += eleT * midnumber;

        eleT *= 2;
        origin /= 10;

    }while(origin);

    cout << sum << endl;

	return 0;
}
