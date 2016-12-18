//Problem Statement: https://www.codechef.com/problems/ANKTRAIN
#include<stdio.h>

int main(){
  int T, i;
  scanf("%d",&T);
  int N[T],M[T];
  for(i=0;i<T;i++){
    scanf("%d",&M[i]);
    if(M[i]%8==0){
      N[i]=M[i]-1;
    }
    else if(M[i]%8<4 && M[i]%8>0){
      N[i]=M[i]+3;
    }
    else if(M[i]%8<7 && M[i]%8>3){
    N[i]=M[i]-3;
    }
  else {
    N[i]=M[i]+1;
  };
  }
  for(i=0;i<T;i++){
     printf("%d",N[i]);
     if(N[i]%8==0){
       printf("SU\n");
     }
     else if(N[i]%8==7){
       printf("SL\n");
     }
     else if(N[i]%8==1 || N[i]%8==4){
       printf("LB\n");
     }
     else if(N[i]%8==2 || N[i]%8==5){
       printf("MB\n");
     }
     else{
       printf("UB\n");
     };
  };
}
  
