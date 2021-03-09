#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int n,i,j;
    printf("nhap chieu cao tam giac:");
    scanf("%d",&n);
    n=10;
    printf("\n");
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n-i;j++)
           printf(" ");/*in ra màn hình kho?ng tr?ng d?n v? trí th? n-i */
       for(j=1;j<=2*i-1;j++)
       {
         if (j==1||j==2*i-1)
             printf("*"); /*ti?p t?c in ra màn hình * t?i v? trí 1 và 2*i-1 */
         else 
             printf (" ");
       }
       printf("\n"); /* chuy?n xu?ng hàng ti?p theo */
       if (i==n-1) /* d?n hàng cu?i cùng thì in ra c?nh dáy c?a tam giác*/
       {  
          for(j=1; j<=2*n-1;j++) 
               printf ("*");
          break ;
       
       }
    }
}
