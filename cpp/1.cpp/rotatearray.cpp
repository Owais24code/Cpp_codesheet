#include <bits/stdc++.h> 
#include <iostream>
using namespace std;


void rotateLeft(int n, vector<int> &arr, int k) {  
    int t = 0;  
    int temp[n+1];
    for (int i = k; i < n; i++) {  
          temp[t] = arr[i]; 
           }

    for (int i = 0; i < k; i++) {   
         temp[t] = arr[i]; 
          }

     for (int i = 0; i < n; i++) { 
            cout << temp[i]; 
          }
        }

int main() {
vector<int> arr;  
int n,k; 
cin>>n;  
cin>>k;
rotateLeft(n, arr, k);
return 0; 
}
