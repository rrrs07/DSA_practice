#include <iostream>

// Function to check if a number is prime
bool isPrime(int num) {
    // if(num <= 1) return false;
    // if(num == 2) return true;
    for (int i = 2; i <= num; ++i) {
        if(num % i == 0) return false;
    }
    return true;
}

// Function to return the sum of all prime numbers less than n
int sumOfPrimes(int n) {
    int sum = 0;
    for (int i = 2; i < n; ++i) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    int result = sumOfPrimes(n);
    std::cout << "The sum of all prime numbers less than " << n << " is: " << result << std::endl;
    
    return 0;
}
