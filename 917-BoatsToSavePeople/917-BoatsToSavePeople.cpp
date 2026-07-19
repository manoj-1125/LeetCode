// Last updated: 7/19/2026, 11:59:28 PM
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