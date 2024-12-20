#include <stdio.h>

int main() {
	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i, index;
	
	printf("array[10]= ");
	for(i = 0;i < sizeof(array)/sizeof(int);i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("moi ban nhap vao vi tri can sua loi: ");
		scanf("%d", &index);
	
	printf("Moi ban sua gia tri array[%d]:  ",index);
	scanf("%d", &array[index]);
	
	printf("array[10]= ");
	for(i = 0;i < sizeof(array)/sizeof(int); i++){
		printf("%d ", array[i]);
	}
	return 0;
}
