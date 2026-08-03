#include <iostream>
using namespace std;
#include <cmath>
#include <string>

int main() {
    int n;
    cin >> n;

    int new_num = 0;
    int cn = n;
    int len = to_string(n).length();

    while (n > 0) {
        int digit = n % 10;
        n /= 10;

        new_num += (int)pow(digit, len);
    }

    cout << "Original = " << cn << endl;
    cout << "Calculated = " << new_num << endl;

    if (new_num == cn)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";
}