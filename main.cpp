#include<iostream>

void sort(int arr[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int nums[] = {3, 4, 6, 8, 9, 2, 1, 7, 5, 10};
    int size = sizeof(nums)/sizeof(int);
    sort(nums,size);

    for(int num : nums){
        std::cout << num << "\n";
    }
    return 0;
}