#include <iostream>

using namespace std;

int main() {
    int num = 0;
    do {
        int s = 0, h;

        cout << "Enter a number (to exit program enter 0): ";
        cin >> num;
        h = num;

        if (h == 0) {
            break;
        } else if (h < 10 && h > -10) {
            s = h;
        } else {
            while (h > 0) {
                s += h % 10;
                h /= 10;
            }
        }

        cout << s << endl;
    } while (num != 0);
}
