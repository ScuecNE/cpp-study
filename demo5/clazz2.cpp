#include <iostream>

using namespace std;

class Box {

    public:
        Box(double l, double w, double h);
        Box(const Box &box);
        ~Box();
        double getVolume();
    private:
        double length;
        double width;
        double heigth;
        int *ptr;
};

Box::Box(double l, double w, double h) : length(l), width(w), heigth(h) {
    cout << "value init finished!" << endl;
    cout << "length:" << length << endl;
    cout << "width:" << width << endl;
    cout << "heigth:" << heigth << endl;

    // 为指针分配内存
    ptr = new int;
    *ptr = length;
}

Box::Box(const Box &box) {
    ptr = new int;
    *ptr = *box.ptr;
}

Box::~Box(void) {
    cout << "关闭文件、释放内存" << endl;
    delete ptr;
}

double Box::getVolume() {
    return heigth * width * length;
}

int main() {
    Box box(1.0, 1.0, 1.0);
    cout << "Volume:" << box.getVolume() << endl;
    return 0;
}