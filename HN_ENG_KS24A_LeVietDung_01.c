#include<stdio.h>
int main(){
	int chose;
	int n;
	int array[100];
	int min=n;
	int max=0;
	int sum=0;
	int value;
	int del;
	int flag = 0;
    do{
	printf("\tMENU\n");
	printf("1. Nhap so phan tu va gia tri vao mang\n");
	printf("2. In ra gia tri cac phan tu trong mang\n");
	printf("3. Tim gia tri nho nhat va lon nhat trong mang\n");
	printf("4. In ra tong gia tri cac phan tu\n");
	printf("5. Them mot phan tu vao cuoi mang, phan tu moi them vao mang phai do nguoi dung nhap vao\n");
	printf("6. Xoa phan tu tai mot vi tri cu the\n");
	printf("7. Sap xep mang theo thu tu giam dan\n");
	printf("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong\n");
	printf("9. In ra toan bo so nguyen to trong mang\n");
	printf("10. Sap xep mang theo thu tu tang dan\n");
	printf("11. Thoat\n");
	printf("Nhap lua chon cua ban: ");
	scanf("%d",&chose);
	switch(chose){
		case 1:
			printf("Nhap vao so phan tu: ");
			scanf("%d",&n);
			for(int i = 0;i<n;i++){
				printf("Nhap vao phan tu thu %d: ",i);
				scanf("%d",&array[i]);
			}
			break;
		case 2:
			printf("Cac gia tri trong mang: \n");
			for(int i = 0;i<n;i++){
				printf("array[%d]=%d\n",i,array[i]);
			}
			break;
		case 3:

			for(int i = 0;i<n;i++){
				if(max < array[i]){
					max = array[i];
				}else if(min > array[i]){
					min = array[i];
				}
			}
			printf("Gia tri nho nhat va lon nhat trong mang la: %d\t %d\n",min,max);
			break;
		case 4:
			for(int i =0;i<n;i++){
				sum += array[i];
			}
			printf("Tong tat ca cac phan tu la: %d\n",sum);
			break;
		case 5:

			printf("Them vao 1 phan tu: ");
			scanf("%d",&value);
			n++;
			array[n-1] = value;
			break;
		case 6:
			printf("Nhap vi tri ban muon xoa: ");
			scanf("%d",&del);
			for(int i = del;i<n;i++){
				array[i]=array[i+1];
			}
			n--;
			break;
		case 7:
			for(int i = 0;i<n-1;i++){
				for(int j=0;j<n-i-1;j++){
					if(array[j]<array[j+1]){
						int temp = array[j];
						array[j]=array[j+1];
						array[j+1]= temp;
					}
				}
			}
			break;
		case 8:
			flag = 0;
			printf("Nhap vao 1 so bat ky: ");
			scanf("%d",&value);
			for(int i = 0;i<n;i++){
				if(array[i] == value){
					flag++;
				}
			}
			if(flag){
				printf("%d co ton tai trong mang\n", value);
			}else{
				printf("So ban nhap khong ton tai trong mang\n");
			}
			break;
		case 9:
			flag=0;
			for(int i = 0;i<n;i++){
				if(array[i]==1){
					continue;
				}else if(array[i]==2){
					printf("So nguyen to %d \n",array[i]);
					flag = 1;
					continue;
				}else if(array[i]==3){
					printf("So nguyen to %d \n",array[i]);
				}else if(array[i] % 2 == 0 || array[i] % 3 ==0){
					flag=0;
					continue;
				}else{
					printf("So nguyen to %d \n",array[i]);
				}
			}
			if(flag == 0){
				printf("Khong co so nao la so nguyen to");
			}
			break;
		case 10:
			for(int i = 0;i<n-1;i++){
				int min = i;
				for(int j = i + 1;j<n;j++){
					if(array[j]<array[min]){
						min = j;
					}
				}
				int temp = array[min];
				array[min] = array[i];
				array[i] = temp; 
			}
			break;
	    }
	}while(chose < 11);
	return 0;
}
