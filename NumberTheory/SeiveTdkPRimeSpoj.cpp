#include<bits/stdc++.h>
using namespace std;
#define fer(i,a,b) for(re i = a; i<b; ++i)
#define re register int
#define pb push_back
#define ll long long
#define mod 1000000007
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;

vi primes;
bool arr[86028121];

void seive(){
    int maxN=86028120;
    arr[0]=arr[1]=true;

    for(int i=2;i*i<=maxN;i++){
        if(arr[i]==false){
            for(int j=i*i;j<=maxN;j+=i)
            arr[j]=true;
        }
    }

    for(int i=2;i<=maxN;i++){
        if(!arr[i])
        primes.pb(i);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int q,n;
    cin>>q;
    seive();
    while(q--){
        cin>>n;
        cout<<primes[n-1]<<endl;
    }
    return 0;
}
