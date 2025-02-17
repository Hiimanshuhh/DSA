#include <iostream>
using namespace std; 
int main(){
  int n;
  cout<<"Enter Your Array Size : ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter Element : ";
    cin>>arr[i];
  }
  for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
  }
  cout<<endl;
  int sum = 1;
  for(int k=0;k<n;k++){
    sum = sum*arr[k];
  }
  cout<<"The Sum Of Array Is : "<<sum;
  return 0;
}