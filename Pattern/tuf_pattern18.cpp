#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // char x = 'E';

    for(int i =0 ; i<=n ; i++){
        char x = 'E'-i;
        for (int j =0; j<=i ; j++){
            cout << x;
            x++;
            
        }cout << endl;

    }return 0;
}