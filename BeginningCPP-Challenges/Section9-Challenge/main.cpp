#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    char user_selection {};
    vector<int> num_list {};
    
    do {
        cout << "Welcome to Wangernum!\n"
            << "-----------------------\n"
            << "P - Print numbers\n"
            << "A - Add a number\n"
            << "M - Display mean of the numbers\n"
            << "S - Display the smallest number\n"
            << "L - Display the largest number\n"
            << "Q - Quit Wangernum\n\n"
            << "Enter your choice: ";
        cin >> user_selection;
        
        switch (user_selection) {
            case 'p':
            case 'P':
                if (num_list.size() > 0){
                    cout << "[ ";
                    for (unsigned i {}; i < num_list.size(); ++i){
                        cout << num_list.at(i) << " ";
                    }
                    cout << "]\n";
                } else
                    cout << "[] - the list is empty.\n";
                break;
            case 'a':
            case 'A':
                cout << "Enter an integer to add: ";
                int entered_value;
                cin >> entered_value;
                num_list.push_back(entered_value);
                cout << entered_value << " added.\n";
                break;
            case 'm':
            case 'M':
                if (num_list.size() > 0){
                    int total_sum {};
                    for (unsigned i {}; i < num_list.size(); ++i){
                        total_sum += num_list.at(i);
                    }
                    cout << "The mean of the list is " << static_cast<double> (total_sum) / num_list.size() << "\n";
                } else
                    cout << "Unable to calculate the mean - no data.\n";
                break;
            case 's':
            case 'S':
                if (num_list.size() > 0){
                    int smallest_num {num_list.at(0)};
                    for (unsigned i {1}; i < num_list.size(); ++i){
                        if (num_list.at(i) < smallest_num)
                            smallest_num = num_list.at(i);
                    }
                    cout << "The smallest number is " << smallest_num << ".\n";
                } else
                    cout << "Unable to determine the smallest number - no data.\n";
                break;
            case 'l':
            case 'L':
                if (num_list.size() > 0){
                    int largest_num {num_list.at(0)};
                    for (unsigned i {1}; i < num_list.size(); ++i){
                        if (num_list.at(i) > largest_num)
                            largest_num = num_list.at(i);
                    }
                    cout << "The largest number is " << largest_num << ".\n";
                } else
                    cout << "Unable to determine the largest number - no data.\n";
                break;
            case 'q':
            case 'Q':
                cout << "Does something.\n";
                break;
            default:    cout << "Unknown selection, please try again.\n";
    } while (user_selection != 'q' && user_selection != 'Q');    
    return 0;
}