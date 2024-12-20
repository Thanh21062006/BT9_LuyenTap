#include <stdio.h>
const int maxSize = 100;

int size = 0;
int main() {
	int array [maxSize], fix, save;
	printf("Moi ban nhap so luong phan tu muon them: ");
	scanf("%d", &size);
	
	if(size < 0 || size > 100){
		printf("Mang khong ton tai! yeu cau ban nhap tu 1 - %d ", maxSize);
		return 0;
	}
	
	for(int i = 0;i < size;i++){
		printf("Moi ban gia tri array [%d]: ",i);
		scanf("%d", &array[i]);
	}
	
	printf("\narray[%d]= ",size);
	for(int i = 0;i < size;i++){
			printf("%d ", array[i]);
	}
	
	printf("\nMoi ban nhap vi tri can sua trong mang: ");
	scanf("%d", &fix);
	if(fix > 0 && fix < size){
		printf("\nMoi ban nhap gia tri can sua array[%d]= ", fix);
		scanf("%d", &save);
		array[fix] = save;
		
		printf("array[%d]= ",size);
		for(int i = 0;i < size;i++){
				printf("%d ", array[i]);
			}
		}
		else{
			printf("Phan tu ban nhap khong ton tai! ");
		}
	return 0;
}
	
