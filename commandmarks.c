#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	char name[10];
	int dev,ds,dlco,chemistry,beee;
};
int main(int argc,char *argv[])
{
	struct student s;
	int total;
    strcpy(s.name,argv[1]);
	s.dev=atoi(argv[2]);
	s.ds=atoi(argv[3]);
	s.dlco=atoi(argv[4]);
	s.chemistry=atoi(argv[5]);
	s.beee=atoi(argv[6]);
	total=s.dev+s.ds+s.dlco+s.chemistry+s.beee;
	printf("Name:%s\n",s.name);
	printf("dev=%d\n",s.dev);
	printf("ds=%d\n",s.ds);
	printf("dlco=%d\n",s.dlco);
	printf("chemistry=%d\n",s.chemistry);
	printf("beee=%d\n",s.beee);
	printf("total=%d\n",total);
}
