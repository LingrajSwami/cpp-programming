// accept the number from user and find factorial
// input :4 
// output : 4*3*2*1 

#include<iostream>
using namespace std;

class Array
{
    private:
       int *Arr;
       int iNo ;

    public : 
       Array(int x)
       {
        iNo = x ;
        Arr = new int[iNo];
       } 
       ~Array()
       {
        delete []Arr;
       }
       void Accept()
       {
        int iCnt = 0;
         cout<<"Enter enter the number"<<endl;
        for(iCnt =0 ; iCnt < iNo ; iCnt++)
        {
           
            cin>>Arr[iCnt];
        }
       } 
       void Display()
       {
        int iCnt = 0;
        cout<< " your numbers are : "<<endl ; 
        for(iCnt = 0 ; iCnt< iNo ; iCnt++)
        {
            cout<<Arr[iCnt];
        }
       } 

    // Logic
       int AdditionEven()
       {
        int iSum = 0, iCnt = 0;

        for(iCnt = 0;iCnt < iNo; iCnt++)
        {
            if((Arr[iCnt]%2) ==0)
            {
                iSum = iSum + Arr[iCnt];
            }
        }
        return iSum ;
       }
};

int main()
{ 
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iLength;

     Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();


   iRet =  aobj->AdditionEven();
   cout<<"value is :"<<iRet<<endl ; 
    
   
    return 0;
}


/*


#include<iostream>
using namespace std;

class Array
{
    private:
        int * Arr;
        int iSize;

    public:
        Array(int X)        // Parametrised Constructor
        {
            iSize = X;
            Arr = new int[iSize];
        }

        ~Array()            // Destructor
        {   
            delete []Arr;
        }

        void Accept()       // Member function
        {
            int iCnt = 0;
            cout<<"Please enter the elements : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()      // Member function
        {
            cout<<"Elements of the array are : "<<endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }
        // Logics

        int AdditionEven()
        {
            int iSum = 0, iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if((Arr[iCnt] % 2) == 0)
                {
                    iSum = iSum + Arr[iCnt];
                }
            }
            return iSum;
        }

};  // End of class

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    iRet = aobj->AdditionEven();

    cout<<"Addition of even elements is : "<<iRet<<endl;
    
    delete aobj;

    return 0;
}





*/