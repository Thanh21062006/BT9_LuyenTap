#include <stdio.h>
const int maxSize = 100;

int main() {
	int stt, array[maxSize], size = 0, viTri, giaTri;
	
	while(true){
		printf("=======MENU=======\n");
		printf("1. Nhap vao mang\n");
		printf("2. Hien thi mang\n");
		printf("3. Them phan tu\n");
		printf("4. Sua phan tu\n");
		printf("5. Xoa phan tu\n");
		printf("6. Thoat\n");
		printf("/n");
		
		printf("Moi ban nhap chuc nang tuong ung: ");
		scanf("%d", &stt);
			
		switch(stt){
			case 1:
				printf("Moi ban nhap so luong phan tu muon them vao mang: ");
				scanf("%d", &size);
				
				if(size <= 0){
					printf("Mang khong ton tai! Moi ban nhap tu 1 - 100!");
				}
				else{
					for(int i = 0;i < size;i++){
						printf("Moi ban nhap gia tri phan tu array[%d]: ",i);
						scanf("%d", &array[i]);
					}
				}
				break;
				
			case 2:
				if(size == 0){
					printf("mang trong!");
				}
				else{
					for(int i = 0;i < size;i++){
						printf("%d ", array[i]);
					}
				}
				break;
								
			case 3:
				printf("Moi ban nhap vi tri muon them phan tu: ");
				scanf("%d", &viTri);
				if(viTri <= 0 || viTri > size){
					printf("Vi tri khong ton tai trong mang!");
				}
				else{
					printf("Moi ban nhap gia tri array[%d]: ",viTri);
					scanf("%d", &giaTri);
					for(int i = size;i > viTri;i--){
						array[i] = array[i - 1];
					}
					array[viTri] = giaTri;
					size++;
				}
				break;
								
			case 4:
				printf("Moi ban nhap vi tri can sua: ");
				scanf("%d", &viTri);
				printf("Moi ban nhap gia tri array[%d]: ",viTri);
				scanf("%d", &array[viTri]);
				break;
								
			case 5:
				printf("Moi ban nhap vi tri can xoa: ");
				scanf("%d", &viTri);
				
				for(int i = viTri;i < size;i++){
					array[i] = array[i+1];
				}
				size--;
				break;
			case 6:
				printf("Thoat!");
				break;
			default:
				printf("Moi ban nhap dung chuc nang!\n");
				break;	 
		}
		printf("\n\n");
		if(stt == 6){
			break;
		}
	}
	return 0;
}
