class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        // Count frequency
        for(int num : nums) {
            freq[num]++;
        }

        // Max heap: {frequency, number}
        priority_queue<pair<int, int>> pq;

        for(auto p : freq) {
            pq.push({p.second, p.first});
        }

        vector<int> ans;

        // Get top k frequent elements
        while(k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};