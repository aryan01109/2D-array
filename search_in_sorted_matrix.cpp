#include<iostream>
using namespace std;

bool sortedserch(int arr[4][4],int n,int m,int key){
    int i=0,j=m-1;

    while(i<n&&j>=0){
        int cell;
        if(arr[i][j]==key){
            cout<<"found at cell ("<<i<<" ,"<<j<<")\n";
            return true;
        }else if(arr[i][j]>key){
            j--;
        }else{
            i++;
        }
    }
    cout<<"key is not found\n";
    return false;

}

int main (){
    int matrix[4][4]={{10,20,30,40},{15,35,50,75},{25,39,52,82},{34,70,77,96}};
    int n=sizeof(matrix)/sizeof(int);

    cout<<"matrix element is :"<<n<<endl;

    sortedserch(matrix,4,4,52);

    return 0; 
}