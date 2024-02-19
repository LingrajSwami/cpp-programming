#include<iostream>
using namespace std ;

class String
{
   private:
       char *str;
       int iSize ;

   public:
     String()
   {
    str =new char[20]; //this will get updated to 30

   }

   String(int iSize)
   {
     str = new char[iSize];
   } 
   ~String()
   {
    delete []str ;
   }   

   void Accept()
   {
      cout<<"Enter the String : "<<endl;
      cin.getline(str,iSize);
   }
   void Display()
   {

    cout<<"String is : "<<str<<endl;
   }
   int CountCapital()
   {
    int iCnt = 0 ;
    char *temp = str;

    while(*temp != '\0')
    {
       if((*temp >= 'A') &&(*temp <= 'Z'))
       {
        iCnt++;
       }
       temp++;

    }
    return iCnt;
   }

};

int main()
{
   String *sobj = new String(30);
   int iRet = 0;


   sobj->Accept();
   sobj->Display();
  
  iRet = sobj->CountCapital();
  cout<<"Capital count is : "<<iRet<<endl;
  
 // sobj->Display();  this will not print any value 
  delete sobj;
    return 0;
}