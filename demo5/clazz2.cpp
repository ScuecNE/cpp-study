#include <iostream>

using namespace std;

class Box {

    public:
        Box(double l, double w, double h);
        ~Box();
        double getVolume();
    private:
        double length;
        double width;
        double heigth;
};

Box::Box(double l, double w, double h) : length(l), width(w), heigth(h) {
    cout << "value init finished!" << endl;
    cout << "length:" << length << endl;
    cout << "width:" << width << endl;
    cout << "heigth:" << heigth << endl;
}

Box::~Box(void) {
    cout << "关闭文件、释放内存" << endl;
}

double Box::getVolume() {
    return heigth * width * length;
}

int main() {
    Box box(1.0, 1.0, 1.0);
    cout << "Volume:" << box.getVolume() << endl;
    return 0;
}