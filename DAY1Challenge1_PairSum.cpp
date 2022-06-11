#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
      vector<vector<int>> a;
   for(int i = 0; i < arr.size()-1; i++){
       vector<int> p;
       for(int j = i+1; j < arr.size(); j++){          
           if((arr[i] + arr[j]) == s){
               p.push_back(min(arr[i],arr[j]));
               p.push_back(max(arr[i],arr[j]));
               a.push_back(p);
           }
       }
   }
   sort(a.begin(),a.end());
   return a;
}