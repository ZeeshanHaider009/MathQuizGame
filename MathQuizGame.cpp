#include<iostream>
#include<conio.h>
#include<Windows.h>  // For including color in my Game 
#include<time.h>
using namespace std;
// Game board
void DisplayGameIntro()
{
    system("cls");
    system("color 09");
    cout<<"--------------------------------------------"<<endl;
    cout<<"               MATH QUIZ GAME               "<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"1.Play Game                                 "<<endl;
    cout<<"2.Instructions About Game                   "<<endl;
    cout<<"3.Exit                                      "<<endl;
    cout<<"--------------------------------------------"<<endl;
    Sleep(300);
    cout<<"               MADE ";
    Sleep(350);
    cout<<"BY ";
    Sleep(400);
    cout<<"ZEESHAN                                     "<<endl;
}
// for information in My Game
void Display_information()
{
    system("cls");
    system("color 5F");
    cout<<"\t\t\t-----------------------------------------------------------"<<endl;
    cout<<"\t\t\t                Information About Game                     "<<endl;
    cout<<"\t\t\t-----------------------------------------------------------"<<endl;
    cout<<"\t\t\t1.This game Contain Simple Arithmetic Questions            "<<endl;
    cout<<"\t\t\t2.Each Correct Answer Will Get 1 Point                     "<<endl;
    cout<<"\t\t\t3.Total Question will be 5                                 "<<endl;
    cout<<"\t\t\t4.To Win, You Need atleast 3 Correct Answers               "<<endl;
    cout<<"\n\t\t\tMade By Zeeshan Software Engineer At Punjab University "<<endl;
    cout<<"press any key to continue..."<<endl;
    getch();
}
// For Game level
void Game_level()
{
    system("cls");
    system("color 3F");
    cout<<"\t\t\t\t--------------------------------------------"<<endl;
    cout<<"\t\t\t\t                GAME LEVEL                  "<<endl;
    cout<<"\t\t\t\t--------------------------------------------"<<endl;
    cout<<"\t\t\t\t1.Easy                                      "<<endl;
    cout<<"\t\t\t\t2.Medium                                    "<<endl;
    cout<<"\t\t\t\t3.Hard                                      "<<endl;
    cout<<"\t\t\t\t4.Back to Menu                              "<<endl;
    cout<<"\t\t\t\t--------------------------------------------"<<endl<<endl;
}
bool play ()
{
    int level,limit;
    int option;
    system("cls");
    Game_level();
    cin>>option;
    switch (option)
    {
    case 1: limit = 15;break;
    case 2: limit = 55;break;
    case 3: limit = 110;break;
    case 4: break;
    }
    int q1,q2,ans,Correct_Ans,total_Questions=5,count=0;
    char operation;
    if(option>0 && option<4)
    {
        system("cls");
        system("color 09");
    cout<<"\t\t\t--------------------------------------------"<<endl;
    cout<<"\t\t\t               MATH QUIZ GAME               "<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
        for(int i=0;i<total_Questions;i++)
        {
           q1=rand()%limit;
           q2=rand()%limit;
           int check_Operation = rand()%3;
           switch (check_Operation)
           {
           case 0 : operation = '+';break;
           case 1 : operation = '-';break;
           case 2 : operation = '*';break;
           }
         cout<<q1<<" "<<operation<<" "<<q2<<" = ";
         cin>>ans;
         switch (operation)
         {
         case '+': Correct_Ans = q1+q2;break;
         case '-': Correct_Ans = q1-q2;break;
         case '*': Correct_Ans = q1*q2;break;
         }
         if(Correct_Ans == ans)
         {
            count++;
            cout<<"Correct: "<<endl;
         }
         else
         {
             cout<<"Wrong: "<<endl;
             cout<<"Correct Answer is: ";
             cout<<Correct_Ans<<endl<<endl;
         }
         }
         system("cls");
         system("color DF");
         cout<<"\t\t\t-------------------------------"<<endl;
         cout<<"\t\t\tHere is Your Result: "<<endl<<endl;
         cout<<"\t\t\tTotal: "<<total_Questions<<endl;
         cout<<"\t\t\tCorrect: "<<count<<endl<<endl;
         cout<<"\t\t\t-------------------------------"<<endl;
         if(count>=3)
         {
             cout<<"Congratulations! YOU Win: "<<endl;
             cout<<"press any key to continue...."<<endl;
             getch();
         }
         else
         {
         cout<<"Try again: "<<endl;
         cout<<"press any key to continue...."<<endl;
         getch();
         }
        }
    }
    int main()
{
    srand ((unsigned)time(NULL));
    int option;
    do
    {
        DisplayGameIntro();
        cin>>option;
      switch (option)
      {
      case 1: play(); break;
      case 2: Display_information(); break;
      }
    } while (option!=3);
}
