#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
cout<<"||||||||||||||||||||||||||||||||||| QUIZ |||||||||||||||||||||||||||||||||||||||\n\n\n\n";
int x=0;
char ch1[25],ch2;
cout<<"Enter Your Name : ";
cin>>ch1;
cout<<"\nWelcome "<<ch1<<" \n\n FACT: Sobriquet is an unofficial title or name given to someone or something ";
cout<<"\n\n Enter answer in form of A,B or C only";
getch();
clrscr();
cout<<"\n\n 1.What is called as 'THE HOLYLAND'? \n A.Jerusalem \n B.Mathura \n C.Mecca \n\n Your Option : ";
cin>>ch2;
if((ch2=='A')||(ch2=='a'))
{
x=x+10;
cout<<"\n\n Good Job. Your Score is "<<x;
}
else
cout<<"\n\n Wrong Answer";
getch();
clrscr();
cout<<"\n\n 2.What is called as 'THE ROOF OF THE WORLD'? \n A.Nepal \n B.Rome \n C.Tibet \n\n Your Option : ";
cin>>ch2;
if((ch2=='C')||(ch2=='c'))
{
x=x+10;
cout<<"\n\n Good Job. Your Score is "<<x;
}
else
cout<<"\n\n Wrong Answer";
getch();
clrscr();
cout<<"\n\n 3.What is called as 'THE LAND OF THE RISING SUN'? \n A.Chicago \n B.Japan \n C.Tibet \n\n Your Option : ";
cin>>ch2;
if((ch2=='B')||(ch2=='b'))
{
x=x+10;
cout<<"\n\n Good Job. Your Score is "<<x;
}
else
cout<<"\n\n Wrong Answer";
getch();
clrscr();
cout<<"\n\n 4.What is called as 'THE GIFT OF NILE'? \n A.Amazon \n B.Egypt \n C.Africa \n\n Your Option : ";
cin>>ch2;
if((ch2=='B')||(ch2=='b'))
{
x=x+10;
cout<<"\n\n Good Job. Your Score is "<<x;
}
else
cout<<"\n\n Wrong Answer";
getch();
clrscr();
cout<<"\n\n 5.What is called as 'THE LAND OF THE MIDNIGHT SUN'? \n A.Norway \n B.Japan \n C.Australia \n\n Your Option : ";
cin>>ch2;
if((ch2=='A')||(ch2=='a'))
{
x=x+10;
cout<<"\n\n Good Job. Your Score is "<<x;
}
else
cout<<"\n\n Wrong Answer";
getch();
clrscr();
cout<<"\n\n 6.What is called as 'THE LAND OF THE THUNDERBOLT'? \n A.Canada \n B.Bhutan \n C.Tibet \n\n Your Option : ";
cin>>ch2;
if((ch2=='B')||(ch2=='b'))
{
x=x+10;
cout<<"\n\n Good Job. Your Score is "<<x;
}
else
cout<<"\n\n Wrong Answer";
getch();
clrscr();
cout<<"\n\n 7.What is called as 'THE WINDY CITY'? \n A.Rajasthan \n B.Miami \n C.Chicago \n\n Your Option : ";
cin>>ch2;
if((ch2=='C')||(ch2=='c'))
{
x=x+10;
cout<<"\n\n Good Job. Your Score is "<<x;
}
else
cout<<"\n\n Wrong Answer";
getch();
clrscr();
cout<<"\n\n 8.What is called as 'THE LAND OF THE WHITE ELEPHANTS'? \n A.Bangladesh \n B.Thailand \n C.India \n\n Your Option : ";
cin>>ch2;
if((ch2=='B')||(ch2=='b'))
{
x=x+10;
cout<<"\n\n Good Job. Your Score is "<<x;
}
else
cout<<"\n\n Wrong Answer";
getch();
clrscr();
cout<<"\n\n 9.What is called as 'THE CITY OF SEVEN HILLS'? \n A.Rome \n B.Nilgiris \n C.Tibet \n\n Your Option : ";
cin>>ch2;
if((ch2=='A')||(ch2=='a'))
{
x=x+10;
cout<<"\n\n Good Job. Your Score is "<<x;
}
else
cout<<"\n\n Wrong Answer";
getch();
clrscr();
cout<<"\n\n 10.What is called as 'THE DARK CONTINENT'? \n A.Asia \n B.Australia \n C.Africa \n\n Your Option : ";
cin>>ch2;
if((ch2=='C')||(ch2=='c'))
{
x=x+10;
cout<<"\n\n Good Job. Your Score is "<<x;
}
else
cout<<"\n\n Wrong Answer";
getch();
clrscr();
if(x==100)
cout<<"\n\n\n\nYour score is 100!\n\n You either Cheated,or are just Brilliant!";
if(x==90)
cout<<"\n\n\n\nWell done! Your Score is 90";
if(x==80)
cout<<"\n\n\n\nYou have done pretty well, Your Score is 80";
if((x<80)&&(x>50))
cout<<"\n\n\n\nYour score is "<<x<<"\n\n Better luck next time";
else if(x<=40)
cout<<"\n\n\n\nBetter luck next time. Your score = "<<x;
getch();
}