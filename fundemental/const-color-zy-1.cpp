#include <stdio.h>
const int red = 0;
const int yellow = 1;
const int blue = 2;

int main( )
{	int color;
	char *colorName = NULL;
	printf("please input your number of your favourite color");
	scanf("%d", &color);
	switch (color)
	{	case red:
			*colorName ='red';
			break;
		case yellow:
			*colorName ='yellow';
			break;
		case blue:
			*colorName ='blue';
			break;
		default:
			printf("your number did not exist!!");
			break;
	}
	printf("%s",colorName);
	return 0;
}