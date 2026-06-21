class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>seen;// has set for frequency count
        for(int num:nums){
            // if number already seen make it true or else false
            if(seen.find(num)!=seen.end()){
                return true;
            }
            // otherwise put in set
            seen.insert(num);
        }
        return false;

    }
};