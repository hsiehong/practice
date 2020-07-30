#include <iostream>

using namespace std;

int main(int argc,char** argv){
    int in1,in2;
    while(1){
        cin>>in1>>in2;
        int carryCnt=0,cary=0;
        if(in1==0 && in2==0)break;
        while(in1 || in2){
            int t=(in1%10+in2%10+cary);
            if(t>9)
                carryCnt++;
            cary=(t>9)?1:0;
            in1/=10;
            in2/=10;
        }
        if(carryCnt>1)cout<<carryCnt<<" carry operations.\n";
        else if(carryCnt==1)cout<<"1 carry operation.\n";
        else cout<<"No carry operation.\n";
    }
    return 0;
}
