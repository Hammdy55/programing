
#include <iostream>
using namespace std;

int main() {
    // Calculate LCM of first 20 positive integers
    long long lcm = 1; // use long long to avoid overflow

    // start with smallest prime factor
    for (int i = 2; i <= 20; i++) {
        int factor = i;

        // divide by all smaller prime factors
        for (int j = 2; j < i; j++) {
            if (factor % j == 0) {
                // j is a prime factor of i
                factor /= j;
            }
        }

        // multiply by remaining factor
        lcm *= factor;
    }

    // Output result
    cout << "LCM of first 20 positive integers is: " << lcm << endl;

    return 0;
}
