#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

 struct Cars {

    string mark [10] = {"Mercedes","Hyundai","BMW","Audi","Tesla","Volkswagun","Toyota","Skoda","Ford"};

    string model [10]= {"2018DS","2016MD","2018AS","2017LA","2018OW","2008PW","2010QW","2005Ps","2016SA"};

    string color [10]={"Red","black","yellow","Blue","Red","Brown","Silver","Black","grey"};

    string maxs_peed [10]={"150 Km/h","100 Km/h ","150 Km/h","170 Km/h","130 Km/h","140 Km/h","130 Km/h","120 Km/h","150 Km/h"};

    int price [ 10 ] ={100,200,300,500,200,250,400,600,900} ;

    int date [10] = {2013,2010,2012,2017,2018,2008,2010,2005,2014};



   };

   struct Lessee {

   string Name [10];
   string ID_Card [10] ;
   int payment_acc [ 10] ;
   };

   //**************************************** Declaring struct ****************************************
 Cars car ;
 Lessee lessee ;

 //**************************************** First output ****************************************
   void Minu ()
 {


   int num=1;
 for(int i=0 ;i<9;++i)
 {
 	cout<<"\t\t\t";
    cout<<"Enter " <<num<<"\t- To Select  "<<car.mark[i]<<endl;
    num++ ;
 }

 }

 //**************************************** Second output ****************************************
 void Details (int theChoice)
  {
   	system("CLS");
  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - "<<car.mark[theChoice-1]<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : "<<car.model[theChoice-1]<<endl;
     cout<<"\t\t\tColor : "<<car.color[theChoice-1]<<endl;
     cout<<"\t\t\tMaximum Speed : "<<car.maxs_peed[theChoice-1]<<endl;
     cout<<"\t\t\tPrice : "<<car.price[theChoice-1]<<"K"<<endl;


  }
   
   //**************************************** check lessee credit ****************************************

   void check (int j )
  {
      if(lessee.payment_acc[j]  >= car.price[j])
           cout<<"\n\n\n\t\t\tProcess has been done successfully!! " <<endl;
           else
              cout<<"\n\n\n\t\t\tNot Available " <<endl;

  }
    //**************************************** User Input ****************************************
  void user_input (int theChoice)
   {
   	system("CLS");
        int j=theChoice-1 ;
       cout<<"\t\t\t----------------------------------------\n";
       cout<<"\t\t\tPlease Provide Your Personal Details  : \n";
       cout<<"\t\t\t----------------------------------------\n\n";
       cout<<"\n\tNOTE: PROVIDE FIRST NAME ONLY,\n\tMAKE SURE THE AMOUNT GIVEN IS NOT LESS THAN THE PRICE OF THE CAR\n\n\n\n";
       cout<<"\t\t\tEnter Your Name : ";
       cin>>lessee.Name[j];
       cout<<"\t\t\tEnter Your ID Card: ";
       cin>>lessee.ID_Card[j] ;
       cout<<"\t\t\tPayment Amount: " ;
       cin>>lessee.payment_acc[j] ;


     check( j ) ;
   }

//**************************************** Main ****************************************
int main()
{
	int login();
    login();

         string decide ="yes" ;
     cout<<"\t\t\t----------------------------------------------\n";
     cout<<"\t\t\t\tSIMPLE CAR RENTAL SYSTEM \n";
     cout<<"\t\t\tWelcome to Our Company ,Choose from the menu : "<<endl;
     cout<<"\t\t\t----------------------------------------------\n";
     while(decide!="exit")
     {
         Minu();
     cout<<"\n\n\n\t\t\tYour Choice: ";
     int theChoice ;
     cin>>theChoice ;
     Details(theChoice);
     cout<<"\n\n\n\t\t\tAre you sure you want to rent this car? (yes /no /exit ) : ";
     cin>>decide ;
     if(decide=="yes") {
        user_input(theChoice);
        cout<<"\n\n\t\t\tDo you want to continue ?(yes/no) ";
        cin>>decide;
        if (decide=="no") break ;
system("CLS");
     }

   else {
      if(decide=="no")
      {
      	system("CLS");
          continue ;
      }
     else if  (decide=="exit")
     {
    	system("CLS");
     	cout<<"\n\n\n\t\t\tThank You So Much";

         break ;
     }

   }
     }


    return 0;
}
//**************************************** login ***************************************
int login(){
   string pass ="";
   char ch;
   cout <<"\n\n\n\n\n\n\n\t\t\t\t\t  Simple Car Rental System Login";
   cout << "\n\n\n\n\n\n\n\t\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "pass"){
      cout << "\n\n\n\n\t\t\t\t\t  Access Granted! Welcome To Our System \n\n";
      system("PAUSE");
      system("CLS");

   }else{
      cout << "\n\n\n\n\t\t\t\t\tAccess Aborted...Please Try Again!!\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}
