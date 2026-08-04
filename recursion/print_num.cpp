#include <iostream>
using namespace std;

void nums(int i, int n) {
    if (i > n)
        return;

    cout << i << " ";
    nums(i + 1, n);
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    nums(1, n);

    return 0;
}