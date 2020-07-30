#include <iostream>

using namespace std;

int cnt(int in){
    int res=0;
    while(in){
        res+=in%10;
        in/=10;
    }
    return res;
}
void sol(){
    int in;
    while(1){
        cin>>in;
        if(!in)break;
        while(in>9){
            in=cnt(in);
        }
        cout<<in<<"\n";
    }
}
int main(int argc,char** argv){
    sol();
    return 0;
}
