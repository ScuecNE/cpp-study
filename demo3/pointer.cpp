#include <iostream>

using namespace std;

const int MAX = 3;
double getAvg(int *ptr, int size);

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
    
    double avg = getAvg(arr, MAX);
    cout << "avg:" << avg << endl;
    return 0;
}

double getAvg(int *ptr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *ptr;
        ptr++;
    }
    
    double avg = ((double) sum) / size;
    return avg;
}