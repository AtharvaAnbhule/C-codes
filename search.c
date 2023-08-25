#include <stdio.h>


int main() {
    int array[100],ele,c,n;
    printf("Enter total elements in the array");
    scanf("%d",&n);
    
    printf("Let's input the array elements");
    for(c=0;c<n;c++){
        printf("the element at position %d is:",c);
        scanf("%d",&array[c]);
        
        
    }
    printf("Enter the element:");//element to insert
    scanf("%d",&ele);
     
     for(c=0;c<n;c++){
         if(array[c]==ele){
             printf("Element found");
         }
        
     }
return 0;
}
