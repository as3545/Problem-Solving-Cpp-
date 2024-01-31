//Code

void insertionSort2(int n, vector<int> arr) {
    for (int i = 1; i < n; i++) {
        int k = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = k;

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
