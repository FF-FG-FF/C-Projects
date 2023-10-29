#include <iostream>

using namespace std;

double add(double a,double b){
    return a + b;
}

double subtract(double a,double b){
    return a - b;
}

double multiply(double a,double b){
    return a * b;
}

double divide(double a,double b){
    if( a != 0 || b != 0){
        return a / b;
    } 
    else{
        cout << "Cannot Dvide By Zero";
        return 0;
    }
}


int main(){
while(true){
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. EXIT" << endl;
    
    int choice;
    cout << "Navigate The Menu Using 1-5";
    cin >> choice;
    
    if(choice == 5){
        cout << "You Have Exited The Program"
        break;
    }
    
    double num1,num2;
    cout << "Enter The First Number";
    cin >> num1;
    cout << "Enter The Second Number";
    cin >> num2;
    
    double result;
    switch(choice){
        case 1:
            result = add(num1,num2);
            break;
        case 2:
            result = subtract(num1,num2);
            break;
        case 3:
            result = multiply(num1,num2);
            break;
        case 4:
            result = divide(num1,num2);
            break;
        default:
            cout << "Invalid Choice Entered";
            continue; // restarts the loop
    }
    cout << "You result is: " << result << endl;
}

    return 0;
}