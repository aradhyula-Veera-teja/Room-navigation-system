/* THEME		:  To create a room search portal to GEC
				    &
			   Display room details
				    &
			   Show directions to the rooms

   USED SOFTWARES       :  C++

   DATA COLLECTED       :  All room locations and room numbers

   DESIGN & DEVELOPMENT :
			    1.Veera Teja
			    2.Pavan Kumar

   USAGE                :   Using this we can find navigations to our
			    required rooms


*/
#include<iostream.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
int gd=DETECT;
int gm;
int D=6000;
class GEC
{
  // Methods for flexible swithing while searching
  public:
  void main_search();    // To search stream & driver code
  void diplomo();        // To search diplomo
  void btech();	         // To search btech
  void mba(); 	         // To search mba
  void offices();        // To search mba
  void labs(); 	         // To search labs
  void others(); 	 // To search canteen...,
  void diplomo_rooms();  // Displays all rooms years...,
  void btech_rooms();    // Dispaly all btech rooms
  void dcivil(); 	 // Diplomo  branch wise driver codes
  void dmech();
  void deee();
  void dece();
  void bcivil();         // Btech branch wise driver codes
  void bmech();
  void beee();
  void bece();
  void bcse();
  void wash_rooms();     // Driver to wash rooms
  void bw_r();	         // Boys wash rooms driver code
  void gw_r();	         // Girls washrooms driver code
  void bfront();         // Front view of B-block
  void afront();         // Front view of A-block in long shot
  void cfront();         // Front view of C-block
  void alfront();        // Front view of A-block left part
  void arfront();        // Front view of A-block right part
  // Code for running directions in front view
  void direction(int l,int t,int r,int b,int x,int y,int X,int Y,int ch1,int ch2);
  void top();            //Top view of GEC
  // Directions-blocks  in top view
  void topdir(int tl,int tt,int tr,int tb,int x,int y,int Y,int X,int topc);
  void wrong();          //Animation for every wrong chice
  void loading();        //Display loading screen
  void s_h();            //S & H details
  void mental();
  void page();	         // Entrence page
  void canteen_front();  // front-view of both canteen & labs
  void final_labs();     //front view of civil labs
};
void GEC::s_h()
{
  cout<<"\n\t\t ********* Entered into S&H *********";
  cout<<"\n\n\n\t1.HOD room";
  cout<<"\n\t2.Staff room";
  cout<<"\n\t3.CIVIL";
  cout<<"\n\t4.MECH";
  cout<<"\n\t5.EEE";
  cout<<"\n\t6.ECE";
  cout<<"\n\t7.CSE";
  cout<<"\n\t8.back";
  cout<<"\n\t9.Home/Exit";
  int S_W;
  cout<<"\n\n\t\tNOTE:\n\t\t    ->Only 1st year students are in S&H";
  cout<<"\n\n\n\t\t\t\tEnter your choice  :-  ";
  cin>>S_W;
  switch(S_W)
  {
    case 1:
	  clrscr();
	  cout<<"\nHOD room is at:\n\t\tB-block\n\t\t1st Floor\n\t\tRoom No :- 209";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(415,250,460,300,477,350,17,75,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 2:
	  clrscr();
	  cout<<"\Staff room is at:\n\t\tB-block\n\t\t1st Floor\n\t\tRoom No :- 204";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(200,250,245,300,307,350,60,75,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 4:
	  clrscr();
	  cout<<"\nMECH room is at:\n\t\tB-block\n\t\t1st Floor\n\t\tRoom No :- 202";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(110,250,155,300,307,350,150,75,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 3:
	  clrscr();
	  cout<<"\nCIVIL room is at:\n\t\tB-block\n\t\t1st Floor\n\t\tRoom No :- 203";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(155,250,200,300,307,350,105,75,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 5:
	  clrscr();
	  cout<<"\nEEE room is at:\n\t\tB-block\n\t\t1st Floor\n\t\tRoom No :- 201";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(30,250,110,300,307,350,197,75,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 6:
	  clrscr();
	  cout<<"\nECE room is at:\n\t\tB-block\n\t\t1st Floor\n\t\tRoom No :- 207";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(325,250,370,300,307,350,18,75,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 7:
	  clrscr();
	  cout<<"\nCSE room is at:\n\t\tB-block\n\t\t1st Floor\n\t\tRoom No :- 208";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(370,250,415,300,477,350,62,75,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 8:
	  clrscr();
	  mental();
	  break;
    case 9:
	  clrscr();
	  page();
	  break;
    default:
	  clrscr();
	  wrong();
	  clrscr();
	  s_h();
  }
}
void GEC::mental()
{
  cout<<"\n\t\t ************* BTECH *************";
  cout<<"\n\n\n1.Science and Humanities";
  cout<<"\n2.Core Departments";
  cout<<"\n3.back";
  cout<<"\n\n\n\tNOTE:\n\t   ->All 1st year student rooms are included in S&H[1].\n\t   ->All 2nd-4th year student rooms are included in Core Departments[2].";
  int MENTAL;
  cout<<"\n\n\n\t\t\t\tEnter choice  :-  ";
  cin>>MENTAL;
  switch(MENTAL)
  {
    case 1:
	  clrscr();
	  s_h();
	  break;
    case 2:
	  clrscr();
	  btech();
	  break;
    case 3:
	  clrscr();
	  main_search();
    default:
	  clrscr();
	  wrong();
	  mental();
  }
}
void GEC::loading()
{
  int rec;
  setcolor(12);
  for(rec=0;rec<5;rec++) // Outer rectangle
  {
    rectangle(10+rec,10+rec,630-rec,470-rec);
  }
  setcolor(WHITE);
  for(rec=0;rec<5;rec++)
  {
    rectangle(20+rec,20+rec,620-rec,460-rec);
  }
  setcolor(GREEN);
  for(rec=0;rec<5;rec++)
  {
    rectangle(30+rec,30+rec,610-rec,450-rec);
  }
  setcolor(WHITE);
  rectangle(150,360,450,346);
  setcolor(RED);
  outtextxy(350,365,"Loading.....");
  for (int l=0;l<=298;l++)
  {
    rectangle(151,359,151+l,347);
    delay(10);
  }
}
void GEC::main_search()
{
  cout<<"\n	***************  GEC  ***************";
  cout<<"\n    ****** Welcome to room search portal ******";
  cout<<"\n\n\n\t1.Diploma";
  cout<<"\n\t2.Btech";
  cout<<"\n\t3.MBA";
  cout<<"\n\t4.Labs";
  cout<<"\n\t5.Offices";
  cout<<"\n\t6.Others";
  int ms;
  cout<<"\n\n\n\t\t\tEnter choice :-  ";
  cin>>ms;
  switch (ms)
  {
    case 1:
	  clrscr();
	  diplomo();
	  break;
    case 2:
	  clrscr();
	  mental();
	  break;
    case 3:
	  clrscr();
	  mba();
	  break;
    case 4:
	  clrscr();
	  labs();
	  break;
    case 5:
	  clrscr();
	  offices();
	  break;
    case 6:
	  clrscr();
	  others();
	  break;
    default:
	  clrscr();
	  wrong();
	  main_search();
  }
}
void GEC::diplomo()
{
  cout<<"\n\t\t\t ******* Entered into diploma *******";
  cout<<"\n\n\n\t1.Mech";
  cout<<"\n\t2.EEE";
  cout<<"\n\t3.ECE";
  cout<<"\n\t4.back";
  int ds;
  cout<<"\n\n\n\t\t\tEnter choice  :- \t";
  cin>>ds;
  switch(ds)
  {
    case 1:
	  clrscr();
	  dmech();
	  break;
    case 2:
	  clrscr();
	  deee();
	  break;
    case 3:
	  clrscr();
	  dece();
	  break;
    case 4:
	  clrscr();
	  main_search();
	  break;
    default:
	  clrscr();
	  wrong();
	  diplomo();

  }
}
void GEC::btech()
{
  cout<<"\n	******* Entered into Btech *******";
  cout<<"\n\n\n\t1.Civil";
  cout<<"\n\t2.Mech";
  cout<<"\n\t3.EEE";
  cout<<"\n\t4.ECE";
  cout<<"\n\t5.CSE";
  cout<<"\n\t6.Back";
  cout<<"\n\t7.Home/Exit";
  int bs;
  cout<<"\n\n\n\t\t\tEentr choice  :-  ";
  cin>>bs;
  switch(bs)
  {
    case 1:
	  clrscr();
	  bcivil();
	  break;
    case 2:
	  clrscr();
	  bmech();
	  break;
    case 3:
	  clrscr();
	  beee();
	  break;
    case 4:
	  clrscr();
	  bece();
	  break;
    case 5:
	  clrscr();
	  bcse();
	  break;
    case 6:
	  clrscr();
	  mental();
	  break;
    case 7:
	  clrscr();
	  page();
	  break;
    default:
	  clrscr();
	  wrong();
	  btech();
  }
}
void GEC::diplomo_rooms()
{
  cout<<"\n\n\n\t1.Staff room";
  cout<<"\n\t2.1st year";
  cout<<"\n\t3.2nd year";
  cout<<"\n\t4.3rd year";
  cout<<"\n\t5.Back";
  cout<<"\n\t6.Home/Exit";
}
void GEC::btech_rooms()
{
  cout<<"\n\n\n\t1.HOD Room";
  cout<<"\n\t2.Staff room";
  cout<<"\n\t3.2nd year";
  cout<<"\n\t4.3rd year";
  cout<<"\n\t5.4th year";
  cout<<"\n\t6.back";
  cout<<"\n\t7.Home/Exit";
}
void GEC::dmech()
{
  cout<<"\n\t\t\t ******* Entered into MECH *******";
  diplomo_rooms();
  int DMECH;
  cout<<"\n\n\n\t\t\tEnter choice  :-  ";
  cin>>DMECH;
  switch(DMECH)
  {
    case 1:
	  clrscr();
	  cout<<"\nStaff room is at:\n\t\tB-block\n\t\t2nd Floor\n\t\tRoom no:310";
	  delay(D);
	  clrscr();
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  clrscr();
	  bfront();
	  direction(495,200,610,250,477,350,15,125,2,1);
	  delay(D);
	  clrscr();
	  page();
	  break;
    case 2:
	  clrscr();
	  cout<<"\n1st year room is at:\n\t\tB-block\n\t\t2nd Floor\n\t\tRoom no  :- 306";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(325,200,415,250,307,350,15,125,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 3:
	  clrscr();
	  cout<<"\n2nd year room is at:\n\t\tB-block\n\t\t3rd Floor\n\t\tRoom no  :- 403";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(155,150,245,200,307,350,60,175,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 4:
	  clrscr();
	  cout<<"\n3rd year room is at:\n\t\t-block\n\t\tFloor\n\t\tRoom no  :- ";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  break;
    case 5:
	  clrscr();
	  diplomo();
	  break;
    case 6:
	  clrscr();
	  page();
	  break;
    default:
	  clrscr();
	  wrong();
	  dmech();
  }
}
void GEC::deee()
{
  cout<<"\n\t\t\t ******* Entered into EEE *******";
  diplomo_rooms();
  int DEEE;
  cout<<"\n\n\n\t\t\tEnter choice  :-  ";
  cin>>DEEE;
  switch(DEEE)
  {
    case 1:
	  clrscr();
	  cout<<"\nStaff room is at:\n\t\tB-block\n\t\t2nd Floor\n\t\tRoom no :- 310";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(495,200,610,250,477,350,15,125,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 2:
	  clrscr();
	  cout<<"\n1st year room is at:\n\t\tB-block\n\t\t2nd Floor\n\t\tRoom no  :- 302";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(110,200,155,250,307,350,150,125,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 3:
	  clrscr();
	  cout<<"\n2nd year room is at:\n\t\tB-block\n\t\t3rd Floor\n\t\tRoom no  :- 405";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(325,150,370,200,307,350,17,175,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 4:
	  clrscr();
	  cout<<"\n3rd year room is at:\n\t\tB-block\n\t\t2nd Floor\n\t\tRoom no  :- 310";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(495,200,610,250,477,350,15,125,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 5:
	  clrscr();
	  diplomo();
	  break;
    case 6:
	  clrscr();
	  page();
	  break;
    default:
	  clrscr();
	  wrong();
	  deee();
  }
}
void GEC::dece()
{
  cout<<"\n\t\t\t ******* Entered into ECE *******";
  diplomo_rooms();
  int DECE;
  cout<<"\n\n\n\t\t\tEnter choice  :-  ";
  cin>>DECE;
  switch(DECE)
  {
    case 1:
	  clrscr();
	  cout<<"\nStaff room is at:\n\t\tB-block\n\t\t2nd Floor\n\t\tRoom no  :- 310";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(495,200,610,250,477,350,15,125,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 2:
	  clrscr();
	  cout<<"\n1st year room is at:\n\t\tB-block\n\t\t2nd Floor\n\t\tRoom no :- 303";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(155,200,200,250,307,350,107,125,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 3:
	  clrscr();
	  cout<<"\n2nd year room is at:\n\t\tB-block\n\t\t3rd Floor\n\t\tRoom no :- 406";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(370,150,415,200,307,350,62,175,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 4:
	  clrscr();
	  cout<<"\n3rd year room is at\n\t\tA-block\n\t\t3rd Floor\n\t\tRoom no :-  408";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(0,150,260,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  alfront();
	  direction(455,150,530,200,555,350,25,175,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 5:
	  clrscr();
	  diplomo();
	  break;
    case 6:
	  clrscr();
	  page();
	  break;
    default:
	  clrscr();
	  wrong();
	  dece();
  }
}
void GEC::bcivil()
{
  cout<<"\n\t\t\t******* Entered into CIVIL *******";
  btech_rooms();
  int BCIVIL;
  cout<<"\n\n\n\t\tEnter choice  :-  ";
  cin>>BCIVIL;
  switch(BCIVIL)
  {
    case 1:
	  clrscr();
	  cout<<"\nHOD room is at:\n\t\tC-block\n\t\t2nd Floor\n\t\tRoom no  :- 304";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(300,200,350,250,375,350,25,125,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 2:
	  clrscr();
	  cout<<"staff room is at:\n\t\tC-block\n\t\t2nd Floor\n\t\tRoom no  :- 304";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(300,200,350,250,375,350,25,125,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 3:
	  clrscr();
	  cout<<"\n2nd year room is at\n\t\tC-block\n\t\t2nd Floor\n\t\tRoom no  :- 302";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(135,200,190,250,375,350,185,125,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
   case 4:
	  clrscr();
	  cout<<"\n3rd year room is at:\n\t\tC-block\n\t\t2nd Floor\n\t\tRoom no  :- 305";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(400,200,455,250,375,350,25,125,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
   case 5:
	  clrscr();
	  cout<<"\n 4th year room is at:\n\t\tC-block\n\t\t2nd Floor\n\t\tRoom no  :- 303";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(4000);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(190,200,245,250,375,350,130,125,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 6:
	  clrscr();
	  btech();
	  break;
    case 7:
	  clrscr();
	  page();
	  break;
    default:
	  clrscr();
	  wrong();
	  bcivil();
  }
}
void GEC::bmech()
{
  cout<<"\n\t\t\t ******* Entered into MECH *******";
  btech_rooms();
  int BMECH;
  cout<<"\n\n\n\t\t Enter choice  :-  ";
  cin>>BMECH;
  switch(BMECH)
  {
    case 1:
	  clrscr();
	  cout<<"\nHOD room is at:\n\t\tC-block\n\t\t1st Floor\n\t\tRoom no  :- 207";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(4000);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(400,250,455,300,375,350,25,75,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 2:
	  clrscr();
	  cout<<"staff room is at:\n\t\tC-block\n\t\t1st tFloor\n\t\tRoom no  :- 205";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(245,250,300,300,375,350,75,75,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 3:
	  clrscr();
	  cout<<"\n2nd year room is at:\n\t\tC-block\n\t\t1st Floor\n\t\tRoom no  :- 202";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(135,250,190,300,375,350,185,75,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 4:
	  clrscr();
	  cout<<"\n3rd year room is at:\n\t\tC-block\n\t\t1st Floor\n\t\tRoom no  :- 203";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(455,250,510,300,375,350,80,75,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 5:
	  clrscr();
	  cout<<"\n 4th year room is at:\n\t\tC-block\n\t\t1st Floor\n\t\tRoom no  :- 208";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(190,250,245,300,375,350,130,75,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 6:
	  clrscr();
	  btech();
	  break;
    case 7:
	  clrscr();
	  page();
	  break;
   default:
	  clrscr();
	  wrong();
	  bmech();
  }
}
void GEC::beee()
{
  cout<<"\n\t\t\t******* Entered into EEE *******";
  btech_rooms();
  int BEEE;
  cout<<"\n\n\n\t\tEnter choice  :-  ";
  cin>>BEEE;
  switch(BEEE)
  {
    case 1:
	  clrscr();
	  cout<<"\nHOD room is at:\n\t\tA-block\n\t\t1st Floor\n\t\tRoom no  :- 206";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  direction(260,250,330,300,230,350,30,75,2,1);		//230,350
	  direction(260,250,330,300,360,350,30,75,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 2:
	  clrscr();
	  cout<<"staff room is at:\n\t\tA-block\n\t\t1st Floor\n\t\tRoom no  :-  208";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	 top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  arfront();
	  direction(195,250,270,300,95,350,100,75,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 3:
	  clrscr();
	  cout<<"\n2nd year room is at:\n\t\tA-block\n\t\t1st Floor\n\t\tRoom no  :-  209";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  arfront();
	  direction(270,250,345,300,95,350,175,75,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 4:
	  clrscr();
	  cout<<"\n3rd year room is at:\n\t\tA-block\n\t\t1st Floor\n\t\tRoom no  :-  213";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  arfront();
	  direction(495,250,580,300,95,350,400,75,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 5:
	  clrscr();
	  cout<<"\n 4th year room is at:\n\t\tA-block\n\t\t1st Floor\n\t\tRoom no  :-  210";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  arfront();
	  direction(345,250,420,300,95,350,250,75,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 6:
	  clrscr();
	  btech();
	  break;
    case 7:
	  clrscr();
	  page();
	  break;
    default:
	  clrscr();
	  wrong();
	  beee();
  }
}
void GEC::bece()
{
  cout<<"\n\t\t\t ******* Entered into ECE *******";
  btech_rooms();
  int BECE;
  cout<<"\n\n\n\t\tEnter choice  :-  ";
  cin>>BECE;
  switch(BECE)
  {
    case 1:
	  clrscr();
	  cout<<"\nHOD room is at:\n\t\tA-block\n\t\t3rd Floor\n\t\tRoom no  :- 409";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  direction(260,150,330,200,230,350,30,175,2,1);		//230,350
	  direction(260,150,330,200,360,350,30,175,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 2:
	  clrscr();
	  cout<<"staff room is at:\n\t\tA-block\n\t\t3rdd Floor\n\t\tRoom no  :- 410";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  arfront();
	  direction(125,150,195,200,95,350,25,175,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 3:
	  clrscr();
	  cout<<"\n2nd year room is at:\n\t\tA-block\n\t\t3rd Floor\n\t\tRoom no  :-  412";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  arfront();
	  direction(270,150,345,200,95,350,175,175,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 4:
	  cout<<"\n3rd year room is at:\n\t\tA-block\n\t\t3rd Floor\n\t\tRoom no  :-  411";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  arfront();
	  direction(195,150,270,200,95,350,100,175,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 5:
	  clrscr();
	  cout<<"\n4th year room is at:\n\t\tA-block\n\t\t3rd Floor\n\t\tRoom no  :- 406";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(0,150,260,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  alfront();
	  direction(305,150,380,200,555,350,175,175,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 6:
	  clrscr();
	  btech();
	  break;
    case 7:
	  clrscr();
	  page();
	  break;
    default:
	  clrscr();
	  wrong();
	  bece();
  }
}
void GEC::bcse()
{
  cout<<"\n\t\t\t ******* Entered into CSE *******";
  btech_rooms();
  int BCSE;
  cout<<"\n\n\n\t\tEnter choice  :-  ";
  cin>>BCSE;
  switch(BCSE)
  {
    case 1:
	  clrscr();
	  cout<<"\nHOD room is at-\n\t\tC-block\n\t\tGround Floor\n\t\tRoom no  :-  ";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(55,300,135,350,375,350,240,25,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 2:
	  clrscr();
	  cout<<"staff room is at:\n\t\tC-block\n\t\tGround Floor\n\t\tRoom no  :-  ";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(245,300,300,350,375,350,75,25,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 3:
	  clrscr();
	  cout<<"\n2nd year room is at:\n\t\tC-block\n\t\t Ground Floor\n\t\tRoom no  :-  ";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(135,300,190,350,375,350,185,25,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 4:
	  clrscr();
	  cout<<"\n3rd year room is at:\n\t\tC-block\n\t\tGround Floor\n\t\tRoom no  :-  ";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(455,300,510,350,375,350,80,25,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 5:
	  clrscr();
	  cout<<"\n4th year room is at:\n\t\tC-block\n\t\tGround Floor\n\t\tRoom no  :-  ";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(190,300,245,350,375,350,130,25,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 6:
	  clrscr();
	  btech();
	  break;
    case 7:
	  clrscr();
	  page();
	  break;
    default:
	  clrscr();
	  wrong();
	  bcse();
  }
}
void GEC::mba()
{
  cout<<"\n\t\t\t******* Entered into MBA *******";
  cout<<"\n\n\n\t1.HOD room";
  cout<<"\n\t2.Staff room";
  cout<<"\n\t3.1st year";
  cout<<"\n\t4.2nd year";
  cout<<"\n\t5.back";
  int MBAS;
  cout<<"\n\n\n\t\tEnter choice  :-  ";
  cin>>MBAS;
  switch(MBAS)
  {
    case 1:
	  clrscr();
	  cout<<"\nHOD room is at:\n\t\tA-block\n\t\t2nd Floor\n\t\tRoom no  :-  307";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  direction(260,200,330,250,230,350,30,125,2,1);		//230,350
	  direction(260,200,330,250,360,350,30,125,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 2:
	  clrscr();
	  cout<<"\nStaff room is at:\n\t\tA-block\n\t\tFloor\n\t\tRoom no  :-  309";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  cleardevice();
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  cleardevice();
	  arfront();
	  direction(270,200,345,250,95,350,180,125,2,1);
	  delay(D);
	  closegraph();
	  page();
	  break;
    case 3:
	  clrscr();
	  cout<<"\n1st year room is at:\n\t\tA-block\n\t\tFloor\n\t\tRoom no  :-  310 ";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  cleardevice();
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  cleardevice();
	  arfront();
	  direction(345,200,420,250,95,350,255,125,2,1);
	  delay(D);
	  closegraph();
	  page();
	  break;
    case 4:
	  clrscr();
	  cout<<"\n2nd year room is at:\n\t\tA-block\n\t\tFloor\n\t\tRoom no  :-  ";
	  break;
    case 5:
	  clrscr();
	  main_search();
	  break;
    default:
	  clrscr();
	  wrong();
	  mba();
  }
}
void GEC::offices()
{
  cout<<"\n\t\t\t****** Entered into Offices  ******";
  cout<<"\n\n\n\t1.Chairman";
  cout<<"\n\t2.Principal";
  cout<<"\n\t3.Diploma Principal";
  cout<<"\n\t4.Director";
  cout<<"\n\t5.Main office";
  cout<<"\n\t6.Exam cell";
  cout<<"\n\t7.back";
  int OFFS;
  cout<<"\n\n\n\t\tEnetr choice  :-  ";
  cin>>OFFS;
  switch(OFFS)
  {
    case 1:
	  clrscr();
	  cout<<"\n Chairman sir room is at:\n\t\tA-block\n\t\tGround Floor\n\t\tRoom no  :- 101";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(0,150,260,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  alfront();
	  direction(155,300,230,350,555,350,325,25,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
   case 2:
	  clrscr();
	  cout<<"\nPrincipal sir room is at:\n\t\tA-block\n\t\tGround tFloor\n\t\tRoom no  :- 102";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(0,150,260,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  alfront();
	  direction(230,300,305,350,555,350,250,25,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 3:
	  clrscr();
	  cout<<"\n Diploma Principal sir room is at:\n\t\tB-block\n\t\t3rd Floor\n\t\tRoom no  :- 407";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(415,150,460,200,477,350,17,175,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 4:
	  clrscr();
	  cout<<"\n Director sir room is at:\n\t\tA-block\n\t\tGround Floor\n\t\tRoom no  :- 106";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(0,150,260,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  alfront();
	  direction(455,300,530,350,555,350,25,25,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 5:
	  clrscr();
	  cout<<"\n Main office room is at:\n\t\tA-block\n\t\tGround Floor\n\t\tRoom no  :- 103";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(0,150,260,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  alfront();
	  direction(305,300,380,350,555,350,175,25,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 6:
	  clrscr();
	  cout<<"\n Exam cell room is at:\n\t\tA-block\n\t\tGround Floor\n\t\tRoom no  :- 105";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(0,150,260,350,0,0,0,0,0,0);  //direction to aleft in long
	  delay(1500);                           // A- front view
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  alfront();
	  direction(380,300,455,350,555,350,100,25,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 7:
	  clrscr();
	  main_search();
	  break;
    default:
	  clrscr();
	  wrong();
	  offices();
  }
}
void GEC::others()
{
  cout<<"\n\t\t\t***************** Others *****************";
  cout<<"\n\n\n\t1.Canteen";
  cout<<"\n\t2.GEC Central Library";
  cout<<"\n\t3.Seminar hall";
  cout<<"\n\t4.P.E.T room";
  cout<<"\n\t5.Btech Boys Hostel";
  cout<<"\n\t6.Diploma Boys Hostel";
  cout<<"\n\t7.Girls Hostel";
  cout<<"\n\t8.Wash Rooms";
  cout<<"\n\t9.back";
  int OTHERSS;
  cout<<"\n\n\n\t\tEnter choice  :-  ";
  cin>>OTHERSS;
  switch(OTHERSS)
  {
   case 1:
	  clrscr();
	  cout<<"\n\n\n\t\tCanteen is at: ";
	  delay(D);
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,280,310,310,330,30,260,20,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  canteen_front();
	  direction(290,220,550,350,0,0,0,0,0,0);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 2:
	  clrscr();
	  cout<<"\nGEC Central Library is at:\n\t\tB-block\n\t\tGround Floor\n\t\tRoom no :- 101";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(30,300,290,350,307,350,17,25,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 3:
	  clrscr();
	  cout<<"\nSeminar hall is at:\n\t\tB-block\n\t\tGround Floor\n\t\tRoom no  :-  105";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(530,300,610,350,477,350,53,25,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 4:
	  clrscr();
	  cout<<"\nP.E.T room is at:\n\t\t-block\n\t\tFloor\n\t\tRoom no  :-  ";
	  delay(D);
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,320,310,350,330,30,300,20,2);
	  delay(D);
	  cleardevice();
	  canteen_front();
	  direction(290,220,420,350,0,0,0,0,0,0);
	  delay(D);
	  closegraph();
	  page();
	  break;
    case 5:
	  clrscr();
	  cout<<"\nBtech boys hostel is at:\n\t\tC-block\n\t\t3rd Floor";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(55,150,590,200,375,350,0,150,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 6:
	  clrscr();
	  cout<<"\nDiploma boys hostel is at:\n\t\tB-block\n\t\t3rd Floor\n\t\tRoom no :-401,409";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(530,150,610,200,477,350,53,175,2,1);
	  direction(30,150,155,200,477,175,322,0,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 7:
	  clrscr();
	  cout<<"\nGirls hostel is at:\n\t\tA-block\n\t\tFloor\n\t\tRoom no  :- 311,312 ";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  cleardevice();
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  cleardevice();
	  arfront();
	  direction(420,200,580,250,95,350,330,125,2,1);
	  delay(D);
	  closegraph();
	  page();
	  break;
    case 8:
	  clrscr();
	  wash_rooms();
	  break;
    case 9:
	  clrscr();
	  main_search();
	  break;
    default:
	  clrscr();
	  wrong();
	  others();
  }
}
void GEC::wash_rooms()
{
  cout<<"\n\t\t\t***************** Wash rooms *****************";
  cout<<"\n\n\n\t1.Boys wash rooms";
  cout<<"\n\t2.Girls wash rooms";
  cout<<"\n\t3.back";
  cout<<"\n\t4.Home/Exit";
  int WASHS;
  cout<<"\n\n\n\t\t\tEnter choice  :-  ";
  cin>>WASHS;
  switch(WASHS)
  {
    case 1:
	  clrscr();
	  bw_r();
	  break;
    case 2:
	  clrscr();
	  gw_r();
	  break;
    case 3:
	  clrscr();
	  others();
	  break;
    case 4:
	  clrscr();
	  main_search();
	  break;
    default:
	  clrscr();
	  wrong();
	  wash_rooms();
  }
}
void GEC::bw_r()
{
  cout<<"\n\n\t\tIn which block you are now";
  delay(3000);
  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
  // 1st top -> front ->direction
  top();
  delay(4000);
  closegraph();
  clrscr();
  cout<<"\n\n\n\t1.A block";
  cout<<"\n\t2.B block";
  cout<<"\n\t3.C block";
  cout<<"\n\t4.back";
  cout<<"\n\t5.Home/Exit";
  int BW_R;
  cout<<"\n\n\n\t\tEnter choice  :-  ";
  cin>>BW_R;
  switch(BW_R)
  {
    case 1:
	  clrscr();
	  cout<<"Wash rooms in A block\n\t\tGround Floor ->\tRoom no ->107 \n\t\t1st Floor ->\tRoom no -> 207 \n\t\t2nd Floor ->Room no -> 308 \n\t\t3rd Floor -\tRoom no ->401";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(0,150,260,350,0,0,0,0,0,0);
	  delay(1500);
	  cleardevice();
	  alfront();
	  direction(70,150,155,200,555,350,400,175,2,2);
	  delay(D);
	  cleardevice();
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  arfront();
	  direction(125,300,195,350,95,350,30,25,2,1);
	  delay(30);
	  direction(125,250,195,300,95,325,30,50,2,1);
	  delay(30);
	  direction(125,200,195,250,95,275,30,50,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 2:
	  clrscr();
	  cout<<"\nWash rooms in B block:\n\t\t1st Floor -> \tRoom no :210\n\t\t2nd Floor -> \tRoom no :305\n\t\t3rd Floor -> \tRoom no :404 & 408";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  // front of B
	  bfront();
	  direction(495,250,530,300,477,350,17,75,2,1);
	  direction(245,200,290,250,477,275,187,50,2,2);
	  direction(495,150,530,200,477,225,17,50,2,1);
	  direction(245,150,290,200,477,175,187,0,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 3:
	  clrscr();
	  cout<<"\nWash rooms in C block:\n\t\tB-block\n\t1st Floor -> \tRoom no :-206";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(300,250,350,300,375,350,25,75,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 4:
	  clrscr();
	  wash_rooms();
	  break;
    case 5:
	 clrscr();
	 page();
	 break;
    default:
	  clrscr();
	  wrong();
	  bw_r();
  }
}
void GEC::gw_r()
{
  cout<<"\n\n\n\t\t\tIn which block you are now";
  delay(3000);
  clrscr();
  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
  //top view
  top();
  delay(D);
  closegraph();
  clrscr();
  cout<<"\n\n\n\t1.A block";
  cout<<"\n\t2.B block";
  cout<<"\n\t3.C block";
  cout<<"\n\t4.back";
  cout<<"\n\t5.Home/Exit";
  int GW_R;
  cout<<"\n\n\n\t\t\tEnter choice  :-  ";
  cin>>GW_R;
  switch(GW_R)
  {
    case 1:
	  clrscr();
	  cout<<"Wash rooms in A-block:\n\t\tA-block\n\t\t1st Floor ->\tRoom no  :-  201 \n\t\t2nd Floor ->\tRoom no :-  301 \n\t\t3rd Floor ->\tRoom no  :-  416";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  cleardevice();
	  arfront();
	  direction(495,150,580,200,95,350,405,175,2,1);
	  delay(D);
	  cleardevice();
	  afront();
	  delay(1000);
	  direction(0,150,260,350,0,0,0,0,0,0);
	  delay(1500);
	  cleardevice();
	  alfront();
	  direction(70,250,155,300,555,350,400,75,2,2);
	  delay(30);
	  direction(70,200,155,250,555,350,400,125,2,2);
	  delay(D);
	  closegraph();
	  page();
	  break;
    case 2:
	  clrscr();
	  cout<<"\nWash rooms in B-block:\n\t\t1st Floor -> \tRoom no :206\n\t\t2nd Floor -> \tRoom no :308";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(245,250,290,300,307,350,17,75,2,2);
	  direction(415,200,460,250,307,275,107,50,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 3:
	  clrscr();
	  cout<<"\nWash rooms in C block:\n\t\tC-block\n\t\tGround Floor -> \tRoom no :";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(300,300,350,350,375,350,25,25,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 4:
	  clrscr();
	  wash_rooms();
	  break;
    case 5:
	  clrscr();
	  page();
	  break;
    default:
	  clrscr();
	  wrong();
	  gw_r();
  }
}
void GEC::labs()
{
  cout<<"\n                      ************** Labs ************** ";
  cout<<"\n1.Btech drawing                        | 16.Geological Technology";
  cout<<"\n2.CAD & CAM                            | 17.GISS & CAD";
  cout<<"\n3.Chemistry                            | 18.Irrigation Drawing & Design";
  cout<<"\n4.Concrete Technology                  | 19.MMS & MOS";
  cout<<"\n5.Control Systems                      | 20.Online";
  cout<<"\n6.C.S.E Computers Lab                  | 21.Physics";
  cout<<"\n7.Dasukt Systems                       | 22.Power Electronics";
  cout<<"\n8.Diploma Drawing                      | 23.Power Systems";
  cout<<"\n9.Elictrical machines                  | 24.Production technology";
  cout<<"\n10.Elictrical Measurements             | 25.Robotics & Mechatronics";
  cout<<"\n11.Electronic Devices&d Circuites      | 26.S & H Computers";
  cout<<"\n12.Engineering Geology                 | 27.Servilance";
  cout<<"\n13.Environmental Technology            | 28.Strength of materials";
  cout<<"\n14.E-Yantra                            | 29.Transportation Technology";
  cout<<"\n15.Fluid Mechanics & Hydrolic Machines | 30.VLSI Lab";
  cout<<"\n\t\t\t31.Back";
  int LABS;
  cout<<"\n\n\n\t\t\tEnter choice  :-  ";
  cin>>LABS;
  switch(LABS)
  {
    case 1:
	  clrscr();
	  cout<<"\nBtech Drawing Lab is at :\n\t\tC-block\n\t\t1st Floor\n\t\tRoom no  :-  201";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(55,250,135,300,375,350,240,75,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 2:
	  clrscr();
	  cout<<"\nCAD & CAM lab is at :\n\t\tC-block\n\t\t1st Floor\n\t\tRoom no  :-  209";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(510,250,590,300,375,350,135,75,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
     case 3:
	  clrscr();
	  cout<<"\nChemistry lab is at :\n\t\tB-block\n\t\tGround Floor\n\t\tRoom no  :-  103";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(370,300,460,350,477,350,17,25,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 4:
	  clrscr();
	  cout<<"\nConcrete Technology lab is at :\n\t\t-block\n\t\tFloor\n\t\tRoom no  :-  ";
	  delay(D);
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,360,215,390,330,30,350,120,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  final_labs();
	  delay(1500);
	  direction(160,220,550,350,0,0,0,0,0,0);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 5:
	  clrscr();
	  cout<<"\nControl Systems Lab is at :\n\t\t\tA-block\n\t\t\tGround Floor\n\t\t\tRoom no  :-  108";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  arfront();
	  direction(195,300,270,350,95,350,100,25,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 6:
	  clrscr();
	  cout<<"\nC.S.E Lab is at :\n\t\tC-block\n\t\tGround Floor\n\t\tRoom no :-";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(55,300,135,350,375,350,240,25,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 7:
	  clrscr();
	  cout<<"\nDassault systems lab is at:\n\t\tB-block\n\t\t1st Floor\n\t\tRoom no :- 211";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(530,250,570,300,477,350,53,75,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
   case 8:
	  clrscr();
	  cout<<"\nDiploma Drawing Lab is at :\n\t\tB-block\n\t\t2nd Floor\n\t\tRoom no :- 301";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(30,200,110,250,307,350,203,125,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 9:
	  clrscr();
	  cout<<"\n\nElectrical Machines Lab is at :\n\t\tA-block\n\t\tGround Floor\n\t\tRoom no :-109,110";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  arfront();
	  direction(270,300,420,350,95,350,175,25,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 10:
	  clrscr();
	  cout<<"\n\nElectrical Measurements Lab is at :\n\t\t\tA-block\n\t\t\tGround Floor\n\t\tRoom no :-111";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  arfront();
	  direction(420,300,495,350,95,350,325,25,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 11:
	  clrscr();
	  cout<<"\nElectronic Devices & Circuits Lab is at :\n\t\t\t\tA-block\n\t\t\t\t3rd Floor\n\t\t\t\tRoom no  :-  413";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  arfront();
	  direction(345,150,420,200,95,350,250,175,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 12:
	  clrscr();
	  cout<<"\nEngineering Geology Lab is at :\n\t\t-block\n\t\tFloor\n\t\tRoom no :";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(455,200,510,250,375,350,80,125,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
     case 13:
	  clrscr();
	  cout<<"\nEnvironmental Technologys Lab is at :";
	  delay(D);
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,360,215,390,330,30,350,120,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  final_labs();
	  delay(1500);
	  direction(160,220,550,350,0,0,0,0,0,0);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 14:
	  clrscr();
	  cout<<"\nE-YANTRA Lab is at :\n\t\tA-block\n\t\tGround Floor\n\t\tRoom no :112";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  arfront();
	  direction(495,300,580,350,95,350,400,25,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 15:
	  clrscr();
	  cout<<"\nFluid Mechanics & Hydrolic Machines Lab is at :";
	  delay(D);
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,280,310,310,330,30,260,20,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  canteen_front();
	  direction(30,220,160,350,0,0,0,0,0,0);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 16:
	  clrscr();
	  cout<<"\nGeological Technology Lab is at :\n\t\tC-block\n\t\t2nd Floor\n\t\tRoom no :-306";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(455,200,510,250,375,350,80,125,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 17:
	  clrscr();
	  cout<<"\nGISS & CAD Lab is at :\n\t\tC-block\n\t\t2nd Floor\n\t\tRoom no :-307";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(510,200,590,250,375,350,135,125,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 18:
	  clrscr();
	  cout<<"\nIrrigation Drawing & Design Lab is at :\n\t\tC-block\n\t\t1stFloor\n\t\tRoom no :-201";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(55,250,135,300,375,350,240,75,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 19:
	  clrscr();
	  cout<<"\nMMS & MOS Lab is at :\n\t\t-block\n\t\tFloor\n\t\tRoom no :";
	  delay(D);
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,280,310,310,330,30,260,20,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  canteen_front();
	  direction(160,220,290,350,0,0,0,0,0,0);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 20:
	  clrscr();
	  cout<<"\nOnline Lab is at :\n\t\tA-block\n\t\t1st Floor\n\t\tRoom no :-203";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(0,150,260,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  alfront();
	  direction(230,250,380,300,555,350,175,75,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 21:
	  clrscr();
	  cout<<"\nPhysics Lab is at :\n\t\t-block\n\t\tFloor\n\t\tRoom no :";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(325,300,370,350,307,350,18,25,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 22:
	  clrscr();
	  cout<<"\nPower Electronics Lab is at :\n\t\tA-block\n\t\t\t\tGround Floor\n\t\t\tRoom no  :-  108";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(330,150,610,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  arfront();
	  direction(195,300,270,350,95,350,100,25,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 23:
	  clrscr();
	  cout<<"\nPower Systems Lab is at :\n\t\tB-block\n\t\t1st Floor\n\t\tRoom no : 201";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(30,250,110,300,307,350,197,75,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 24:
	  clrscr();
	  cout<<"\nProduction Technology Lab is at :";
	  delay(D);
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,280,310,310,330,30,260,20,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  canteen_front();
	  direction(30,220,160,350,0,0,0,0,0,0);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 25:
	  clrscr();
	  cout<<"\nRobotics & Mechatronics Lab is at :\n\t\t\tA-block\n\t\t\t1st Floor\n\t\t\tRoom no  :-  205";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(0,150,260,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  alfront();
	  direction(380,250,530,300,555,350,25,75,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 26:
	  clrscr();
	  cout<<"\nS & H Computers Lab is at :\n\t\t-block\n\t\tFloor\n\t\tRoom no :";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(40,50,90,270,310,30,90,220,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  bfront();
	  direction(570,250,610,300,477,350,107,75,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 27:
	  clrscr();
	  cout<<"\nServilance Lab is at :\n\t\tC-block\n\t\tGround Floor\n\t\tRoom no :";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(450,120,500,270,310,30,120,150,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  cfront();
	  direction(510,300,590,350,375,350,135,25,2,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 28:
	  clrscr();
	  cout<<"\nStrength Of Material Lab is at :";
	  delay(D);
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,280,310,310,330,30,260,20,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  canteen_front();
	  direction(160,220,290,350,0,0,0,0,0,0);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 29:
	  clrscr();
	  cout<<"\nTransportation Technology Lab is at :";
	  delay(D);
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,360,215,390,330,30,350,120,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  final_labs();
	  delay(1500);
	  direction(160,220,550,350,0,0,0,0,0,0);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
    case 30:
	  clrscr();
	  cout<<"\nVLSI Lab is at :\n\t\tA-block\n\t\t2nd Floor\n\t\tRoom no  :-  306";
	  delay(D);
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  top();
	  topdir(120,50,500,100,310,30,20,0,1);
	  delay(D);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  afront();
	  delay(1000);
	  direction(0,150,260,350,0,0,0,0,0,0);
	  delay(1500);
	  closegraph();
	  clrscr();
	  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
	  alfront();
	  direction(455,200,530,250,555,350,25,125,2,2);
	  delay(D);
	  closegraph();
	  clrscr();
	  page();
	  break;
   case 31:
	  clrscr();
	  main_search();
	  break;
   default:
	  clrscr();
	  wrong();
	  labs();
  }
}
     //**************** GRAPHICS WORK STARTS ***********************
void GEC::afront()
{
  //  display all text
  setcolor(RED);
  settextstyle(4,0,4);
  outtextxy(250,98,"A-block");
  settextstyle(2,0,4);
  outtextxy(220,360,"Steps");
  outtextxy(350,360,"Steps");
  outtextxy(615,150,"3rd");
  outtextxy(613,160,"Floor");
  outtextxy(615,200,"2nd");
  outtextxy(613,210,"Floor");
  outtextxy(615,250,"1st");
  outtextxy(613,260,"Floor");
  outtextxy(555,360,"Ground");
  outtextxy(565,370,"Floor");
  setcolor(9);
  rectangle(0,150,260,350);
  // a_r block
  rectangle(330,150,610,350);
  // connecting line
  line(0,150,610,150);
  // horizontal lines
  line(0,200,610,200);
  line(0,250,610,250);
  line(0,300,610,300);
  // vertical lines
  // A_L
  line(65,150,65,350);
  line(130,150,130,350);
  line(195,150,195,350);
  // A_R
  line(395,150,395,350);
  line(460,150,460,350);
  line(525,150,525,350);
  // for 3d
  line(0,150,20,130);
  line(20,130,630,130);
  line(630,130,610,150);
  line(630,130,630,330);
  line(630,330,610,350);
  line(260,350,280,330);
  line(280,330,280,300);
}
void GEC::bfront()
{
  setcolor(9);
  rectangle(30,150,610,350);
  // vertical lines
  line(110,150,110,350);
  line(155,150,155,350);
  line(200,150,200,350);
  line(245,150,245,350);
  line(290,150,290,350);
  line(325,150,325,350);
  line(370,150,370,350);
  line(415,150,415,350);
  line(460,150,460,350);
  line(495,150,495,350);
  line(530,150,530,350);
  line(610,150,610,350);
  // horizontal lines
  line(30,200,610,200);
  line(30,250,610,250);
  line(30,300,610,300);
  line(30,350,610,350);
  // displaying text
  setcolor(RED);
  settextstyle(4,0,4);
  outtextxy(200,30,"B-block");
  settextstyle(3,0,2);
  setcolor(GREEN);
  outtextxy(305,65,"Front view");
  setcolor(RED);
  settextstyle(2,0,4);
  outtextxy(295,355,"Steps");
  outtextxy(465,355,"Steps");
  outtextxy(10,175,"3rd");
  outtextxy(10,225,"2nd");
  outtextxy(10,275,"1st");
  settextstyle(2,1,4);
  outtextxy(10,315,"ground");
}
void GEC::cfront()
{
  // display all text
  setcolor(RED);
  settextstyle(4,0,4);
  outtextxy(250,30,"C-block");
  settextstyle(2,0,4);
  outtextxy(360,355,"steps");
  outtextxy(10,165,"3rd");
  outtextxy(15,175,"Floor");
  outtextxy(10,210,"2nd");
  outtextxy(15,220,"Floor");
  outtextxy(10,265,"1st");
  outtextxy(15,275,"Floor");
  outtextxy(10,315,"Ground");
  outtextxy(15,325,"Floor");
  setcolor(GREEN);
  settextstyle(3,0,2);
  outtextxy(350,60,"Front view");
  setcolor(9);
  rectangle(55,150,590,350);
  // vertical lines
  line(135,150,135,350);
  line(190,150,190,350);
  line(245,150,245,350);
  line(300,150,300,350);
  line(350,150,350,350);
  line(400,150,400,350);
  line(455,150,455,350);
  line(510,150,510,350);
  // horizontal lines
  line(55,200,590,200);
  line(55,250,590,250);
  line(55,300,590,300);
  // cuboid
  line(55,150,75,130);
  line(75,130,610,130);
  line(590,150,610,130);
  line(610,130,610,330);
  line(590,350,610,330);
}
void GEC::direction(int l,int t,int r,int b,int x,int y,int X,int Y,int chy,int chx)
{
  for(int i=0;i<=Y;i++)
  {
    delay(10);
    putpixel(x,y,5);
    if(chy==1)
    {
      y=y+1;
    }
    else
    {
      y=y-1;
    }
  }
  for(int j=0;j<=X;j++)
  {
    delay(10);
    putpixel(x,y,5);
    if(chx==1)
    {
      x=x+1;
    }
    else
    {
      x=x-1;
    }
  }
  setcolor(RED);
  rectangle(l,t,r,b);
  setfillstyle(8,5);
  floodfill(l+2,t+2,RED);
}
void GEC::top()
{
  // Display all text
  settextstyle(7,0,1);
  setcolor(GREEN);
  outtextxy(250,10,"Entrance");
  setcolor(RED);
  outtextxy(95,160,"B - Block");
  outtextxy(340,100,"A - Block");
  outtextxy(505,160,"C - Block");
  settextstyle(7,0,4);
  setcolor(BROWN);
  outtextxy(200,410,"GEC");
  outtextxy(265,410,"-");
  settextstyle(3,0,3);
  outtextxy(295,415,"Top View");
  setcolor(9);
  rectangle(20,30,620,450);
  // b block
  rectangle(40,50,90,270);
  // a block
  rectangle(120,50,500,100);
  // c block
  rectangle(450,120,500,270);
  // canteen
  rectangle(120,280,310,310);
  // lab1
  rectangle(120,320,310,350);
  // lab2
  rectangle(120,360,215,390);
}
void GEC::topdir(int tl,int tt,int tr,int tb,int x,int y,int Y,int X,int topc)
{
  for(int i=0;i<Y;i++)
  {
    if((i>=20) && (i<+70))
    {
      y=y+1;
      continue;
    }
    else
    {
      delay(10);
      putpixel(x,y,5);
      y=y+1;
    }
  }
  for (int j=0;j<X;j++)
  {
    delay(10);
    putpixel(x,y,5);
    if(topc==1)
    {
      x=x+1;
    }
    else
    {
       x=x-1;
    }
  }
  setcolor(RED);
  rectangle(tl,tt,tr,tb);
  delay(10);
  setfillstyle(8,5);
  floodfill(tl+5,tt+5,RED);
}
void GEC::arfront()
{
  // display all text
  setcolor(RED);
  settextstyle(4,0,4);
  outtextxy(240,50,"A-block");
  settextstyle(2,0,4);
  outtextxy(15,170,"3rd floor");
  outtextxy(15,220,"2nd floor");
  outtextxy(15,270,"1st floor");
  outtextxy(10,310,"ground");
  outtextxy(15,325,"floor");
  outtextxy(80,360,"Steps");
  setcolor(GREEN);
  settextstyle(3,0,2);
  outtextxy(345,80,"Right side");
  setcolor(9);
  rectangle(70,150,580,350);
  // horizontal lines
  setcolor(3);
  line(70,300,580,300);
  line(70,200,580,200);
  line(70,250,580,250);
  // vertical lines
  line(125,150,125,350);
  line(195,150,195,350);
  line(270,150,270,350);
  line(345,150,345,350);
  line(420,150,420,350);
  line(495,150,495,350);
}
void GEC::alfront()
{
  // display all text
  setcolor(RED);
  settextstyle(4,0,4);
  outtextxy(240,50,"A-block");
  settextstyle(2,0,4);
  outtextxy(15,170,"3rd floor");
  outtextxy(15,220,"2nd floor");
  outtextxy(15,270,"1st floor");
  outtextxy(10,310,"ground");
  outtextxy(15,325,"floor");
  outtextxy(540,360,"Steps");
  setcolor(GREEN);
  settextstyle(3,0,2);
  outtextxy(345,80,"Left side");
  setcolor(9);
  rectangle(70,150,580,350);
  // horizontal lines
  setcolor(3);
  line(70,300,580,300);
  line(70,200,580,200);
  line(70,250,580,250);
  //vertical lines
  line(155,150,155,350);
  line(230,150,230,350);
  line(305,150,305,350);
  line(380,150,380,350);
  line(455,150,455,350);
  line(530,150,530,350);
}
void GEC::canteen_front()
{
  //canteen block
  // instead of rectangle
  setcolor(3);
  line(30,350,30,220);
  line(30,350,550,350);
  line(550,350,550,200);
  // vertical lines
  line(160,220,160,350);
  line(290,220,290,350);
  line(420,220,420,350);
  // cuboid
  line(550,350,580,330);
  line(580,330,580,180);
  line(580,180,550,200);
  setcolor(9);
  // pyramid
  line(540,220,570,160);
  line(570,160,50,160);
  line(50,160,20,220);
  line(20,220,540,220);
  line(570,160,585,190);
  // lines on pyramid
  line(85,220,115,160);
  line(150,220,180,160);
  line(215,220,245,160);
  line(280,220,310,160);
  line(345,220,375,160);
  line(410,220,440,160);
  line(475,220,505,160);
}
void GEC::final_labs()
{
  // final block
  // instead of rectangle
  setcolor(3);
  line(160,350,550,350);
  line(550,350,550,200);
  // vertical lines
  line(160,220,160,350);
  line(290,220,290,350);
  line(420,220,420,350);
  // cuboid
  line(550,350,580,330);
  line(580,330,580,180);
  line(580,180,550,200);
  setcolor(9);
  // pyramid
  line(540,220,570,160);
  line(570,160,180,160);
  line(150,220,540,220);
  line(570,160,585,190);
  // lines on pyramid
  line(150,220,180,160);
  line(215,220,245,160);
  line(280,220,310,160);
  line(345,220,375,160);
  line(410,220,440,160);
  line(475,220,505,160);
}
void GEC::wrong()
{
  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
  int dallx=0,dally=0,px=100,py=400;
  settextstyle(8,0,3);
  setcolor(RED);
  for(int t=0;t<175;t++)
  {
    outtextxy(dallx,dally,"\"You Steped In Dall\"");
    delay(20);
    cleardevice();
    dallx=dallx+1;
    dally=dally+1;
  }
  clrscr();
  setcolor(BLUE);
  settextstyle(8,0,3);
  for (int e=0;e<225;e++)
  {
    outtextxy(px,py,"\"Please enter a valid option\"");
    delay(20);
    cleardevice();
    py=py-1;
  }
  closegraph();
}
void GEC::page()
{
  int W=0;
  char SAMPLE1[2]="E";
  char SAMPLE2[2]="e";
  char PAGE[2];
  initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
  while (W<4)
  {
    if (W==0) // rocket 1
      {
	for(int i=0;i<=360;i++)
	  {
	    int arr[]={42+i,360-i,9+i,377-i,-5+i,375-i,42+i,360-i,42+i,360-i,23+i,380-i,35+i,386-i,42+i,360-i};
	    setfillstyle(1,3);
	    setcolor(3);
	    fillpoly(8,arr);
	    int arr1[]={9+i,377-i,42+i,360-i,23+i,380-i,15+i,383-i,9+i,377-i};
	    line(15+i,383-i,42+i,360-i);
	    drawpoly(5,arr1);
	    delay(10);
	    cleardevice();
	  }
      }
    if(W==1)  // rocket 2
      {
	for(int i=0;i<=390;i++)
	  {
	     int arr[]={42+i,60+i,9+i,40+i,-5+i,42+i,42+i,60+i,42+i,60+i,23+i,40+i,35+i,34+i,42+i,60+i};
	     setfillstyle(1,3);
	     setcolor(3);
	     fillpoly(8,arr);
	     line(23+i,40+i,20+i,45+i);
	     delay(10);
	     cleardevice();
	  }
      }
      if(W==2)  // rocket 3
      {
	for(int i=0;i<=420;i++)
	 {
	   int arr[]={428-i,20+i,461-i,0+i,475-i,2+i,428-i,20+i,428-i,20+i,449-i,0+i,435-i,-6+i,428-i,20+i};
	   setfillstyle(1,3);
	   setcolor(3);
	   fillpoly(8,arr);
	   int arr1[]={461-i,0+i,428-i,20+i,449-i,0+i,454-i,4+i,461-i,0+i};
	   line(454-i,4+i,428-i,20+i);
	   drawpoly(5,arr1);
	   delay(10);
	   cleardevice();
	 }
      }
      if(W==3) // rocket 4
      {
	for(int i=0;i<=460;i++)
	  {
	    int arr[]={542-i,460-i,575-i,477-i,589-i,475-i,542-i,460-i,542-i,460-i,561-i,480-i,549-i,486-i,542-i,460-i};
	    setfillstyle(1,3);
	    setcolor(3);
	    fillpoly(8,arr);
	    int arr1[]={575-i,477-i,542-i,460-i,561-i,480-i,569-i,483-i,575-i,477-i};
	    line(569-i,483-i,542-i,460-i);
	    drawpoly(5,arr1);
	    delay(10);
	    cleardevice();
	  }
      }
    W+=1;
  }
  settextstyle(1,0,1);
  setcolor(10);
  outtextxy(130,400,"Press \" E \" & \" ENTER \" to enter into Portal ");
  //extra
  cin>>PAGE;
  closegraph();
  clrscr();
  if (strcmp(PAGE,SAMPLE1)==0)
    {
      initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
      loading();
      closegraph();
      clrscr();
      main_search();
    }
  else if(strcmp(PAGE,SAMPLE2)==0)
    {
      initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
      loading();
      closegraph();
      clrscr();
      main_search();
    }
  else
    {
      initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
      setcolor(10);
      settextstyle(1,0,1);
      outtextxy(180,400,"Enter correct option");
      delay(3000);
      closegraph();
      clrscr();
      page();
    }
}
void main()
{
  clrscr();
  GEC g;
  g.page();    // Entrence page -> Loading -> Main_search -> Stream
  clrscr();    // Year -> Rooms -> Room Details -> Navigation
  getch();     // -> Entrence page
}