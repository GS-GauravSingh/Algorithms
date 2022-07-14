#include<bits/stdc++.h>
using namespace std;

// Int type 
int kadane_I(int * arr, int n){
    int currSum=0, maxSum=-1e9;
    for (int i = 0; i < n; i++)
    {
        currSum+=arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
    
}
// Long Long type 
long long kadane_LL(int * arr, int n){
    long long currSum=0, maxSum=-1e18;
    for (int i = 0; i < n; i++)
    {
        currSum+=arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}


int main(void){
}