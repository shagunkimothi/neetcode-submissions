class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // two string arr anagram if they have same char count
        // we need frequency count so we need hashmap for key
        // if we sort each string all anagram
        unordered_map<string,vector<string>>mpp;
        // for each string sort it then use sorted string as key and push original string to group
        for(string s : strs)
{
    string temp = s;

    sort(temp.begin(), temp.end());

    mpp[temp].push_back(s);
}// key sorted string and value vector of original string
  vector<vector<string>> result;
  for(auto p : mpp)
{
    result.push_back(p.second);
}
return result;
// p.first  = sorted string key

// p.second = vector of anagrams
    }
};
