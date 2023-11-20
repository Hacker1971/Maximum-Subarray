#include<stdio.h>
#include<limits.h>
int Maximum_Subarray(int* nums,int numsize)
{
    int maxsum=INT_MIN;
    int sum=0;
    for(int i=0;i<numsize;i++)
    {
        sum+=nums[i];
        if(sum>maxsum)
        {
            maxsum=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    return maxsum;
}
int main()
{
    int nums[]={-2,1,-3,4,-1,2,1,-5,4};
    int numsize=sizeof(nums)/sizeof(nums[0]);
    printf("%d",Maximum_Subarray(nums,numsize));
    return 0;
}