import java.util.Scanner;

public class LinearSearch {

    // Function to perform linear search
    public static int linearSearch(int[] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {
                return i; // Return the index of the target element
            }
        }
        return -1; // Return -1 if the target is not found
    }

    // Main method to test the linear search
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input: Array size
        System.out.print("Enter the number of elements in the array: ");
        int n = scanner.nextInt();
        int[] arr = new int[n];

        // Input: Array elements
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        // Input: Target value
        System.out.print("Enter the target value to search for: ");
        int target = scanner.nextInt();

        // Perform linear search
        int result = linearSearch(arr, target);

        // Display the result
        if (result != -1) {
            System.out.println("Element " + target + " found at index " + result + ".");
        } else {
            System.out.println("Element " + target + " not found in the array.");
        }

        // Close the scanner
        scanner.close();
    }
}
