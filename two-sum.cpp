class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> _map;
        for(int i =0;i<nums.size();++i){
            int num = nums[i];
            int compliment = target - num;
            auto it = _map.find(compliment);
            if(it!=_map.end()){
                return {it->second,i};
            }
            _map[num] = i;

        }
        return result;
}
};
