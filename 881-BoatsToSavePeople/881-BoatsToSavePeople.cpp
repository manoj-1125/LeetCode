// Last updated: 9/4/2026, 11:56:24 PM
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int left=0,right=people.size()-1,boat=0;
        sort(people.begin(),people.end());
        while(left<=right){
            if(people[left]+people[right]<=limit){
                left++;
            }
            right--;
            boat++;
        }
        return boat;
    }
};