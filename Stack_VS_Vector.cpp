#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    vector <double> num_storage_vectors;
    stack <double> num_storage_stack;
    
    num_storage_vectors.push_back(11.22); // adds elements to vector
    num_storage_vectors.push_back(22.11);
    num_storage_vectors.pop_back();
    //-------//
    num_storage_stack.push(73.88); // adds elements to the top of the stack
    num_storage_stack.push(88.73);
    num_storage_stack.pop();
    
    cout << "Stack Value: "<< num_storage_stack.top() << endl;
    cout << "Vector Value: " << num_storage_vectors.at(0) << endl;
    
    return 0;
}