#include <iostream>

using namespace std;

int main(){
    int rows;
    cout<<"Enter The Size Of The Pyramid";
    cin>>rows;
    
    for(int i=1;i<=rows;i++){ //prints the number of rows for the whole pyramid
        
        for(int k=1;k <= (rows-i);k++){ //Spaces for the left side of the pyramid
            cout<<" ";
        }
        
        for(int f=1;f<=i;f++){ //prints asterisks for left side of the Pyramid
            cout<<"*";
        }
        
        cout<<"  "; //space in between Pyramid
        
        for(int w=1;w<=i;w++){ //Prints asterisks for Right side of the Pyramid
            cout<<"*";
        }
        cout << endl;
    }
    
    
    
    
    return 0;
}