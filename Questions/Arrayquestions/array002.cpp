// 2. Write a C++ program to find the largest three elements in an array

#include<iostream>
using namespace std;

int main() {
    int arr[5] = {2, 5, 17, 9, 20};
    int n = 5;

    int temp = INT_MIN;
    int temp2 = INT_MIN;
    int temp3 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > temp3) {
            temp = temp2;
            temp2 = temp3;
            temp3 = arr[i];
        } else if (arr[i] > temp2) {
            temp = temp2;
            temp2 = arr[i];
        } else if (arr[i] > temp) {
            temp = arr[i];
        }
    }

    cout << "Largest is " << temp3 << ", 2nd largest is " << temp2 << ", 3rd largest is " << temp << endl;

    return 0;
}
