#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    
    //ensures generator is truly random everytime / seeds the RNG
    srand(time(0));
    
    //picks a random number between 1 and 100,before adding 1 it wouldve been 0-99
    int target_number = rand() % 100 + 1;
    
    int guess;
    int attempts = 0;
    
    cout << "Welcome to the Game!"<<endl << "Pick a NUmber Between 1 and 100" <<endl;
    
    while(true){
        cout << "Enter Your Guess: ";
        cin >> guess;
        attempts ++;
        
        if (guess > target_number){
            cout << "Your Guess Is too High" << endl;
        }
        else if (guess < target_number){
            cout << "Your Guess Is Too Low" << endl;
        }
        else{
            cout << "You Guessed " << "The Number " << target_number << " in " << attempts << " attempts";
            break;
        }
    }
    return 0;
}