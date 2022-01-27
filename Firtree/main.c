#include <stdlib.h>
#include <stdio.h>

#define P(f_, ...) printf((f_), ##__VA_ARGS__)

_(s)
{
    int l = 0;
    for(int i=0,j=4;i<s;i++,j++){l+=j;}
    return (l);
}

void _t(s)
{
    int l,c=0,id=0;
    if(!s)return;
    l=_(s);
    for(int i=0,j=4,k=1;i<s;i++,j++){c+=(2*(j-k));(i%2)?0:(k+=1);}c++;
    for(int i=0,b=1,bl=_(b),r=0;i<l;i++){if(i==bl){b+=1;bl=_(b);r+=(b%2?0:1);id-=(r+1);}for(int sp=0;sp<c/2-id;sp++)P(" ");for(int st=0;st<1+(id*2);st++)P("*");P("\n",id+=1);}
    for(int i=0,ss=s,e=(s%2)?s:s+1;i<s;i++){for(int sp=0;sp<(c/2-e/2);sp++){P(" ");}for(int p=0;p!=e;p++){P("|");}P("\n");}
}

i_(char *s)
{
    int r=1;
    for (int i=0;i[s];i++){(i[s]>='0'&&i[s]<='9')?0:(r=0);}
    return r;
}

main(c, char **v)
{
    int r=0;
    (c==2)?_t(i_(v[1])?atoi(v[1]):0):P("Error, bad arguments.",r=84);
    return(r);
}
