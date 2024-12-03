#include<stdio.h>
int main(){
	int array[5] = {6,3,12,9,7};
	int searchValue = 12;
	int flag = -1;
	for(int i =0;i<5;i++){
		if(array[i] == searchValue){
			flag = i+1;
			break;
		}
	}
	
	if(flag != -1){
		printf("phan tu can tim dang o vi tri %d\n",flag);
	}
	else{
		printf("phan tu can tim ko co trong mang");
	}
	
	
	return 0;
	
}
