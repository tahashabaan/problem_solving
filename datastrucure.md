## 88.:: Merge Sorted Array  =>   =>
solution: Merge Sorted Arra
```
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
```
     /************************************************************************/
     second  problem => 
     27. Remove Element => solution =>
   ```   public int removeElement(int[] nums, int val) {
      int k=0; 
      for (int i=0; i<nums.length; i++){
          if (nums[i] != val){
              nums[k] = nums[i];
              k++;
          }
      }
      return k;
    }
```
         /************************************************************************/
third problem =>
       ```
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
```
         /************************************************************************/
fourth problem => . Best Time to Buy and Sell Stock => solution=>
       ```
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
```

         /************************************************************************/
PRoblem%5
80. Remove Duplicates from Sorted Array II => soul =>
       ```
public int removeDuplicates(int[] nums) {
    if (nums.length == 0) {
        return 0; // If the array is empty, no duplicates to remove
    }
    
    int count = 1; // Start the count at 1 since the first element is always unique
    int k = 1; // Maintain a separate index for the updated array
    
    for (int i = 1; i < nums.length; i++) {
        if (nums[i] == nums[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        
        if (count <= 2) { // Allow at most 2 duplicates
            nums[k] = nums[i]; // Move unique element to the updated array
            k++;
        }
    }
    
    return k;
}
## 189. Rotate Array
sol: 189. Rotate Array
```
private void swap(int nums [], int start, int end){
            while(start < end){
               int swap= nums[start];
               nums[start] = nums[end];
               nums[end] =swap;
               start++;
               end--;
            }
        }

public void rotate(int[] nums, int k) {
      k= k%nums.length; // k=3
      swap(nums, 0, nums.length - 1);
      swap(nums, 0, k - 1);
      swap(nums,k, nums.length - 1);

       
        }

```
At first, I used a method called a swap to use three times
1-to swap between left and right
2-to swap left with self
3- to swap right with self

## 55. Jump Game
[55. Jump Game](https://leetcode.com/problems/jump-game/description/?envType=study-plan-v2&envId=top-interview-150)
#### sol:
```
 public boolean canJump(int[] nums) {
         
 
         int pos=nums.length-1;
         
         
         for (int i=nums.length-2; i>=0; i--){  
            if (i + nums[i] >=pos) pos=i;
         }
      
         
         return pos==0;
    }
```

[21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/description/?envType=study-plan-v2&envId=top-interview-150)
```
public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode list = new ListNode();
        ListNode current = list;

  while(list1 != null && list2 != null){

     if (list1.val <= list2.val ){
           current.next = list1;
           list1=list1.next;
        }  else{
           current.next = list2;
           list2=list2.next;        
        }

        current=current.next;
}

while(list1 != null){
         current.next = list1;
          list1=list1.next;
         current=current.next;
}

while(list2 != null){
     current.next = list2;
    list2=list2.next;
    current=current.next;
}


return list. next;
    } 
```

[141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/submissions/?envType=study-plan-v2&envId=top-interview-150)

```
public boolean hasCycle(ListNode head) {
       ListNode first = head;
       ListNode last = head;
         while (first !=null && first.next !=null){
           last = last.next;
           first= first.next.next;
           if(last == first ) return true;

         }
         return false;
    }
```

[206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/description/)
```
//   Definition for singly-linked list.
//   struct ListNode {
//       int val;
//       ListNode *next;
//       ListNode() : val(0), next(nullptr) {}
//       ListNode(int x) : val(x), next(nullptr) {}
//       ListNode(int x, ListNode *next) : val(x), next(next) {}
//   };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        /*
        steps =>
        1-declare previous list then iterate on the list 
        2-reverse each node in the list
        */
         ListNode *prev=nullptr;
         while(head){
             ListNode *temp=head;
             head=head->next;
             temp ->next=prev;
             prev=temp;
         }
         return prev;
    }
 
};
```
/********************************************?/

[141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/description/)
### description
using two pointers first slow by one step second fast two-step  when two pointers refer to the same node it cycle
```
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // بسة اللح الرحمت الرحسم
        if(!head  || !head->next)  return false;
        // if(head && head->next) return true;
        // ListNode *fast=head;
        // two-pointer to check it exists in the same point
        ListNode *fast=head;
        // ListNode *ptr=head;
        while(fast && fast->next){
             head=head->next;
             fast = fast->next->next;
            if(fast == head) return true;
            //  slow=slow->next;
        }
         
        return false;// how solve it ?  => 
    }
};;```


         


