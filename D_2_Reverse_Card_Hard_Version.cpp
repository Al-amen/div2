#include<iostream>
#include<algorithm>
using namespace std;
int GCD(int a,int b){
    if(b==0)return a;
    return GCD(b,a%b);
}
long long pairs_num(int n,int m){
    long long solution=0;
    for(int a=1;a<=n;++a){
        for(int b=1;b<=m;++b){
            if(GCD(a,b)%(a+b)==0){
                solution++;
            }
        }
    }
    return solution;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long long result=pairs_num(n,m);
        cout<<result<<endl;
    }
    return 0;
}