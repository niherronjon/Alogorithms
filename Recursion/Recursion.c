// Recursion in C



//Syntax of a Recursive Function:


return_type function_name(parameters)
{
    if (base_case_condition)
    {
        // Base case logic
        return result;
    }
    else
    {
        // Recursive case logic
        return function_name(smaller_problem);
    }
}




// Factorial of a Number:


#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n)
{
    if(n == 0)  // Base case
        return 1;
    else         // Recursive case
        return n * factorial(n - 1);
}

int main()
{
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}




// Fibonacci Sequence


#include <stdio.h>

// Recursive function to calculate Fibonacci numbers
int fibonacci(int n) {
    if (n == 0)  // Base case
        return 0;
    else if (n == 1)  // Base case
        return 1;
    else  // Recursive case
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num = 10;
    for (int i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}




// Tail Recursion:


#include <stdio.h>

int tail_factorial(int n, int accumulator) {
    if (n == 0)  // Base case
        return accumulator;
    else  // Recursive case
        return tail_factorial(n - 1, n * accumulator);
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, tail_factorial(num, 1));
    return 0;
}

