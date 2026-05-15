//second largest element


#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int n) {

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < n; i++) {

        // If current element is greater than largest
        if(arr[i] > largest) {

            secondLargest = largest;
            largest = arr[i];
        }

        // If current element lies between largest and secondLargest
        else if(arr[i] > secondLargest && arr[i] != largest) {

            secondLargest = arr[i];
        }
    }

    // If no second largest exists
    if(secondLargest == INT_MIN)
        return -1;

    return secondLargest;
}

int main() {

    int arr[] = {12, 35, 1, 10, 34, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << secondLargest(arr, n);

    return 0;
}
