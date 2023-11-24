#include <iostream>

using namespace std;

int main() {
    int num = 0, c = 0, s = 0;
    while ((num < 100 || num > 999) && (num > -100 || num < -999)) {
        cout << "Enter a number: ";
        cin >> num;
        c++;
        if (num >= -4 && num < 11) s += num;
    }
    cout << "Amount of numbers: " << c << endl;
    cout << "Sum of numbers in [-4;11): " << s << endl;
}
