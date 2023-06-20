#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    
    cout << "Enter your secret message: ";
    string message {};
    getline(cin, message);                              // get the message from the user, whole line instead of just one word

    cout << "\nEncrypting message..." << endl;
    string encrypted_message {};
    for (char c: message) {                             // range based for loop
        size_t position = alphabet.find(c);             // find the position of the character in the alphabet using .find method
        if (position != string::npos) {                 // if the letter is found in the alphabet
            encrypted_message += key.at(position);      // add the corresponding letter from the key to the encrypted message
        } else {
            encrypted_message += c;                     // if the letter is not found in the alphabet, add the letter to the encrypted message
        }
    }

    cout << "Encrypted message: " << encrypted_message << endl;

    cout << "\nDecrypting message..." << endl;

    string decrypted_message {};

    for (char c: encrypted_message) {
        size_t position = key.find(c);
        if (position != string::npos) {
            decrypted_message += alphabet.at(position);
        } else {
            decrypted_message += c;
        }
    }

    cout << "Decrypted message: " << decrypted_message << endl;

    cout << endl;

    return 0;
}
