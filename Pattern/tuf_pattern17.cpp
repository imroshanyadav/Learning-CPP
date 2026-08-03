#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;

    for (int i = 0; i < n; i++) {

        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Initialize character to start from 'A'
        char ch = 'A';

        // Calculate midpoint of the row
        int breakpoint = (2 * i + 1) / 2;

        // Print the characters in the row
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;

            // Increment character till the midpoint, then decrement
            if (j <= breakpoint) ch++;
            else ch--;
        }

        // Print trailing spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Newline after each row
        cout << endl;
    }return 0;
    
}
