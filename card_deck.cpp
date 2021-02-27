#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);//For faster I/O
    vll vn,vo;
    int t;
    ll n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            cout<<'1'<<endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                cin>>x;
                vo.push_back(x);
            }
            while(!vo.empty())
            {
                vector<ll>::iterator pos,temp;
                pos=max_element(vo.begin(),vo.end());
                temp=pos;
                while(pos!=vo.end())
                {
                    x=*pos;
                    vn.push_back(x);
                    pos++;
                }
                vo.erase(temp,vo.end());
            }
            for(int i=0;i<n;i++)
                cout<<vn[i]<<' ';
            
            cout<<endl;
            vo.clear();
            vn.clear();
        }
    }
    return 0;
}