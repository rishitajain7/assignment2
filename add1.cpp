#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[50];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter value of k: ";
    cin >> k;

    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = arr[i] - arr[j];
            if (diff < 0){
                diff = -diff;  } 
            if (diff == k){
                count++;}
        }
    }

    cout << "Number of pairs with difference " << k << " = " << count;
    return 0;
}
