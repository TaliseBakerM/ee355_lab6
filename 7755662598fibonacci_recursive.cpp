#include <iostream>
#include <cstdlib>

using namespace std;

// Here is my recursive function for Fibonacci 
long long fibonacci(int n) {
    if (n <= 1) {
        // for n = 1, the answer is 1
        // for n = 0, the answer is 0
        return n;
    }
    // otherwise recursively call for n-1 and n-1
    long long num = fibonacci(n - 1) + fibonacci(n - 2);
    return num;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cout << "You didn't input any numbers";
        return 1;
    }

    long long input = atoll(argv[1]);

    if (input < 0) {
        cout << "The input has to be positive";
        return 1;
    }

    int i = 0;
    long long fib = 0;

    // Now, calculate fibonacci numbers recursively until you get a fibonacci number greater than or equal to the input
    while (true) {
        fib = fibonacci(i);

        // If the number is a fibonacci number
        if (fib == input) {
            cout << 1 << endl;
            return 0;
        }

        // if the new number calculated is greater than the input
        if (fib > input) {
            cout << 0 << endl;
            cout << fib << endl;
            return 0;
        }

        // increment i to find next fibonacci number
        i++;

    }

    return 0;

}