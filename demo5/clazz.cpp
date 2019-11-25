#include <iostream>

using namespace std;

class Box {
    public: 
        double getVolume();
        void setHeigth(double h);
        void setWidth(double w);
        void setLength(double l);
    private:
        double heigth;
        double width;
        double length;
};

double Box::getVolume() {
    return heigth * width * length;
}

void Box::setHeigth(double h) {
    heigth = h;
}

void Box::setWidth(double w) {
    width = w;
}

void Box::setLength(double l) {
    length = l;
}

int main() {
    Box box1;
    Box box2;
    double volume;

    box1.setHeigth(1.0);
    box1.setWidth(1);
    box1.setLength(1.0);
    volume = box1.getVolume();
    cout << "box1:" << volume << endl;

    box2.setHeigth(2.0);
    box2.setWidth(2);
    box2.setLength(2.0);
    volume = box2.getVolume();
    cout << "box2:" << volume << endl;
    return 0;
}