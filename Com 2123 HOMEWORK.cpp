#include <iostream>

using namespace std;

int main() {
    double netBalance, payment, interestRate;
    int d1, d2;


    cout << "Enter the net balance: ";
    cin >> netBalance;

    cout << "Enter the payment made: ";
    cin >> payment;

    cout << "Enter the number of days in the billing cycle (d1): ";
    cin >> d1;

    cout << "Enter the number of days payment was made before the billing cycle (d2): ";
    cin >> d2;

    cout << "Enter the interest rate per month (e.g., 0.0152): ";
    cin >> interestRate;


    double averageDailyBalance = (netBalance * d1 - payment * d2) / d1;


    double interest = averageDailyBalance * interestRate;


    cout << fixed << "Interest on the unpaid balance: " << interest << endl;

    return 0;
}



