#include<bits/stdc++.h>
class Solution {
public:
    string reverseWords(string S) {
        int start=0;
        int end=0;
        int n=S.length();

        while(start<n){
            while(start<n && S[start]==' '){
                start++;
            }
            end=start;
            while(end<n && S[end]!=' '){
                end++;

            }
            reverse(S.begin() + start, S.begin() + end);
        start=end;
        }

    return S;
    }
};