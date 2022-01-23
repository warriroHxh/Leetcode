#include <string>
#include <string.h>
using namespace std;

class Solution {
public:
    string replaceSpace(string s) {
        int nblank = 0;
        int len = s.size();
        for(char c : s){
            if(c == ' ')
                ++nblank;
        }
        s.resize(len + nblank * 2);
        for(int i = len -1,j = s.size() -1; i > 0; --i,--j){
            if(s[i] == ' '){
                s[j] = '0';
                s[j-1] = '2';
                s[j-2] = '%';
                j -= 2;
            }
            else{
                s[j] = s[i];
            }
        }
        return s;
    }
};