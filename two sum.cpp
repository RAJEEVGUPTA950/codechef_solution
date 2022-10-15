//O(n) hashmaps C++ Two Sum leetcode 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0; i<=nums.size();i++){
            int compliment=target-nums[i];
            if(map.count(compliment)==1){
                return {map[compliment],i};
            }
            else{
                map[nums[i]]=i;
            }
            
     	}
        return {-1,-1};
        
    }
};
