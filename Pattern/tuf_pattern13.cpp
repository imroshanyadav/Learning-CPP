#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
     int c =1;

    for (int i =0;i<=n;i++){
        // int c =1;
        // c+=1;
        for (int j =1 ; j<=i; j++){
            cout<<c;
            c+=1;
            
        }cout<< endl;
    }return 0;
}