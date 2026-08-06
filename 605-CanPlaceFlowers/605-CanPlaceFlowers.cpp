// Last updated: 8/6/2026, 10:54:05 PM
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0)
            return true;
        int size=flowerbed.size();
        for(int i=0;i<size;i++){
            bool leftempty=(i==0 || flowerbed[i-1]==0);
            bool rightempty=(i==size-1 || flowerbed[i+1]==0);
            if (flowerbed[i] == 0 && leftempty && rightempty) {
                flowerbed[i] = 1;
                n--;
                if (n == 0)
                    return true;
            }
        }
        return n==0;
    }
};