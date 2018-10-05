#include <stdio.h>

int main() {
  int n, max=0, count=0;
  scanf("%d", &n);
  int arr [n];
  for (int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }
  for (int i=1;i<n;i++){
    for (int j=0;j<n-i+1;j++){
      count=0;
      for (int k=0;k<i;k++){
        count+=arr[j+k];
      }
      if (count>max)max=count;
    }
  }
  printf("%d", max);
  return 0;
}
