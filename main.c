
//  Created by Shanego416 on 2022-03-16.

#include <stdio.h>

//Function Prototypes
int isPrime(int num);
void printPrime(int index, int n);
void printSum(int index, int n, int sum);



int main()
{
    int index = 2, n, sum = 0;
    printf("Please enter a positive integer number (0 to end): ");
    scanf("%d", &n);
//End program if user enters 0
    if (n != 0)
    {
// Calling the function that prints the prime numbers between 1 and n (user input).
    printPrime(index, n);
// Calling the function that prints the number of primes between 1 and n.
    printSum(index, n, sum);
    return 0;
    }
}

//Function to print primes between 1 and n.
void printPrime(int index, int n)
{
    printf("Primes before %d are: ", n);
    while(index <= n)
    {
// Print index if index is prime.
        if(isPrime(index))
        {
            printf("%d ", index);
        }
        index = index + 1;
    }
}

//Check if number is prime.
int isPrime(int num)
{
    int i;
    for(i = 2; i <= num/2; i = i + 1)
    {
//Check if a number is divisable by anything but 1 and the number itself.
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
//Function to print the amount of prime numbers less than n.
void printSum(int index, int n, int sum)
{
    while(index <= n)
    {
// Add 1 to variable 'sum' if index is prime.
        if(isPrime(index))
        {
            sum = sum + 1;
        }
        index = index + 1;
    }
    printf("\n%d Prime numbers smaller than %d\n",sum, n);
}
