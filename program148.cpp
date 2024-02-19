// accept the number from user and find factorial
// input :4 
// output : 4*3*2*1 

#include<iostream>
using namespace std;

class Number
{
    private:
       int iNo ;

    public : 
       Number(int x)
       {
        iNo = x ;
       }   

    // Logic
       int Factorial()
       {
         int iCnt = 0;
         int iFact = 1 ;
         for(iCnt = 1; iCnt <= iNo ; iCnt++)
         {
            iFact *= iCnt;
         }
         return iFact;
       }
};

int main()
{ 
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iValue;

    Number *nobj = new Number(iValue);
    iRet = nobj->Factorial();

    cout<<"Factorial is : "<<iRet<<endl;
    
    delete nobj;

    return 0;
}

