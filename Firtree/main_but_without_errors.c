#include <stdlib.h>
#include <stdio.h>

#define P(f_, ...) printf((f_), ##__VA_ARGS__)

int _(int s)
{
    int l = 0;
    for(int i=0,j=4;i<s;i++,j++){l+=j;}
    return (l);
}

void _t(int s)
{
    int l, c = 0;
    int id = 0;
    if (s == 0)return;
    l=_(s);
    for(int i=0,j=4,k=1;i<s;i++,j++){c+=(2*(j-k));(i%2)?0:(k+=1);}c++;
    for(int i=0, b=1,bl=_(b),r=0;i<l;i++){if(i==bl){b+=1;bl=_(b);r+=(b%2?0:1);id-=(r+1);}for(int sp=0;sp<c/2-id;sp++)P(" ");for(int st=0;st<1+(id*2);st++)P("*");P("\n");id+=1;}
    for(int i=0,ss=s,e=(s%2)?s:s+1;i<s;i++){for(int sp=0;sp<(c/2-e/2);sp++){P(" ");}for(int p=0;p!=e;p++){P("|");}P("\n");}
}

int i_(char *str)
{
    int res = 1;
    for (int i = 0; i[str]; i++){(i[str]>='1'&&i[str]<='9')?0:(res=0);}
    return res;
}

int main(int ac, char **av)
{
    int res=0;
    if(ac==2){_t(i_(av[1])?atoi(av[1]):0);}else{P("Error, bad arguments.");res=84;};
    return(res);
}