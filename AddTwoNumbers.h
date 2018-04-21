#ifndef add_two_numbers_h
#define add_two_numbers_h
#include <iostream>
#include <stdexcept>
using namespace std;
void myAdd(const int num1[], int length, const int num2[], int sum[]);
void mySub(const int num1[], int length, const int num2[], int sum[]);
bool isLarger(const int num1[], int length, const int num2[]);
void printNumber(int sum[], int length, bool isPostive);

void addTwoNumbers(int length, const int num1[], bool isPostive1, const int num2[], bool isPostive2) {
	if (length<=0||num1==nullptr||num2==nullptr)
		throw invalid_argument("Pay attention to the inputs.");
	
	//最后求和的数的符号。
	bool isPostive=true;
	
	if ((isPostive1&&isPostive2)||((!isPostive1)&&(!isPostive2))) {
		if (isPostive1&&isPostive2) isPostive=true;
		else isPostive=false;
		
		int *sum=new int [length+1];
		for (int i=0; i!=length+1; ++i) 
			sum[i]=0;

		myAdd(num1, length, num2, sum);
		printNumber(sum, length+1, isPostive);
		delete []sum;
	}	
	else {
		int *sum=new int [length];
        for (int i=0; i!=length; ++i)
            sum[i]=0;
		if (isLarger(num1,length,num2)) {
			if (isPostive1==true&&isPostive2==false) isPostive=true;
			else isPostive=false;
			mySub(num1,length,num2,sum);
		}
		else {
            if (isPostive1==true&&isPostive2==false) isPostive=false;
            else isPostive=true;
			mySub(num2,length,num1,sum);
		}			
		printNumber(sum,length,isPostive);
		delete []sum;
	}
}

void myAdd(const int num1[], int length, const int num2[], int sum[]) {
	//the l of sum is length+1.
	for (int i=length; i!=0; i--) {
		sum[i]=num1[i-1]+num2[i-1]+sum[i];
		//考虑进位。
		if (sum[i]>9) {
			sum[i]-=10;
			sum[i-1]++;
		}
	}
}

void mySub(const int num1[], int length, const int num2[], int sum[]) {
	//|num1|-|num2| && |num1|>|num2|
	//the l of sum is length.
	for (int i=length-1; i!=-1; i--) {
		sum[i]=num1[i]-num2[i]+sum[i];
		//考虑借位。
		if (sum[i]<0) {
			sum[i]+=10;
			sum[i-1]--;
		}
	}
}

bool isLarger(const int num1[], int length, const int num2[]) {
	for (int i=0; i!=length; ++i) {
		if (num1[i]>num2[i]) return true;
		else return false;
	}
	return false;
}

void printNumber(int sum[], int length, bool isPostive) {
	if(!isPostive) 
		cout<<"-";

	bool isPrinted=false;
	for (int i=0; i!=length; ++i) {
		if (sum[i]!=0) isPrinted=true;
		if (isPrinted) cout<<sum[i];
	}

}
#endif
