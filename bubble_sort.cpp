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
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=1;i<=n-1;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<' ';
    cout<<endl;
    return 0;
}