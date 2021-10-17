import java.util.*;

class Calculator 
{
  private int seed;
  private Random rand1;

  private int primeCallCount;
  private int isPrimeCallCount;

  public Calculator(int seed) {
    this.seed = seed;
    rand1 = new Random(seed);
  }

  public boolean isPrime(int n) {
    isPrimeCallCount++;
    if (n == 0) {
      return false;
    }
    int prime = 0;
    int index = 0;
    while (prime < n) {
      index++;
      prime = kthPrime(index);
    }
    return (prime == n);
  }

  public int kthPrime(int n) {
    primeCallCount++;
    if(n < 1) {
      throw new IllegalArgumentException();
    }
    Set<Integer> primeSet = new HashSet<Integer>();
    int number = 2;
    while (true) {
      boolean result = true;
      for (int prime : primeSet) {
        if (number % prime == 0) {
          result = false;
          break;
        }
      }
      if (result) {
        primeSet.add(number);
        if (primeSet.size() == n) {
          return number;
        }
      }
      number++;
    }
  }

  public int fib(int n) {
    return n;
  }

  public int rand(int max) {
    if (max < 1) {
      throw new IllegalArgumentException();
    }
    return rand1.nextInt(max);
  }

  public int getSeed() {
    return seed;
  }

  public int getPrimeCallCount() {
    return primeCallCount;
  }

  public int getIsPrimeCallCount() {
    return isPrimeCallCount;
  }
}
class MemoryCalculator extends Calculator
{
	private int[][] a= new int[100][2],b= new int[100][2];
    private int cc=0,mc=0,k=0,l=0;
    
    public MemoryCalculator( int seed)
    {
    	super(seed);
    }
    
    public int kthPrime(int n)
    {
    	for(int i=0;i<=k;i++)
        {
        	if(n==a[i][0])
            {
            	mc++;
                return a[i][1];
            }
        }
        
        cc++;
        a[k][0]=n;
        a[k][1]=super.kthPrime(n);
        k++;
        return a[k-1][1];
    }
    
    public int fib(int n)
    {
    	for(int i=0;i<=l;i++)
        {
        	if(n==b[i][0])
            {
            	mc++;
                return b[i][1];
            }
        }
        
        cc++;
        b[l][0]=n;
        b[l][1]=super.fib(n);
        l++;
        return b[l-1][1];
    }
    
    public int getComputeCount(){
    return cc;
    }
    
    public int getMemoCount(){
    return mc;
    }

}
class Main
{
  public static void main(String[] args)
  {
    int s, t, n;
    Scanner sc = new Scanner(System.in);
    s = Integer.parseInt(sc.nextLine().trim());
    t = Integer.parseInt(sc.nextLine().trim());
    n = Integer.parseInt(sc.nextLine().trim());
    MemoryCalculator c1 = new MemoryCalculator(s);
    while(t > 0){
      c1.kthPrime(n);
      t--;
    }
    System.out.println(c1.getComputeCount());
    System.out.println(c1.getMemoCount());
  }
}
