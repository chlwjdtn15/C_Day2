// 논리연산자를 이용해 할인프로그램과 성적 출력 프로그램을 만들어주세요.

#include <stdio.h>

int main(void) {
  
  int score = 50;
  
  // 90점 이상이면 A 출력
  // 80점 이상이면 B 출력
  // 70점 이상이면 C 출력
  // 60점 이상이면 D 출력
  // 60점 미만이면 F 출력

  
  if ( score >= 90) {
    printf("A\n");
  }

  if (score < 90 && score >= 80) {
    printf("B\n");
  }

  if (score < 80 && score >= 70) {
    printf("C\n");
  }

  if (score < 70 && score >= 60) {
    printf("D\n");
  }

  
  if (score < 60){
    printf("F\n");
  }


  
  


  // 조건 : 나이가 19세 이하이거나 60세 이상이면 할인 대상입니다.
  int age = 15; // 여기 값을 바꿔가면서 해보세요



  printf("당신의 나이는 %d살 입니다.\n", age);


  if( age <= 19 || age >= 60) {

    printf("할인 대상입니닷!\n");
  }
  else {
    printf("할인 대상이 아닙니닷!\n");
  }





  return 0;
}