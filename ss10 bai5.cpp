#include<stdio.h>
int main(){
	int array[5] = {9,6,3,6,2};
	int start = 0;
	int mid;
	int end = 5;
	int searchValue;
	for(int i =0;i<5;i++){
		int key = array[i];
		int j = i-1;
		while(j>=0 && array[j] > key){
			array[j+1] = array[j];
			j = j-1;
		}
		array[j+1] = key;
    } 
		
	
	for(int i =0;i<5;i++){
		printf("%d\t",array[i]);
	}
	printf("moi ban nhap so nguyen can tim");
	scanf("%d",&searchValue);
	while(start<=end){
		mid =(start + end) /2;
		if(array[mid]==searchValue){
			printf("phan tu can tim o vi tri %d",mid);
			return 0;
		}else if(array[mid]>searchValue){
			end = mid -1;
		}else{
			start = mid +1;
		}
	}
	printf("ko tim thay phan tu can tim ");
	
	return 0;

	
}
