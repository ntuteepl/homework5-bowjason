#include <stdio.h>
int main()
{
int H,M;
float a,b,c;
scanf("%d%d",&H,&M);
a=H*30+M*0.5;
b=M*6;
if(H>6&&M==0){
	b=360;
}
if(a>b){
	c=a-b;
}
if(a<b){
	c=b-a;
}
if(a==b){
	c=0;
}
printf("%.3f",c);
}
