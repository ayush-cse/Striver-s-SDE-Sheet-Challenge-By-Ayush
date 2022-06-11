#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
  // Write your code here.
    
    if(n <= 1) return -1;
    
    int s = arr[0];
    int f = arr[arr[0]];
    
    // meeting point
    while(s != f)
    {
        s = arr[s];
        f = arr[arr[f]];
    }
    
    // take one to intial pos
    s = 0;
    while(s != f)
    {
        s = arr[s];
        f = arr[f];
    }
    
    return s;
    
}

