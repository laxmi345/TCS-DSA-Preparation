#include <iostream>
#include <cctype>
using namespace std;

int main() {

    string str = "Hello World";

    int vowels = 0;
    int consonants = 0;

    for(int i = 0; i < str.length(); i++) {

        char ch = tolower(str[i]);

        // check alphabet
        if(isalpha(ch)) {

            // check vowel
            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u') {

                vowels++;
            }
            else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants;
}
