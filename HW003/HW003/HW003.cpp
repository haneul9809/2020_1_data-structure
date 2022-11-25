// HW003.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "ArrayStack.h"
#include <cstdlib>

using namespace std;

bool checkMatching(char* filename)
{
    FILE* fp = fopen(filename, "r");
    if (fp == NULL)
        error("Error: 파일 존재하지 않습니다.\n");

    int nLine = 1;
    int nChar = 0;
    ArrayStack stack;
    char ch;
    bool quotation = false, bigQuot = false;
    bool note = false;

    while ((ch = getc(fp)) != EOF)
    {
        if (ch == '\/' && note == false && quotation == false)
            note = true;
        if (ch == '\'' && quotation == true)
            quotation = false;
        else if (ch == '\'')
            quotation = true;
        if (ch == '\"' && bigQuot == true)
            bigQuot = false;
        else if (ch == '\"')
            bigQuot = true;
        if ((ch == '[' || ch == '(' || ch == '{') && quotation == false && bigQuot == false && note == false)
            stack.push(ch);
        if ((ch == ']' || ch == ')' || ch == '}') && quotation == false && bigQuot == false && note == false)
        {
            char prev = stack.pop();
            if ((prev != '[' && ch == ']') || (prev != '(' && ch == ')') || (prev != '{' && ch == '}'))
                break;
        }


        if (ch == '\n')
        {
            nLine++;
            note = false;
        }
        nChar++;
    }

    fclose(fp);

    cout << "[" << filename << "] 파일 검사결과" << endl;
    if (!stack.isEmpty())
        cout << "Error: 문제발견!(라인수=" << nLine << ", 문자수=" << nChar << ")" << endl;
    else
        cout << " OK: 괄호닫기정상(라인수=" << nLine << ", 문자수=" << nChar << ")" << endl << endl;
    return stack.isEmpty();
}
}
voivoid main()
{
    ArrayStack stack;
    for (int i = 1; i < 10; i++) {
        stack.push(i);
    }
    stack.display();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.display();

    int main(void)

    {
        checkMatching("ArrayStack.h");  checkMatching("CheckMatching.cpp");

        cout << "왼쪽 괄호= (" << endl;

        return 0;
    }
}}

