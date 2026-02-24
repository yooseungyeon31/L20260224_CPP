#include<iostream>

using namespace std;

//연산자 -> operator,산술연산자,+,-,*,/,%
//문자열 상수 "AB"
//문자 상수 'A','B'
//숫자 상수 0,1,2,3,4,5,6,7,8,9,-1
//RAM(mainMemory)
//Money[10]
//변수명은 파스칼 표기법 Pascal Case
//띄어쓰기는 bsd 스타일로 적용
//변수 생략은 노
//money
//    [0][1][2][3][4][5][6]

int main() //entry point
{
	/*cout << "Hello, World" << endl;
	cout << 3 + 4 << endl;
	cout << 3 * 4 << endl;*/

	//int Money[10];
	//Money[0] = 10;
	//Money[1] = 2;

	int Money[1000];

	for (int Index = 0; Index < 1000; ++Index)
	{
		Money[Index] = 10;
	}
	

	return 0;
}