// CPSC 335 - Homework 3 
// Author: Joshua Zamora
// Email: JoshuaMZamora@csu.fullerton.edu
#include <iostream>
using namespace std;

// Returns true if renting is cheaper, false if buying is cheaper or tie
bool offline_ski_rental(double r, double p, int d) {
    double total_rent = r * d;
    return total_rent < p;
}

int main() {
    double r, p;
    int d;
    cout << "Enter daily rental price r, purchase price p, days d: ";
    cin >> r >> p >> d;

    bool rent_cheaper = offline_ski_rental(r, p, d);

    if (rent_cheaper) cout << "True (renting is cheaper)\n";
    else cout << "False (buying is cheaper or same)\n";

    return 0;
}
