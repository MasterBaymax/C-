//#include <stdio.h>
//#include <stdlib.h>
//
///*
// * ´ø²ÎÊýµÄºê
//*/
//#define SUM(x,y) x+x*y+y
//
//int main()
//{
//    int num1 = 200, num2 = 100;
//    printf("%d\n", SUM(num1, num2));
//    return 0;
//}
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = 2;
//	cout << pow(a, 3);
//	//system("pause");
//	return 0;
//}

/**< 2014 C程序设计填空题 */
/**< 2. */
//#include<stdio.h>
//
//void Display(void)
//{
//    int ch;
//    if ((ch = getchar()) != '!')
//        Display();
//    putchar(ch);
//}
//
//int main(void)
//{
//    Display();
//    return 0;
//}

/**< 3. */
//#include<stdio.h>
//
//int main()
//{
//    unsigned char a=0xff, b = 0x01, c;
//    b = b<<4;
//    c = ~(a&b);
//    printf("%d\n%d\n%d",c,b,a&b);
//    return 0;
//}

/**< 4 */
//#include<stdio.h>
//
//int main()
//{
//    char str[16]="hello,world", *s = str;
//	printf("%d\n%d\n%d\n", sizeof(str) + sizeof(s), sizeof(str), sizeof(s));
//	char (*p)(int);
//	p = str;
//	puts(p);
//	char str2[][5] = {"hell", "wolr"};
//	p = str2;
//	puts(p[0]);
//    return 0;
//}

#include<stdio.h>

int main()
{
    char a[] = "hello";
    char *p =a;
    if (p[0] == a[0])
        printf("yes");
    return 0;
}
