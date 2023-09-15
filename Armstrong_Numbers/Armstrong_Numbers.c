#include "Armstrong_Numbers.h"
/*
Write a function to count the total digits in the number
*/
int getNumberOfDigits(int digit)
{
    // Stores the number of digits present in the number
    int totalDigits = 0;
    // Iterates through the value of the digit
    while (digit != 0)
    {
        // Moves the decimal to the left: 456.0 --> 45.6
        digit /= 10;
        // Increments the number of digits
        ++totalDigits;
    }
    // Returns the total number of digits
    return totalDigits;
}

/*
Creating a function to check whether a number is an armstrong number
*/
bool is_armstrong_number(int candidate)
{
    // Storing the original value entered
    int originalNumber = candidate;
    // Calling the function to get the number of digits in the value
    int totalNumberOfDigits = getNumberOfDigits(candidate);
    // Initializing a variable to store the sum of digits raised to the power of digits
    int totalSum = 0;
    // Going through the original value by shifting the decimal left until zero
    for (int i = originalNumber; i != 0; i /= 10)
    {
        // Keeping the remainder value(value to the right of the decimal point)
        int decimalDigit = i % 10;
        // Summing the value of exponents raised to the number of digits
        totalSum += pow(decimalDigit, totalNumberOfDigits);
    }
    // Returning the boolean value when checking the sum = the entered number
    return totalSum == originalNumber;
}
