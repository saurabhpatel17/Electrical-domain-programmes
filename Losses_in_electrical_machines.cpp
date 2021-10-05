
/*electrical domain program 
The following program can be used to calculate and measure the different kinds wasteful 
energy caused in an electrical machine or wasteful energy caused by external factors or 
internal factors, and energy dissipated in the system. They
include wastage due to resistance, eddy current and hysteresis as iron core
energy wastage and armature and field wastage as copper energy wastage.
METHOD-Object oriented programming (classes and objects in C++)*/

#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class machines
{
public:
unsigned ia,ra,ish,rsh,if1,rf,isf,rsf,vd,ia1;
double bm,v,p,n1,bm1,f,t,v1;
// Member functions declaration
void armature(int,int);
void shuntfield(int,int);
void field(int,int);
void seriesfield(int,int);
void brushl(int,int);
void hysteresis(double,double,double,double);
void eddycurrent(double,double,double,double);
};
// Member functions definitions
void machines::armature(int ia, int ra)
{
int l1=ia*ia*ra;
cout<<"\nArmature Cu wasteful energy caused to machine is="<<l1;
}
void machines:: shuntfield(int ish, int rsh)
{
int l2=ish*ish*rsh;
cout<<"\nShuntfield Cu wasteful energy caused to machine is="<<l2;
}
void machines::field(int if1, int rf)
{
int l3=if1*if1*rf;
cout<<"\nField Cu wasteful energy caused to machine is="<<l3;
}
void machines::seriesfield(int isf, int rsf)
{
int l4=isf*isf*rsf;
cout<<"\nSeries Cu wasteful energy caused to machine is="<<l4;
}
void machines::brushl(int vd, int ia1)
{
int l5=vd*ia1;
cout<<"Brush wasteful energy caused to machine is= "<<l5;
}
void machines::hysteresis(double bm, double v,double p,double n1)
{
double f,l6,n;
cout<<"\nEnter n value for material used\n";
cin>>n;
f=(p*n1)/120;
l6=n*(pow(bm,1.6))*f*v;
cout<<"\nHysteresis wasteful energy caused to machine is="<<l6;

}
void machines::eddycurrent(double bm1,double f,double t,double v1)
{
int Ke;
cout<<"\nEnter Ke value for material used\n";
cin>>Ke;
double l7=Ke*bm1*bm1*f*f*t*t*v1;
cout<<"Eddy current wasteful energy caused to machine is"<<l7;
}
// Main function for the program
int main()
{
int ch,ch1,ch2;
machines m;
cout<<"Enter Choice: \n 1.COPPER WASTEFUL ENERGY AND BRUSH WASTEFUL ENERGY
\n 2.CORE/IRON WASTEFUL ENERGY\n";
cin>>ch;
if(ch==1)
{
cout<<"Enter Choice:\n 0.Armature Cu wasteful energy\n 1.Shunt field Cu
wasteful energy\n 2.Field Cu wasteful energy\n"
" 3.Series field Cu wasteful energy\n 4.Brush wasteful energy \n";
cin>>ch1;
if(ch1==0)
{
cout<<"\nEnter the values for armature current and armature resistance
\n";
cin>>m.ish>>m.rsh;
m.armature(m.ish,m.rsh);
}
else if(ch1==1)
{
cout<<"\nEnter the values for shunt field current and shunt field resi
stance\n";
cin>>m.ia>>m.ra;
m.shuntfield(m.ia,m.ra);
}
else if(ch1==2)
{
cout<<"\nEnter the values for field current and field resistance\n";
cin>>m.if1>>m.rf;
m.field(m.if1,m.rf);
}
else if(ch1==3)
{
cout<<"\nEnter the values for series field current and series field re
sistance\n";
cin>>m.isf>>m.rsf;
m.seriesfield(m.isf,m.rf);
}
else
{
cout<<"\nEnter the values for voltage drop and armature current\n";
cin>>m.vd>>m.ia1;
m.brushl(m.vd,m.ia1);
}
}
  else
{
cout<<"Enter Choice: \n 0.HYSTERESIS LOSS\n 1.EDDY CURRENT LOSS \n";
cin>>ch2;
if(ch2==0)
{
cout<<"\nEnter the values for Bmax,volume,poles,speed\n";
cin>>m.bm>>m.v>>m.p>>m.n1;
m.hysteresis(m.bm,m.v,m.p,m.n1);
}
else if(ch2==1)
{
cout<<"\nEnter the values for Bmax,frequency,thickness,volume\n";
cin>>m.bm1>>m.f>>m.t>>m.v1;
m.eddycurrent(m.bm1,m.f,m.t,m.v1);
}
if (ch > 2) return 0;
}
}
