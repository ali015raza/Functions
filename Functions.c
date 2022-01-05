#include <stdio.h>
void Grades()
{
     int marks;
printf("Enter marks out of 100 : ");
scanf("%d",& marks);
if(marks>=80 && marks<=100)
printf("A Grade :");
else if(marks>=70 && marks<80)
printf("B Grade :");
else if(marks>=60 && marks<70)
printf("C Grade :");
else if(marks>=50 && marks<60)
printf("D Grade :");
else if(marks>=40 && marks<50)
printf("E Grade :");
else if(marks<40)
printf("Fail :");
else
printf("invalid please Enter marks between 0 to 100 : ");
}
void For()
{
    int a;
    printf("How many times you wants to run loop : ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    printf("wellcome Back sir :\n");
}
void Table()
{
     int i=0;
    int n;
    printf("Enter the Number whose table is reuired : ");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d * %d  = %d\n",n,i,n*i);
        i++;
    }
}
void add()
{
    int x,y;
    printf("Enter 1st Number : ");
    scanf("%d",&x);
    printf("Enter 2nd Number : ");
    scanf("%d",&y);
    printf("Sum of Numbers is : %d + %d = %d",x,y,x+y);

}
int main()
{
    int c;
    printf("Select the choice to perform Function : \n 1 Grades Function :\n 2. For lOOP :\n 3. Table using while loop : \n 4. add Numbers : \n and press 5 to exit the programe : ");
    scanf("%d",&c);
    while(c<=4)
{
    if(c==1)
    Grades();
    else if(c==2)
    For();
    else if(c==3)
    Table();
    else if(c==4)
    add();
    printf("Select the choice to perform Function : \n 1 Grades Function :\n 2. For lOOP :\n 3. Table using while loop : \n 4.add numbers : and press 5 to exit the programe :  ");
    scanf("%d",&c);
}
printf(" See you : ");
}