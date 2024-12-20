#include <stdio.h>
const int maxSize = 100;

int main(){
	int array [maxSize], size, deletearray;
	printf("Moi ban nhap so luong phan tu 1-%d: ", maxSize);
	scanf("%d", &size);
	
	for(int i = 0;i < size;i++){
		printf("Moi ban nhap gia tri array[%d]: ",i);
		scanf("%d", &array[i]);
	}
	
	printf("\narray[size]= ");
	for(int i = 0;i < size;i++){
			printf("%d ", array[i]);
		
		}
	printf("\nMoi ban nhap vi tri can xoa: ");
	scanf("%d", &deletearray);
	for(int i = deletearray;i < size;i++){
		array[i] = array[i+1];
	}
	size -=1;
	
	printf("\narray[size]= ");
		for(int i = 0;i < size;i++){
				printf("%d ", array[i]);
			
		}
	return 0;
}
