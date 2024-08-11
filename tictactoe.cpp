#include<iostream>
using namespace std;
int count=0;
void drawgrid(char*a,char*b,char*c,char*d,char*e,char*f,char*g,char*h,char*i){
  cout<<" "<<*a<<" |"<<" "<<*b<<" |"<<" "<<*c<<" \n";
  cout<<" "<<*d<<" |"<<" "<<*e<<" |"<<" "<<*f<<" \n";
  cout<<" "<<*g<<" |"<<" "<<*h<<" |"<<" "<<*i<<" \n";
}
int Status(char*a,char*b,char*c,char*d,char*e,char*f,char*g,char*h,char*i){
    if(*a==*b&&*b==*c){return 1;}
    else if(*d==*e&&*e==*f){return 1;}
    else if(*g==*h&&*h==*i){return 1;}
    else if(*a==*d&&*d==*g){return 1;}
    else if(*b==*e&&*e==*h){ return 1;}
    else if(*c==*f&&*f==*i){return 1;}
    else if(*a==*e&&*e==*i){return 1;}
    else if(*c==*e&&*e==*g){return 1;}
    if(count==9)return 0;
    else{return -1;}
}

int main(){
    int statu;
    cout<<"starting in 1\n";
    int move;
    int player=1;
    char a='1';
    char b='2';
    char c='3';
    char d='4';
    char e='5';
    char f='6';
    char g='7';
    char h='8';
    char i='9';
    char* p1=&a;
    char* p2=&b;
    char* p3=&c;
    char* p4=&d;
    char* p5=&e;
    char* p6=&f;
    char* p7=&g;
    char* p8=&h;
    char* p9=&i;
    char mark='#';
    cout<<"mark of plr 1-#"<<"\n"<<"mark of plr2-@\n\n";
    int stat=-1;
    drawgrid(p1,p2,p3,p4,p5,p6,p7,p8,p9);
    do{
        if(player%2!=0){
            player=1;
        }
        else{
            player=2;
        }

        if(player==1){
            mark='#';
        }
        else{
            mark='@';
        }

        cout<<"player "<<player<<" choose :";
        cin>>move;
        cout<<"\n";

        if(move==1){*p1=mark;}
        else if(move==2){*p2=mark;}
        else if(move==3){*p3=mark;}
        else if(move==4){*p4=mark;}
        else if(move==4){ *p4=mark;}
        else if(move==5){*p5=mark;}
        else if(move==6){*p6=mark;}
        else if(move==7){*p7=mark;}
        else if(move==8){*p8=mark;}
        else if(move==9){*p9=mark;}
        else{
            printf("enter valid choice\n");
            player--;
        }
        drawgrid(p1,p2,p3,p4,p5,p6,p7,p8,p9);
        count++;
        stat=Status(p1,p2,p3,p4,p5,p6,p7,p8,p9);
        player++;
    }
    while(stat==-1);

    statu=Status(p1,p2,p3,p4,p5,p6,p7,p8,p9);
    if(statu==1){
        cout<<" arey player "<<player<<" pakkaki velli adukora pumpka!";
    }
    else{
        cout<<"draw\n";
    }
    return 0;
}
