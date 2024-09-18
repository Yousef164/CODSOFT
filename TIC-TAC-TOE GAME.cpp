#include <iostream>
#include <string>
#define ll long long
#define el '\n'
using namespace std;
class game{
    char t[3][3];
public:
    game(){
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                t[i][j]='?';
    }
    void inp(int a,int b,char c){
        t[a-1][b-1]=c;
    }
    void show(){
        for(int i=0;i<3;i++){
            if(i>0)cout<<el;
            for(int j=0;j<3;j++)
                cout<<t[i][j]<<' ';
        }
        cout<<"\nongoing.\n";
    }
    bool right(){
        for(int i=0;i<3;i++){
            if(t[i][0]!='?'&&t[i][0]==t[i][1]&&t[i][1]==t[i][2])
                return true;
        }
        for(int j=0;j<3;j++){
            if(t[0][j]!='?'&&t[0][j]==t[1][j]&&t[1][j]==t[2][j])
                return true;
        }
        if(t[0][0]!='?'&&t[0][0]==t[1][1]&&t[1][1]==t[2][2])
            return true;
        if(t[0][2]!='?'&&t[0][2]==t[1][1]&&t[1][1]==t[2][0])
            return true;
        return false;
    }
};
int main(){
    bool f=true;
    while (true){
        game games;
        char v='X';
        int num=0;
        cout<<"\t\tTIC-TAC-TOE GAME.\n";
        while(true){
            if(num==9){
                cout<<"Draw.\n";
                cout<<"Do you want to play again.\n"
                <<"Yes\tor\tNo\n";
                string tr;cin>>tr;
                if(tr=="Yes")break;
                else {f=false;break;}
            }
            cout<<"Player "<<v<<":\n";
            int a,b;
            cin>>a>>b;
            if(a>3||b>3){
                cout<<"Try again.\n";
                continue;
            }
            games.inp(a,b,v);
            games.show();
            if(games.right()){
                cout << "Player "<<v<<": win.\n";
                cout << "Do you want to play again.\n"
                <<"Yes\tor\tNo\n";
                string tr;
                cin >> tr;
                if(tr == "Yes") break;
                else {f=false; break;}
            }
            v=(v=='X'?'O':'X');
            num++;
        }
        if(!f)break;
    }
}
