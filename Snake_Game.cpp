#include<iostream>
using namespace std;

const int width = 18;
const int height = 16;
int x,y,fruitx, fruitY, score;//x,y is the heidht and weidht of the snake head.
enum eDirection {STOP =0, LEFT, RIGHT, UP, DOWN};
eDirection dir;
bool gameover;

void setup(){//The setup of the program when it will open in front of me.
    gameover = false;
    dir = STOP;
    x = width/2;
    y = height/2;
    fruitx = rand() % width; //rand() will create a random number from 0 to width-1.
    fruitY = rand() % height;
    score = 0;
}

void Draw(){
    system("cls");//this will clear your console window.
    for(int i =0; i < width; i++){
        cout<<"#";
    }
    cout<<endl;
    for(int i = 0; i < height; i++){
        for(int j = 0; j < height; j++ ){
            if(j == 0)
                cout<<"#";
            
                cout<<" ";
            
            if( j == width-1)
                cout<<"#";
        }
        cout<<endl;
    }
    for(int i =0; i < width; i++){
        cout<<"#";
    }

}

void Input(){

}

void Logic(){

}

int main(){
    setup();
    while(!gameover){
        Draw();
        Input();
        Logic();

    }



    return 0;
}