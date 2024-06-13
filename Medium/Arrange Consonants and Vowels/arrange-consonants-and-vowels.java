//{ Driver Code Starts
/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;


// } Driver Code Ends


/*
Structure of node class is:
class Node {
    char data;
    Node next;
    
    public Node(char data){
        this.data = data;
        next = null;
    }
}
*/
class Solution {
    
    public Node arrangeCV(Node head){
        Node vowel = new Node('a'), con = new Node('b');
        Node vowelH=vowel,conH=con;
        while(head!=null){
            char temp= head.data;
            if(temp=='a' || temp=='e' || temp=='i'|| temp=='o' || temp=='u'){
                vowel.next=head;
                vowel=vowel.next;
            }
            else{
                con.next=head;
                con=con.next;
            }
            head=head.next;
        }
        con.next=null;
        vowel.next=conH.next;
        return vowelH.next;
    }
}

//{ Driver Code Starts.

class Node {
    char data;
    Node next;

    public Node(char data) {
        this.data = data;
        next = null;
    }
}

class GFG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            Node head = null, tail = null;

            char head_c = sc.next().charAt(0);
            head = new Node(head_c);
            tail = head;

            while (n-- > 1) {
                tail.next = new Node(sc.next().charAt(0));
                tail = tail.next;
            }

            Solution obj = new Solution();
            // show(head);
            show(obj.arrangeCV(head));
        }
    }

    public static void po(Object o) { System.out.println(o); }

    public static void show(Node head) {
        while (head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
        System.out.println();
    }
}

// } Driver Code Ends