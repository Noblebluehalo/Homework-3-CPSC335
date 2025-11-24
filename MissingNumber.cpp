#include <iostream>
#include <vector>
using namespace std;

// A has size N-1, containing numbers from 1..N except one missing
int find_missing(const vector<int>& A, int N) {
    int missing = 0;

    // XOR all numbers 1..N
    for (int i = 1; i <= N; i++) missing ^= i;

    // XOR all numbers in array
    for (int val : A) missing ^= val;

    return missing;
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    vector<int> A(N - 1);
    cout << "Enter " << N-1 << " numbers:\n";
    for (int i = 0; i < N - 1; i++) cin >> A[i];

    cout << "Missing number: " << find_missing(A, N) << "\n";

    return 0;
}
