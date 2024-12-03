#include<stdio.h>
int main(){
	int array[5] = {6,3,12,9,7};
	for(int i =0;i<4;i++){
		for(int j =0;j<4-i;j++){
			if(array[j]>array[j+1]){
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
		
	}
	
	for(int i =0;i<5;i++){
		printf("%d\t",array[i]);
	}
	
	return 0;
	
}
