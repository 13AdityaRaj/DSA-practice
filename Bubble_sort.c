                           
                           // BUBBLE  SORT

#include<stdio.h>

void bubblesort(int ar[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(ar[j]>ar[j+1]){
            temp=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]=temp;

        }
        }

    }
for(i=0;i<n;i++){
    printf(" %d ",ar[i]);
}
}

int main() {

int n,j,i;
printf("Enter the size of array : ");
scanf("%d",&n);
int ar[n],result;
for(j=0;j<n;j++){
    printf("Enter element :  ");
    scanf("%d",&ar[j]);
}
printf("\n Original array : \n");
for(j=0;j<n;j++){
    printf(" %d ",ar[j]);
}
printf("\n After Bubble Sorting : \n ");
bubblesort(ar,n);

return 0;
}