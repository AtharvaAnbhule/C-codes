#include <stdio.h>


int main() {
    int array[100],pos,c,n;
    printf("Enter total elements in the array");
    scanf("%d",&n);
    
    printf("Let's input the array elements");
    for(c=0;c<n;c++){
        printf("the element at position %d is:",c);
        scanf("%d",&array[c]);
        
        
    }
    printf("Enter the pos:");
    scanf("%d",&pos);
    
    if(pos>=n+1){
        printf("Deletion not possible");
    }
    else{
        for(c=pos-1;c<n-1;c++){
            array[c]=array[c+1];//deleting the element
        }
        printf("\nArray after the deletion is");
        for(c=0;c<n-1;c++){
            printf("%d\n",array[c]);
        }
    }
return 0;
}
