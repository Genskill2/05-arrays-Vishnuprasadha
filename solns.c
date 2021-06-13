
#include <stdio.h>
#include <assert.h>


float average(int arr[], int n){
  float average=0.0;
  for(int i=0;i<n;i++){
    average+=arr[i];
  }
  average=(float)average/(float)n;
  return average;
}

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert ((average(x, 7) - 4.7142) < 0.001);

  int y[] = {5};
  assert (average(y, 1) == 5.0);
  printf("Average: passed\n");
  }
#include <stdio.h>
#include <assert.h>


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

int main(void) {
  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  printf("Factors: passed\n");
}
#include <stdio.h>
#include <assert.h>


int max(int nums[], int n){
  int max_val=nums[0];
  for(int i=1;i<n;i++){
    if(max_val<nums[i]){
      max_val=nums[i];
    }
  }
  return max_val;
}

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
  
#include <stdio.h>
#include <assert.h>


int min(int nums[], int n){
  int min_val=nums[0];
  for(int i=1;i<n;i++){
    if(nums[i]<min_val)
      min_val=nums[i];
  }
  return min_val;

}

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (min(x, 7) == -3);

  int y[] = {5};
  assert (min(y, 1) == 5);
  printf("Min: passed\n");
  }
#include <stdio.h>
#include <assert.h>


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

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  }
