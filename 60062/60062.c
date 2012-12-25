#include <stdio.h>
int main(void)
{
    char operator;
    int operand1, operand2, res;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        int sum = 0;
        scanf("%d", &operand1);
        operator = getchar();
        sum = operand1;
        /*---------*/
        while (operator != '=')
        {
            scanf("%d", &operand1);
            switch (operator)
            {
            case '+':
                sum += operand1;
                break;
            case '-':
                sum -= operand1;
                break;
            case '*':
                sum *= operand1;
                break;
            case '/':
                sum /= operand1;
                break;
            }
            operator = getchar();
        }
        res = sum;
        printf("%d\n", res);
   }
   return 0;
}