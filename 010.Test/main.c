#include <stdio.h>
#include <stdlib.h>

int main(){
   int i,j,max;
   int nums[]={11,5845,0,-28,515,518481,85};
   int count=sizeof(nums)/sizeof(nums[0]);
   for ( i = 0; i < count; i++)
   {
        for ( j = i+1; j < count; j++)
        {
            if(nums[i]>nums[j]){
                max=nums[i];
                nums[i]=nums[j];
                nums[j]=max;
            }
        }
   }
   
   for ( i = 0; i <count; i++)
   {
        printf("%d\n",nums[i]);
   }
   
   
   return 0;
}
