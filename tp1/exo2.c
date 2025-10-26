#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int mux(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
float average(int arr[],int n){
    int a=0;
    for(int i=0;i<n;i++){
        a=a+arr[i];
    }
    return (float)a/n;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter element number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int mx=arr[0];
    for(int i=0;i<n;i++){
       mx=mux(mx,arr[i]);
    }
    printf("mux = %d\n",mx);
    printf("mean=%f",average(arr,n));
    return 0;
}
