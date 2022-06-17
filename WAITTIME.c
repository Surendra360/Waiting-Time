#include <stdio.h>

int main(void) {
    
    int t,k,x;
     scanf("%d",&t);
     
     for(int i=0;i<t;i++)
     {
        scanf("%d%d",&k,&x);
        
        printf("%d\n",(7*k)-x);
     }

	return 0;
}

