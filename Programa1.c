# include<stdio.h>
int main (void) {
int n,i,y,x,j,z;
	scanf("%d",&n);
        y=n-1;
        x=0;
        for(i=n;i>=1;i-=1){
           for(j=1;j<=n;j++){
              printf("%d",j);
                }
z=x*2;                                    while(z>0){
	printf(" ");
    z-=1;}
    for(j=n;j>=1;j--){
       printf("%d",j);
                }             
        n-=1;
        x++;
        printf("\n");
}
        return 0;
}
