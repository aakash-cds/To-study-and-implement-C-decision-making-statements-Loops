#include <iostream>
using namespace std;

int main() {
    int correctPassword = 1234;
    int enteredPassword;
    int attempts = 0;
    const int maxAttempts = 3;

    cout << "You have three attempts to get the password correct." << endl;

    while (attempts < maxAttempts) {
        cout << "Enter your password: ";
        cin >> enteredPassword;

        if (enteredPassword == correctPassword) {
            cout << "Access Granted!!" << endl;
            return 0;
        }

        attempts++;
        int remainingAttempts = maxAttempts - attempts;

        if (remainingAttempts > 0) {
            cout << remainingAttempts << " attempt" << (remainingAttempts > 1 ? "s" : "") << " remaining." << endl;
        } else {
            cout << "Out of attempts. iPhone is disabled, please try again in 6 hours." << endl;
        }
    }

    return 0;
}