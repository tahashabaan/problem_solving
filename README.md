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


