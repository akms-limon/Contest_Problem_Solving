#include<stdio.h>

int main()
{
    int A, B, Button;

    while(1){
        printf("A = ");
        scanf("%d", &A);
        printf("B = ");
        scanf("%d", &B);
        printf("Enter Corresponding Value to Perform Operation:-\nAddition[1] Subtraction[2] Multiplication[3] Division[4] Exit[0]\n");
        scanf("%d",&Button);

        if(Button == 0){
            return 0;
        }
        else if(Button == 1)
        printf("%d + %d = %d\n", A, B, A + B);
        else if(Button == 2)
        printf("%d - %d = %d\n", A, B, A - B);
        else if(Button == 3)
        printf("%d * %d = %d\n", A, B, A * B);
        else if(Button == 4){
        float Div = (float)A/(float)B;
        printf("%d / %d = %.2f\n", A, B, Div);
        }
    }

    return 0;
}