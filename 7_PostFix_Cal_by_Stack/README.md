# Stack을 이용하여 PostFix 표현식 풀기

설명

```c
		if (token == operand) {
			push(symbol- '0');
		}
```

위 부분에서 symbol - '0' 을 한 이유는 아스키 코드의 숫자의 숫자의 문자열은

![image-20200212174814125](C:\Users\wootae\AppData\Roaming\Typora\typora-user-images\image-20200212174814125.png)

아래와 같이 저장되기 때문이다. 따라서 '0'이라면 실제로 저장되는 char의 값은 48이다.

따라서 피연산자를 push할 때  48인 '0'를 빼 주어야 실제 숫자 값이 저장된다.

한계

- 0~9만 계산할 수 있다.



단점 

- 두 자리 숫자 계산 불가능 하다.
- 극복 방법 : 공백으로 구분되게 하자

