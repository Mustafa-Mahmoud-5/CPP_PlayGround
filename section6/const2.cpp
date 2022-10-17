#include <iostream>
using namespace std;

int main() {
    /* small rooms price
     * big rooms price
     * total rooms cost
     * taxes
     * total cost
     * */

    const double sm_room_cost = 25;
    const double bg_room_cost = 35;
    const double taxes_rate = 6;
    const int estimate = 30;

    int sm_rooms;
    int bg_rooms;

    cout << "How many small rooms:";
    cin >> sm_rooms;

    cout << "How many big rooms:";
    cin >> bg_rooms;

    cout << "\n\n";

    double bg_rooms_total = bg_room_cost * bg_rooms;
    double sm_rooms_total = sm_room_cost * sm_rooms;
    double rooms_cost = bg_rooms_total + sm_rooms_total;
    double tax = rooms_cost * taxes_rate / 100;
    double cost = rooms_cost + tax;

    cout << "Estimate for the carpet cleaning service" << "\nNumber of small rooms: " << sm_rooms << "\nNumber of big rooms: " << bg_rooms <<"\nPrice per small room: $" << sm_room_cost << "\nPrice per big room: " << bg_room_cost << "\nsmall rooms total cost: $" << sm_rooms_total << "\nbig rooms total cost: $" << bg_rooms_total << "\nRooms cost: $" << rooms_cost << "\nTax" <<"(" << taxes_rate << "%): " << tax << endl;

    cout << "===================================" << endl;

    cout << "Total Estimate: $" << cost << endl;
    cout << "This estimate is valid for " << estimate << " days" << endl;
    return 0;
}