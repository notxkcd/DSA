#include <iostream>
#include <cmath>

int main() {
    double x = 4.1;
    double y = 9.8;

    int result_x = std::ceil(x);
    int result_y = std::ceil(y);

    std::cout << "Ceiling of " << x << " is " << result_x << std::endl;
    std::cout << "Ceiling of " << y << " is " << result_y << std::endl;
    
     result_x = std::round(x);
     result_y = std::round(y);

    std::cout << "Ceiling of " << x << " is " << result_x << std::endl;
    std::cout << "Ceiling of " << y << " is " << result_y << std::endl;

    return 0;
}
