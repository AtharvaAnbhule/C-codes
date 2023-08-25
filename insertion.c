#include <stdio.h>


int main() {
int n;
printf("Enter total number of array elements:");
scanf("%d",&n);
int arr[n];
int i;
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int pos; //input for position to which we want to insert
printf("Enter the pos");
scanf("%d",&pos);
int ele;//element we want to insert
printf("Enter the ele");
scanf("%d",&ele);
if(pos>n){
    printf("Invalid input");
}
else{
    for(i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=ele; // inserting the element by shifting other elements
    printf("Array After insertion is:\n");
    for(i=0;i<=n;i++){
        printf("%d\n",arr[i]);
    }
  
    
}
return 0;
}
