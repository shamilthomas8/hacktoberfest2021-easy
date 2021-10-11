import java.util.*;
  
public class DequeExample {
    public static void main(String[] args)
    {
        Deque<String> deque
            = new LinkedList<String>();
  
        
  
        deque.add("first element");
  
        
        deque.addFirst("second element");
  
        
        deque.addLast("third element");
  
        
        deque.push("fourth element");
  
        
        deque.offer("fifth element");
  
       
        deque.offerFirst("sicth element");
  
        System.out.println(deque + "\n");
  
        
        deque.removeFirst();
        deque.removeLast();
        System.out.println("Deque after removing "
                           + "first and last: "
                           + deque);
    }
}
