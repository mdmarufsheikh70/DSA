#include <iostream>
#include <algorithm>

using namespace std;

void knapsack(int n, float weight[], float profit[], float capacity) {
    float x[20] = {0.0};
    float tp = 0.0;
    int u = static_cast<int>(capacity);

    for (int i = 0; i < n; i++) {
        if (weight[i] > u)
            break;
        else {
            x[i] = 1.0;
            tp += profit[i];
            u -= static_cast<int>(weight[i]);
        }
    }

    if (u > 0) {
        int i;
        for (i = 0; i < n; i++) {
            if (weight[i] > u)
                break;
        }
        if (i < n) {
            x[i] = u / weight[i];
            tp += x[i] * profit[i];
        }
    }

    cout << "\nThe result vector is: ";
    for (int i = 0; i < n; i++)
        cout << x[i] << "\t";

    cout << "\nMaximum profit is: " << tp << endl;
}

int main() {
    float weight[20], profit[20], ratio[20], capacity;
    int num;

    cout << "\nEnter the number of objects: ";
    cin >> num;

    cout << "\nEnter the weights and profits of each object: \n";
    for (int i = 0; i < num; i++) {
        cin >> weight[i] >> profit[i];
    }

    cout << "\nEnter the capacity of the knapsack: ";
    cin >> capacity;

    for (int i = 0; i < num; i++) {
        ratio[i] = profit[i] / weight[i];
    }

    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            if (ratio[i] < ratio[j]) {
                swap(ratio[i], ratio[j]);
                swap(weight[i], weight[j]);
                swap(profit[i], profit[j]);
            }
        }
    }

    knapsack(num, weight, profit, capacity);

    return 0;
}
