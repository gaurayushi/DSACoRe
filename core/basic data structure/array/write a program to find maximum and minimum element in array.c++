#include <iostream>
using namespace std;

void display(int num, int arr[]) {
    cout << "Elements inside array:" << endl;
    for (int i = 1; i <= num; i++) {
        cout << arr[i] << endl;
    }
}

void maxmin(int num, int arr[]) {
    int max = arr[1];
    int min = arr[1];

    for (int i = 1; i <= num; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;
}

int main() {
    int num;
    int arr[12];
    cout << "Enter the limit: ";
    cin >> num;
    
    cout << "Enter elements:" << endl;
    for (int i = 1; i <= num; i++) {
        cin >> arr[i];
    }

    display(num, arr);
    maxmin(num, arr);

    return 0;
}



/* 
Enter the limit: 3
Enter elements:
12
23
45
Elements inside array:
12
3
45
Maximum element: 45
Minimum element: 3



*/