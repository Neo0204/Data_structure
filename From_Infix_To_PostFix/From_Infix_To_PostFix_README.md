# From_Infix_To_PostFix



## 연산자 우선순위 설정

순서대로 lparen, rparen, plus, minus, times, divide, mod, eos

높은 값이 높은 우선순위를 가짐

```c
int isp[] = { 0,19,12,12,13,13,13,0 };
int icp[] = { 20,19,12,12,13,13,13,0 };
```

- isp는 stack의 연산자 순위 
- icp는 token의 연산자 순위

isp 배열의 lparen과 icp 배열의 lparen의 값이 다른 이유는

```c
while (isp[stack[top]] >= icp[token]) {
			printToken(pop());
		}
```
이 부분은 stack에 저장된 연산자와 token에 저장된 연산자의 우선순위를 비교하는 것인데 stack은 이전의 연산자가 token은 이후의 연산자가 저장되어 있다. stack의 연산자가 높은 우선 순위를 가진 경우 stack에 저장된 연산자가 먼저 출력될 것이다.

token은 왼쪽에서 오른쪽으로 이동해 가며 코드를 보시면 아시겠찌만 스택은 토큰보다 인덱스 1만큼  저장되므로 이 



예를 들면 `a+b*(c*d+g)+e*f` 에서 right Parentheses( " )") 를 만나기전까지 상황을 보겠다.

### stack

| index           | 0    | 1    | 2    | 3    | <u>4</u> | 5    |
| --------------- | ---- | ---- | ---- | ---- | -------- | ---- |
| value           | eos  | +    | *    | (    | *        | +    |
| isp[stack[top]] | 0    | 12   | 13   | 0    | 13       | 12   |
| token           | +    | *    | (    | *    | +        | )    |
| icp[token]      | 12   | 13   | 20   | 13   | 12       | 19   |

이처럼 우선순위가 높은것이 먼저 출력된다.

ㅁ