 //Case-Insensitive Palindrome
 
 #include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string s){
    // convert to lowercase
    transform(s.begin(), s.end(), s.begin(), ::tolower);//lowercase me  me krne ke liye 

    int i = 0, j = s.size() - 1;

    while(i < j){
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main(){
    string s;
    cin >> s;

    if(isPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
