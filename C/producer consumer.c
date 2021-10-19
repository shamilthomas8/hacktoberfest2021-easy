#include<stdio.h>
int semaphore=0,full=0,empty,in=0,out=0,br[20],n,item=0;
int main(){
    int ch,c=1;
    void produce();
    void consume();
    printf("Enter Buffer Size(MAX 20)");
    scanf("%d",&n);
    empty=n;
    while(c==1){
        printf("Are you a producer(1) or consumer(2)\n");
        scanf("%d",&ch);
    switch(ch){
        case 1 : produce();
                break;
        case 2 : consume();
                break;
        default : printf("Invalid choice!!");
}
    printf("Do you want to continue to produce or consume(0/1)\n");
    scanf("%d",&c);
}
    return 0;
}
void produce(){
    if(full<n){
        if(semaphore==0){
            wait(&semaphore);
            signal(&full);
            br[in]=item;
            in=(in+1)%n;
            wait(&empty);
            signal(&semaphore);
            item=item +1 ;
            printf("Producer produces item %d\n",item);
            }
        else
            printf("Sorry!! Consumer is currently using buffer area\n");
        }
    else
        printf("Buffer is full\n");
    }
void consume(){
    if(full>0){
        if(semaphore==0){
            wait(&semaphore);
            signal(&empty);
            item=br[out];
            out=(out+1)%n;
            wait(&full);
            signal(&semaphore);
            printf("Consumer consumes item %d\n",item);
            item=item-1;
        }
        else
            printf("Sorry!! Producer is currently using buffer area\n");
        }
    else
        printf("Buffer is empty\n");
    }
void wait(int *a){
    *a=*a-1;
    }
void signal(int *b){
    *b=*b+1;
    }
