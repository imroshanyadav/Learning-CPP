#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int new_num=0;


    int count = 0;
    int digits = 0;

    while (n > 0) {

        digits = n % 10;  // Extract last digit
        n = n / 10;      // Remove last digit
        count++;
    }

    cout << count;

    return 0;
}