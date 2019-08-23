#include <iostream>
using namespace std

#define MAX_SIZE 100

struct Node{
  int data;
  struct Node* left;
  struct Node* right;
}

Class Queue{
  private:
    int A[MAX_SIZE];
    int front = -1;
    int end = -1;
    Queue();
    
  public:
    
    void push(Node* root){
      A[rear] = root;
      rear++;
    }
    
    void pop(){
      A[front--];
    }
  
    Node* front(){
      return A[front];
    }
    
    void empty(){
      if(front == rear) 
        return true;
      else 
        return false;
    }
    
}


void LevelOrder(Node * root){
  if(root == NULL){
    return;
  }
  
  Queue <Node*> Q; // creates a new queue
  
  Q.push(root) //pushes elements per level onto the queue
  
  while(!Q.empty()){
    Node* current = Q.front();
    
    cout << current-> data << " ";
    
    if(current->left != NULL)
      Q.push(current->left);
    if(current->right != NULL)
      Q.push(current->right);
      
    Q.pop();
  }
  
}
     
    
