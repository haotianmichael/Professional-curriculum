#include<iostream>

using namespace std;


int Fibonaci(int n) {
	if(n == 1) {
		return 1;
	}else if(n == 2){
		return 1;
	}else {
		return (Fibonaci(n - 1)) + (Fibonaci(n - 2));
	}
}
int main() {

	int ans;
	cin >> ans;
	cout << Fibonaci(ans) << endl;

}
