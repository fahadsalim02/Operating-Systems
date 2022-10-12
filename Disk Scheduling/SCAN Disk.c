#include<stdio.h>
#include<stdlib.h>
int main()
{

//1.accept number of services.
int n;
printf("enter the no of requests :");
scanf("%d",&n);

/*2.ask the user to enter
    1.sequence of requests
    2.head position
    3.size of disk */

int req_queue[20],initial,i,size;
printf("Enter the queue: \n");
for(int i=0;i<n;i++)
{
    scanf("%d",&req_queue[i]);
}
printf("Enter the head position: ");
scanf("%d",&initial);

printf("Enter the size of the disk: ");
scanf("%d",&size);


//3.sort the request queue in ascending order

int j,temp;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(req_queue[i]>req_queue[j])
        {
            temp=req_queue[i];
            req_queue[i]=req_queue[j];
            req_queue[j]=temp;
        }
    }
}

/*4.Finding the head position among the request queue.

int index;
for(i=0;i<n;i++)
{
    if(initial<req_queue[i];)
        index=i
        break;
}*/


int choice;
printf("1 for right and 0 for left: \n");
scanf("%d",&choice);

//5.Calculating total head movement toward right until last
if (choice==1)
{
  int thm=0;
thm=((size-1)-initial)+(abs(size-1)-req_queue[0]);

printf("Total head movement = %d",thm);
}

else
{
    int thm=0;
    thm=initial+req_queue[n-1];
    printf("Total head movement = %d",thm);

}



}

