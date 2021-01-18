// First negative integer in every window of size k 
// Easy Accuracy: 50.28% Submissions: 21025 Points: 2
// Given an array and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k.

// Input:
// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the array. The next line contains n space separated integers forming the array. The last line contains the window size k.

// Output:
// Print the space separated negative integer starting from the first till the end for every window size k. If a window does not contain a negative integer , then print 0 for that window.


#include<bits/stdc++.h>
using namespace std;

void findNegative(int arr[], int n, int k) {
    queue <int> neg;
    
    for(int i=0, j=0; j<n;) {
    
        if(j-i+1 <= k) {
            if(arr[j] < 0)
                neg.push(arr[j]);
            j++;
        } else {
            if(neg.size() > 0){
                cout<<neg.front()<<" ";
            } else {
                cout<<"0"<<" ";
            }
            if(arr[i] == neg.front()){
                neg.pop();
            }
            i++;
        }
    }
    
    if(neg.size() != 0)
        cout<<neg.front()<<" ";
    else cout<<"0 ";

    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int queries;
    cin>>queries;
    
    while(queries--)
    {
        int n,k;
        cin>>n;
        
        int arr[n];
        
        for(int i=0;i<n;i++) 
            cin>>arr[i];
        
        cin>>k;
        
        findNegative(arr, n, k);
    }
    
    
	return 0;
}