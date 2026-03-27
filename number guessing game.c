#include<stdio.h>

int main(){
  int i,a=25,number;
  int f = 0;
  for(i=1; i<=5;i++){
    printf(" %d Enter your guess number: ",i);
  scanf("%d",&number);

  if(number>a){
    printf("Too High!\n");
  }
  else if(number<a){
    printf("Too Low!\n");
  }
  else if(number == a){
    printf("Correct!\n");
    printf("You Win!");
    f=1;
    break;
  }
  }
  if(f == 0){

    printf("Game Over!");
  }
  return 0;
}
