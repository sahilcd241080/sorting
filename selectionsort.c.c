/*#include <stdio.h>


// selection short

void selectionsort(int arr[] , int n){
    
    for(int i=0;i<n - 1; i++){
        int min=i;
        
        for(int j = i+ 1; j<n; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        
        if(min!=i){
            int temp = arr[min];
            arr[min]=arr[i];
            arr[i] = temp;
        }
    }
    
}

int main(){
    
    int arr[] = {4,7,9,4,1,5,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    selectionsort( arr, n);
    
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
    return 0;
}
*/


#include <stdio.h>


// selection short

void selectionsort(int arr[] , int n){
    
    for(int i=0;i<n - 1; i++){
        int min=i;
        
        for(int j = i+ 1; j<n; j++){
            if(arr[j]>arr[min]){
                min = j;
            }
        }
        
        if(min!=i){
            int temp = arr[min];
            arr[min]=arr[i];
            arr[i] = temp;
        }
    }
    
}

int main(){
    
    int arr[] = {4,7,9,4,1,5,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    selectionsort( arr, n);
    
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
    return 0;
}

































