#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int number;

    cout << "Enter numbers to check (0 to exit):\n";

    while (cin >> number && number != 0) {
        if (is_prime(number))
            cout << number << " is a prime number.\n";
        else
            cout << number << " is not a prime number.\n";
    }

    cout << "Goodbye!\n";
    return 0;
}