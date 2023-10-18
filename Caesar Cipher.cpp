//Code
#include <iostream>
using namespace std;

string caesarCipher(string s, int k) {
    string encryptedString = "";

    for (char c : s) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            char encryptedChar = base + (c - base + k) % 26;
            encryptedString += encryptedChar;
        } else {
            encryptedString += c; // Non-alphabet characters remain unchanged
        }
    }

    return encryptedString;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;

    string result = caesarCipher(s, k);
    cout << result << endl;

    return 0;
}
