#include<iostream>
using namespace std;

int main (){
    int n;
    int m=2;

    printf("enter the number for how muny student data is inset : ");
    scanf("%d",&n);
    printf("how many subject is there : ");
    scanf("%d",&m);
    int student[n][m];

    for(int i=0;i<n;i++){
        
        for(int j=0;j<m;j++){
            printf("enter the details of student : %d\n",(j+1));
        printf("enter the phy marks : ");
        scanf("%d",&student[i][j]);
        printf("enter mark of maths : ");
        scanf("%d",&student[i][j]);
        }
    }

    for(int i=0;i<n;i++){
    
        for(int j=0;j<m;j++){
        printf("print student %d details: \n",(j+1));
        printf("phy mark is : %d \n",student[i][j]);
        printf("maths mark is : %d \n",student[i][j]);

        }
    }

    return 0;
}