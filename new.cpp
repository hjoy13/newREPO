#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>>s;
int size = s.size();
sort(s.begin(),s.end());
string max="";
int count=0;
for(int i=0; i<s.length(); i++){
    int j=0;
    if(max[j]<s[i]) {
        max=s[i];
        count=1;
    }
    else if(max[j]==s[i]){
        count++;
        j++;
    }    
}
for(int i=0; i<count; i++){
    cout<<max;
}cout<<endl;






return 0;
}