#include <iostream>
#include "AddTwoNumbers.h"
using namespace std;

void test1() {
	//123 + 456
	int num1[3]={1,2,3};
	int num2[3]={4,5,6};
	printNumber(num1,3,1);
	cout<<" + ";
	printNumber(num2,3,1);
	cout<<" = ";
	addTwoNumbers(3,num1,1,num2,1);
	cout<<endl;
}

void test2() {
	//123 + -456
    int num1[3]={1,2,3};
    int num2[3]={4,5,6};
    printNumber(num1,3,1);
    cout<<" + ";
    printNumber(num2,3,0);
    cout<<" = ";
    addTwoNumbers(3,num1,1,num2,0);
    cout<<endl;
}

void test3() {
	//456 + -123
    int num2[3]={1,2,3};
    int num1[3]={4,5,6};
    printNumber(num1,3,1);
    cout<<" + ";
    printNumber(num2,3,0);
    cout<<" = ";
    addTwoNumbers(3,num1,1,num2,0);
    cout<<endl;
}

void test4() {
	//123 + 956
    int num1[3]={1,2,3};
    int num2[3]={9,5,6};
    printNumber(num1,3,1);
    cout<<" + ";
    printNumber(num2,3,1);
    cout<<" = ";
    addTwoNumbers(3,num1,1,num2,1);
    cout<<endl;
}

void test5() {
	//-123 + -456
    int num1[3]={1,2,3};
    int num2[3]={4,5,6};
    printNumber(num1,3,0);
    cout<<" + ";
    printNumber(num2,3,0);
    cout<<" = ";
    addTwoNumbers(3,num1,0,num2,0);
    cout<<endl;
}

void test6() {
	//999 + 999
    int num1[3]={9,9,9};
    int num2[3]={9,9,9};
    printNumber(num1,3,1);
    cout<<" + ";
    printNumber(num2,3,1);
    cout<<" = ";
    addTwoNumbers(3,num1,1,num2,1);
    cout<<endl;
}

void test7() {
	//99 + -123
    int num1[3]={0,9,9};
    int num2[3]={1,2,3};
    printNumber(num1,3,0);
    cout<<" + ";
    printNumber(num2,3,1);
    cout<<" = ";
    addTwoNumbers(3,num1,0,num2,1);
    cout<<endl;
}

int main() {
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	return 0;
}
