#include <stdio.h>
#include <stdlib.h>
int arr[1003];
int main()
{
    int t;
    int i,n,max,min;
    scanf("%d",&t);
    while(t--)
    {
        int state = 0;
        max = 0,min = 0;
        scanf("%d",&n);
        for(i = 0; i < n; i++) scanf("%d",&arr[i]);
        if(arr[0] < arr[n-2])
        {
            for(i = 0; i < n; i ++)
            {
                if(arr[i] > arr[n-1])
                {
                    max = i;
                    if(state == 0)
                    {
                        min = i;
                    }
                    break;//关键的break
                }
                else
                {
                    if(arr[i] == arr[n-1])
                    {
                        max = i;
                        if(state == 0)
                        {
                            min = i;
                            state = 1;
                        }
                    }
                }
            }
        }
        else
        {
            if(arr[0] > arr[n-2])
            {
                for(i = 0; i < n ; i++)
                {
                    if(arr[i] < arr[n-1])
                    {
                        max = i;
                        if(state == 0)
                            min = i;
                        break;//关键break。否则会继续遍历
                    }
                    else
                    {
                        if(arr[i] == arr[n-1])
                        {
                            max = i;
                            if(state == 0)
                            {
                                min = i;
                                state = 1;
                            }
                        }
                    }
                }
            }
            else
            {
                min = 0,max = n - 1;
            }
        }
        printf("%d %d\n",min,max);
    }
}


//证明一下偶数位数的回文数都不是prime number(11除外)
//证明一下最难的8位数吧其他的同理
//设x=10000001i+1000010j+100100k+11000l(i为1-9的自然数,j,k,l为0-9的自然数)
//分解得x=11(909091i+90910j+9100k+1000l)
//又909091i+90910j+9100k+1000l>2
//∴11|x
//x必定为合数
//同理可得当回文数x的位数为偶数位时必有11|x当x/11>2时x必为合数
有啦这个性质就可以直接枚举奇数位的回文数

--------------------- 
作者：liujiacongBaBa 
来源：CSDN 
原文：https://blog.csdn.net/jc514984625/article/details/53461821 
版权声明：本文为博主原创文章，转载请附上博文链接！