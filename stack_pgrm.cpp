#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <double> values;
    
    values.push(10.00); // adds elements into the stack
    values.push(3.141);
    values.push(9999);
    
    cout << "Top Of The Stack Current Value: " << values.top() << endl; // "top of the stack" refers to the most recently added element.
    values.pop(); // removes the top/recently added element
    cout << "Top Of The Stack Current Value: " << values.top() << endl; // prints the next element in line after the first one got removed
    values.pop();
    cout << "Top Of The Stack Current Value: " << values.top() << endl;
    
    if (values.empty()) { // checks if stack is empty
    cout << "Stack is empty." << endl;
}

cout << "Number of elements in the stack: " << values.size() << endl;

stack<double> Secondary_Stack;
values.swap(Secondary_Stack); // swap(): Exchanges the contents of two stacks.
cout << "Number of elements in the stack: " << Secondary_Stack.size() << endl;

    return 0;
}