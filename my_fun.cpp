#include <my_fun.h>
#include <cmath>
void reverse(int *a, int *b){
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int& a, int& b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}
void to_int(double *a){
//    *a = static_cast<int>(*a);
    *a = (*a<0)?ceil(*a):floor(*a);
}

void to_int(double& a){
//    a = static_cast<int>(a);
    a = (a<0)?ceil(a):floor(a);
}
void umn(Complex *a, double *b) {
    a->x *= *b;
    a->y *= *b;
}
void umn(Complex& a, double& b) {
    a.x *= b;
    a.y *= b;
}

void sdvig(Circle& a, Vector& b){
    a.x += b.x;
    a.y += b.y;
}

void sdvig(Circle* a, Vector* b){
    a->x += b->x;
    a->y += b->y;
}
