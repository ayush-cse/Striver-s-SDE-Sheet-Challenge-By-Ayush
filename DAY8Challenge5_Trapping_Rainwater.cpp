#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
    
    long leftMAX[n]; // for a particuular building iske left main mx
    long rightMAX[n];//for a particuular building iske right main mx
    
    leftMAX[0] = arr[0]; // iske left main kch h hi nhi
    for(int i = 1; i < n; i++)
    {
        leftMAX[i] = max(leftMAX[i - 1], arr[i]);
    }
    
    rightMAX[n - 1] = arr[n - 1]; // iske right main kch h hi nhi
    for(int i = n - 2; i >= 0; i--)
    {
        rightMAX[i] = max(rightMAX[i + 1], arr[i]);
    }
    
    // hr ek building ke uper paani kitna hai aur total sum
    long sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        sum += min(leftMAX[i], rightMAX[i]) - arr[i];
    }
    
    return sum;
}