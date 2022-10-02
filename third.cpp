#here in this we are creating and see how to print an subarrays in an array.

#include<iostream.h>
usung namespace std;

int main(){
  
//   creating n  size array
  int n;
  cin >> n;
  
  int arr[n];
  
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  
  for(int i = 0; i < n; i++){
    cout << arr[i] << endl;
  }
  
//   printing the subarray in the array. in the TC: O(N^3), SC: O(1)
  for(int i =0 ; i < n; i++){
    for(int j = i; j < n; j++){
      for(int k = i; k <= j; k++){
        cout << arr[k];
      }
      cout << endl;
    }
  }
        
  return 0;
  
}
