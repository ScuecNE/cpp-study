#include <iostream>

using namespace std;

// 变量以及函数声明，但是还未定义，定义编译器需要到程序中找
// 而只有（int i = 0）这种为声明 + 定义
extern int i, j, k;
int addFunc(int i, int j, int k);

// 定义枚举
enum days {
    one, two, three
};

int main() {
    // 定义常量
    const int NUM = 6;
    
    enum days day = one;
    switch (day)
    {
    case one:
        cout << one << endl;
        break;
    case two:
        cout << two << endl;
        break;
    case three:
        cout << three << endl;
        break;
    default:
        cout << "None" << endl;
        break;
    }

    // 定义变量以及初始化
    int i, j, k;
    i = 1;
    j = 2;
    k = 3;

    int c = addFunc(i, j, k);
    cout << c << endl;
    cout << NUM << endl;
    return 0;
}

// 定义函数以及初始化
int addFunc(int i, int j, int k) {
    return i + j + k;
}
