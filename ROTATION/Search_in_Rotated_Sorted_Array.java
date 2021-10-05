//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
class Search_in_Rotated_Sorted_Array {
    public boolean search(int[] nums, int target) {
        
        int start=0, end=nums.length-1;
        
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(target == nums[mid])
                return true;
            
            // Only when values in start, end & mid indices are same we can't determine which side the array is rotated
            // So we decrement both start and end indices in this scenario.
            // Rest is same as what we did when unique values are there in a rotated array in Leetcode Problem 33.
            if (nums[start] == nums[end] && nums[start] == nums[mid]){
                start++; end--;
            } 
            // When the left half of the array is sorted
            else if (nums[start] <= nums[mid]){
                if(target >= nums[start] && target < nums[mid])
                    end = mid - 1;
                else
                    start = mid + 1;
            } 
            // When the right half of the array is sorted
            else {
                if(target <= nums[end] && target > nums[mid])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return false;
    }
}