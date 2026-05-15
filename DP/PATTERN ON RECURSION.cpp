//A system generates a symmetric numeric pattern based on a given integer.
//For a given number n, the system first prints numbers from n down to 1,
// and then prints them again from 1 back to n, forming a mirror pattern.

#include <iostream>
using namespace std;

void pattern(int n){
    if(n == 0) return;

    cout << n << " ";
    pattern(n - 1);
    cout << n << " ";
}

int main(){
    int n = 4;

    pattern(n); //mirror pattern 

    return 0;
}
