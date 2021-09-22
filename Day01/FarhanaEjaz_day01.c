/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 #include <stdio.h>
int score(int a,int b,int c)
{
   int n,score;
   scanf("%d",&n);
   for(int i=0; i<n; i++)
   {
       scanf("%d%d%d",&a,&b,&c);
       score=a+b*c/a-b;
        printf("%d\n ",score);
 
   }

    return 0;
}
int main()
{
    int result,x,y,z;
  result=score(x,y,z);
  return 0;
}


