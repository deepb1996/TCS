// Treat the main1() as your main function. Don't change any names.

#include <stdio.h>
#include <stdlib.h>

//Write this as the main() in the actual aptitide test

int main1(int argc, char* argv[])
{ 
    int i,n = atoi(argv[1]);
    int a=-1, b=1, c;
    for(i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d ", c);
    }
    return 0;
}

//Do NOT change anything after this.
// You dont; need to write this in the actual aptitide test
int main()
{   
    int a,b,length;
    char *x,*y;
    scanf("%d %d", &a, &b);
    
    length  = snprintf( NULL, 0, "%d", a );
    x = malloc( length + 1 );
    snprintf( x, length + 1, "%d", a );
    
    char* argv[]={"./a.out", x};
    main1(2, argv);     
    return 0;
}
