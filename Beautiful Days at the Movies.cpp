/*
  This problem involves determining the number of beautiful days within a given range of days. A beautiful day is defined as a day where the absolute difference between the number and its reverse is evenly divisible by a specified divisor.

Here's how to approach the problem:

Iterate through each day in the given range.
For each day, calculate the absolute difference between the number and its reverse.
Check if this absolute difference is evenly divisible by the specified divisor.
If the absolute difference is evenly divisible by the divisor, count the day as beautiful.
After iterating through all the days in the range, return the count of beautiful days.

*/

  int rn(int num) {
    int reverse = 0;
    while (n> 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    return reverse;
}

int beautifulDays(int i, int j, int k) {
    int b = 0;
    for (int d = i; d <= j; d++) {
        int rd = rn(d);
        int ad = abs(d - rd);
        if (ad % k == 0) {
            b++;
        }
    }
    return b;
}
