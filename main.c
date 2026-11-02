#include <stdio.h>

int main(void)
{
    int input_value;
    scanf("%d", &input_value);
    // 0以上10未満の整数はOKとする。
    // 12以上15未満の整数もOKとし、それ以外はNGとする。
    if ((input_value >= 0 && input_value < 10) ||
        (input_value >= 12 && input_value < 15))
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
