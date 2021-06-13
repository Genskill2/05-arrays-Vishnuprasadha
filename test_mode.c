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
