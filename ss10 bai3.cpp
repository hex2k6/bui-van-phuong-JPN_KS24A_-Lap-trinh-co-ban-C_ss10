#include<stdio.h>
int main(){
	int array[5] = {7,3,8,15,6};
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
	
	return 0;
	
}
