# C 스터디 5주차

### 아스키코드

  **각각의 문자들은 고유한 값을 갖고있는데 그것이 바로 아스키코드이다.**

  ```
  char a = 'a';
  char b = 'b';
  char A = 'A';
  char B = 'B';

  printf("%d\n", a);  #출력 결과 : 97
  printf("%d\n", b);  #출력 결과 : 98
  printf("%d\n", A);  #출력 결과 : 65
  printf("%d\n", B);  #출력 결과 : 66
  ```
[아스키코드표](http://terms.naver.com/entry.nhn?docId=784747&cid=41828&categoryId=41828)

--------------------------------------------------------------------

### 문자열

 **문자열이란?**
   > 문자들의 배열 즉 char 배열이다.

 ```
 char buf1[] = "Hello";
 char buf2[4] = "Hello";
 char buf3[5] = "Hello";
 char buf4[6] = "Hello";
 char buf5[100] = "Hello";

 printf("%s\n", buf1);  #출력 결과 : Hello
 printf("%s\n", buf2);  #출력 결과 : Hell까지 출력이 되고 뒤에 이상한 값이 출력된다.
 printf("%s\n", buf3);  #출력 결과 : Hello까지 출력이 되고 뒤에 이상한 값이 출력된다.
 printf("%s\n", buf4);  #출력 결과 : Hello
 printf("%s\n", buf5);  #출력 결과 : Hello

 ```

 문자열은 int 배열과 달리 끝에 NULL문자('\0')가 들어간다.  

 ```
 char buf[6] = "Hello";
 ```
 ![](https://github.com/alchon/C_study/blob/master/assets/string.PNG?raw=true)

 문자열을 입력 받는 방법은 여러가지 방법이 있다.  

 ```
 char buf[100];
 scanf("%s", buf);
 ```
 Hello를 입력하고 출력해보면 Hello가 잘 출력된다. 하지만 Hello world를 입력하고 출력해보면 Hello만 출력이된다. 왜 Hello world가 전부 출력이 되지 않았을까?

 scanf()로는 공백을 읽을 수 없기 때문이다. 그렇다면 어떻게 해야할까?

 gets()를 사용하면 된다.
 ```
 char buf[100];
 gets(buf);
 ```
  Hello world를 입력하고 출력해보면 Hello world가 출력이 된다. 하지만 컴파일 과정에서 경고를 받았을 것이다. 그 부분에 대해서는 직접 fgets()를 검색해보며 공부하자.

-----------------------------------------------------------------------

### string.h

지금까지 scanf()와 printf()를 사용하기 위해 stdio.h를 사용했다면 문자열관련 함수들을 사용하기 위해서는 string.h를 사용해야한다.

**문자열 길이 - strlen()**
```
#include <stdio.h>
#include <string.h>

int main(void)
{
  char buf[] = "hello world";
  int len = strlen(buf);
  printf("%d\n", len);  #출력 결과 : 11
  return 0;
}
```

다른 기타 함수들로는 strcmp, strcpy, strcat등등 있으며 직접 검색해보며 공부하자.

# C 스터디 6주차

### 이중배열

  **이중배열이란 int a[10][10] 위와 같은 형식으로 선언이 된다.**

  **일차원 배열과 마찬가지로 선언과 동시에 초기화 할 수 있다.**

  ```
  int a[3][3] = {{1,1,1},{2,2,2},{3,3,3}}

  이차원 배열의 내용을 출력하려면 이중 반복문이 필요하다.

    #include <stdio.h>
    int main ()
    {
        int i, j;
        int a[3][3]={{1, 11, 21},{2, 22, 23},{3, 34, 36}}; //선언

        for(i=0;i<3;i++){
            for(j=0;j<3;j++)
                printf("%d ",a[i][j]);
                printf("\n");
            }
    }
  ```
  a[][] : 두개의 [] (대괄호)가 행과 열을 나타낼 수 있다.

--------------------------------------------------------------------
이름을 3글자씩 준다고 char name[3][3]; 이렇게 선언하면,
한글은 한글자에 2byte씩이고 문자열의 맨 뒤에는 우리 눈에는 보이지 않지만 '\0'가 들어가 있다. 널 문자라고도 하는데, 문자열의 끝을 나타내 줍니다. 그렇기 때문에 최소 7이상은 선언해 주시는게 좋다.
