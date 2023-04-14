#include <stdio.h>
 main(){

   int a;
   printf("1.사과, 2.키위, 3.두리안, 4.패션후르츠, 5.석류");
   printf("자신이 좋아하는 과일 번호를 입력해주세요.");  
   scanf("%d", &a);
   
  if(a==1)
    printf("사과는 아침에 먹어야 좋아요");
    
  else if(a==2)
    printf("키위를 좋아하시군요..맛있죠");
    
  else if(a==3)
    printf("두리안을 좋아ㅎ...특이한 취향이군요");
    
  else if(a==4)
    printf("패션후르츠...눈알 같이 생겼는데....");
    
  else if(a==5)
    printf("석류는 여자에게 좋죠ㅎㅎ");
    
  else
    printf("마음에 드는 과일이 없나보군요..아쉽네요");

  printf("안녕히가세요. 사요나라");
}