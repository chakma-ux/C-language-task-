#include<stdio.h>
#include<stdlib.h>
struct node {
  int data ;
  struct node *next;
};
//typedef struct node *Node ;//(pointer variable )
int main (){
struct node  *newnode ;
newnode =malloc(sizeof(struct node )); //তুমি একটা বাসা ভাড়া নিলে।
newnode->data = 12;//বাসার মধ্যে তোমার কিছু জিনিস রাখলে।newnode->data → Structure pointer
newnode->next = NULL;
printf("%d",newnode->data);
free(newnode);// memory jeta niyechi sheta free kore dicchi
return 0;

}
// int *p =  emon ekti adress rakhbe jar int value ache
// char *p = char value rakhbe
// struct node *Next = next er bhitor struct node er adress thakbe it means ekti pura node thakbe
// struct mane holo any kind of data type you can keep
// typedef use korechi cause jokhon amra node bole likhbo automatically sheta struct node bujhe jabeh
