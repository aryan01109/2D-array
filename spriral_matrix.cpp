#include<iostream>
using namespace std;

int main (){
    int m,n;
    printf("enter the value of rows in metrix : ");
    scanf("%d",&n);
    printf("enter the vakue of colomm of metrix : ");
    scanf("%d",&m);

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
    printf("Enter the element of the matrix : ");
    scanf("%d",&arr[i][j]);
    }
}
int top=0,bottom=n-1,right=m-1,left=0;
//top of the matrix
for(left;left<=right;left++){
    printf(" %d",arr[top][left]);
}
for(top;top<bottom;top++){
    printf(" %d",arr[top+1][right]);
}
if(bottom !=top){
for(int i = right - 1; i >= left; i--){
    printf(" %d",arr[bottom][i]);
   }
}
if(left != right){
for(int i=bottom-1;i>top;i--){
    printf(" %d",arr[i][left]);
   }
}
   


    return 0;
}