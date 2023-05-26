main(){
  int i, j;
  printf("1에서 9사이의 숫자를 입력하세요\n");
  scanf("%d", &i);

  for(j=1; j<10; j++){
    for(i=1; i<10; i++){
      printf("%d * %d = %d\n", j, i, i*j);
    }
  }
}