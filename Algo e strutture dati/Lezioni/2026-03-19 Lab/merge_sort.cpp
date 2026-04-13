#include <iostream>

void combina(int arr[], int start, int mid, int end){
int iSx = start, iDx = mid;
int * tempResult = new int[end-start+1];
int vector_index = 0;
while(1){
if(arr[iSx] < arr[iDx]){
tempResult[vector_index++] = arr[iSx++];
if(iSx == mid)
break;
}else{
tempResult[vector_index++] = arr[iDx++];
if(iDx == end + 1)
break;
}
}
while(iSx < mid){
tempResult[vector_index++] = arr[iSx++];
}
while(iDx <= end){
tempResult[vector_index++] = arr[iDx++];
}
for(int i = 0; i <= end; i++){
arr[i+start] = tempResult[i];
}
for(int i = 0; i <= end; i++){
    std::cout<<arr[i]<<std::endl;
}
}

void mergeSort ( int * arr , int start , int end )
{
int mid;
if( start<end )
{
mid = (start+end)/2; // DIVIDE
mergeSort( arr , start , mid ); // CONQUER
mergeSort( arr , mid+1 , end ); // CONQUER
combina( arr , start , mid+1 , end ); //COMBINA
}
}

int main () {
    int array[] = {10, 30, 50, 4, 2};
    mergeSort(array, 0, 4);

    for (int i = 0; i < 5; i++) {
        std::cout << array[i];
    }
}
