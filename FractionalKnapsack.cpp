#include<bits/stdc++.h>
using namespace std;
int main(){
    float n;
    cin>>n;
    float wt[n], val[n];
    for(int i=0;i<n;i++)
        cin>>wt[i];
    for(int i=0;i<n;i++)
        cin>>val[i];
    int cap;
    cin>>cap;
    float temp[n];
    for(int i=0;i<n;i++){
        temp[i]=val[i]/wt[i];
    }
    float res=0;
    int currcap=cap;
    sort(temp, temp+n, greater<int>());
    for(int i=0;i<n;i++)
}