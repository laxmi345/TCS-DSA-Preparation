//You are given an array of integers representing the number of fruits on different plants. You are allowed to pick fruits only from those positions whose indices follow the Fibonacci sequence. The Fibonacci sequence starts with 0 and 1, and each next index is the sum of the previous two indices. You need to generate Fibonacci indices until they are within the bounds of the array and then calculate the sum of the elements present at those indices. Return the final sum as the output.
//fruits[0] = 1
//fruits[1] = 2
//fruits[2] = 3
//fruits[3] = 5
//fruits[5] = 13
//sum = 1 + 2 + 3 + 5 + 13 = 24

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> fruits = {1, 2, 3, 5, 8, 13};
    int n = fruits.size();

    int a = 0, b = 1;
    int sum = fruits[0]; // index 0

    while(b < n){
        sum += fruits[b];

        int c = a + b;
        a = b;
        b = c;
    }

    cout << sum;
    return 0;
}
