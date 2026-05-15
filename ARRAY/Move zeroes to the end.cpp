#include <iostream>
using namespace std;

void moveZeros(int arr[], int n) {

    int j = 0;

    for(int i = 0; i < n; i++) {

        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {

    int arr[] = {4, 5, 0, 1, 9, 0, 5, 0};

    int n = sizeof(arr) / sizeof(arr[0]);

    moveZeros(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
