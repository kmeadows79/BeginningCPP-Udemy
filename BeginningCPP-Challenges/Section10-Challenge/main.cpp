#include <iostream>
#include <string>

using namespace std;

int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string cipher_key {"QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm"};
    
    cout << "Enter your secret message: ";
    string secret_message {};
    getline(cin, secret_message);
    
    cout << "\nEncrypting message. . . . \n";
    string encrypted_string {};
    for (auto letter: secret_message){
        size_t position = alphabet.find(letter);
        if (position != string::npos){
            encrypted_string += cipher_key.at(position);
        } else {
            encrypted_string += letter;
        }

    }
    cout << "\nEncrypted message: " << encrypted_string << endl;

    cout << "\nDecrypting message. . . . \n";
    string decrypted_string {};
    for (auto letter: encrypted_string){
        size_t position = cipher_key.find(letter);
        if (position != string::npos){
            decrypted_string += alphabet.at(position);
        } else {
            decrypted_string += letter;
        }

    }
    cout << "\nDecrypted message: " << decrypted_string << endl;
    
    return 0;
}