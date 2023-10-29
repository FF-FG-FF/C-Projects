#include <iostream>

using namespace std;

int add(int M,int C);// function Prototype, calls the function before defining its actual implementation

int main(){
    int num1,num2;
    
    cout << "Enter The First Number";
    cin >> num1;
    cout << "Enter The Second NUmber";
    cin >> num2;
    
    int sum = add(num1,num2);//calls the function
    cout << "The Sum of " << num1 << " and " << num2 << " is " << sum;
    return 0;
}

// implementation of function, The Functions Variables and the ones inside main dont have to be named the same
int add(int M,int C){
    return M + C;
}