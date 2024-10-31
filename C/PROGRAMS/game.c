#include <stdio.h>

void print_arr();
void set_arr_to(int num);
void set_col_to(int col, int val);
void set_row_to(int row, int val);
int count();

int arr[8][8];





int main(){
    int n,i,j,val=0,val2=1,cout;
    printf("Each house in the matrix has a terrorist ..\n");
    printf("==========================\n");
    
    set_arr_to(val2);print_arr();

    printf("\nEnter how many choppers to land : ");
    scanf("%d",&n);
    for (int k=0;k<n;k++){
        printf("\nEnter the coordinates to land the chopper : ");
        scanf("%d %d",&i,&j);
        set_row_to(i, val);
        set_col_to( j,  val);
        print_arr();
        cout = count();
        printf("%d Hostages were rescued ...\n",cout);


    }
    

}

int count(){
    int i=8,j=8,c=0;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(arr[i][j] == 0){
                c=c+1;
            }
        }
    }
    return c;
}



void print_arr(){
	for(int i=0; i<8; i++){
                for (int j=0; j<8; j++){
                        printf("%d  ",arr[i][j]);
                }
                printf("\n");
        }
}

void set_arr_to(int num){
	for(int i=0; i<8; i++){
                for(int j=0; j<8; j++){
                        arr[i][j] = num;
                }
        }
}

void set_col_to(int col, int val){
	for(int i=0; i<8; i++){
		arr[i][col] = val;
	}
}

void set_row_to(int row, int val){
	for(int i=0; i<8; i++){
                arr[row][i] = val;
        }
}

