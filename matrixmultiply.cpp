#include <iostream>
using namespace std;
int main () {
        int r1,r2,c1,c2;
        cout<<"ENTER ROWS OF MATRIX 1 : ";
        cin>>r1;
        cout<<"ENTER COLUMNS FOR MATRIX 1 : ";
        cin>>c1;
        cout<<"ENTER ROWS OF MATRIX 2 : ";
        cin>>r2;
        cout<<"ENTER COLUMNS FOR MATRIX 2 : ";
        cin>>c2;
        while (c1!=r2) {
            cout<<"MULTIPLICATION IS NOT POSSIBLE ENTER THE VALUES AGAIN "<<endl;
            cout<<"ENTER ROWS OF MATRIX 1 : ";
            cin>>r1;
            cout<<"ENTER COLUMNS FOR MATRIX 1 : ";
            cin>>c1;
            cout<<"ENTER ROWS OF MATRIX 2 : ";
            cin>>r2;
            cout<<"ENTER COLUMNS FOR MATRIX 2 : ";
            cin>>c2;
        }
        int matrix1[r1][c1];
        int matrix2[r2][c2];
        cout<<"ENTER VALUES FOR MATRIX 1 : "<<endl;
        for(int i=1; i<=r1; i++) {
            for (int j=1; j<=c1; j++)  {
                cin>>matrix1[i][j];
            }
        }
        cout<<"ENTER VALUES FOR MATRIX 2 : "<<endl;
        for(int i=1; i<=r2; i++) {
            for (int j=1; j<=c2; j++)  {
                cin>>matrix2[i][j];
            }
        }
        int C[r1][c2];
        cout<<"MULTIPLICATION OF MATRICES IS : "<<endl;
        for(int i=1; i<=r1; i++) {
            for(int j=1; j<=c2 ; j++ ) {
                int value=0;
                for(int k=1; k <=r2; k++) {
                    value+=matrix1[i][k]*matrix2[k][j]; 
                }
                C[i][j]=value;
            }
        }
        for(int i=1; i<=r1; i++) {
            for(int j=1; j<=c2 ; j++ ) {
                cout<<C[i][j]<<" " ;
            }
            cout<<endl;
        }


}