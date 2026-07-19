// Last updated: 7/19/2026, 11:59:42 PM
class Solution {
public:
    int maximumSwap(int num) {
        string str=to_string(num);
        vector<int> index(10);
        for(int i=0;i<str.size();i++){
            index[str[i]-'0']=i;
        }
        for(int i=0;i<str.size();i++){
            for(int d=9;d>str[i]-'0';d--){
                if(index[d]>i){
                    swap(str[i],str[index[d]]);
                    return stoi(str);
                }
            }
        }
        return num;
    }
};