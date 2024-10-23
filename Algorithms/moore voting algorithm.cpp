#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {
    int n = v.size();  // Size of the array
    int cnt = 0;  // Count
    int el;  // Element

    // Applying Moore's Voting Algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        } else if (el == v[i]) {
            cnt++;
        } else {
            cnt--;
        }
    }

    // Checking if the stored element is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;
}

int main() {
    int n;
    
    // Taking input for the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);

    // Taking input for array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Finding the majority element
    int ans = majorityElement(arr);
    
    if (ans != -1) {
        cout << "The majority element is: " << ans << endl;
    } else {
        cout << "There is no majority element in the array." << endl;
    }

    return 0;
}
