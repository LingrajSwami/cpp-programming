
/*

$       *       *       *       *
*       $       1       1       *
*       0       $       1       *
*       0       0       $       *
*       *       *       *       $


*/

#include<iostream>
using namespace std;
class Pattern
{
    private:
        int iRow ;
        int iCol ;
    public :
        Pattern(int X,int Y)
        {
            iRow = X;
            iCol = Y;
        }    

        void Display()
        {
            int iCnt1 = 0 , iCnt2 = 0;
            for(iCnt1 = 1; iCnt1 <= iRow ;iCnt1++ ){
                for(iCnt2 = 1; iCnt2 <= iCol ;iCnt2++ ){
                    if(iCnt1 == iCnt2)
                    {
                        cout<<"$\t";
                    }
                    else if((iCnt1  == 1) ||  (iCnt2 ==1) || (iCnt1  == iRow) || (iCnt2  == iCol) )
                    {
                        cout<< "*\t" ;
                    }else if(iCnt1 > iCnt2)
                    {
                        cout<<"0\t";
                    }else
                    {
                        cout<<"1\t";
                    }
                }
                cout<<endl;
            }
        }
};

int main()
{
   int iValue1 = 0 , iValue2 = 0;

   cout<<"Enter number of rows : "<<endl;
   cin>>iValue1;

    cout<<"Enter number of columns : "<<endl;
   cin>>iValue2;

 
   delete pobj;
    return 0;
}