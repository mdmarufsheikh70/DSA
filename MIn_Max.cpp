#include <iostream>
using namespace std;

void findMinMax(int arr[], int low, int high, int minMax[]) {
    if (low == high) {
        if (arr[low] < minMax[0]) {
            minMax[0] = arr[low];
        }
        if (arr[low] > minMax[1]) {
            minMax[1] = arr[low];
        }
        return;
    }

    if (high == low + 1) {
        if (arr[low] > arr[high]) {
            if (arr[low] > minMax[1]) {
                minMax[1] = arr[low];
            }
            if (arr[high] < minMax[0]) {
                minMax[0] = arr[high];
            }
        } else {
            if (arr[high] > minMax[1]) {
                minMax[1] = arr[high];
            }
            if (arr[low] < minMax[0]) {
                minMax[0] = arr[low];
            }
        }
        return;
    }

    int mid = low + (high - low) / 2;
    findMinMax(arr, low, mid, minMax);
    findMinMax(arr, mid + 1, high, minMax);
}

int main() {
    int arr[] = {5, 20, 300, 1, 400, 1000, 8000};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minMax[2] = {arr[0], arr[0]};

    findMinMax(arr, 0, n - 1, minMax);

    cout << "Min: " << minMax[0] << endl;
    cout << "Max: " << minMax[1] << endl;

    return 0;
}
