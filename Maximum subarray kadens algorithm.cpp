//Maximum subaraay (kadens algortithm 

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(int arr[], int n) {
    int sum = 0;
    int maxi = INT_MIN;

    for(int i = 0; i < n; i++){
        sum += arr[i];
        maxi = max(maxi, sum);

        if(sum < 0) sum = 0;
    }
    return maxi;
}

int main() {
    int n = 9;
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};

    int result = maxSubArray(arr, n);

    cout << result;

    return 0;
}
