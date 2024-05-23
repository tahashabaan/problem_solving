class Solution {
public:
    int jump(vector<int>& nums) {
        int n =nums.size();
        int goal = n-1, cnt=0, jumb=0, end=0;
        if(n<=1) return 0;
        // else if(nums[0] >= goal) return 1;
        for(int i=0; i<n; i++)
           { 


               //Get a large jump 
              jump = max(jump, i+nums[i]);
               // reach the last number in the array break program with increase answer
              if(jump >= goal) {
                cnt++; break;
              }
               
               if(i == end ) {
                 cnt++;
                 end=jumb;
               }
           }

          return cnt;
    }
};
