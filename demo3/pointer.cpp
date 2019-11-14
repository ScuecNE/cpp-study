#include <iostream>

using namespace std;
const int MAX = 3;

int main() {
    int arr[MAX] = {100, 200, 300};
    
    for (int i = 0; i < MAX; i++) {
        *arr = i;// 实际上等价于 arr[0] = i
        //cout << &arr[i] << endl;
        cout << *arr << endl;
        cout << arr[i] << endl;
    }

    const char *arrP[MAX] = {"100", "200", "300"};
    for (int i = 0; i < MAX; i++) {
        cout << *arrP[i] << endl;
        cout << arrP[i] << endl;
    }
    
    return 0;
}