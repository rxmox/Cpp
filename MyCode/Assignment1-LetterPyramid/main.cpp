#include <iostream>
#include <string>

using namespace std;

int main(){
    string input_string;
    cout << "Enter a string: ";
    cin >> input_string;

    int string_length = input_string.length();              // length of the string
    int space_count = string_length - 1;                    // number of spaces to print

    for (int i = 0; i < string_length; i++){                // loop through the string
        for (int j = 0; j < space_count; j++){              // loop through the spaces
            cout << " ";
        }
        space_count--;                                      // decrement the number of spaces to print
        // for (int k = 0; k < i; k++){
        //     cout << input_string[k];
        // }
        cout << input_string.substr(0, i);                 // print the substring of the input string from index 0 to i
        for (int l = i; l >= 0; l--){                      // loop backwards through the string
            cout << input_string[l];
        }
        cout << endl;
    }


    return 0;
}