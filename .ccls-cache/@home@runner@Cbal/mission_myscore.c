#include <stdio.h>
main(){

  int a;
  printf("자신의 점수를 입력하세요.");
  scanf("%d", &a);

  if(a>=90)
    printf("A학점 엄청 똑똑하시네요.");

  else if(a>=80)
    printf("B학점 좀 더 노력해보세요.");

  else if(a>=70)
    printf("C학점 열심히 하세요.");

  else if(a>=60)
    printf("D학점 최선을 다하세요.");

  else if(a<60)
    printf("F학점 공부를 안 하시나요?");

  printf("한 학기 수고하셨습니다.");
}