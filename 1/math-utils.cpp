#include <iostream>
#include <cmath>

int main()
{
    double x = 3.14;
    double y = 4;
    double z;
    // z = std::max(x, y); // 4
    // z = std::min(x, y); // 3.14
    // z = pow(2, 3); //8
    // z = sqrt(9); //3
    // z = abs(-100); //100
    // z = round(x); //3
    // z = ceil(x); // 4
    z = floor(x); // 3
    std::cout << z;
    return 0;
}