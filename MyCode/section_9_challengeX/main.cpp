#include <iostream>
#include <vector>

using namespace std;

int main(){

    char selection{};

    vector <int> numbers{};

    do{
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";

        cin >> selection;

        switch (selection)
        {
        case 'p':
        case 'P':
        {
            if (numbers.size() == 0)
                    cout << "[] - the list is empty" << endl;
            else
            {
                cout << "[ ";
                for (auto val: numbers)
                    cout << val << " ";
                cout << "]" << endl;
            }
            cout << endl;
            break;
        }
        case 'a':
        case 'A':
        {
            cout << "\nEnter an integer to add to the list: ";
            int input_number;
            cin >> input_number;
            numbers.push_back(input_number);
            cout << input_number << " added" << endl;
            cout << endl;
            break;
        }
        case 'm':
        case 'M':
        {
            if (numbers.size() == 0)
                cout << "Unable to calculate mean - no data" << endl;
            else
            {
                int total {};
                for (auto val: numbers)
                    total += val;
                cout << "The mean is " << static_cast<double>(total)/numbers.size() << endl;
            }
            cout << endl;
            break;
        }
        case 's':
        case 'S':
        {
            if (numbers.size() == 0)
                cout << "Unable to determine the smallest - list is empty" << endl;
            else
            {
                int smallest{numbers.at(0)};
                for (auto val: numbers)
                    if (val < smallest)
                        smallest = val;
                cout << "The smallest number is " << smallest << endl;
            cout << endl;
            break;
            }
        }
        case 'l':
        case 'L':
        {
            if (numbers.size() == 0)
                cout << "Unable to determine the largest - list is empty" << endl;
            else
            {
                int largest{numbers.at(0)};
                for (auto val: numbers)
                    if (val > largest)
                        largest = val;
                cout << "The largest number is " << largest << endl;
            }
            cout << endl;
            break;
        }
        case 'q':
        case 'Q':
            cout << "\ngood bye" << endl;
            break;
        
        default:
            cout << "Unknown selection, please try again" << endl; 
            cout << endl;
        }

    }while (selection != 'q' && selection != 'Q');


    return 0;
}