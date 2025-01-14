class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        std::unordered_map<int, int> umap;
        for(int i = 0; i < nums.size(); i++){
            int tmp = target - nums[i];
            if(umap.contains(tmp)){
                ans.push_back(umap[tmp]);
                ans.push_back(i);
                break;
            }else{
                umap[nums[i]] = i;
            }
        }
        return ans;
    }
};
