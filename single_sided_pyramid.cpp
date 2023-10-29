#include <iostream>

using namespace std;

int main(){
    int rows;
    cout<< "Enter The Size Of The Pyramid";
    cin>>rows;
    
    //first loop prints the number of rows
    for(int i=1;i<=rows;i++){
        
        //prints spaces before the asterisks(decreases the number of spaces everytime hence the starting number rows-i)
        for(int k=1;k<=(rows-i);k++){
            cout<<" ";
        }
        
        //prints asterisks (keeps increasing accordingly with the number of rows)
        for(int f=1;f<=i;f++){
            cout<<"*";
        }
        cout << endl;
    }
    
    
    return 0;
}

