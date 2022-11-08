#include <stdio.h>
int MaxBilangan(int a,int b,int c,int d)
{
     if (a>b&&b>c&&c>d)
      return a;
      else if (a<b&&b>c&&c>d)
     return b;
     else if (b<c&&c>a&&d<c)
     return c;
     else 
     return d;
}
int main(){
     int a, b, c, d;
     scanf("%d %d %d %d", &a, &b, &c, &d);
     int hasil = MaxBilangan(a, b, c, d);
     printf("%d", hasil);
     return 0;
}