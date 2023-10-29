#include <iostream>

using namespace std;
// when you see 1 in the output, it means the function returned true
//when you see 0 in the output, it means the function returned false
bool is_math_operator(char c){
    return c == '+' || c == '-' || c== '/' || c == '*';
}

int main(){
    char a;
    cout << "Enter A Math operator";
    cin >> a;
    bool result = is_math_operator(a);
    cout << result;
    
    
 return 0;   
}