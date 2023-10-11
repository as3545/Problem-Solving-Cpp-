//Code
#include <bits/stdc++.h>

using namespace std;
 
int main (){
    int s;
    cin >> s;
    vector<int> arr(s);
    for(int i = 0; i < s; i++){
        cin >> arr[i];
    }
    cout << count(arr.begin(), arr.end(), *max_element(arr.begin(), arr.end()));    
    return 0;
}
