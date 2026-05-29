#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;
void Sort(vector<int>& v) {
    for (int i = 0; i < v.size() - 1; i++) {
        for (int j = 0; j < v.size() - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
}
void print(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main() {
    // Default data
    vector<int> v1;
    v1.push_back(5);
    v1.push_back(2);
    v1.push_back(8);
    v1.push_back(1);
    v1.push_back(9);
    v1.push_back(3);
    vector<int> v2 = v1;
    cout << "Original Vector: ";
    print(v1);
    // -------- User-defined sort timing --------
    clock_t start1 = clock();
    Sort(v1);
    clock_t end1 = clock();
    double time1 = double(end1 - start1) / CLOCKS_PER_SEC;
    cout << "\nUser-defined Sorted: ";
    print(v1);
    cout << "Time taken: " << time1 << " seconds\n";
    // -------- STL sort timing --------
    clock_t start2 = clock();
    sort(v2.begin(), v2.end());
    clock_t end2 = clock();
    double time2 = double(end2 - start2) / CLOCKS_PER_SEC;
    cout << "\nSTL Sorted: ";
    print(v2);
    cout << "Time taken: " << time2 << " seconds\n";
    return 0;
}
