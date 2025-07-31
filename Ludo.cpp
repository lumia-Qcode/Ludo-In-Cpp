#include<iostream>
#include<time.h>
using namespace std;
int main() {
   srand(time(0));
   int p1=-6,p2=-6,p3=-6,p4=-6,rflag=0,bflag=0,gflag=0,yflag=0,rTurn=0,bTurn=0,gTurn=0,yTurn=0;
   while (p1 < 57 && p2 < 57 && p3 < 57 && p4<57) {
       rTurn=(rand()%6)+1;
       if(rTurn==6)
       rflag=1;
       if(rflag==1){
           p1=p1+rTurn;
           while (rTurn==6){
               rTurn=(rand()%6)+1;
               p1=p1+rTurn;
           }
           if(p1>57)
            p1=p1-rTurn;
       }

       bTurn=(rand()%6)+1;
       if(bTurn==6)
       bflag=1;
       if(bflag==1) {
     
        	p2=p2+bTurn;
       		while(bTurn==6) {
           		 bTurn=(rand()%6)+1;
            		 p2=p2+bTurn;
      		  }
       		 if(p2>57)
        		p2=p2-bTurn;
	   }

        gTurn=(rand()%6)+1;
        if(gTurn==6)
         gflag=1;
        if(gflag==1){
			p3=p3+gTurn;
			while(gTurn==6)
			{
				gTurn=(rand()%6)+1;
				p3=p3+gTurn;
			}
			if(p3>57)
			p3=p3-gTurn;
        }

        yTurn=(rand()%6)+1;
        if( yTurn==6)
        yflag=1;
        if(yflag==1)  {
			p4=p4+yTurn;
			while(yTurn==6){
				yTurn=(rand()%6)+1;
				p4=p4+yTurn;
			}
			if(p4>57)
			p4=p4-yTurn;
		}
   }

        if( p1==57)
			cout<<"p1 is winner!";


        else if(p2==57)
			cout<<"p2 is winner!";
        else if(p3==57)
			cout<<"p3 is winner!";
        else
			cout<<"p4 is winner!";

	cout << endl;
        
	system("pause");
        return 0 ;
}
