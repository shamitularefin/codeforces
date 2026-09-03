#include <iostream> 
#include <string>

using namespace std;

int main() {
    int a;
    cin >> a;

    for(int i=0; i<a; i++) {
        string s;
        cin >> s;
        int b = s.size();
        if(b==4 || b<4) {
            cout << s << endl;
        } else {
            cout << s[0] << b-2 << s[b-1] << endl;
        }
    }
}