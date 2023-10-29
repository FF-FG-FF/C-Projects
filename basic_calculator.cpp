#include <iostream>

using namespace std;

double sub_function(double num1,double num2){
    return num1 - num2;
}

double add_function(double num1,double num2){
    return num1 + num2;
}

double multiply_function(double num1,double num2){
    return num1 * num2;
}

double divide_function(double num1,double num2){
    if (num1 != 0 || num2 != 0){
        return num1 / num2;
    }
    else{
        cout << "You Cannot Divide BY Zero";
        return 1;
    }
}

void display_screen(){
    cout << "----- Hello World -----" << endl;
        cout << "1. Subtract" << endl;
        cout << "2. Addition" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. EXIT" << endl;
}

int main(){
    double a,b;
    cout << "Enter Your first Number: ";
        cin >> a;
        cout << "Enter Your Second Number: ";
        cin >> b;
    while(true){
        display_screen();
        int choice;
        cout << "Navigate The Menu Using 1-5: ";
        cin >> choice;
        if (choice == 5){
            cout << "You Have Exited The Program";
            break;
        }
        double result;
        switch(choice){
            case 1:
                result = sub_function(a,b);
                break;
            case 2:
                result = add_function(a,b);
                break;
            case 3:
                result = multiply_function(a,b);
                break;
            case 4:
                result = divide_function(a,b);
                break;
            default:
                cout << "You Entered an Invalid Option";
                break;
        }
        cout << "Your Answer is " << result << endl;
    }
    
    return 0;
}