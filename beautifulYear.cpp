#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,a,b,c,d,n=2;
    int flag=0;
    scanf("%d",&x);
    while(1){
        int y = x+1;
        //y+=1;
        a=y%10;
        y/=10;
        b=y%10;
        y/=10;
        c=y%10;
        d=y/10;
       // cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        //y/=10;
        x++;
        if(a!=b && b!=c && c!=d && a!=c && a!=d && b!=d){

             flag=1;
             break;

        }

        //++n--;

    }
    if(flag==1)
       printf("%d",x);
    return 0;
}
