#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int dinp1,dinp2;
	float inp1,inp2;
    scanf("%d %d",&dinp1,&dinp2);
    scanf("%f %f",&inp1,&inp2);
    printf("%d %d\n",dinp1+dinp2,dinp1-dinp2);
    printf("%.1f %.1f",inp1+inp2,inp1-inp2);
    
    return 0;
}
