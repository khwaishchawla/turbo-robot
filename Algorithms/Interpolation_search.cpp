#include <iostream>
using namespace std;

int interpolation_search(int arr[], int n, int x) {
    int low=0,mid,high=n-1;
    while(low<=high)
    {
      mid=low+(((x-arr[low])*(high-low))/(arr[high]-arr[low]));
      if(x==arr[mid])
        return mid;
      else if (x<arr[mid])
        high=mid-1;
      else
        low=mid+1;
  }
  return -1;
}

int main() {
  int n, x;

  // Taking the size of the array as input from the user
  cout << "Enter the number of elements in the array: ";
  cin >> n;

  int array[n];

  // Taking the elements of the array as input from the user
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }

  // Taking the element to search for in the array
  cout << "Enter the element to search: ";
  cin >> x;

  // Performing the search
  int result = interpolation_search(array, n, x);

  // Outputting the result
  (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;

  return 0;
}
