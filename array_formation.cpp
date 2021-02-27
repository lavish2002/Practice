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
bool checkPrime(int n)
{
    if(n==1)
        return false;
    
    for(int i=2;i<n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);//For faster I/O
    int n,x;
    cin>>n;
    qi a;
    si b;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(checkPrime(x))
            a.push(x);
        else
            b.push(x);
    }
    while(!a.empty())
    {
        cout<<a.front()<<' ';
        a.pop();
    }
    cout<<endl;
    while(!b.empty())
    {
        cout<<b.top()<<' ';
        b.pop();
    }

    return 0;
}