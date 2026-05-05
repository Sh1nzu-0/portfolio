#include <stdio.h>
#include "MATHV1.H"
#include "MYTOOLS.H"

int main()
{
    int a,b;
    int cont=1;
    char op;
    
    while(cont==1)
    {
        menu();
        
        printf("\nEnter math operator [ %% / * + - ]: ");
        scanf(" %c",&op);

        if(op != '%' && op != '/' && op != '*' && op != '+' && op != '-')
        {
            printf("Invalid operator. Try again.\n");
            continue;
        }

        printf("\nEnter 1st number: ");
        scanf("%d",&a);

        printf("Enter 2nd number: ");
        scanf("%d",&b);

        switch(op)
        {
            case '+':
                printf("Result is: %d\n", sum(a,b));
                break;

            case '-':
                printf("Result is: %d\n", diff(a,b));
                break;

            case '*':
                printf("Result is: %ld\n", prod(a,b));
                break;

            case '/':
                printf("Result is: %.2f\n", quot(a,b));
                break;

            case '%':
                printf("Result is: %d\n", mod(a,b));
                break;
        }

        printf("\nPress 1 to continue or 0 to exit: ");
        scanf("%d",&cont);
    }

    return 0;
}
