#include<stdio.h>
#include<math.h>
int main()
{
    float PI,n;
    int i;
    PI=0;
    n=1;
    for(i=1;fabs(n)>1e-6;i++)
       {
           if (i % 2) n = 1 / (2 * i - 1);
           else n = -1 / (2 * i - 1); 
//		   n=(-1)^(i+1) / (float)(2*i-1);
           PI+=n;
       }
       PI=PI*4;
    printf("PI=%.6f",PI);
return 0;
}
