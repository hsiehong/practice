#include <bits/stdc++.h>
#define N 256

using namespace std;

class chr{
    public:
        char alpha;
        int cnt;
        chr(){
            cnt=0;
        }
};
bool cmp(chr a,chr b){
    if(a.cnt==b.cnt)return a.alpha<b.alpha;
    return a.cnt>b.cnt;
}
void sol(){
    int ncase;
    char input[N];
    chr *arr=new chr[26];
    for(int i=0;i<26;i++)
        arr[i].alpha=i+'A';
    cin>>ncase;
    getchar();
    while(ncase--){
        fgets(input,N,stdin);
        int len=strlen(input);
        for(int i=0;i<len-1;i++){
            if(input[i]>='a' && input[i]<='z')
                arr[input[i]-'a'].cnt++;
            else if(input[i]>='A' && input[i]<='Z')
                arr[input[i]-'A'].cnt++;
        }
    }
    sort(arr,arr+26,cmp);
    for(int i=0;i<26;i++){
        if(arr[i].cnt>0)
            cout<<arr[i].alpha<<" "<<arr[i].cnt<<endl;
    }
}
int main(int argc,char** argv){
    sol();
    return 0;
}
