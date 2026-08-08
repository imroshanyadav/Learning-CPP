#include <iostream>
using namespace std;

int large(int arr[],int n){
    int max =arr[0];
    for (int i =0 ;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }return max;
}

int main(){

        // int x[];
        int n ;
        cout<< "Enter the number of the element in the array:"<<endl;
        cin>> n;
        int x[n];

        for(int i =0; i<n;i++){
            cout<<"Enter the element :"<< i<<endl;
            cin>>x[i];
            // x.push_back(i)

        }
        
        int max =large(x,n);
        cout<< "The largest Number in the arr is :"<< max<< endl;
        return 0;
}
