#include "Truck_yard.h"

Truck_yard::Truck_yard() : Truck_yard() {

}

Truck_yard::Truck_yard(int capacity) {

}

int Truck_yard::get_total_stock_count() {

}

int Truck_yard::get_stock_count(int code) {

}

Truck *get_current_stock_list() {

}

bool Truck_yard::add_stock(Truck truck) {
    if (size < max) {
        trucks[size] = truck;
        size++;
        return true;
    }
    return false;
}

Truck_yard::~Truck_yard() {

}