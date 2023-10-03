#include <iostream>
#include <algorithm>

using namespace std;

// Function to calculate the greatest common divisor (GCD) using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate the count of numbers divisible by both x and y up to n
int countDivisibleByXAndYUpToN(int x, int y, int n) {
    // Calculate the LCM of x and y
    int lcm = (x * y) / gcd(x, y);

    // Calculate the count of multiples of LCM up to n
    int count = n / lcm;

    return count;
}

int main() {
    int x = 2;
    int y = 4;
    int n = 8;

    int result = countDivisibleByXAndYUpToN(x, y, n);

    cout << "Count of numbers divisible by " << x << " and " << y << " up to " << n << " is " << result << endl;

    return 0;
}
