#include <iostream>
#include <algorithm>
using namespace std;

int a[10];
int num[10];
bool c[10];

void go(int index, int start, int n, int m){
    if(index==m){
        for(int i=0; i<m; i++){
            cout<<num[a[i]];
            if(i !=m-1) cout<<' ';
        }
        cout<<'\n';
        return;
    }

    for(int i= start; i<n; i++){
        // if(c[i]) continue;
        a[index] = i;
        go(index+1,i,n,m);

    }

}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>num[i];
    }
    sort(num,num+n);
    go(0,0,n,m);
}