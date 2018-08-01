#include <stdio.h>
#include <math.h>

int main()
{
		int x = 0, y = 1, z = 1;
		int sum = 0;
		
		while(z<4000000)
		{
		    x= y;
		    y = z;
		    z = x + y;
		    
		    if(z%2 == 0) {
		        sum += z;
		    }
		}
		printf("%d", sum);
    return 0;
}
