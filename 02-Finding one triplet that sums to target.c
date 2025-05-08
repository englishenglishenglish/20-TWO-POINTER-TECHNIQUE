#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<3){
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



    int found=0;

    for(int i=0;i<n-2;i++){

      int fix=array[i];
      int left=i+1;
      int right=n-1;
    
        
        while(left<right){
            int sum=array[left]+array[right]+fix;

            if(sum>target){
                right--;
            }else if(sum<target){
                left++;
            }else{
                printf("%d %d %d\n",array[left],array[right],fix);
                found=1;
                return 0;
            }



        }
        
    
    
        
    }
        
      

    if(found==0){
        printf("No valid triplets found\n");
    }


    return 0;
}
