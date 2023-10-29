#include <iostream>

using namespace std;

int main(){
    int rows;
    cout << "Enter The Size Of The Pyramid";
    cin >> rows;
    
    for(int i = 1;i<=rows;i++){
        
        for(int k=1;k<=(rows-i);k++){
            cout<<" ";
        }
        
        for(int f=1;f<=i;f++){
            cout << "*";
        }
        cout << "  " << i << "  ";
        
        for(int x=1;x<=i;x++){
            cout<<"*";
            
        }
        cout << endl;
    }
}