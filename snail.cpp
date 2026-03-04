#include <iostream>

using namespace std;

void snail(int arr[3][3], int rows, int cols) {
    int size1 = rows; // wiesze
    int size2 = cols; // kolumny
    cout << size1 << " " << size2 << endl;

    int top = 0;
    int bottom = size1 - 1;
    int left = 0;
    int right = size2 - 1;

    while (top <= bottom && left <= right) {

        for (int j = left; j <= right; j++)
            cout << arr[top][j] << " ";
        top++;

        for (int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;

        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                cout << arr[bottom][j] << " ";
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }

    return;
}

int main() {
    const int size = 3;
    int arr[size][size] = {
        {1,2,3}, 
        {4,5,6},
        {7,8,9}
    };
    snail(arr,size,size);

    return 0;
}