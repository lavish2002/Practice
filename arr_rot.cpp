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
void reverse_arr(int arr[],int start,int end)
{
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);//For faster I/O
    int n,d,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        reverse_arr(arr,0,d-1);
        reverse_arr(arr,d,n-1);
        reverse_arr(arr,0,n);
        for(int i=0;i<n;i++)
            cout<<arr[i]<<' ';
        cout<<endl; 
    }
    
    
    
    return 0;
}