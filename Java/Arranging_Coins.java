//https://leetcode.com/problems/arranging-coins/
class Arranging_Coins {
    public int arrangeCoins(int n) {
        long start=1,end=n;
        while(start<=end)
        {
            long mid=start+(end-start)/2;
            long ans=mid*(mid+1)/2;
            
            System.out.println(mid+"  "+ans+"  "+start+"  "+end);
            if(ans>n|| ans<0)
            {
                end=mid-1;
            }
            else if(ans<n)
            {
                start=mid+1;
            }
            else
            {
                return((int)mid);
            }
        }
        return((int)end);
    }
}
