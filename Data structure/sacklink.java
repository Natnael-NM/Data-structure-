
//package sacklink;
public class sacklink 
//STACK BY LINKED LIST


{
    
    public class Node {
int Data;
Node next;
}
    Node head;

    public boolean isEmpty() {
        return head == null;
    }

    public void push(int data) {
        Node n = new Node();
        n.Data = data;
        if (!isEmpty()) {
            Node nn = head;
            while (nn.next != null) {
                nn = nn.next;
            }
            nn.next = n;
        } else {
            head = n;
        }
    }

    public void delet() {
        Node dt = head;
        while (dt.next.next != null) {
            dt = dt.next;
        }
        dt.next = null;
    }

    public void pop() {
        if (isEmpty()) {
            System.out.println("the stack is empity");
        } else {
            Node x = head;
            while (x.next != null) {
                x = x.next;
            }
            System.out.println(x.Data);
            delet();
        }
    }

    public void peek() {
        if (isEmpty()) {
            System.out.println("the stack is empity");
        } else {
            Node pk = head;
            while (pk.next != null) {
                pk = pk.next;
            }
            System.out.println(pk.Data);
        }
    }

    public void show() {
        Node s = head;
        while (s != null) {
            System.out.println(s.Data);
            s = s.next;
        }
   

    }
     public static void main(String[] args) {
        sacklink  ls=new sacklink ();
         System.out.println("push 3,4,5");
   ls.push(3);
   ls.push(4);
   ls.push(5);
  
   System.out.println("show the stack");
   ls.show();
  
   
   System.out.println("pop last in or 5");
   ls.pop();
   System.out.println("show");
   
   
   ls.show();
     
      System.out.println("pop 4");
      ls.pop();
      System.out.println("show");
         
         
   ls.peek();
      System.out.println();
       ls.show();

    }
}
