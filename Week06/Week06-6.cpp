//Week06-6.cpp
//(SOIT107_Base_019)

#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<=b && a<=c) printf("%d\n",a);
	else if(b<=a && b<=c) printf("%d\n",b);
	else printf("%d\n",c);

}


/*

#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(b<a) a = b;
	if(c<a) a = c;
	printf("%d\n",a);

}

*/
