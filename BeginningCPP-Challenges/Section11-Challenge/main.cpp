#include <iostream>
#include <cctype>
#include <locale>
#include <vector>

using namespace std;

// Function prototypes --------------------------------------------------
void display_menu();
char get_user_selection();
void print_vector(const vector<int> &num_list);
void add_number(vector<int> &num_list);

// Main program ---------------------------------------------------------
int main() {
    
    char user_selection {};
    vector<int> num_list {};
    
    do {
        display_menu();
        user_selection = get_user_selection();
        switch (user_selection) {
            case 'P':
                print_vector(num_list);
                break;
            case 'A':
                add_number(num_list);
                break;
            case 'M':
                cout << "Find mean of numbers\n";
                break;
            case 'S':
                cout << "Find smallest number\n";
                break;
            case 'L':
                cout << "Find largest number\n";
                break;
            case 'Q':
                cout << "Thank you for playing Wangernum. Goodbye!\n";
                break;
            default:    cout << "Unknown selection, please try again.\n";
        }
    } while (user_selection != 'Q'); 

//    do {
//        cout << "Welcome to Wangernum!\n"
//            << "-----------------------\n"
//            << "P - Print numbers\n"
//            << "A - Add a number\n"
//            << "M - Display mean of the numbers\n"
//            << "S - Display the smallest number\n"
//            << "L - Display the largest number\n"
//            << "Q - Quit Wangernum\n\n"
//            << "Enter your choice: ";
//        cin >> user_selection;
//        
//        switch (user_selection) {
//            case 'p':
//            case 'P':
//                if (num_list.size() > 0){
//                    cout << "[ ";
//                    for (unsigned i {}; i < num_list.size(); ++i){
//                        cout << num_list.at(i) << " ";
//                    }
//                    cout << "]\n";
//                } else
//                    cout << "[] - the list is empty.\n";
//                break;
//            case 'a':
//            case 'A':
//                cout << "Enter an integer to add: ";
//                int entered_value;
//                cin >> entered_value;
//                num_list.push_back(entered_value);
//                cout << entered_value << " added.\n";
//                break;
//            case 'm':
//            case 'M':
//                if (num_list.size() > 0){
//                    int total_sum {};
//                    for (unsigned i {}; i < num_list.size(); ++i){
//                        total_sum += num_list.at(i);
//                    }
//                    cout << "The mean of the list is " << static_cast<double> (total_sum) / num_list.size() << "\n";
//                } else
//                    cout << "Unable to calculate the mean - no data.\n";
//                break;
//            case 's':
//            case 'S':
//                if (num_list.size() > 0){
//                    int smallest_num {num_list.at(0)};
//                    for (unsigned i {1}; i < num_list.size(); ++i){
//                        if (num_list.at(i) < smallest_num)
//                            smallest_num = num_list.at(i);
//                    }
//                    cout << "The smallest number is " << smallest_num << ".\n";
//                } else
//                    cout << "Unable to determine the smallest number - no data.\n";
//                break;
//            case 'l':
//            case 'L':
//                if (num_list.size() > 0){
//                    int largest_num {num_list.at(0)};
//                    for (unsigned i {1}; i < num_list.size(); ++i){
//                        if (num_list.at(i) > largest_num)
//                            largest_num = num_list.at(i);
//                    }
//                    cout << "The largest number is " << largest_num << ".\n";
//                } else
//                    cout << "Unable to determine the largest number - no data.\n";
//                break;
//            case 'q':
//            case 'Q':
//                cout << "Does something.\n";
//                break;
//            default:    cout << "Unknown selection, please try again.\n";
//    } while (user_selection != 'q' && user_selection != 'Q');    
    return 0;
}

// Function definitions -------------------------------------------------
void display_menu(){
    cout << "Welcome to Wangernum!\n"
        << "-----------------------\n"
        << "P - Print numbers\n"
        << "A - Add a number\n"
        << "M - Display mean of the numbers\n"
        << "S - Display the smallest number\n"
        << "L - Display the largest number\n"
        << "Q - Quit Wangernum\n\n"
        << "Enter your choice: ";
    return;
}

char get_user_selection(){
    char user_selection;
    bool is_valid_entry {false};

    do {
        cin >> user_selection;
        if(isalpha(user_selection) != 0){
            user_selection = toupper(user_selection);
            if(user_selection == 'P' || user_selection == 'A' || user_selection == 'M' || user_selection == 'S' || user_selection == 'L' || user_selection == 'Q'){
                is_valid_entry = true;
            } else {
                cout << "\nINVALID SELECTION!\n"
                    << "************************\n\n";
                display_menu();
            }
        } else {
            cout << "\nINVALID SELECTION!\n"
                << "************************\n\n";
            display_menu();
        }
    } while(!is_valid_entry);
    
    return user_selection;
}

void print_vector(const vector<int> &num_list){
    if (num_list.size() > 0){
        cout << "[ ";
        for (unsigned i {}; i < num_list.size(); ++i){
            cout << num_list.at(i) << " ";
        }
        cout << "]\n";
    } else
        cout << "[] - the list is empty.\n";
    return;
}

void add_number(vector<int> &num_list){
    cout << "Enter an integer to add: ";
    int entered_value;
    cin >> entered_value;
    num_list.push_back(entered_value);
    cout << entered_value << " added.\n";
    return;
}