#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a[20004];
char b[20004];
char c[20004];
 
int ten(int i,char* x)
{
    int k;
    if(x[2*i]>='A'){
        k = (10+x[2*i]-'A')*16;
    }else
        k = (x[2*i]-'0')*16;
    if(x[2*i+1]>='A'){
        k += (10+x[2*i+1]-'A');
    }else
        k += (x[2*i+1]-'0');
    return k;
}
 
void setnum(int first,int end,int i)
{
    if(first>=10){
        c[2*i] = 'A'+first-10;
    }else
        c[2*i] = '0'+first;
    if(end>=10){
        c[2*i+1] = 'A'+end-10;
    }
    else
        c[2*i+1] = '0'+end;
 
}
 
void getit(int len)
{
    int first,end;
    int i=0,j=0;
    int temp=32;
    int result;
    int A=0;
    A = ten(0,b);
    result = A^temp;
    first = result/16;
    end = result%16;
    setnum(first,end,i);
    ++i;
    int k=0;
    for(k=0;k<len/2;++k)
    {
        temp = result^ten(k,a);
        A = ten(k+1,b);
        result = A^temp;
        first = result/16;
        end = result%16;
        setnum(first,end,k+1);
        ++i;
    }
    c[(k+1)*2]='\0';
 
}
 
int main()
{
    int temp,len;
    while(scanf("%s %s",a,b)!=EOF){
        getit(strlen(a));
        printf("%s\n",c);
    }
}
