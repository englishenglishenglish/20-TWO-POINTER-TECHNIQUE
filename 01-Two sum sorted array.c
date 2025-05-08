#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<1){
        printf("Invalid input\n");
        return -1;
    }

    int target;
    scanf("%d",&target);

    int array[n];
    printf("Enter elements in ascending order:\n");

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    int left=0;
    int right=n-1;
    int found=0;
    while(left<right){
        if(array[left]+array[right]>target){
            right--;
        }
        if(array[left]+array[right]<target){
            left++;
        }
        if(array[left]+array[right]==target){
            printf("%d %d",left+1,right+1);
            found=1;
            break;
        }
    }

    if(found==0){
        printf("No valid pair found\n");
    }

}