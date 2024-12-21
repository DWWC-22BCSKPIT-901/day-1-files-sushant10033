Q.2. Count the total number of digits in a given number n. The number can be a positive integer. For example, for the number 12345, the count of digits is 5. For a number like 900000, the count of digits is 6.
Program Code:-
#include <iostream>
using namespace std;
int main() {
    int n, count = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (n != 0) {
        n /= 10;
        count++;
    }
    cout << "The total number of digits is: " << count << endl;
    return 0;}

