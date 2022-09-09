#include "Truck.h"
#include <iostream>

using namespace std;

int main() {
    Truck truck_1(100, "yes");

    cout << truck_1.get_brand_name() << endl;
    cout << truck_1.get_brand_code() << endl;

    return 0;
}