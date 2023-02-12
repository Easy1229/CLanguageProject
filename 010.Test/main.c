#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,max,length;
    int nums[]={12,252,8928,2428,-85,59,925};
    length=sizeof(nums)/sizeof(nums[0]);
    for(i=0;i<length;i++){
        for(j=i+1;j<length+1;j++){
            if(nums[i]>nums[j]){
                max=nums[i];
                nums[i]=nums[j];
                nums[j]=max;
            }
        }
    }

    for(i=0;i<=length;i++){
        printf("%d ",nums[i]);
    }
    return 0;
}
