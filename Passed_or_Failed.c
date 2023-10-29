#include<stdio.h>
int main()
{
    int English,Maths,Physics,Chemistry,Computer_Science;
    scanf("%d%d%d%d%d",&English,&Maths,&Physics,&Chemistry,&Computer_Science);
if(English > 34 && Maths > 34 && Physics > 34 && Chemistry > 34 && Computer_Science > 34)
printf("PASSED");
else
printf("FAILED");
}