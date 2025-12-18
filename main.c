#include <stdio.h>
#include <string.h>
#define MAX_MON_HOC 10
typedef struct{
	char name [50];
	int age;
	float grade;
}Student ;

void student(Student s, int index) {
	printf("ten:%s\n ",s.name);
	printf("age:%d\n ",s.age);
	printf("grade:%.2f\n ",s.grade);
}
int score_medium( float soMon, float diem[] ) {
	float tong_mon =0;
	int so_mon;
	for (int i=0; i<soMon; i++) {
		tong_mon += diem[i];
	}
float dtb =tong_mon/soMon;
	return dtb;
}



int main() {

	Student hocsinh1;

	printf("\n-------------------nhap thong tin hoc sinh----------------\n");


	printf("nhap ten hoc sinh: ");
	scanf("%s", hocsinh1.name);

	printf("nhap tuoi hoc sinh: ");
	scanf("%d", &hocsinh1.age);

	int so_mon;// nhap so mon
	printf("so mon: ");
	scanf("%d",&so_mon);
	fflush(stdin);

	float diem[MAX_MON_HOC];
	float he_so[MAX_MON_HOC];

	for(int i=0 ; i<so_mon ; i++){
		printf("Nhap diem %d: ", i + 1 ) ;
		scanf("%f",&diem[i]);

	}
	hocsinh1.grade =  score_medium( so_mon, diem );
	printf("diem tb: %.2f",hocsinh1.grade);
}