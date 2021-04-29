class ArrayStack  {  
    int top;            //define top of stack
    int maxsize = 3;    //max size of the stack  
    int[] stack_arry = new int[maxsize];  //define array that will hold stack elements
    ArrayStack(){            //stack constructor; initially top = -1
        this.top = -1;  
    }    
    boolean isEmpty(){
        if(top==-1)
        {
            System.out.println("stack is empty");
            return true;
        }
        else
            return false;
    }
            
            
        
   boolean push (int val){     //push () method  
        if(top == maxsize-1) {  
            System.out.println("Stack  is full !!");  
            return false;  
        }  
        else  {  
            top++;  
            stack_arry[top]=val;  
            return true;  
        }  
    }  
    boolean pop () {            //pop () method
        if (top == -1) {  
            System.out.println("Stack empty !!");  
            return false;  
        }  
        else   {  
             
            System.out.println("\nItem popped: " + stack_arry[top--]);  
            return true;  
        }  
    }  
    void display () {           //print the stack elements  
        System.out.println("Printing stack elements .....");  
        for(int i = top; i>=0;i--) {  
            System.out.print(stack_arry[i] + " ");  
        }  
    }  
}  
 
public class Stack {  
public static void main(String[] args) {  
    //define a stack object
    ArrayStack  stck = new ArrayStack();
    System.out.println("Initial Stack Empty : " + stck.isEmpty());
    //push elements
    stck.push(10);
    stck.push(20);
    stck.push(30);
    stck.push(40);
    System.out.println("After Push Operation...");
    //print the elements
    stck.display();
    //pop two elements from stack
    stck.pop();
    stck.pop();
    System.out.println("After Pop Operation...");
    //print the stack again
    stck.display();
}  
}   
