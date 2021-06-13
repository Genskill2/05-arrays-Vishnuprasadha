
#include <stdio.h>
float average(int arr[], int n){
  float average_val=0.0;
  for(int i=0;i<n;i++){
    average_val+=arr[i];
  }
  average_val=(float)average_val/(float)n;
  return average_val;
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
return nums;
    
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

int mode(int nums[], int n){
  int frequency=0, mode_count=0,mode_value=0;
  for(int i=0;i<n;i++){
    frequency=1;
    for(int j=i+1;j<n;j++){
      if(nums[i]==nums[j])
        frequency++;
    }
    if(frequency>mode_count){
      mode_count=frequency;
      mode_value=nums[i];
    }
  }
  return mode_value;
}
