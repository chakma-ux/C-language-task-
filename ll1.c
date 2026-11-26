#include<stdio.h>
#include<stdlib.h>
struct node {
  int data ;
  struct node *next;
};
//typedef struct node *Node ;//(pointer variable )
int main (){
struct node  *newnode ;
newnode =malloc(sizeof(struct node )); 
newnode->data = 12;
newnode->next = NULL;
printf("%d",newnode->data);
free(newnode);
return 0;

}
