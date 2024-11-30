vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        
        sort(arr.begin(),arr.end());
        
        int l = 0, r=n-1;
        vector<vector<int>>ans;
        
        while(l<r){
            
            int sum = arr[l]+arr[r];
            
            if(sum==0){
                
                ans.push_back({arr[l],arr[r]});
                
                int leftval = arr[l];
                int rightval = arr[r];
                
                while(l<r && arr[l]==leftval) l++;
                while(l<r && arr[r]==rightval) r--;
                
            }
            else if(sum<0){
                l++;
            }
            else{
                r--;
            }
            
            
        }
        
        return ans;
        
    }
