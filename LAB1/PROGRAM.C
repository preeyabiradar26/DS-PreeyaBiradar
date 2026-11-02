#include <stdlib.h>
# define MAX 5
int stack[MAX];
int top=-1;
void push();
void pop();
void display();
int main(){
          while(1){
            printf("\n stack menu \n 1.push \n 2.pop \n 3.disply \n 4. exit \n Entre the choice :");
            int choice;
            scanf("%d",&choice);
            switch(choice){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("invalid choice \n");
            }
          }
        return 0;
}
void push(){
           if (top==MAX-1)
            {
                printf("stack overflow");
            }
            else{
                int value;
                printf("enter the value to push : ");
                scanf("%d",&value);
                top++;
                stack [top]=value;
            }
}
void pop(){
          if (top==-1)
            {
                printf("stack underflow");
            }
            else{
                printf("popped %d",stack [top]);
                top--;
            }

}
void display(){
             if (top==-1)
                {
                    printf("stack is empty");

                }
                else{
                    printf("Stack element are: ");
                    for (int i=top;i>=0;i--){
                        printf("%d ",stack[i]);
                    }
                }
             }
