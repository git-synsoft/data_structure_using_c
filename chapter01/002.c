#include <stdio.h>

float circle_area(float radius)
{
    const float PI = 3.14;
    float result;

    result = PI * radius * radius;

    return result;
}

int int_extractor(float float_value)
{
    return (int)float_value;
}

int is_even(int num)
{
    if (num == 0)
        return -1;
    else if (num % 2 == 0)
        return 0;
    else
        return 1;
}

int isVowel(char c)
{
    int result;
    switch (c)
    {
    case 'A':
    case 'a':
        result = 0;
        break;
    case 'E':
    case 'e':
        result = 0;
        break;

    case 'I':
    case 'i':
        result = 0;
        break;
    case 'O':
    case 'o':
        result = 0;
        break;
    case 'U':
    case 'u':
        result = 0;
    default:
        result = 1;
    }
    return result;
}

int sum_of_num_range(int m, int n)
{
    if (m > n || m == n)
    {
        return -1;
    }
    int i = m;
    int sum = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }

    return sum;
}

int avg_first_n(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int result = 0;
    int i = 0;
    do
    {
        result += i;
        i++;
    } while (i <= n);
    return result;
}

int primeOrComposite(int n)
{
    int flag;
    if (n == 0 || n == 1)
        return -1;
    for (int i = 2; i < n / 2; i++)
    {
        flag = n % i == 0 ? 1 : 0;
        if (flag == 1)
            break;
    }
    return flag;
}




int main()
{

    printf("%f\n", circle_area(38.37));
    printf("\n");

    printf("%i\n", int_extractor(448.3448));

    printf("%i\n", is_even(0));

    printf("%i\n", isVowel('m'));
    printf("%d\n", sum_of_num_range(9, 4));
    printf("%d\n", avg_first_n(837));
    printf("%i\n",primeOrComposite(2));

    //void pointers 
    int x=10;
    char ch='A';
    void *gp;
    gp=&x;
    printf("\n generic pointers : %d\n",*(int*)gp);


    

    return 0;
}