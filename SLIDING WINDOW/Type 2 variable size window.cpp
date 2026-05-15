// TYPE 2: Variable Size Window (Most Important


#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    string s = "abcabcbb";

    int i = 0, j = 0;
    int maxi = 0;
    unordered_set<char> st;

    while(j < s.size()){
        if(st.find(s[j]) == st.end()){
            st.insert(s[j]);
            maxi = max(maxi, j - i + 1);
            j++;
        }
        else{
            st.erase(s[i]);
            i++;
        }
    }

    cout << maxi;
}
