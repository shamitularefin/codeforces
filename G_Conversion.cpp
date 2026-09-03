#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    for(char c : s) {
        char a;
        if(c == ',') {
            cout << ' ';
        } 
        if(islower(c)) {
            a = toupper(c);
            cout << a;
        }
        if(isupper(c)) {
            a = tolower(c);
            cout << a;
        }
    }
}