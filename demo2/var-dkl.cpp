#include <iostream>

using namespace std;

// 变量以及函数声明
extern int i, j, k;
int addFunc(int i, int j, int k);

int main() {
    // 定义常量
    const int NUM = 6;
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
