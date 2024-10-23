import java.util.Scanner;

class Solution {
    public int reverse(int x) {
        int num = Math.abs(x);  // Get the absolute value of the original number
        int rev = 0;  // Variable to store the reversed number
        
        while (num != 0) {
            int ld = num % 10;  // Get the last digit
            
            // Overflow check: If reversing causes the value to exceed the integer limit
            if (rev > (Integer.MAX_VALUE - ld) / 10) {
                return 0;  // If overflow happens, return 0
            }
            
            rev = rev * 10 + ld;  // Add the last digit to the reversed number
            num = num / 10;  // Remove the last digit from the original number
        }
        
        return (x < 0) ? (-rev) : rev;  // Return the reversed number with the correct sign
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Taking input from the user
        System.out.print("Enter an integer to reverse: ");
        int input = scanner.nextInt();

        Solution sol = new Solution();
        int reversedNumber = sol.reverse(input);
        
        System.out.println("Reversed number: " + reversedNumber);

        scanner.close();
    }
}
