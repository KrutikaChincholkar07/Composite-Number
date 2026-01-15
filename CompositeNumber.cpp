#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    bool composite = false;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << "Not a composite number";
        return 0;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            composite = true;
            break;
        }
    }

    if (composite)
        cout << num << " is a Composite number";
    else
        cout << num << " is NOT a Composite number";

    return 0;
}
