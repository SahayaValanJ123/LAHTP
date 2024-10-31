#include<stdio.h>
void set_individual(int row, int col, int val);
void print_arr();
void set_arr_to(int num);
void set_col_to(int col, int val);
void set_row_to(int row, int val);
int no_of_hostages(int row,int col);

int arr[8][8];

int main(){
	int option = 0;
	while(1){
		printf("1. Change all values\n");
		printf("2. Change a single row.\n");
		printf("3. Change a single column.\n");
		printf("4. Change individual coordinates\n");
		printf("5. print hostages\n");
		printf("6. Exit\n Enter your choice: ");
		scanf("%d", &option);
		if(option >= 6 || option < 1){
			printf("Invalid option, try again\n");
			continue;
		} else if (option == 1) {
			int val;
			printf("Enter the value you want to set: ");
			scanf("%d", &val);
			set_arr_to(val);
			printf("Value set, printing now...\n");
			print_arr();
		} else if (option == 3) {
			int col, val;
			printf("Enter the column you want to modify: ");
			scanf("%d", &col);
			printf("Enter the value you want to set for column %d: ", col);
			scanf("%d", &val);
			set_col_to(col, val);
			printf("Value set, printing now...\n");
			print_arr();
		} else if (option == 2) {
			int row, val;
			printf("Enter the row you want to modify: ");
			scanf("%d", &row);
			printf("Enter the value you want to set for row %d: ", row);
			scanf("%d", &val);
			set_row_to(row, val);
			printf("Value set, printing now...\n");
			print_arr();
		} else if (option == 4) {
			int row; int col; int val;
			printf("Enter the row: ");
			scanf("%d", &row);
			printf("Enter the col: ");
			scanf("%d", &col);
			printf("Enter the value to set in arr[%d][%d]: ", row, col);
			scanf("%d", &val);
			set_individual(row, col, val); 
			printf("Value set, printing now...\n");
                        print_arr();
			
			int value=no_of_hostages(row,col);
			printf("hostages : %d",value);
			// printf("chopper landed in : %d %d");
			// printf("no of hostages in chopper landed area : %d");
		} else if (option == 5){
			printf("Exitting...\n");
			break;
		} else {
			continue;
		}
	}

}

void print_arr(){
	for(int i=0; i<8; i++){
                for (int j=0; j<8; j++){
                        printf("%d  ", arr[i][j]);
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

void set_individual(int row, int col, int val){
	arr[row][col] = val;
}

int no_of_hostages(int row ,int col){
	
	int sum = 0;
	// for(int i=0;i<8;i++){
		sum = sum + sizeof(arr[row][col])/4 ;
	
	return sum;
	// printf("sum is : %d",sum);
}
