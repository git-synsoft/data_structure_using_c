#include <stdio.h>
#include <string.h>
/*
chapter 1 programming exercise
*/

/*
question 01

Write a program to read 10 integers. Display these numbers by printing three numbers in a line
separated by commas.
*/

void quetion01()
{

    printf("enter ten integers\n");
    int arr[10];

    // taking ten input
    for (int i = 0; i < 10; i++)
    {
        printf("enter %d number\t ", i + 1);
        scanf("%d", &arr[i]);
        printf("\n");
    }
    int i = 0;
    while (i < 10)
    {

        for (int j = 0; j < 3; j++)
        {
            if (i == 10)
            {
                break;
            }
            printf("%d,\t", arr[i]);
            i++;
        }

        printf("\n");
    }
    printf("\n");
}

/*
question 02

Write a program to print the count of even numbers
between 1–200. Also print their sum.

*/

void question02()
{
    int start = 1;
    int end = 200;
    int count = 0;
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            count++;
            sum += i;
        }
    }
    printf("sum of even numbers\t %d \ncount of even numbers\t %d\t\n", sum, count);
}

/*
question 03

Write a program to count the number of vowels in a text.
*/
void question03()
{
    char str[] = "my name is atul and your name is vimal";
    int vowel_count = 0;

    int len_str = strlen(str);
    // printf("%d\n",len_str);
    for (int i = 0; i < len_str; i++)
    {
        switch (str[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
            vowel_count += 1;
            break;
        default:
            NULL;
        }
    }
    printf("%d\n", vowel_count);
}

/*
question 04

Write a program to read the address of a user. Dis-
play the result by breaking it in multiple lines.

*/

void question04()
{
    const int MAX_LENGTH=500;
    printf("enter your address");
    char ch[MAX_LENGTH];
    int i=0;
    while(1){
        scanf("%c",&ch[i]);
        if(ch[i]=='X'){
            break;
        }
        i++;
        
    }
    printf("you entered :\n");
    for(int k=0;k<strlen(ch);k++){
        printf("%c",ch[k]);
    }
    printf("\n");
}


/*
question 05

Write a program to read two floating point
numbers. Add these numbers and assign the result
to an integer. Finally, display the value of all the
three variables.
*/

void question05(){
    float a,b;
    int result;
    printf("enter two numbers to add \n");
    scanf("%f",&a);
    scanf("%f",&b);
    result=(int)  (a+b);
    printf("%d\n",result);


}



int main()
{
    // quetion01();
    // question02();
    // question03();
    //question04();
    question05();
}
