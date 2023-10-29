#include <iostream>
#include <vector>
using namespace std;

int main(){
   vector <int> numbers;
    numbers = {99,98,97,96,95,94,93,92,91,90};
   numbers.push_back(10); // adds element to numbers vector
   numbers.push_back(20);
   cout << numbers.at(1);
   
   for(int i=0;i<numbers.size();i++){ // iterates through  vector 
       cout << numbers.at(i) << endl;
   }
    
    return 0;
}