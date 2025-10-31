#include <iostream>
using namespace std;

class BubbleSorter {
private:
    int arr[100];  // fixed-size array
    int size;      // actual number of elements

public:
    BubbleSorter(int inputArr[], int n) {
        size = n;
        for (int i = 0; i < n; ++i)
            arr[i] = inputArr[i];
    }

    void sort() {
        bool swapped;

        for (int i = 0; i < size - 1; ++i) {
            swapped = false;

            for (int j = 0; j < size - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }

            if (!swapped)
                break;  // optimization: stop if array already sorted
        }
    }

    void display() const {
        for (int i = 0; i < size; ++i)
            cout << arr[i] << " ";
        cout << "\n";
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n > 100) {
        cout << "Maximum array size is 100.\n";
        return 1;
    }

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "\nOriginal array: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";

    BubbleSorter sorter(arr, n);
    sorter.sort();

    cout << "Sorted array:   ";
    sorter.display();

    return 0;
}
