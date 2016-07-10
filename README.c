# hanoi
#include <stdio.h>
void towerofhanoi(int num,char start,char end,char temp)
{
if(num==1)
{
printf("\nMoving disc 1 from peg %c to peg %c",start,end);
return;
}
towerofhanoi(num-1,start,temp,end);
printf("\nMoving disc %d from peg %c to peg %c",num,start,end);
towerofhanoi(num-1,end,start,temp);
}
int main()
{
int num;
scanf("%d",&num);
towerofhanoi(num,'S','E','T');
return 0;
}
