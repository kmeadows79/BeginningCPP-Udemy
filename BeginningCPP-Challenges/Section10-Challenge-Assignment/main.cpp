#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to the Letter Pyramid\n" << endl;
    string entered_phrase {};
    cout << "Enter a string: ";
    getline(cin, entered_phrase);
    
    for (size_t i = entered_phrase.size(); i > 0; --i){
        for (size_t j {i}; j > 0; --j){
            cout << " ";
        }
        size_t sub_count {entered_phrase.size() - i + 1};
        for (size_t k {}; k < sub_count; ++k){
            cout << entered_phrase.at(k);
        }
        for (size_t m{sub_count - 1}; m > 0; --m){
            cout << entered_phrase.at(m-1);
        }
        cout << endl;
    }
    
    return 0;
}