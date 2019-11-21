#include <iostream>

using namespace std;

// 引用传递
void fun1(int& i) {
    i = 1;
}

int arr[3] = {1, 2, 3};
int& fun2(int index) {
    // 不可以返回局部变量，可以设为static再返回
    return arr[index];
}

int main() {
    int a = 0;
    fun1(a);
    cout << "a:" << a << endl;

    fun2(1) = 4;
    for (int i = 0; i < 3; i++) {
        cout << "index[" << i << "]:" << arr[i] << endl;
    }
    
    return 0;
}