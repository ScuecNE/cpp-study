#include <iostream>

using namespace std;

class Box {
    public: 
        double getVolume();
        void setHeight(double h);
        void setWidth(double w);
        void setLength(double l);
    private:
        double height;
        double width;
        double length;
};

double Box::getVolume() {
    return height * width * length;
}

void Box::setHeight(double h) {
    height = h;
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

    box1.setHeight(1.0);
    box1.setWidth(1);
    box1.setLength(1.0);
    volume = box1.getVolume();
    cout << "box1:" << volume << endl;

    box2.setHeight(2.0);
    box2.setWidth(2);
    box2.setLength(2.0);
    volume = box2.getVolume();
    cout << "box2:" << volume << endl;
    return 0;
}