#ifndef TRUCK_YARD_H_
#define TRUCK_YARD_H_
#include "Truck.h"

class Truck_yard {
private:
    Truck* trucks;
    int size;
    int max_capacity;
public:
    Truck_yard();
    Truck_yard(int capacity);
    int get_total_stock_count();
    int get_stock_count(int code);
    Truck *get_current_stock_list();
    bool add_stock(Truck c);
    ~Truck_yard();
};

#endif