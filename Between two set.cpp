#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int findLCM(vector<int>& arr) {
    int result = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        result = lcm(result, arr[i]);
    }
    return result;
}

int findGCD(vector<int>& arr) {
    int result = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        result = gcd(result, arr[i]);
    }
    return result;
}

int getTotalX(vector<int>& a, vector<int>& b) {
    int lcm_a = findLCM(a);
    int gcd_b = findGCD(b);

    int count = 0;
    int multiple = lcm_a;

    while (multiple <= gcd_b) {
        if (gcd_b % multiple == 0) {
            count++;
        }
        multiple += lcm_a;
    }

    return count;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr_a(n);
    vector<int> arr_b(m);

    for (int i = 0; i < n; i++) {
        cin >> arr_a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> arr_b[i];
    }

    int result = getTotalX(arr_a, arr_b);
    cout << result << endl;

    return 0;
}
