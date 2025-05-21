#include <iostream>
#include <algorithm> // Thư viện chứa hàm sort

int main() {
    int arr[] = {3, 6, 8, 9, 1, 0, 2, 5, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]); // Tính số phần tử trong mảng

    // Sắp xếp mảng theo thứ tự tăng dần
    std::sort(arr, arr + n);

    // In ra mảng sau khi sắp xếp
    std::cout << "Mang sau khi sap xep tang dan: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
