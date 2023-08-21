class Solution {
public:
    int findKthPositive(vector<int>& vec, int k) {
        int low=0,high=vec.size()-1;
        int mid=low+(high-low)/2;
        while(low<=high){
            int missing=vec[mid]-(mid+1);
            if(missing<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            mid=low+(high-low)/2;
        }
        return k+high+1;
    }
};
