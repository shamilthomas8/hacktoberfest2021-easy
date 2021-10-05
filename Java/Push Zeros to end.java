/*
Sample Input 1:
1
7
2 0 0 1 3 0 0

Sample Output 1:
2 1 3 0 0 0 0
*/
public class Solution {  

    public static void pushZerosAtEnd(int arr[]) {
		int i=0,k=0;
        int n=0;
        while(i<arr.length){
            if(arr[i]!=0){
               n= arr[i];
               arr[i]=arr[k];
               arr[k]=n; 
               k++;
            } 
             i++;
        }
    }
}
