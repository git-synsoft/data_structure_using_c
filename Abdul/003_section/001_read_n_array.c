#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <stdint.h>

int main()
{
    // program to read  display n elements ,mean of n elements ,smallest number of elements ,second largest number in the array ,
    //form a digit from the input provided , find if any duplicate element in array or not 
    //insert an element in a given position
    //insert an element  if array is already sorted in ascending order 

    int len;
    float sum = 0.0;
    float mean = 0.0;
    int smallest_num;
    int second_largest_number;
    int first_largest_number;
    int digit =0;
    

    printf("enter the number of elements you want to enter \n\a");
    scanf("%d", &len);
    int Arr[len];
    int duplicate_array_value[len];

    

    // reading elements
    for (int i = 0; i < len; i++)
    {
        printf("enter %d element\n\a", (i + 1));
        scanf("%d", &Arr[i]);
    }

    // displaying elements in array
    printf("\ndisplaying elements \n");
    for (int i = 0; i < len; i++)
    {
        printf("%f\t", (float)Arr[i]);
    }
    printf("\n");
    // finding mean of n elements
    printf("\n finding mean of elements \n");
    // taking sum
    for (int i = 0; i < len; i++)
    {
        sum += (float)Arr[i];
    }
    mean = sum / len;
    printf("sum of element %f \n", sum);
    printf("mean of array is %f\n", mean);

    // finding the smallest number in the array
    printf("finding the smallest number of elemetns in a array\n");
    smallest_num = Arr[0];
    for (int i = 0; i < len; i++)
    {
        if (Arr[i] < smallest_num)
        {
            smallest_num = Arr[i];
        }
    }
    printf(" %d is the smallest number \n", smallest_num);

    // second largest number in array
    first_largest_number = Arr[0];
    for (int i = 0; i < len; i++)
    {
        if (Arr[i] > first_largest_number)
        {
            first_largest_number = Arr[i];
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (Arr[i] < first_largest_number)
        {
            second_largest_number = Arr[i];
            
        }
    }
    printf("second largest number is %d \n",second_largest_number);

    //forming a digit from the provided input in the array .
    for(int i=0;i<len;i++){
        digit+=Arr[i]*pow(10,i);
    }
    printf("digit is %d \n",digit);

    //finding any duplicates 
    for(int i=0;i<len;i++)
    {
        int dup_num_check=Arr[i];
        for(int j=0;j<len;j++)
        {
            if(Arr[j]==dup_num_check)
            {
                duplicate_array_value[i]=Arr[j];
            }
            else{
                duplicate_array_value[i]=0;
            }
        }
    }
    printf("duplicate array lements \n");
    for(int i=0;i<len;i++){
        printf("%d\t",duplicate_array_value[i]);
    }
    printf("\n");

    //insert an element at a given position 
    printf("program to insert a given element at a give n position \n");
    printf("plz enter a position less than %d\n",len);
    int pos=-1;
    scanf("%d",&pos);
    if(pos>0 && pos<=len){
        printf("enter value of element to be inserted  \n");
        int insert_value;
        scanf("%d",&insert_value);
        //resizing of array 
        int new_len=len+1;
       
        int tempArray[new_len];
        
        for(int i=0;i<new_len-1;i++){
            tempArray[i]=Arr[i];
        }
       
        for(int i=new_len-1;i>=pos;i--){
            tempArray[i+1]=tempArray[i];

        }
        printf("%d is new len \n",new_len);
        tempArray[pos]=insert_value;
        for(int i=0;i<new_len;i++){
            printf("%d\t",tempArray[i]);
        }
        printf("\n");
    }
    else{
        printf("position provided is not in range \n");
    }

    //program to insert an element in alrady sorted array 
    int sorted_pos_element;
    printf("\n\n program to insert an elemeent in an already sorted array \n\n ");
    printf("plz give me a value ☺️\n");
    scanf("%d",&sorted_pos_element);
    int sorted_temp_length=len+1;
    int sorted_temp_array[sorted_temp_length];
    for(int i=0;i<sorted_temp_length-2;i++){
        sorted_temp_array[i]=Arr[i];
    }
    //finding the position of the value to be inserted ;
    int pos_sorted;
    for(int i=0;i<sorted_temp_length-2;i++){
        if(sorted_temp_array[i]>=sorted_pos_element){
            pos_sorted=i;
            break;
        }

    }
    printf("%d\n",pos_sorted);







    

    
    
}