//task 4
#include<stdio.h>
struct bio{
	char des[200];
	int age;
};
struct InstaProfile{
	char userName[30];
	int followers;
	struct bio s2;
}s1;
void main()
{
	printf("Enter User_Name:");
	gets(s1.userName);
	printf("Enter Followers:");
	scanf("%d",&s1.followers);
	getchar();
	printf("Enter Description: ");
	gets(s1.s2.des);
    s1.s2.des[strcspn(s1.s2.des, "\n")] = '\0';
	printf("Enter Age:");
	scanf("%d",&s1.s2.age);
	
	
	printf("\n-----------Insta Profile-------------\n");
	printf("User_name:%s\n",s1.userName);
	printf("Followers:%d\n",s1.followers);
	printf("Description:%s\n",s1.s2.des);
	printf("Age:%d",s1.s2.age);
}
