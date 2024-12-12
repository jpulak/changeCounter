//program for creating money change, break given currency into corresponding bills

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    // initialize variables
    
    double amount;
    int converted; //total amount in cents to split into dif formats
    int dollar;
    int quarter;
    int dime;
    int nickel;
    int penny;
    
    cout << "Enter the change amount to make in dollars: ";
    cin >> amount;
    
    //convert to pennies
    
    converted = round(amount * 100);
    
    //gathering all the money conversion stuff
    
    dollar = converted / 100;
    converted %= 100;
    quarter = converted / 25;
    converted %= 25;
    dime = converted / 10;
    converted %= 10;
    nickel = converted / 5;
    converted %= 5;
    penny = converted / 1;
    
    //outputting hopfully all the correct conversion
    
    cout << "Change Due:\n";
    cout << "\t" << dollar << " dollars" << endl;
    cout << "\t" << quarter << " quarters" << endl;
    cout << "\t" << dime << " dimes" << endl;
    cout << "\t" << nickel << " nickels" << endl;
    cout << "\t" << penny << " pennies" << endl;
    return 0;
}
