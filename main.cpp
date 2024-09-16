#include <iostream>
#include <vector>
#include <algorithm> // For swap function

using namespace std;

// This function performs a stable selection sort on a vector of any type.
// `pos` specifies the index to sort by if sorting a vector of pairs.
template <typename T>
void stableSelectionSort(vector<T>& arr, int pos) {
    
}

int main() {
    // Example usage with an array of pairs
    vector<pair<int, int>> arr = {{3, 1}, {2, 2}, {1, 3}, {2, 1}};

    // Print original array
    cout << "Original array:" << endl;
    for (const auto& p : arr) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    // Sort by the second element of the pairs
    stableSelectionSort(arr, 1);

    // Print sorted array
    cout << "Sorted array by the second element:" << endl;
    for (const auto& p : arr) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    return 0;
}
