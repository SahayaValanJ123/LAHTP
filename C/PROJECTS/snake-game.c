#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>


#define HEIGHT 20
#define WIDTH 20


// tail (x-axis) (y-axis)
int snakeTailX[100], snakeTailY[100];
int snakeTailLen;
int gameover , key , score;
int x,y,fruitx,fruity;

// Function to genrate the fruit withiin the boundary 
void setup(){
    gameover = 0;

    x = WIDTH /2 ;
    y= HEIGHT /2 ;

    fruitx = rand() % WIDTH ;
    fruity = rand() % HEIGHT ;

    while(fruitx == 0){
        fruitx = rand() % WIDTH ;
    }
    while (fruity == 0){
        fruity = rand() % HEIGHT ;
    }
    score = 0;
}

void draw(){
    system("cls");
    int i,j;
    for (i=0;0<WIDTH;i++)
        printf("_");
        printf("\n");
    for( i=0;i<HEIGHT;i++){
        for(j=0;j<WIDTH;j++){
            if(j == 0 || j == WIDTH){
                printf("#");
            }
            if(i == 0 || i==WIDTH){
                printf("0");
            }
            else if (i == fruity && j == fruitx){
                printf("*");
            }else{
                int prTail =0;
                for(int k =0;k<snakeTailLen;k++){
                    if(snakeTailX[k] == j && snakeTailY[k]==i){
                        printf("o");
                        prTail=1;
                    }
                }if(!prTail){
                    printf(" ");
                }
            }
            printf("\n");
        }
        for (int i=0;i<WIDTH+2;i++)
            printf("_");
            printf("\n");

            printf("score = %d",score);
            printf("\n");
            printf("Press W A S D for movemnt..!\n");
            printf("press X to quit the game .");
        
    }
}


void input(){
    if (kbhit){
        // switch (tolower());
    }
}
void logic(){
    int prevX = snakeTailX[0];
    int prevY = snakeTailY[0];
    int prev2X,prev2Y;
    snakeTailX[0] = x;
    snakeTailY[0] = y;
    for(int i=1;i<snakeTailLen;i++){
        prev2X =snakeTailX[i];
        prev2Y =snakeTailY[i];
        snakeTailX[i]=prevX;
        snakeTailY[i]=prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch(key){
    case 1:
        x--;
        break;
    case 2:
        x++;
        break;
    case 3:
        y--;
        break;
    case 4:
        y++;
        break;
    default:
        break;
    }

    if(x<0 || x>= WIDTH || y< 0 || y>= HEIGHT){
        gameover =1;
    }
    for(int i=0;i<snakeTailLen;i++){
        if(snakeTailX[i] == x && snakeTailY[i] == y){
            gameover =1;
        }
    }
    if(x == fruitx && y == fruity){
        fruitx = rand() % WIDTH;
        fruity = rand() % HEIGHT;
        while(fruitx == 0){
            fruitx = rand() %WIDTH; 
        }
        while(fruity == 0)
            fruity= rand()%HEIGHT;
        score +=10;
        snakeTailLen++;    
        
    }
}


// Function to enable/disable non-blocking mode
void setNonBlockingMode(int enable) {
    struct termios t;
    tcgetattr(STDIN_FILENO, &t);
    if (enable) {
        t.c_lflag &= ~(ICANON | ECHO); // Disable canonical mode and echo
        fcntl(STDIN_FILENO, F_SETFL, fcntl(STDIN_FILENO, F_GETFL) | O_NONBLOCK);
    } else {
        t.c_lflag |= (ICANON | ECHO); // Restore canonical mode and echo
        fcntl(STDIN_FILENO, F_SETFL, fcntl(STDIN_FILENO, F_GETFL) & ~O_NONBLOCK);
    }
    tcsetattr(STDIN_FILENO, TCSANOW, &t);
}

// kbhit implementation
int kbhit() {
    char ch;
    int bytesRead = read(STDIN_FILENO, &ch, 1);
    if (bytesRead > 0) {
        ungetc(ch, stdin); // Push character back to input stream
        return 1;          // Key is pressed
    }
    return 0;              // No key pressed
}

int main() {
    // Enable non-blocking mode
    setNonBlockingMode(1);
   
    // Restore blocking mode
    setNonBlockingMode(0);
    setup();
    while(!gameover){
        draw();
        input();
        logic();
        sleep(33);
    }
    return 0;
}
