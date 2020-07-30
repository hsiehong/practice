// brute force method
class Solution {
public:
    int strStr(string haystack, string needle) {
        bool flag1,flag2;int idx=0;
        int m=haystack.length();
        int n=needle.length();
        if(n==0)return 0;
        for(int i=0;i<=m-n;i++){
            if(haystack[i]==needle[0] && (m-i>=n)){
                flag2=false;
                idx=i;
                for(int j=0,k=i;j<n;j++,k++){
                    if(haystack[k]!=needle[j]){
                        flag2=true;
                        break;
                    }
                }
                if(flag2==false)
                    return idx;
                else continue;
            }
        }

        return -1;
    }
};
