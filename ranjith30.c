#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
    clrscr();
    int ih,im,fh,fm,e,a,b;
    cout<<"Enter initial hour:";
    cin>>ih;
    cout<<"Enter initial min:";
    cin>>im;
    cout<<"Enter final hours:";
    cin>>fh;
    cout<<"Enter final min:";
    cin>>fm;
    a=ih*60+im;
    b=fh*60+fm;
    e=abs(((780+a)/(781+b))*720-abs(a-b));
    cout<<"the elasped time is "<<e/60<<":"<<e%60;
    getch();
}
