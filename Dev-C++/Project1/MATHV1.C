#include "MATHV1.H"

int sum(int x, int y){
    return x + y;
}

int diff(int x, int y){
    if(x > y)
        return x - y;
    else
        return y - x;
}

long int prod(int x, int y){
    return x * y;
}

float quot(int x, int y){
    if(x > y)
        return (float)x / y;
    else
        return (float)y / x;
}

int mod(int x, int y){
    return x % y;
}
