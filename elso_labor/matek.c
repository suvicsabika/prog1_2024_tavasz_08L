#include <stdio.h>

int main()
{
    int a = 20;
    int b = 3;
    
    printf("%d + %d = %d\n", a, b, a + b);
   
    printf("%d - %d = %d\n", a, b, a - b);
    
    printf("%d * %d = %d\n", a, b, a * b);
    
    printf("%d / %d = %d\n", a, b, a / b);
    
    printf("%lf / %lf = %lf\n", 20.0, 3.0, 20.0 / 3.0);
    
    printf("%d %% %d = %d\n", a, b, a % b);

    printf("backslash: \\\n");
    
    return 0;
}