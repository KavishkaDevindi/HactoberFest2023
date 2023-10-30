#include <stdio.h>
int main(){
    int array[50], num, a, b, temp;    
    printf("Please Enter the Number: ");
    scanf("%d", &num);    
    printf("Please Enter the Value of Elements for the array: ");
    for(a = 0; a < num; a++)
        scanf("%d", &array[a]);
    for(a = 0; a < num - 1; a++){       
        for(b = 0; b < num - a - 1; b++){          
            if(array[b] > array[b + 1]){               
                temp = array[b];
                array[b] = array[b + 1];
                array[b + 1] = temp;
            }
        }
    }
    printf("Array after implementing bubble sort: ");
    for(a = 0; a < num; a++){
        printf("%d  ", array[a]);
    }
    return 0;
}
