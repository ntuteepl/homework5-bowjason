#include <stdio.h>
int main()
{
int x,y;
float z=0;
scanf ("%d%d",&x,&y);
if(x<=60){
	z=x*y;
}
if(x>60&&x<=120){
	z=(x-60)*y*1.33+60*y;
}if(x>120){
	z=(x-120)*y*1.66+60*y*1.33+60*y;
}
printf("%.1f",z);
}

