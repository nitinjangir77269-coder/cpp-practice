#include<iostream>
using namespace std;
int main ()
{
    int i,j,r1,c1,r2,c2, k;
    cout<<" enter the row of the first matrix  ";
    cin>>r1;
    cout<<" enter the column of the first matrix=";
    cin>>c1;
    int A[r1][c1];
    cout<<" enter the elements of the first matrix ";
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<" your first matrix is =="<<"[";
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"]"<<endl;
    cout<<" enetr teh row of tahe second matrix ";
    cin>>r2;
    cout<<" enter the  column of the second matrix ";
    cin>>c2;
    int B[i][j];
    cout<<" entre the elemnets of the second matrix ";
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            cin>>B[i][j];
        }
    }
    if(c1 != r2)
    {
        cout<<" the multiplication of your matrix is not posible ";
        return 0;
    }
    cout<<" your second matrix is ="<<"[";
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++) 
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int F[r1][c2];
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            F[i][j]=0;
            {
                for(k=0; k<c1; k++)
                {
                    F[i][j] = F[i][j]+A[i][k]*B[k][j];
                }
            }
        } 
    }
    cout<<" your final matrix of the multiplication is =="<<"[";
    for(i=0 ; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<F[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"[";
    return 0;

}
