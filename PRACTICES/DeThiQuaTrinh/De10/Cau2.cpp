#include <stdio.h>
#include <string.h>

typedef struct {
	int id;
	char name[50];
	char school;
	//school[2];
	double grade;
} Student ;

void input(Student *s){
	printf("pls enter student id: ");
	scanf("%d", &s->id);
	printf("pls enter name: ");
	getchar();
	gets(s->name);
	printf("pls enter school: ");
	scanf("%c", &s->school);
	printf("pls enter grade: ");
	scanf("%lf",&s->grade);
}

void output(Student s){
	printf("%d, %s, %c, %.2lf\n", s.id, s.name, s.school, s.grade);
}

void findGradeGreater15(Student s[], int n){
	int check = 0;
	printf("Danh sach sv co diem thi truong B >= 15 : ");
	for(int i = 1; i <= n; i++){
		if(s[i].grade >= 15 && s[i].school == 'B'){
			//strcmp(s.school, "B") == 0
			output(s[i]);
			check = 1;
		}
	}
	
	if(check == 0){
		printf("Khong co sv truong B co diem thi >= 15 : ");
	}
}

void sort(Student s[], int n){
	for(int i = 1; i < n; i++){
		for(int j = i + 1; j <= n; j++){
			if(s[i].grade < s[j].grade){
				Student tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}
		}
	}
	for(int i = 1; i <= n; i++){
		output(s[i]);
	}
}

void findNameOfStudent(Student s[], int n, char findName[50]){
	int check2 = 0;
	for(int i = 1; i <= n; i++){
		if(strcmp(s[i].name, findName) == 0){
			printf("%d, %s, %c, %.2lf\n", s[i].id, s[i].name, s[i].school, s[i].grade);
			check2 = 1;
		}
	}
	if(check2 == 0){
		printf("Khong co sinh vien co ten %s", findName);
	}
}

int main(){
	int n;
	printf("Pls enter number of student: ");
	scanf("%d", &n);
	Student s[n+1];
	for(int i = 1; i <= n; i++){
		input(&s[i]);
	}
	
	for(int i = 1; i <= n; i++){
		output(s[i]);
	}
	
	findGradeGreater15(s, n);
	sort(s, n);
	
	char findName[50];
	getchar();
	gets(findName);
	findNameOfStudent(s, n, findName);
	
}