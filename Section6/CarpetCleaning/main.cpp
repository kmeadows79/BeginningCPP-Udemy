#include <iostream>

using namespace std;

int main() {
    const double small_room_price {25.0};
    const double large_room_price {35.0};
    const double sales_tax_rate {0.06};
    const int estimate_expiry {30}; //days
    
    cout << "Frank's Carpet Cleaning Service" << endl;
    cout << "Charges:\n";
    cout << "   $" << small_room_price << " per small room\n";
    cout << "   $" << large_room_price << " per large room\n";
    cout << "Sales tax rate is 6%\n";
    cout << "Estimates are valid for " << estimate_expiry << " days\n\n";
    cout << "Estimate for carpet cleaning services\n";
    cout << "Number of small rooms: ";
    int num_small_rooms {0};
    cin >> num_small_rooms;
    cout << "Number of large rooms: ";
    int num_large_rooms {0};
    cin >> num_large_rooms;
    cout << "Price per small room : $" << small_room_price << endl;
    cout << "Price per large room : $" << large_room_price << endl;
    double cost {0};
    cost = (num_small_rooms * small_room_price) + (num_large_rooms * large_room_price);
    cout << "Cost: $" << cost << endl;
    double sales_tax_total {0};
    sales_tax_total = cost * sales_tax_rate;
    cout << "Tax: $" << sales_tax_total << endl;
    cout << "===================================\n";
    cout << "Total estimate: $" << (cost + sales_tax_total) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days\n";
    
    
    
    return 0;
}