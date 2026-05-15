#include <iostream>
using namespace std;

bool isPalindrome(string str) {

    int i = 0;
    int j = str.length() - 1;

    while(i < j) {

        if(tolower(str[i]) != tolower(str[j])) {
            return false;
        }

        i++;
        j--;
    }

    return true;
}

int main() {

    string str = "Madam";

    if(isPalindrome(str))
        cout << "YES";
    else
        cout << "NO";
}
