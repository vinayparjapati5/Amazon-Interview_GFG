 vector<int> findDuplicates(vector<int>& arr) {
        
        int n = arr.size();
        
        vector<int>ans;
        
        unordered_map<int,int>mpp;
        
        for(int x: arr){
            mpp[x]++;
        }
        
        for(auto y : mpp){
            if(y.second > 1){
                ans.push_back(y.first);
            }
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }
