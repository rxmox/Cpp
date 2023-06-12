#include <iostream>

using namespace std;

int main(){

    int cents{};
    cout << "Enter an amount in cents: ";
    cin >> cents;

    int dollars = cents / 100;
    cents -= dollars * 100;

    int quarters = cents / 25;
    cents -= quarters * 25;

    int dimes = cents / 10;
    cents -= dimes * 10;

    int nickels = cents % 5;
    cents -= nickels / 5;

    cout << "You can provide change for this change as follows:" << endl;
    cout << "dollars : " << dollars << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes : " << dimes << endl;
    cout << "nickels : " << nickels << endl;
    cout << "pennies : " << cents << endl;    

    return 0;
}