#include <stdio.h>




void swap(int *a, int i, int j){
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int partition(int *a, int left, int right, int len){
    int l = left;
    int r = right;
    int pivot = a[right];

    while(1){
        while(a[l] <= pivot && l < r) l++;
        while(a[r] >= pivot && l < r) r--;
        if(l >= r) break;
        swap(a, l, r);
    }
    swap(a, l, right);
    for(int i=0;i<len;i++){
        printf("%3d", a[i]);
    }
    putchar('\n');
    return l;
}

void quicksort(int *a, int left, int right, int len){

    if(left >= right) return;

    int index = partition(a, left, right, len);

    quicksort(a, left, index - 1, len);
    quicksort(a, index + 1, right, len);
}
int main(){
    int a[] = {60, 55, 48, 37, 10, 90, 84, 36};
    int len = sizeof(a) / sizeof(a[0]);
    quicksort(a, 0, len - 1, len);
    
    for(int i=0;i<len;i++){
        printf("%3d", a[i]);
    }
    return 0;
}