#include<stdio.h>
#include<stdlib.h>
int main()
{

//1.accept number of services.
int n;
printf("enter the no of requests :");
scanf("%d",&n);

//2.ask the user to enter sequence and head position.

int req_queue[20],initial,i;
printf("Enter the queue: \n");
for(int i=0;i<n;i++)
{
    scanf("%d",&req_queue[i]);
}
printf("Enter the head position: ");
scanf("%d",&initial);


//3.Service the requests in order of arrival.
//4.calculate total head movement.
int thm=0;
for(int i=0;i<n;i++)
{
    thm=thm+(abs(req_queue[i]-initial));
    initial=req_queue[i];
}

//5.print total head movement.

printf("Total head movement = %d",thm);

}
