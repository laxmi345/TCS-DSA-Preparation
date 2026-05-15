#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& arr, int N) {

    int expected = N * (N + 1) / 2;

    int actual = 0;

    for(int i = 0; i < arr.size(); i++) {
        actual += arr[i];
    }

    return expected - actual;
}

int main() {

    vector<int> arr = {1,2,4,5};

    int N = 5;

    cout << missingNumber(arr, N);
}
