#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
    // make sure that there are two arguments
    if (argc != 2) {
        cout << "You didn't input any numbers";
        return 1;
    }

    long long input = atoll(argv[1]);

    if (input < 0) {
        cout << "The input has to be positive";
        return 1;
    }

    // Base cases of 0 and 1
    if (input == 0 || input == 1) {
        cout << 1 << endl;
        return 0;
    }

    long long previous = 0;
    long long current = 1;
    long long next;

    // Loop through and store in previous, current, and next until you get to the input or above
    while (true) {
        next = previous + current;
        previous = current;
        current = next;

        // if the number is the input
        if (current == input) {
            cout << 1 << endl;
            return 0;
        }

        // If the number is above the input
        if (current > input) {
            cout << 0 << endl;
            cout << current << endl;
            return 0;
        }
    }

    return 0;
}