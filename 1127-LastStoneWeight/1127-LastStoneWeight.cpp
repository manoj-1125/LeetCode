// Last updated: 7/19/2026, 11:59:23 PM
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(),stones.end());
        int x=0,y=0;
        while(!pq.empty()){
            y=pq.top();pq.pop();
            if(pq.empty())
                return pq.top();
            x=pq.top();pq.pop();
            if(x<y){
                pq.push(y-x);
            }
        }
        return 0;
    }
};