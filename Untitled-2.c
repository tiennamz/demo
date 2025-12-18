#include<stdio.h>
#include<string.h>


int main(){
printf("Nhap so phan tu cua mang: ");
int n;
scanf("%d", &n);
int arr[n];
for(int i=0; i<n; i++){
    printf("Nhap phan tu thu %d: ", i+1);
    scanf("%d", &arr[i]);
  
}
printf("Mang vua nhap la: ");
for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
}
}
