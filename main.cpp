#include <iostream>

int add(int,int);

main int()
{
	int a,b,sum;
	sum=add(a,b);
	std::cout<<"sum of two numbers a="<<a<<"+b= "<<b<<" sum";
	return 0;
}

int add(int x, int y)
{
	return x+y;
}