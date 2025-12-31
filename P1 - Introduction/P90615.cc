#include<stdlib.h>
#include<stdio.h>

int main() 
{
    int x, y, z;
    scanf("%d %d %d", &x,&y,&z);
    int max = x;
     
    if (max < y || max < z) 
    {
        if(max < y && y > z) max = y;
        else max = z;
    }
    printf("%d\n", max);
    
}