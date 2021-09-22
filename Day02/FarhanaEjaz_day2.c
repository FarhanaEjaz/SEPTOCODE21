/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX_SIZE 1000

int main()
{
    int n,a,b,l1,l2;
    int days[MAX_SIZE];
    
    scanf("%d",&n);
   for(int i=1; i<=n; i++)
    {
    
        scanf("%d%d",&a,&b);
        
        if((a%4==0)||(a%400==0)&&(a%100!=0))
        {
            l1=366;
        }
        else
        {
            l1=365;
        }
        if((b%4==0)||(b%400==0)&&(b%100!=0)) 
            {
                l2=366;
            
            }
        else
        {
            l2=365;
        }
        days[i]=l1+l2;
       
        }
       
         for(int i=1; i<=n; i++)
        {
            printf("%d\n",days[i]);
        }
        
      
    return 0;
}
