//Code
#include <iostream>
#include <string>
using namespace std;

string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2)); // Extract the hour part as an integer
    string meridian = s.substr(8, 2); // Extract the AM/PM part

    if (meridian == "PM" && hour != 12) {
        hour += 12; // Add 12 hours for PM, except when it's 12:00 PM
    } else if (meridian == "AM" && hour == 12) {
        hour = 0; // Handle 12:00 AM (midnight)
    }

    string militaryTime = (hour < 10 ? "0" : "") + to_string(hour) + s.substr(2, 6);
    return militaryTime;
}

int main() {
    string s;
    cin >> s;

    string result = timeConversion(s);
    cout << result << endl;

    return 0;
}
