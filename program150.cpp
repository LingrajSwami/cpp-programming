#include<iostream>
using namespace std;

class Array
{
    private:
       int *Arr;  //int *Arr;
       int iSize ;   

    public:
       Array(int x)   //Parametrised constructor
       {
        iSize = x ;
        Arr = new int[iSize];
       }   
       ~Array()      // Destructor
       {
        delete []Arr ;
       }
       
       void Accept()  // Member functions
       {
            int iCnt = 0;
            cout<<"Enter the numbers : "<<endl;
            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                 cin>>Arr[iCnt];
             }
       }
       void Display()  // Member fumction
       {
        cout<<"Elements of the array are : "<<endl;
        int iCnt = 0;
        for(iCnt =0 ; iCnt<iSize ; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<endl;
       }
};

 int main()
 {
    int iLength = 0;

    cout<<"Enternthe element that you  want to store : "<<endl ;
    cin>>iLength ;

   Array aobj(iLength);
   aobj.Accept();
   aobj.Display();

/*

Array *aobj = new Array(iLenght);
aobj ->Accept();
aobj->Display();

*/
    return 0;
 }