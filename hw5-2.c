#include <stdio.h>
int main()
{
int x;
float y=0.9,z;
scanf("%d",&x);
  
if(x<=800){
  z=x*y;
}
if(x>800&&x<=1500){
  z=x*0.9*y;
}
if(x>1500){
z=x*y*0.79;
}
printf("%.1f",z);
  }
