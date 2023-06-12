#include <iostream>

using namespace std;

int main(){
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;

    cout << "\nHow many small rooms would you like cleaned? ";
    int small_rooms{0};
    cin >> small_rooms;

    cout << "\nHow many large rooms would you like cleaned? ";
    int large_rooms{0};
    cin >> large_rooms;

    const int small_room_price{25};
    const int large_room_price{35};
    cout << "Price per small room: $" << small_room_price << endl;
    cout << "Price per large room: $" << large_room_price << endl;

    cout << "Cost : $" << (small_room_price * small_rooms)+(large_room_price * large_rooms) << endl;
    cout << "Tax : $" << ((small_room_price * small_rooms)+(large_room_price * large_rooms)) * 0.06 << endl;

    cout << "=================================================================" << endl;

    cout << "Total estimate: $" << (((small_room_price * small_rooms)+(large_room_price * large_rooms)) * 0.06) + (small_room_price * small_rooms)+(large_room_price * large_rooms) << endl;

    cout << "This estimate is valid for 30 days" << endl;

    const string 

    return 0;
}