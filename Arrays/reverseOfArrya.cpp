#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Get array size
    int arr2[n];
    for(int i =0; i<n; i++){
      arr2[i] = arr[n-1-i];
    }
    for(int j=0; j<n;j++){
      cout<<arr2[j]<<" ";
    }
  

    return 0;
}