//                         ASSIGNMENT 2              DATA STRUCTURES 
//   SUBMITTED BY ;
//      HIMANSHU
//      ECE
//      21105106



//  Q1. While traversing a single-circular linked list, which condition establishes that the  
//      traversing element/variable has reached the first element?

/* Ans :-> 	A Circular linked list consists of nodes with data and address of next node in it, with a special condition of 
            last node calling/consisting address of first node (head node) to complete the never ending loop . 
            Therefore while traversing the circular linked list, a problem of finding last element of the linked list is 
            created as while traversing last node will again call head node and traversing will become infinite process.
            	 So, the condition by which we can find out that traversing variable has reached first element again is :
                 :->  Node *temp = head->next ;
                 ;->  while(temp != head){
                 :->  	temp = temp->next ;	
                 ;->  }
            Therefore starting from next element of head to full linked list till the temp got address of head node will 
            traverse it from starting to end of circular linked list (first element can be operated by functions on head node
            instead of temp node) . 
*/



// Q2. What are the practical applications of a circular linked list? (Try to find applications in your respective fields).

/* Ans :->   Practical applications of circular linked list are :
               1) Multiplayer Games: All the Players are kept in a Circular Linked List and the pointer keeps on moving forward 
                  as a player's chance ends.
               
               2) Computing Resources: Circular Linked Lists is used to manage the computing resources of the computer.
               
               3) Fionacci Heap: Circular Linked List is also used in the implementation of advanced data structures such as a 
                  Fibonacci Heap.
                  
               4) Computer Networking:Circular linked list is also used in computer networking for token scheduling.
               
               5) Implementation of Data Structure: Data structures such as stacks and queues are implemented with the help of 
                  the circular linked lists.
                  
               6) Audio/Video Streaming: Circular linked list is also used in audio and video streaming,for ex. when one copmlete 
                  audio list finishes playing in music player then it again starts playing from start.
                  
*/

//                         ASSIGNMENT 2              DATA STRUCTURES 
//   SUBMITTED BY ;
//      HIMANSHU
//      ECE
//      21105106
