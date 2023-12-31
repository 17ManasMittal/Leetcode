class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        vector<int> res(2);
        res[0]=-1;
        res[1]=-1;
        while(i<=j){
            if((numbers[i]+numbers[j])==target){
                res[0]=i+1;
                res[1]=j+1;
                return res;
            }
            else if((numbers[i]+numbers[j])>target){
                j=j-1;
            }
            else{
                i=i+1;
            }
        }
        return res;
    }
};
