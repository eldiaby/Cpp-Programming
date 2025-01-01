#include <iostream>

 using namespace std;

int main()
{
    const double price_per_small_room {25};
    const double price_per_large_room {35};
    const float tax {0.06};
    const int estimate_time {30}; // Days
    
    cout << "Hello, Welcome to Eldiaby's Carpet Cleaning Service \n\n";
    
    cout << "How many small rooms would you like to clean? ";
    int small_rooms;
    cin >> small_rooms;
    
    cout << "How many large rooms would you like to clean? ";
    int large_rooms;
    cin >> large_rooms;
    
    cout << "Number of small rooms: " << small_rooms <<endl;
    cout << "Number of large rooms: " << large_rooms <<endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl; 
    
    double total_cost =(price_per_small_room * small_rooms) + (price_per_large_room * large_rooms);
    cout << "Cost: $" << total_cost <<endl;
    
    float bill_tax = total_cost * tax;
    cout << "Tax: $" << bill_tax <<endl;
    
    cout << "=======================================\n";
    
    double total_estimate = total_cost + bill_tax;
    cout << "Total estimate: $" << total_estimate << endl;
    cout << "This estimate is valid for " << estimate_time << " days" << endl;
    
	return 0;
}
