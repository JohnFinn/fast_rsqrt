#include "rsqrt.hpp"

#include <cmath>

float rsqrt(float n) {
    return 1 / sqrt(n);
}

float fast_rsqrt(float number) {
    float y = number;
    int& log_y = reinterpret_cast<int&>( y );
    log_y = 0x5f3759df - ( log_y >> 1 );

    //const float threehalfs = 1.5F;
    //float x2 = number * 0.5F;
    //y = y * ( threehalfs - ( x2 * y * y ));
    //y = y * ( threehalfs - ( x2 * y * y ));
    //y = y * ( threehalfs - ( x2 * y * y ));
    return y;
}
