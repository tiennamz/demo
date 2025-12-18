#include<stdio.h>
#include<math.h>
#include<string.h>
#define MAX 1000
int partition(int a[], int low, int high){
	int pivot = a[high];
	int i = low - 1;
	for(int j = low; j <= high; j++){
		if(a[j] < pivot){
			++i;
			int tmp = a[j];
			a[j] = a[i];
			a[i] = tmp;
		}
	}
	++i;
	int tmp = a[high];
	a[high] = a[i];
	a[i] = tmp;
	return i;
}

void quickSort(int a[], int low, int high){
	if(low < high){
		int pos = partition(a, low, high);
		quickSort(a, low, pos - 1);
		quickSort(a, pos + 1, high);
	}
}



int main(){
int n;	
printf("Nhap so phan tu cho mang: ");
 scanf("%d", &n);
 int a[MAX];
 for(int i = 0; i < n; i++){
 	printf("Nhap gia tri cho a[%d]: ", i);
 	scanf("%d", &a[i]);
 }	
quickSort(a, 0, n - 1);
for(int i = 0; i < n; i++){
	printf("%d ", a[i]);
}

return 0;
}

