#include <bits/stdc++.h>
using namespace std;

int bsearch(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        int mid = (s + e) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            
            s = mid + 1;
        } else {
            
            e = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int result = bsearch(arr, n, key);
    cout << result << endl;

    return 0;
}
