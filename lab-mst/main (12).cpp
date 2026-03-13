//smallest divisor

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1, h=*max_element(nums.begin(),nums.end());
        
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            int result=0;
            for(int i=0;i<nums.size();i++)
            {
               result+= ceil((double)nums[i]/mid);
            }
            if(result<=threshold)
            {
               h=mid-1;
            }
            else
            {
                
                l=mid+1;
            }

        }
        return l;
    }
};