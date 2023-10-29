#include <iostream>

using namespace std;

int main(){
    char operation_symbol; // stores a single character
    double num1,num2; //initialiazes variables
    cout << "Welcome To the Calculator" << endl
    << "Enter The operator +,-,*,/ : ";
    cin >> operation_symbol;
    
    cout << "Enter The First Number: ";
    cin >> num1;
    cout << "Enter The Second Number";
    cin >> num2;
    
    //searches for operator inputed the executes what you entered (LOOP)
    double result;
    switch(operation_symbol){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num1 != 0 || num2 != 0){
            result = num1 / num2;}
            else{
                cout << "cannot divide by zero" << endl;
                return 1; // exits with an error code
            }
            break;
        default: // executes if not of the operation symbols are Entered
            cout << "Invalid Operator Entered!" << endl;
            return 1; // exits with an error code
    }
    //displays the result
    cout << "Result: " << num1 << " " << operation_symbol << " " << num2 << " = " << result << endl;
    
    return 0;
}