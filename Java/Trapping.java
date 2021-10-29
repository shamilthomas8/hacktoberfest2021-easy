
public class Trapping {

	public static void main(String[] args) {
		
		int[] arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
		
		int[] temp = new int[arr.length];
		
		int left_max = arr[0];
		for(int i=0; i<arr.length; i++) {
			if(arr[i] > left_max)
				left_max = arr[i];
			
			temp[i] = left_max;
		}
		
		
		int right_max = arr[arr.length-1];
		for(int i=arr.length-1; i>=0; i--) {
			if(arr[i] > right_max)
				right_max = arr[i];
			
			temp[i] = Math.min(temp[i], right_max);			
		}
		
		
		int count = 0;
		for(int i=0; i< arr.length; i++) {
			temp[i] = temp[i]-arr[i];
			count+=temp[i];
		}
		
		System.out.println(count);

	}

}
