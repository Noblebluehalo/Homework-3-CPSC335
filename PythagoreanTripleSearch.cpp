// CPSC 335 - Homework 3 
// Author: Joshua Zamora
// Email: JoshuaMZamora@csu.fullerton.edu
#include <iostream>
#include <cmath>
using namespace std;

// Prints first triple found or "None"
void pythagorean_triple(int a, int b) {
    for (int x = a; x <= b; x++) {
        for (int y = x; y <= b; y++) {
            long long s = 1LL * x * x + 1LL * y * y;
            int z = (int)floor(sqrt((double)s));
            if (1LL * z * z == s && z <= b) {
                cout << "(" << x << ", " << y << ", " << z << ")\n";
                return;
            }
        }
    }
    cout << "None\n";
}

int main() {
    int a, b;
    cout << "Enter a and b (a < b): ";
    cin >> a >> b;

    pythagorean_triple(a, b);

    return 0;
}
