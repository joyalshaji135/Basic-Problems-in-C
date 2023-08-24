// Write a program to find the array element closest to zero.

#include<stdio.h>
int ClosestToZero(int limit,int arr[]);
int main()
{
    int arr[100];
    int i,limit,closest_of_zero;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    closest_of_zero=ClosestToZero(limit,arr);
    printf("The Closest Element of Zero : %d",closest_of_zero);
    return 0;
}
// Logic of the Code
int ClosestToZero(int limit,int arr[])
{
    int i,closest_to_zero;
    closest_to_zero=arr[0];
    if (closest_to_zero < 0) {
        closest_to_zero = -closest_to_zero; 
    }
    for(i=0; i<limit; i++)
    {
        int current = arr[i];
        if (current < 0) {
            current = -current; 
        }
        
        if (current < closest_to_zero) {
            closest_to_zero = arr[i];
        }
    }
    return closest_to_zero;
}


/* arr[] ={4 , 5 , -1 , -2 , 2 , 1}
 first ==> closest_of_zero = arr[0] Array First Element   4         -4
 second ==> if (closest_of_zero < 0)
 {
    closest_of_zero = -closest_of_zero  ==> postive number ==> -4     negative number ==> 4
 }

            third ==>  for(i=0; i<limit; i++)
            {
                  current_value = arr[i];      case : 1  ==>     0 => 4 , 1 => 5 , 2 => -1 , 3 => -2 , 4 => 2 , 5 => 1

                  if (current_value < 0)       case  : 2  ==>     4 < 0 => f , 5 < 0 => f , -1 < 0 => t , -2 < 0 => t , 2 < 0 => f , 1 < 0 => f  
                  {
                    current_value = -current_value;  t => -1 => 1 , t => -2 => 2     
                  } 
                  if(currrent_value < closest_of_zero)    compare to case : 1 And case : 2  ==>   4 < 4 => f , 5 < 4 => f , 1 < 4 => t , 2 < 1 => f , 2 < 1 => f , 1 < 1 => f
                  {
                    closest_of_zero = arr[i];   ==> true case : => closest_of_zero = 1
                  }
            }
*/