#include <iostream>
#include <string>

using namespace std;

const int MAX = 3;
void printAscArr();

int main() {
    string a = "123";
    string *addr;

    addr = &a;

    cout << "a value:" << a << "/" << *addr << endl;
    cout << "a addr:" << &a << "/" << addr << endl;

    cout << &*addr;

    cout << endl << endl;

    printAscArr();

    return 0;
}

void printAscArr() {
    int arr[MAX] = {100, 200, 400};
    int *p;

    // 指针指向第一个地址，p = &arr[0]; 所以递减遍历可以写为p = &arr[MAX-1];
    // 或p = arr;，数组是一个常量指针
    p = arr;

    for (int i = 0; i < MAX; i++) {
        cout << "Address of var[" << i << "] = ";
        cout << p << endl;
 
        cout << "Value of var[" << i << "] = ";
        cout << *p << endl;
 
        // 移动到下一个位置
        p++;
    }
    
}