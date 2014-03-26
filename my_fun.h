#ifndef MY_FUN_H
#define MY_FUN_H
typedef struct Complex { double x; double y; };
typedef struct Circle { double x; double y; double r; };
typedef struct Vector { double x;double y; };
void reverse(int *a, int *b);
void reverse(int& a, int& b);
void to_int(double *a);
void to_int(double& a);
void umn(Complex *a, double *b);
void umn(Complex& a, double& b);
void sdvig(Circle& a, Vector& b);
void sdvig(Circle *a, Vector *b);
#endif // MY_FUN_H
