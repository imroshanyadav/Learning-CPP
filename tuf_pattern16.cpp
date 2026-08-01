#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    // char c='A';

    for (int i=0;i<=n;i++){
        char c='A'+i;
        // c+=1;
        for(int j=0;j<=i;j++){
            // char c='A';
            cout<< c ;

        }
        cout<< endl;
    }
    
return 0;
}