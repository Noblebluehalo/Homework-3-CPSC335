#include <iostream>
#include <vector>
using namespace std;

void reverse_list(vector<int>& L) {
    int i = 0, j = (int)L.size() - 1;
    while (i < j) {
        swap(L[i], L[j]);
        i++;
        j--;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> L(n);
    cout << "Enter list elements:\n";
    for (int i = 0; i < n; i++) cin >> L[i];

    reverse_list(L);

    cout << "Reversed list:\n";
    for (int x : L) cout << x << " ";
    cout << "\n";

    return 0;
}
