#include<stdio.h>
int main(){
    int a[10],n,temp,i,k=1,ptr;
    print("How many elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",a[i]);
    }
    
    for(k=1;k<n;k++){
        temp=a[k];
        ptr=k-1;
        while(temp<a[ptr]&&ptr>=0){

            a[ptr+1]=a[ptr];
            ptr=ptr-1;
        }
        a[ptr+1]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
