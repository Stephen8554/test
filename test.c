#include <stdio.h>
#define definea(a, b) typeof(a) b = 111;

#define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)

#define container_of(ptr, TYPE, MEMBER) (TYPE *)((char*)ptr - offsetof(TYPE, MEMBER))

struct STU
{
	char name[32];
	int grade;
	int sex;
	unsigned char id[32];
}stu = {"stephen", 3, 1, "2012001400156"};

int main(int argc, char const *argv[])
{
	int a = 0;
	definea(a, b);
	printf("%d\n", b);

	typeof(stu) *p;
	p = container_of(&(stu.id), struct STU, id);
	printf("%d\n", p->grade);
	printf("%d\n", -1%10);

	return 0;
}