#include <stdio.h>
#include <string.h>
#define MAX 20

char queue[MAX][MAX], temp[MAX];
int front = -1, rear = -1;
void enqueue(char *ptr)
{
if(rear == MAX-1)
{
return;
}
if(front == -1 && rear == -1)
front = rear = 0;
else
rear = rear + 1;
strcpy(queue[rear],ptr);
}
char* dequeue()
{
if(front == -1)
printf("\nEmpty Queue");
else
{
strcpy(temp,queue[front]);
if(front == rear)
front = rear = -1;
else
front = front + 1;
return temp;
}
}
void D_to_B()
{
char temp2[MAX];
strcpy(temp,dequeue());
printf("%s ",temp);
strcpy(temp2,temp);
strcat(temp,"0");
enqueue(temp);
strcat(temp2,"1");
enqueue(temp2);
}
int main()
{
int i,n=16;//n is end positive number 
char temp[2] = "1";
enqueue(temp);
for(i = 1; i <= n; i++)
    D_to_B();
printf("\n");
return 0;
}