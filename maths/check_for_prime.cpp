#include <iostream>
using namespace std;

int main (){
    int n ;
    int count =0;
    cin>>n;
    for (int i =1 ; i*i<=n;i++){
        if(n%i==0){
            count= count+2;
        }
        
   
    
}
if (count==2){
        cout<<"prime Number";
        
    }else {
        cout << "not prime";
    }return 0;
}