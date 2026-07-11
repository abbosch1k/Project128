
#include <iostream>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    for(char c : text) {
        if(c != 'a' && c != 'e' && c != 'i' &&
           c != 'o' && c != 'u')
            cout << c;
    }

    return 0;
}
