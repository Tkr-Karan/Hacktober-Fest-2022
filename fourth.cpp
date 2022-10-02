#Kadane's algorithm

#include<iostream.h>
using namespace std;

int main(){
  
  int arr[] = { 1, 2, 3, 4, -10};
  
  int sum = 0;
  int ans = INT_MIN;
        for(int i = 0; i < n; i++) {
            sum = sum+A[i];
            ans = max(ans, sum);
            if(sum < 0) {
                sum = 0;
            }
        }
  cout << ans << endl;
  
  return 0;
}
