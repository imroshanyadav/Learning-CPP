// use friend  Function to acess the private variable value

#include <iostream>
using namespace std;


class Employee{
    private:
    int salary;
    public:
    Employee(int s){
        salary = s;

    }

    friend void giveSalary(Employee e);
        
    };


void giveSalary(Employee e){
    cout<< "The Salary of the Employee is : "<< e.salary << endl;

}


int main(){

    cout << "Enter the Salary of Yours :"<< endl;
    int n ;
    cin >> n;
    Employee myep1(n);
    giveSalary(myep1);
    return 0;


}