#include<stdio.h>
#include<stdlib.h>
void main(){
int i,j,n,c=0,f;
scanf("%d",&n);
int* a = (int*)malloc(n*sizeof(int));
int* b = (int*)malloc(n*sizeof(int));
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++){
        f=0;
        for(j=0;j<c;j++){
            if(a[i]==b[j]){
                f=1;
                break;
            }
        }
        if(f==0){
            b[c++]=a[i];

        }

}
for(i=0;i<c;i++){
    printf("%d ",b[i]);
}

}
