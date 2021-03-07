class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector <int> result;
        
        for(auto it1 = nums.begin(); it1 != nums.end(); it1++){
            
            int value = target - *it1;
            
            auto it2 = find(it1+1, nums.end(), value);
            
            //  found the number
            if (it2 != nums.end()){
                
                result.push_back(it1 - nums.begin());
                result.push_back(it2 - nums.begin());
                break;
                
            }
            
            
        }
        
        
        return result;
    }
};
