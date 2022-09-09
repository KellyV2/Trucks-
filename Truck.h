#include <string>

using namespace std;

class Truck {
private:
    string brand_name;
    int brand_code;
public:
    Truck();
    Truck(int b_code, string b_name);
    string get_brand_name();
    int get_brand_code();
    ~Truck();
};