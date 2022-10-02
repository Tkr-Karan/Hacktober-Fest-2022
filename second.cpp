#here I write thee code for basic code where we print the total no. sum from 1 to n.

// brute force approach TC: O(N) SC: O(1)
#include<iostream.h>
using namespace std;

int main(){
  int n;
  
  cin >> n;
  
  int sum = 0;
  for(int i = 1; i <= n; i++) {
    sum += i;
  }
  cout << sum << endl;
  
  return 0;
}


// optimal solution TC: O(1), SC: O(1)
#include<iostream.h>
using namespace std;

int main(){
  int n;
  
  cin >> n;
  
  int sum = (n*(n+1))/2;
  
  cout << sum << endl;
  
  return 0;
}
