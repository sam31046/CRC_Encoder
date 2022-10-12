#include <stdio.h>

int main()
{ 
  int i=0,j=0,y=0,z=0;
  char a[8];
  char b[5];
  
 
  
  

  
  printf("please insert dataword:\n");
  scanf("%s",a);
  a[4]=a[5]=a[6]='0';
  a[7]='\0';
  printf("dataword=%s\n",a);
  
  printf("please insert divisor:\n");
  scanf("%s",b);
  printf("divisor=%s\n",b);
  
  
  for(i=0;i<4;i++)
  {
    if(a[i]=='1'){
                   for(j=0;j<4;j++)
                   {
                        a[i+j]=(a[i+j]==b[j])?'0':'1';
                        }
                  };
        }
   printf("%s",&a[4]);  
  getch();	
  return 0;

}
