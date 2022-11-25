// CHAP01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
//
//int sumA(int num) {
//	int sum = ((num) * (num + 1)) / 2; //알고리즘 A
//}
//
//int sumB(int num) {
//	int sum = 0;
//	for (int i = 1; i <= num; i++) //알고리즘 B
//		sum += i;
//}
//
//int sumC(int num) {
//	int sum = 0;
//	for (int i = 1; i <= num; i++) //알고리즘 C
//		for (int j = 0; j < i; j++)
//			sum += 1;
//}

int main()
{
	//clock_t start, finish;
	//double duration;

	int sum=0;
	int num;

	cout << "1부터 n까지의 합계를 구합니다. n을 알려주세요 : ";
	cin >> num;

 //   sum = ((num) * (num + 1)) / 2; //알고리즘 A
	//cout << "합계 : " << sum << endl;
	//

	//for (int i = 1; i <= num; i++) //알고리즘 B
	//	sum += i;
	//cout << "합계 : " << sum << endl;

	//int sum = 0;
	for (int i = 1; i <= num; i++) //알고리즘 C
		for (int j = 0; j < i; j++)
			sum += 1;
	cout << "합계 : " << sum << endl;

	//start = clock();
	//finish = clock();
	//cout << "sumA 결과: " << sum << endl;
	//duration = (double)(finish - start) / CLOCKS_PER_SEC;
	//cout << "sumA를 수행하는데 걸린 시간: " << duration << endl << endl;

	//start = clock();
	//finish = clock();
	//cout << "sumB 결과: " << sum << endl;
	//duration = (double)(finish - start) / CLOCKS_PER_SEC;
	//cout << "sumB를 수행하는데 걸린 시간: " << duration << endl << endl;

	//start = clock();
	//finish = clock();
	//cout << "sumC 결과: " << sum << endl;
	//duration = (double)(finish - start) / CLOCKS_PER_SEC;
	//cout << "sumC를 수행하는데 걸린 시간: " << duration << endl << endl;

}



// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
