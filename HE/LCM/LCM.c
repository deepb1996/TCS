// Treat the main1() as your main function. Don't change any names.

#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{ 
    if (a == 0 || b == 0)
       return 0;
       
    if (a == b)
        return a;

    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

//Write this as the main() in the actual aptitide test

int main1(int argc, char* argv[])
{ 
    int a =atoi(argv[1]);
    int b=atoi(argv[2]);
    int c=(a*b)/gcd(a,b);
    printf("%d",c);
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
    
    length  = snprintf( NULL, 0, "%d", b );
    y = malloc( length + 1 );
    snprintf( y, length + 1, "%d", b );
    
    char* argv[]={"./a.out", x,y};
    main1(2, argv);     
    return 0;
}
