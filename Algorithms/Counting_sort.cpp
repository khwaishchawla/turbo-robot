#include <bits/stdc++.h>
using namespace std;

// counting sort function
void count_sort(vector<int>& arr, int n) 
{ 
    // Find the maximum element in the array
    int k = *max_element(arr.begin(), arr.end());

    // Create a count array and initialize all elements to 0
    vector<int> count(k + 1, 0);

    // Count the frequency of each distinct element in the original array
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Perform prefix sum and update the count array
    for (int i = 1; i <= k; i++) {
        count[i] += count[i - 1];
    }

    // Create a result array to store the sorted values
    vector<int> ans(n);

    // Place the elements in the correct position in the result array
    for (int i = n - 1; i >= 0; i--) {
        ans[--count[arr[i]]] = arr[i];
    }

    // Copy the sorted elements back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = ans[i];
    }
}

// driver code
int main() 
{ 
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    count_sort(arr, n);

    // Display the result
    cout << "Array after performing count sort:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
