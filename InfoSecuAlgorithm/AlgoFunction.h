#pragma once
#include <stdio.h>

// 01.최대공약수 Greatest Common Divisor
// 유클리드 호제법 Euclidean algorithm
// 유클리드(B.C.365~B.C.275)는 기하학의 아버지라고 불리는 유명한 고대
// 수학자입니다. 유클리드의 저서 중에서 가장 유명한 것이 총 13권으로 구성된
// '기하학 원본'입니다. 이 책은 그의 선배인 피타고라스,플라톤,히포크라테스 등이
// 연구한 여러 가지 자료를 정선하고 거기에 자신의 창작을 가미하여 조직적인
// 교과서로 편찬한 것으로서 수학사상 최고의 성전이라고도 할 수 있습니다.
int getGCD(int nFir, int nSec);

// 02.하노이탑 Hanoi Tower
// 883년 프랑스 수학자 루카스(Lucas.E)는 하노이 탑이라고 불려지게 된 유명한
// 문제를 고안해냈습니다. 전설에 따르면 천지 창조시에 가운데에 작은 구멍이
// 뚫린 64개의 금으로 된 원판이 하노이의 한 사원에 보관되어 있었다고 합니다.
// 이들 원판은 어느 것도 크기가 같지 않으며, 작은 원판이 큰원판 위에 오도록
// 포개어져, 세개의 기둥 가운데 한 개에 끼워져 있었다고 합니다. 이러한 모양이
// 탑과 비슷하다하여 하노이탑(Hanoi Tower)이라 부릅니다.
// 조물주가 사원의 승려에게 명하기를 '64개의 원판을 하나씩 옮겨서 다른 기둥
// 위에 원래 상태대로 옮겨 놓되 옮기는 과정에서 절대로 큰 원판이 작은 원판
// 위에 놓이지 않도록 하라고 했습니다. 모든 원판이 옮겨지면 세상은 종말이
// 올 것이며 충실한 자는 상을 받을 것이고 불충실한 자는 벌을 받을 것이다'라고
// 했다는데 만일 승려들이 매우 빠르게 움직여 매초에 한개씩 옮긴다면
// 전부 옮기는데 얼마나 걸릴까요?
void Hanoi(int n, char from, char middle, char to);

// 03. 소수 Prime Number
void IsPrimeNumber(int n);

// 04. 마방진 Magic Square
void InitSquare();
void GetOddSquare(int n);
void ShowSquare(int n);

// 05. 배열 Array
// 06. 링크 Link
// 07. 스택 Stack
// 08. 큐 Queue
// 09. 트리 Tree
// 10. 정렬 Sorting
// 11. 검색 Searching
// 12. 암호화 Cryptography
// 13. 압축 Compress
