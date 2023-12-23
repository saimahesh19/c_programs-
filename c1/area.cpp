#include <iostream>
using namespace std;

class Shape {
public:
    int length;
    int b;
    int r;
};

class Result : public Shape {
public:
    void area() {
        cout << length * b<<endl;
    }

    void area(int r) {
        cout << 3.14 * r * r << endl;
    }

    void perimeter() {
        cout << 2 * (length + b)<< endl;
    }

    void circumference() {
        cout << 2 * 3.14 * r <<  endl;
    }
};

int main() {
    Result r;
    r.length = 21;
    r.b = 24;
    r.r = 11;

    r.area();
    r.area(r.r);
    r.perimeter();
    r.circumference();

    return 0;
}
