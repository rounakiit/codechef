#include<stdio.h>
#include<math.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  double x[n],SG[n],FG[n],T[n],S[n],D[n];
  for(i=0;i<n;i++){
    scanf("%lf %lf %lf %lf %lf",&S[i],&SG[i],&FG[i],&D[i],&T[i]);
    x[i]=S[i]+(D[i]*180/T[i]);
     };
  for(i=0;i<n;i++){
     while("T[i]<301 && T[i]>0 && S[i]>-1 && S[i]< 131 && SG[i]>-1 && FG[i]>-1 && SG[i]<301 $$ FG[i]<301 && D[i]>0 && D[i]< 21 && i<100001 && x[i]<301" ){
    if(fabs(x[i]-SG[i]) < fabs(x[i]-FG[i])){
    printf("SEBI\n");
  }
    else if(fabs(x[i]-SG[i]) >fabs( x[i]-FG[i])){
    printf("FATHER\n");
  }
  else{
    printf("DRAW\n");
  }
    break;
     };
  };
}
  
