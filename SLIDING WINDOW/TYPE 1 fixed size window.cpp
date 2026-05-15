//TYPE 1:FIXED SIZE WINDOW 

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 6;
    vector<int> arr = {2,1,5,1,3,2};
    int k = 3;

    int windowSum = 0;

    // first window
    for(int i = 0; i < k; i++){
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // slide window
    for(int i = k; i < n; i++){
        windowSum += arr[i] - arr[i-k];
        maxSum = max(maxSum, windowSum);
    }

    cout << maxSum;
}

