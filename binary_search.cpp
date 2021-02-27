#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define p_b pop_back
#define si stack<int>
#define sll stack<ll>
#define sc stack<char>
#define vi vector<int>
#define vll vector<ll>
#define mii map<int, int>
#define msi map<string, int>
#define mci map<char, int>
#define qc queue<char>
#define qi queue<int>
#define qll queue<ll>
using namespace std;

int binarysearch(int arr[],int n,int key)
{
    int s=0,mid;
    int e=n-1;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
            e=mid-1;
        else
            s=mid+1;
    }
    return -1;
}
int main()
{
    
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    sort(arr,arr+n);
    int key;
    cin>>key;

    cout<<binarysearch(arr,n,key)<<endl;
    cout<<endl;
    return 0;
}