#include <bits/stdc++.h>
using namespace std;

class BubbleSorter {
private:
    vector<int> arr;

public:
    BubbleSorter(const vector<int>& inputArr) : arr(inputArr) {}

    void sort() {
        int n = arr.size();
        bool swapped;

        for (int i = 0; i < n - 1; ++i) {
            swapped = false;

            for (int j = 0; j < n - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }

            if (!swapped)
                break;
        }
    }

    void display() const {
        for (int x : arr)
            cout << x << " ";
        cout << "\n";
    }

    vector<int> getArray() const {
        return arr;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "\nOriginal array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    BubbleSorter sorter(arr);
    sorter.sort();

    cout << "Sorted array:   ";
    sorter.display();

    return 0;
}
