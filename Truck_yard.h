#include "Truck.h"

class Truck_yard {
public:
    Truck truck;
private:
    Truck_yard();
    Truck_yard(int capacity);
    int get_total_stock_count();
    int get_stock_count(int code);
    Truck *get_current_stock_list();
    bool add_stock(Truck c);
    ~Truck_yard();
};