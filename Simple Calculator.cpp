//Simple Calculator
#include <iostream>
using namespace std;

int main(){
    double num1,num2;
    char op;
    char choice;
    do{

    
    cout<<"Welcome to the simple calculator Project"<<endl;

    cout<<"Enter the operator(+ - * /):";
    cin>>op;
    //Take input from the user
    cout<<"Enter the two number one by one:";
    cin>>num1 >>num2;
     
    switch (op)
    {
        //Perform the chosen operation
    case '+':
        cout <<num1<<op<<num2<<"="<<num1+num2<<endl;
        break;

    case '-':
        cout <<num1<<op<<num2<<"="<<num1-num2<<endl;
        break;
    case '*':
        cout <<num1<<op<<num2<<"="<<num1*num2<<endl;
        break;
    case '/':
        if (num2==0.0)
        {
            cout<<"Divide by Zero Situation"<<endl;

         }
         else
         {
             cout <<num1<<op<<num2<<"="<<num1/num2<<endl;
         }
         break;

    default:
         cout<<"Invalid Operator"<<endl;
         break;
    }
    //Ask the user if they want to perform another calculation
    cout<<"Do you want to perform another calculation?(y/n):";
    cin>>choice;

    }while (choice =='y'||choice=='y');
    cout<<"Thank you for using the calculation"<<endl;
    return 0;
}