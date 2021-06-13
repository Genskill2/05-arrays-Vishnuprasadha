/* Enter your solutions in this file */
#include <stdio.h>
float average(int arr[], int n){
  float average=0.0;
  for(int i=0;i<n;i++){
    average+=arr[i];
  }
  average=(float)average/(float)n;
  return average;
}
int factors(int no,int nums[]){
    int i=2;
    int index=0;
 while(no>=i){
     if(no%i==0){
       
         nums[index++]=i;
         no=no/i;
         
     }
     else
     i++;
     
 }
return index;
    
}
int max(int nums[], int n){
  int max_val=nums[0];
  for(int i=1;i<n;i++){
    if(max_val<nums[i]){
      max_val=nums[i];
    }
  }
  return max_val;
}
int min(int nums[], int n){
  int min_val=nums[0];
  for(int i=1;i<n;i++){
    if(nums[i]<min_val)
      min_val=nums[i];
  }
  return min_val;

}
