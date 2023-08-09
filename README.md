88.firstProblem::::: Merge Sorted Array  => solution  =>
89.  public void merge(int[] nums1, int m, int[] nums2, int n) {
       int i= m-1; 
       int j = n-1; 
       int k= m + n -1;
       
       while( j>=0 )
       {
           if (i >= 0 && nums1[i] > nums2[j]){
               nums1[k--] = nums1[i--];
           } else {
               nums1[k--] = nums2[j--];
           }
       }
     }
     /************************************************************************/
     second  problem => 
     27. Remove Element => solution =>
      public int removeElement(int[] nums, int val) {
      int k=0; 
      for (int i=0; i<nums.length; i++){
          if (nums[i] != val){
              nums[k] = nums[i];
              k++;
          }
      }
      return k;
    }
         /************************************************************************/
third problem =>
169. Majority Element => solution =>
  public int majorityElement(int[] nums) {
       
       int candidate = nums[0];
      int count = 1;
    
    for (int num: nums) {
        if (num == candidate) {
            count++;  
        } else {
            count--;
            if (count == 0) {
                candidate = num;
                count = 1;
            }
        }
    }
   return candidate;
 }
         /************************************************************************/
fourth problem => . Best Time to Buy and Sell Stock => solution=>
    public int maxProfit(int[] prices) {
        int max_profit = 0;
        int min_price =Integer.MAX_VALUE;
        int sp =0; // sold price equal diferrence between 
        
        // 7,6,4,3,1
        for(int price: prices){
          
            if(price<min_price){
                min_price = price;
            }
            sp = price-min_price;
            if (max_profit < sp) 
                max_profit = sp;
        }
        return max_profit;
    }


         


