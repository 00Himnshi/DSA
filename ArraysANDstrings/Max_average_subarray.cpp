class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=-1000000;
        int j=k;int n=nums.size();int p=0;
        if(k==1 && n==1){return nums[0];}
        double cursum=0;
        for(int i=0;i<k;i++){
            cursum+=nums[i];
        }
        cursum=cursum/k;
        ans=cursum;
        while(j<n){
            cursum=cursum-((nums[p]*1.0000)/k);
            p++;
            cursum=cursum+((nums[j]*1.0000)/k);
            ans=max(ans,cursum);
            j++;
        }
        return ans;
    }
};
/*TLE:
while(j<n){
            double cursum=0;int prev=j;
            while(p<k && j<n){
                cursum+=nums[j];
                j++;p++;
            }
            cursum=cursum/k;
            if(p<k){break;}
            ans=max(ans,cursum);
            j=prev+1;
            p=0;
        }
*/