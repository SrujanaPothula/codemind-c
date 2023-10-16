#include<stdio.h>
int main()
{
    int side,surface_area,volume;
    scanf("%d",&side);
    surface_area=6*side*side;
    volume=side*side*side;
    printf("Surface area = %d and Volume = %d",surface_area,volume);
}