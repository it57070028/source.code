#include <stdio.h>
int main(void)
{
	char name[100];
	int yob, current_year, age;
	scanf("%[^\n]", name);
	scanf("%d", &yob);
	scanf("%d", &current_year);
	age = current_year - yob;
	printf("%s is %d years old.\n", name, age);
}
