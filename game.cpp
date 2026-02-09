#include<iostream>
using namespace std;
int main(){
    int u1,u2,n;
    string user1,user2;
    cout<<"-----------------Rock Paper Scissor game---------------------"<<endl;
    cout<<"Rules:"<<endl;
    cout<<"1=rock , 2=paper , 3=scissor"<<endl;
    cout<<"enter the first user name:";
    cin>>user1;
    cout<<"enter the second user name:";
    cin>>user2;
    cout<<"tell the number of round do you want to play?";
    cin>>n;
    for(int i=1;i<=n;i++){
    cout<<"enter the user1 choice:";
    cin>>u1;
    cout<<"enter the user2 choice:";
    cin>>u2;
    if(u1==u2){
        cout<<"match is draw";
    }
    else if((u1==1&&u2==3)||(u1==3&&u2==2)||(u1==2&&u2==1)){
        cout<<user1<<" wins"<<endl;
    }
    else{
        cout<<user2<<" wins"<<endl;
    }
    }
    return 0;
}
