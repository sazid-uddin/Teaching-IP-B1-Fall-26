#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 12;
    int *p = &a, *q = &b;
    *p = *q;
    p = q;
    *p = 20;
    cout << a << " " << b;
    return 0;
}
