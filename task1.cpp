#include<iostream>
using namespace std;
void show();
double add(double a,double b);
double subtract(double a,double b);
double mul(double a,double b);
double division(double a,double b);

int main(){
    double number1,number2,result;
    char operation;
    bool continuecal=true;

    while(continuecal){
    show();
    
    cout<<"Enter the operation you want to perform (+,-,*,/) : ";
    cin>>operation;
    cout<<"Enter the first number :";
    cin>>number1;
    cout<<"Enter the second number :";
    cin>>number2;
    switch(operation){
        case '+': result=add(number1,number2);
        cout << "Result: " << number1 << " + " << number2 << " = " << result << endl;
        break;

        case '-': result=subtract(number1,number2);
        cout << "Result: " << number1 << " - " << number2 << " = " << result << endl;
        break;

        case '*': result=mul(number1,number2);
        cout << "Result: " << number1 << " * " << number2 << " = " << result << endl;
        break;

        case '/': 
        if(number2!=0){
            result=division(number1,number2);
        cout << "Result: " << number1 << " / " << number2 << " = " << result << endl;
        

        }
        else{
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;

        default :
        cout<<"invalid operation";
        break;
    }
    char c;
    cout<<"Do you want to perform another calculation (y/n) : ";
    cin>>c;
    if(c!= 'y' && c != 'Y'){
        continuecal=false;
        cout<<"Thank you!";
    }

    }
}

void show(){
    cout<<"------------------------"<<endl;
    cout<<" Simple calculator Menu "<<endl;
    cout<<"------------------------"<<endl;
    cout<<"which operation you want to perform"<<endl;
    cout<<"+ : addition"<<endl;
    cout<<"- : subtraction"<<endl;
    cout<<"* : multiplication"<<endl;
    cout<<"/ : division"<<endl;

}
double add(double a,double b){
    return a+b;
}
double subtract(double a,double b){
    return a-b;
}
double mul(double a,double b){
    return a*b;
}
double division(double a,double b){
    return a/b;
}



