#include <iostream>
#include <algorithm>
using namespace std;

void rotateArray(int arr[], int n, int k) {

    k = k % n;

    // Step 1: Reverse whole array
    reverse(arr, arr + n);

    // Step 2: Reverse first k elements
    reverse(arr, arr + k);

    // Step 3: Reverse remaining elements
    reverse(arr + k, arr + n);
}

int main() {

    int arr[] = {1,2,3,4,5};

    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 2;

    rotateArray(arr, n, k);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
