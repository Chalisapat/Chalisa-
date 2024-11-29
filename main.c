#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[1];

    for (int i = 0; i < n; i++){
        if (i%2==0){
            if(arr[i]>max){
                max=arr[i];
            }
            else{
                if (arr[i]<min)
                {
                    min=arr[i];
                }
                
            }
        }
    }
    

    printf("%d %d", min, max);
}