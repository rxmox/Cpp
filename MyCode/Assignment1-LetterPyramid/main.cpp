#include <iostream>
#include <string>

using namespace std;

int main(){
    string input_string;
    cout << "Enter a string: ";
    cin >> input_string;

    int string_length = input_string.length();
    int space_count = string_length - 1;

    for (int i = 0; i < string_length; i++){
        for (int j = 0; j < space_count; j++){
            cout << " ";
        }
        space_count--;
        // for (int k = 0; k < i; k++){
        //     cout << input_string[k];
        // }
        cout << input_string.substr(0, i);
        for (int l = i; l >= 0; l--){
            cout << input_string[l];
        }
        cout << endl;
    }


    return 0;
}