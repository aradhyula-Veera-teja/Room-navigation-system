// Software to search rooms of GEC
#include<iostream.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
class GEC
{
public:
void main_search();
void diplomo();
void btech();
void mba();
void offices();
void labs();
void others();
void diplomo_rooms();
void btech_rooms();
void dcivil();
void dmech();
void deee();
void dece();
void bcivil();
void bmech();
void beee();
void bece();
void bcse();
void wash_rooms();
void bw_r();
void gw_r();
void bfront();
void afront();
void cfront();
void alfront();
void arfront();
void direction(int l,int t,int r,int b,int x,int y,int X,int Y,int ch1,int ch2);
void top();
void topdir(int tl,int tt,int tr,int tb,int x,int y,int Y,int X,int topc);
void wrong();
void loading();
};
void GEC::loading()
{
rectangle(150,225,450,211);
setcolor(RED);
outtextxy(350,230,"Loading.....");
for (int l=0;l<=298;l++)
{
rectangle(151,224,151+l,212);
delay(10);
}
}
void GEC::main_search()
{
cout<<"\n	***************  GEC  ***************";
cout<<"\n    ****** Welcome to room search portal ******";
cout<<"\n1.Diploma";
cout<<"\n2.Btech";
cout<<"\n3.MBA";
cout<<"\n4.Labs";
cout<<"\n5.Offices";
cout<<"\n6.Others";
int ms;
cout<<"\n\n\n           Enter choice :\t";
cin>>ms;
switch (ms)
{
case 1:
	clrscr();
	diplomo();
	break;
case 2:
	clrscr();
	btech();
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
cout<<"\n	******* Entered into diploma *******";
cout<<"\n1.Mech";
cout<<"\n2.EEE";
cout<<"\n3.ECE";
cout<<"\n4.back";
int ds;
cout<<"\n\n\n        Eentr choice :\t";
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
cout<<"\n1.Civil";
cout<<"\n2.Mech";
cout<<"\n3.EEE";
cout<<"\n4.ECE";
cout<<"\n5.CSE";
cout<<"\n6.back";
int bs;
cout<<"\n\n\n       Eentr choice  :\t";
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
	main_search();
	break;
default:
	clrscr();
	wrong();
	btech();

}
}
void GEC::diplomo_rooms()
{
cout<<"\n1.Staff room";
cout<<"\n2.1st year";
cout<<"\n3.2nd year";
cout<<"\n4.3rd year";
cout<<"\n5.back";
cout<<"\n6.Home/Exit";
}
void GEC::btech_rooms()
{
cout<<"\n1.HOD Room";
cout<<"\n2.Staff room";
cout<<"\n3.1st year";
cout<<"\n4.2nd year";
cout<<"\n5.3rd year";
cout<<"\n6.4th year";
cout<<"\n7.back";
cout<<"\n8.Home/Exit";
}
void GEC::dmech()
{
cout<<"\n	******* Entered into MECH *******";
diplomo_rooms();
int DMECH;
cout<<"\n\n\n       Enter choice  :\t";
cin>>DMECH;
switch(DMECH)
{
case 1:
	clrscr();
	/*cout<<"\nStaff room is at:\n\t\tB-block\n\t\t2nd Floor\n\t\tRoom no:310";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	bfront();
	direction(495,200,610,250,477,350,15,125,2,1);
	delay(5000);
	clrscr();
	main_search();*/
	break;
case 2:
	clrscr();
	cout<<"\n1st year room is at:\n\t\tB-block\n\t\t2nd floor\n\t\tRoom no :306";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	bfront();
	direction(325,200,415,250,307,350,15,125,2,1);
	delay(4000);
	clrscr();
	break;
case 3:
	clrscr();
	cout<<"\n2nd year room is at:\n\t\tB-block\n\t\t3rd Floor\n\t\tRoom no :403";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	bfront();
	direction(155,150,245,200,307,350,60,175,2,2);
	delay(5000);
	clrscr();
	break;
case 4:
	clrscr();
	cout<<"\n3rd year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	break;
case 5:

	clrscr();
	diplomo();

	break;
case 6:
	clrscr();
	main_search();
	break;
default:
	clrscr();
	wrong();
	dmech();
}
}
void GEC::deee()
{
cout<<"\n	******* Entered into EEE *******";
diplomo_rooms();
int DEEE;
cout<<"\n\n\n          Enter choice  :\t";
cin>>DEEE;
switch(DEEE)
{
case 1:
	clrscr();
	cout<<"\nStaff room is at:\n\t\tB-block\n\t\t2nd Floor\n\t\tRoom no:310";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(5000);
	clrscr();
	bfront();
	direction(495,200,610,250,477,350,15,125,2,1);
	delay(5000);
	clrscr();
	main_search();
	break;
case 2:
	clrscr();
	cout<<"\n1st year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	break;
case 3:
	clrscr();
	cout<<"\n2nd year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	break;
case 4:
	clrscr();
	cout<<"\n3rd year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	break;
case 5:
	clrscr();
	diplomo();
	break;
case 6:
	clrscr();
	main_search();
	break;
default:
	clrscr();
	wrong();
	deee();
}
}
void GEC::dece()
{
cout<<"\n	*******Entered into ECE *******";
diplomo_rooms();
int DECE;
cout<<"\n\n\n        Enter choice  :\t";
cin>>DECE;
switch(DECE)
{
case 1:
	clrscr();
	cout<<"\nStaff room is at";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(5000);
	clrscr();
	bfront();
	direction(495,200,610,250,477,350,15,125,2,1);
	delay(5000);
	clrscr();
	main_search();
	break;
case 2:
	clrscr();
	cout<<"\n1st year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	break;
case 3:
	clrscr();
	cout<<"\n2nd year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	break;
case 4:
	clrscr();
	cout<<"\n3rd year room is at";
	break;
case 5:
	clrscr();
	diplomo();
	break;
case 6:
	clrscr();
	main_search();
	break;
default:
	clrscr();
	wrong();
	dece();
}
}
void GEC::bcivil()
{
cout<<"\n	******* Entered into CIVIL *******";
btech_rooms();
int BCIVIL;
cout<<"\n\n\n        Enter choice :  \t";
cin>>BCIVIL;
switch(BCIVIL)
{
case 1:
	clrscr();
	cout<<"\nHOD room is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();
	break;
case 2:
	clrscr();
	cout<<"staff room is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();

case 3:
	clrscr();
	cout<<"\n1st year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	break;
case 4:
	clrscr();
	cout<<"\n2nd year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();
	break;
case 5:
	clrscr();
	cout<<"\n3rd year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();

	break;
case 6:
	clrscr();
	cout<<"\n 4th year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();

	break;
case 7:
	clrscr();
	btech();
	break;
case 8:
	clrscr();
	main_search();
	break;
default:
	clrscr();
	wrong();
	bcivil();
}
}
void GEC::bmech()
{
cout<<"\n	******* Entered into MECH *******";
btech_rooms();
int BMECH;
cout<<"\n\n\n     Enter choice :  \t";
cin>>BMECH;
switch(BMECH)
{
case 1:
	clrscr();
	cout<<"\nHOD room is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();

	break;
case 2:
	clrscr();
	cout<<"staff room is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();

	break;
case 3:
	clrscr();
	cout<<"\n1st year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	break;
case 4:
	clrscr();
	cout<<"\n2nd year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();

	break;
case 5:
	clrscr();
	cout<<"\n3rd year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();

	break;
case 6:
	clrscr();
	cout<<"\n 4th year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();

	break;
case 7:
	clrscr();
	btech();
	break;
case 8:
	clrscr();
	main_search();
	break;
default:
	clrscr();
	wrong();
	bmech();
}
}
void GEC::beee()
{
cout<<"\n	******* Entered into EEE *******";
btech_rooms();
int BEEE;
cout<<"\n\n\n        Enter choice :  \t";
cin>>BEEE;
switch(BEEE)
{
case 1:
	clrscr();
	cout<<"\nHOD room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 2:
	clrscr();
	cout<<"staff room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 3:
	clrscr();
	cout<<"\n1st year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	break;
case 4:
	clrscr();
	cout<<"\n2nd year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 5:
	clrscr();
	cout<<"\n3rd year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 6:
	clrscr();
	cout<<"\n 4th year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 7:
	clrscr();
	btech();
	break;
case 8:
	clrscr();
	main_search();
	break;
default:
	clrscr();
	wrong();
	beee();
}
}
void GEC::bece()
{
cout<<"\n	******* Entered into ECE *******";
btech_rooms();
int BECE;
cout<<"\n\n\n         Enter choice :  \t";
cin>>BECE;
switch(BECE)
{
case 1:
	clrscr();
	cout<<"\nHOD room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 2:
	clrscr();
	cout<<"staff room is at";
case 3:
	clrscr();
	cout<<"\n1st year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	break;
case 4:
	clrscr();
	cout<<"\n2nd year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 5:
	cout<<"\n 3rd year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 6:
	clrscr();
	cout<<"\n 4th year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 7:
	clrscr();
	btech();
	break;
case 8:
	clrscr();
	main_search();
	break;
default:
	clrscr();
	wrong();
	bece();
}
}
void GEC::bcse()
{
cout<<"\n       ******* Entered into CSE *******";
btech_rooms();
int BCSE;
cout<<"\n\n\n          Enter choice :  \t";
cin>>BCSE;
switch(BCSE)
{
case 1:
	clrscr();
	cout<<"\nHOD room is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();

	break;
case 2:
	clrscr();
	cout<<"staff room is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();

case 3:
	clrscr();
	cout<<"\n1st year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	break;
case 4:
	clrscr();
	cout<<"\n2nd year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();
	break;
case 5:
	clrscr();
	cout<<"\n3rd year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();
	break;
case 6:
	clrscr();
	cout<<"\n 4th year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();
	break;
case 7:
	clrscr();
	btech();
	break;
case 8:
	clrscr();
	main_search();
	break;
default:
	clrscr();
	wrong();
	bcse();
}
}
void GEC::mba()
{
cout<<"\n	******* Entered into MBA *******";
cout<<"\n1.HOD room";
cout<<"\n2.Staff room";
cout<<"\n3.1st year";
cout<<"\n4.2nd year";
cout<<"\n5.back";
int MBAS;
cout<<"\n\n\n          Enter choice :  \t";
cin>>MBAS;
switch(MBAS)
{
case 1:
	clrscr();
	cout<<"\n HOD room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 2:
	clrscr();
	cout<<"\nStaff room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 3:
	clrscr();
	cout<<"\n1st year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 4:
	clrscr();
	cout<<"\n2nd year room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
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
cout<<"\n        ****** Entered into Offices  ******";
cout<<"\n1.Chairman";
cout<<"\n2.Principal";
cout<<"\n3.Diploma Principal";
cout<<"\n4.Director";
cout<<"\n5.Main office";
cout<<"\n6.Exam cell";
cout<<"\n7.back";
int OFFS;
cout<<"\n\n\n         Enetr choice :  \t";
cin>>OFFS;
switch(OFFS)
{
case 1:
	clrscr();
	cout<<"\n Chairman sir room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 2:
	clrscr();
	cout<<"\n Principal sir room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 3:
	clrscr();
	cout<<"\n Diploma Principal sir room is at";
	break;
case 4:
	clrscr();
	cout<<"\n Director sir room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 5:
	clrscr();
	cout<<"\n Main office room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 6:
	clrscr();
	cout<<"\n Exam cell room is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
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
cout<<"\n 	***************** Others *****************";
cout<<"\n1.Canteen";
cout<<"\n2.GEC Central Library";
cout<<"\n3.Seminar hall";
cout<<"\n4.P.E.T room";
cout<<"\n5.Btech Boys Hostel";
cout<<"\n6.Diploma Boys Hostel";
cout<<"\n7.Girls Hostel";
cout<<"\n8.Wash Rooms";
cout<<"\n9.back";
int OTHERSS;
cout<<"\n\n\n         Enter choice :  \t";
cin>>OTHERSS;
switch(OTHERSS)
{
case 1:
	clrscr();
	cout<<"\nCanteen is at";
	break;
case 2:
	clrscr();
	cout<<"\nGEC Central Library is at";
	break;
case 3:
	clrscr();
	cout<<"\nSeminar hall is at";
	break;
case 4:
	clrscr();
	cout<<"\nP.E.T room is at";
	break;
case 5:
	clrscr();
	cout<<"\nBtech boys hostel is at";
	break;
case 6:
	clrscr();
	cout<<"\nDiploma boys hostel is at";
	break;
case 7:
	clrscr();
	cout<<"\nGirls hostel is at";
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
cout<<"\n	***************** Wash rooms *****************";
cout<<"\n1.Boys wash rooms";
cout<<"\n2.Girls wash rooms";
cout<<"\n3.back";
cout<<"\n4.Home/Exit";
int WASHS;
cout<<"\n\n\n      Enter choice :  \t";
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
cout<<"\nIn which block you are now";
//top view
cout<<"\n1.A block";
cout<<"\n2.B block";
cout<<"\n3.C block";
cout<<"\n4.back";
cout<<"\n5.Home/Exit";
int BW_R;
cout<<"\n\n\n      Enter choice :  \t";
cin>>BW_R;
switch(BW_R)
{
case 1:
	clrscr();
	cout<<"Wash rooms in A block";
	//A front
	break;
case 2:
	clrscr();
	cout<<"\nWash rooms in B block";
	//B front
	break;
case 3:
	clrscr();
	cout<<"\nWash rooms in C block";
	break;
case 4:
	clrscr();
	wash_rooms();
	break;
case 5:
	clrscr();
	main_search();
	break;
default:
	clrscr();
	wrong();
	bw_r();
}
}
void GEC::gw_r()
{
cout<<"\nIn which block you are now";
//top view
cout<<"\n1.A block";
cout<<"\n2.B block";
cout<<"\n3.C block";
cout<<"\n4.back";
cout<<"\n5.Home/Exit";
int GW_R;
cout<<"\n\n\n           Enter choice :  \t";
cin>>GW_R;
switch(GW_R)
{
case 1:
	clrscr();
	cout<<"Wash rooms in A block";
	//A front
	break;
case 2:
	clrscr();
	cout<<"\nWash rooms in B block";
	//B front
	break;
case 3:
	clrscr();
	cout<<"\nWash rooms in C block";
	break;
case 4:
	clrscr();
	wash_rooms();
	break;
case 5:
	clrscr();
	main_search();
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
cout<<"\n\n\t\t\tEnter choice :  \t";
cin>>LABS;
switch(LABS)
{
case 1:
	clrscr();
	cout<<"\nBtech Drawing Lab is at :\n C-Block \n 1st Floor \nRoom no:-";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();

	break;
case 2:
	clrscr();
	cout<<"\nCAD & CAM lab is at \n C-Block \n 1st Floor \nRoom no:";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();
	break;
case 3:
	clrscr();
	cout<<"\nChemistry lab is at :\n B-Block \n Ground Floor \n Room no:";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	bfront();
	break;
case 4:
	clrscr();
	cout<<"\nConcrete Technology lab is at :";
	break;
case 5:
	clrscr();
	cout<<"\nControl Systems Lab is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 6:
	clrscr();
	cout<<"\nC.S.E Lab is at : \n C-Block \n Ground Floor \n Room no is:";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();

	break;
case 7:
	clrscr();
	cout<<"\nDiploma Drawing Lab is at";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	bfront();
	break;
case 8:
	clrscr();
	cout<<"\nElectrical Machines Lab is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 10:
	clrscr();
	cout<<"\nEctrical Measurements Lab is at ";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 11:
	clrscr();
	cout<<"\nElectronic Devices & Circuts Lab is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 12:
	clrscr();
	cout<<"\nEngineering Geology Lab is at";
	break;
case 13:
	clrscr();
	cout<<"\nEnvironmental Technologys Lab is at";
	break;
case 14:
	clrscr();
	cout<<"\nE-YANTRA Lab is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 15:
	clrscr();
	cout<<"\nFluid Mechanics & Hydrolic Machines Lab is at";
	break;
case 16:
	clrscr();
	cout<<"\nGeological Technology Lab is at";
	break;
case 17:
	clrscr();
	cout<<"\nGISS & CAD Lab is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();

	break;
case 18:
	clrscr();
	cout<<"\nIrrigation Drawing & Design Lab is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();
	break;
case 19:
	clrscr();
	cout<<"\nMMS & MOS Lab is at";
	break;
case 20:
	clrscr();
	cout<<"\nOnline Lab is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 21:
	clrscr();
	cout<<"\nPhysics Lab is at";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	bfront();
	break;
case 22:
	clrscr();
	cout<<"\nPower Electronics Lab is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 23:
	clrscr();
	cout<<"\nPower Systems Lab is at";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	bfront();
	break;
case 24:
	clrscr();
	cout<<"\nProduction Technology Lab is at";
	break;
case 25:
	clrscr();
	cout<<"\nRobtics & Mechatronics Lab is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
	break;
case 26:
	clrscr();
	cout<<"\nS & H Computers Lab is at";
	delay(4000);
	clrscr();
	top();
	topdir(40,50,90,270,310,30,90,220,2);
	delay(4000);
	clrscr();
	bfront();
	break;
case 27:
	clrscr();
	cout<<"\nServilance Lab is at";
	delay(4000);
	clrscr();
	top();
	topdir(450,120,500,270,310,30,120,150,1);
	delay(4000);
	clrscr();
	cfront();
	break;
case 28:
	clrscr();
	cout<<"\nStrength Of Material Lab is at";
	break;
case 29:
	clrscr();
	cout<<"\nTransportation Technology Lab is at";
	break;
case 30:
	clrscr();
	cout<<"\nVLSI Lab is at";
	delay(4000);
	clrscr();
	top();
	topdir(120,50,500,100,310,30,20,0,1);
	delay(4000);
	clrscr();
	afront();
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
void GEC::afront()
{
setcolor(9);
rectangle(0,150,260,350);
//a_r block
rectangle(330,150,610,350);
//connecting line
line(0,150,610,150);
//horizontal lines
line(0,200,610,200);
line(0,250,610,250);
line(0,300,610,300);
//vertical lines
//A_L
line(65,150,65,350);
line(130,150,130,350);
line(195,150,195,350);
//A_R
line(395,150,395,350);
line(460,150,460,350);
line(525,150,525,350);
//for 3d
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
//vertical lines
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
//horizontal lines
line(30,200,610,200);
line(30,250,610,250);
line(30,300,610,300);
line(30,350,610,350);
}
void GEC::cfront()
{
setcolor(9);
rectangle(30,150,600,350);
//vertical lines
line(110,150,110,350);
line(160,150,160,350);
line(210,150,210,350);
line(260,150,260,350);
line(310,150,310,350);
line(360,150,360,350);
line(410,150,410,350);
line(460,150,460,350);
line(510,150,510,350);
//horizontal lines
line(30,200,600,200);
line(30,250,600,250);
line(30,300,600,300);
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
setcolor(9);
rectangle(20,30,620,450);
//b block
rectangle(40,50,90,270);
//a block
rectangle(120,50,500,100);
// c block
rectangle(450,120,500,270);
//canteen
rectangle(120,280,310,310);
//lab1
rectangle(120,320,310,350);
//lab2
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
setcolor(9);
rectangle(70,150,580,350);
//horizontal lines
setcolor(3);
line(70,300,580,300);
line(70,200,580,200);
line(70,250,580,250);
//vertical lines
line(125,150,125,350);
line(195,150,195,350);
line(270,150,270,350);
line(345,150,345,350);
line(420,150,420,350);
line(495,150,495,350);
}
void GEC::alfront()
{
setcolor(9);
rectangle(70,150,580,350);
//horizontal lines
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
void GEC::wrong()
{
int dallx=0,dally=200,px=100,py=0;
settextstyle(8,0,3);
setcolor(RED);
for(int t=0;t<100;t++)
{
outtextxy(dallx,dally,"\"You Steped In Dall\"");
delay(45);
clrscr();
dallx=dallx+1;
}
clrscr();
setcolor(BLUE);
settextstyle(8,0,3);
for (int e=0;e<150;e++)
{
outtextxy(px,py,"\"Please enter a valid option\"");
delay(45);
clrscr();
py=py+1;
}
}
void main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
GEC g;
setbkcolor(BLUE);
g.loading();
clrscr();
g.main_search();
getch();
closegraph();
}
