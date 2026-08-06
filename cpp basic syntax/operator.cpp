#include <iostream>
using namespace std;
int main(){

    // Arithmetic operator 

    int x ;
    int y;
    
    cin >> x >> y ;    
    cout<< x+y  << endl;   // adition
    
    cout<< x-y  << endl;  // subtraction

    cout << x*y << endl ; // multiplication

    cout<< x/y<< endl; //division
    cout<< x%y << endl; // remainder
    cout<< x++ << y ++ << endl; // increment
    cout << x-- << y-- << endl; // decrement

    // Assignement Operator 

    int c = 5;
    cout<< c << endl;
    c+=5;
    cout<< c<< endl; // compound operator ( it is the combination of regular + assignemt operator )
    c-=5;
    cout<< c<< endl;
    c*=5;
    cout << c<< endl;
    

    //Comparison Operator 
    int a =9;
    int b =1;
    if (a>b) cout<< true;
    if (a<b)  cout<< false;
    if (a==b) true;
    if (a!=b) true;
    if(a>=b) true;
    if (a<=b) false; 

    // Bit wise Operator

    int d = 5;
    int f =3;
    std :: cout <<( d&f) << endl;  // and
    std:: cout<< (d|f) << endl;   // or
    std :: cout << (d^f) << endl; // xor ( same pe zero)
    std::cout << (~f) << endl ; // not
    std :: cout << (5>>3) << endl; // right shift 
    std :: cout << (5<<3) << endl; // left shift 

    // oder of operator 
    // 

    return 0;
}