#include "Truck_yard.h"

Truck_yard::Truck_yard() {
    max_capacity=0;
    size=0;

}

Truck_yard::Truck_yard(int capacity) {
    size=0;
    max_capacity = capacity;
    trucks = new Truck[capacity];
}

int Truck_yard::get_total_stock_count() {
    return size;
}

int Truck_yard::get_stock_count(int code) {
    int count=0;
    for (int i = 0; i < size; i++) {
        if(trucks[i].get_brand_code()==code){
            count++;
        }

    }
    return count;
}

Truck * Truck_yard::get_current_stock_list() {
return trucks;
}

bool Truck_yard::add_stock(Truck truck) {
    if (size < max_capacity) {
        trucks[size] = truck;
        size++;
        return true;
    }
    return false;
}

Truck_yard::~Truck_yard() {
    delete[] trucks;
}