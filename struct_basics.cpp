#include <iostream>
using namespace std;

struct food_order { // defines a structure named food_order
        string food_item;
        string drink;
        double price;
        
    };

int main(){
    food_order person1; // Create an instance of the 'food_order' struct
    // Assign values to the struct 
    person1.food_item = "PIZZA Slice";
    person1.drink = "Diet Coke";
    person1.price = 13.67;
    
    cout << "Your Order: " << endl << person1.food_item << " ,With a " << person1.drink 
    << " and The total is $" << person1.price;
    
    
    return 0;
}