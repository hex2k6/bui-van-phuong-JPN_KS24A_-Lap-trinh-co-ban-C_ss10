#include<stdio.h>
int main(){
	int array[5] = {8,1,5,7,4};
	for(int i =0;i<4;i++){
		int minIdx = i;
		for(int j =i+1;j<5;j++){
			if(array[j]<array[minIdx]){
				minIdx = j;
				
		}
		
	}
	int temp = array[minIdx];
	array[minIdx] = array[i];
	array[i] = temp;
}
	for(int i =0;i<5;i++){
		printf("%d\t",array[i]);
	}
	
	return 0;
	
}
