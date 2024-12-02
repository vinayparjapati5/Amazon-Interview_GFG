 int firstoccurence(vector<int>&nums, int target){
        int n = nums.size();

        int start =0;
        int end = n-1;
        int first = -1;

        while(start<=end){
            int mid = start + (end-start)/2;

            if(nums[mid]==target){
                first = mid;
                end = mid-1;
            }
            else if(nums[mid]<target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return first;
    }

        int lastoccurence(vector<int>&nums, int target){
        int n = nums.size();

        int start =0;
        int end = n-1;
        int last = -1;

        while(start<=end){
            int mid = start + (end-start)/2;

            if(nums[mid]==target){
                last = mid;
                start = mid+1;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return last;
    }
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        
        int first = firstoccurence(arr,x);
        
        if(first ==-1){
            return {-1,-1};
        }
        
        int last = lastoccurence(arr,x);

        return {first,last};
        
        
    }
};
