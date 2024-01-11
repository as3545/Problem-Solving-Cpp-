//Code
void miniMaxSum(vector<int>& arr) {
    // Sort the vector in ascending order
    sort(arr.begin(), arr.end());
    
    // Calculate the minimum sum by excluding the largest element
    long long min_sum = accumulate(arr.begin(), arr.end() - 1, 0LL);
    
    // Calculate the maximum sum by excluding the smallest element
    long long max_sum = accumulate(arr.begin() + 1, arr.end(), 0LL);
    
    // Print the results
    cout << min_sum << " " << max_sum << endl;
}
