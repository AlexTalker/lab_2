#include <iostream>
#include <my_fun.h>

using namespace std;


int main()
{
    int a,b;
    double c,g;
    Complex d;
    Circle e;
    Vector f;
    cin >> a >> b;
    cin >> c >> g;
    cin >> d.x >> d.y;
    cin >> e.x >> e.y >> e.r;
    cin >> f.x >>f.y;
    cout << "Results:" << endl;
    reverse(&a, &b);
    cout << a << endl <<b <<endl;
    reverse(a,b);
    cout << a << endl << b << endl;
    to_int(&c);
    cout << c << endl;
    to_int(g);
    cout << g << endl;
    umn(d, c);
    cout << d.x << " " << d.y << endl;
    umn(&d, &g);
    cout << d.x << " " << d.y << endl;
    sdvig(e,f);
    cout << e.x << endl << e.y << endl;
    sdvig(&e,&f);
    cout << e.x << endl << e.y << endl;
    return 0;
}

