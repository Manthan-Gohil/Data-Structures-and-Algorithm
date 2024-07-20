#include<iostream>
#include<vector>
using namespace std;

// Question: find the pivot index (index where sum of all elements to left of index equals
// to sum of all elements to the right of index).

// Method 1.
int pivotindex(vector<int> &arr) {
    int size = arr.size();
    for(int i = 0; i < size; i++) {
        int lsum = 0;
        int rsum = 0;

        for(int j = 0; j < i; j++) {
            lsum += arr[j];
        }
        for(int j = i + 1; j < size; j++) {
            rsum += arr[j];
        }

        cout << "For index: " << i << " Left Sum = " << lsum << " Right Sum = " << rsum << endl;
        if(lsum == rsum) {
            return i;
        }
    }
    return -1;
}

// Method 2.
int pivotindex2(vector<int> &arr) {
    int n = arr.size();

    vector<int> lsum(n, 0);
    vector<int> rsum(n, 0);
    // Calculate lsum array
    for(int i = 1; i < n; i++) {
        lsum[i] = lsum[i-1] + arr[i-1]; 
    }
    // Calculate rsum array
    for(int i = n-2; i >= 0; i--) {
        rsum[i] = rsum[i+1] + arr[i+1];
    }
    // Check
    for(int i = 0; i < n; i++) {
        if(lsum[i] == rsum[i]) {
            return i;
        }
    }
    return -1;     
}

int main() {
    vector<int> arr {1, 7, 3, 6, 5, 6};

    // Using Method 1
    int pivot1 = pivotindex(arr);
    cout << "Pivot Index (Method 1): " << pivot1 << endl;

    // Using Method 2
    int pivot2 = pivotindex2(arr);
    cout << "Pivot Index (Method 2): " << pivot2 << endl;

    return 0;
}
