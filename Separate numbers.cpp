//Code
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'separateNumbers' function below.
 *
 * The function accepts STRING s as parameter.
 */

bool beautiful(string s, long long first){
    string b=to_string(first);
    while(b.length()<s.length()){
        first++;
        b +=to_string(first);
    } return b==s;
}

void separateNumbers(string s) {
    long long i,first,n=s.length();
    for (i = 1; i <= n / 2; i++) {
        first = stoll(s.substr(0, i));
        if (beautiful(s, first)) {
            cout << "YES " << first << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    long long q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        separateNumbers(s);
    }
    return 0;
}
