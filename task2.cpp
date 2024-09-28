//Task 2: Simple Calculator

#include<iostream>
using namespace std;

double calci(int num1,int num2,char operation){
    if (operation == '+') 
    cout << "Addition: " << num1 + num2 << endl;
 else if (operation == '-') 
    cout << "Subtraction: " << num1 - num2 << endl;
 else if (operation == '*') 
    cout << "Multiplication: " << num1 * num2 << endl;
 else if (operation == '/') {
    if (num2 != 0) 
        cout << "Division: " << num1 / num2 << endl;
    else 
        cout << "Error: Division by zero" << endl;   
}

 else 
    cout << "Invalid operation" << endl;

}
int main(){

    double num1,num2;
    char operation;

    cout<<"enter the first number: ";
    cin>>num1;
    cout<<"enter the second number: ";
    cin>>num2;
    cout<<"enter the operation(+,-,*,/): ";
    cin>>operation;

    calci(num1,num2,operation);

    return 0;
}
