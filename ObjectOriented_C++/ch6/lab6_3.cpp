#include<iostream>


using namespace std;


void bubbleSort(int *array, int len){
    for(int i = 0; i < len; i++) {
        for(int j = i+1; j < len ; j++) {
            if(array[i] > array[j]) {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}



int main() {

    int len, num;
    cin >> len >> num;
    int *array = new int[len];
    for(int i = 0; i < len; i++){
        cin >> array[i];
    }
    bubbleSort(array, len);
    cout << array[num - 1] << endl;

    return 0;
}
