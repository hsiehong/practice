#include <iostream>

using namespace std;

unsigned int revInt(int n){
    unsigned int rev=0;
    while(n){
        rev*=10;
        rev+=n%10;
        n/=10;
    }
    return rev;
}
int main(){
    int ncase;
    unsigned int input;
    cin>>ncase;
    while(ncase--){
        int times=1;
        cin>>input;
        input+=revInt(input);
        while(input!=revInt(input)){
            input+=revInt(input);
            times++;
        }
        cout<<times<<" "<<input<<endl;
    }

    return 0;
}
