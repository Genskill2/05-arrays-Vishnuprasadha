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
