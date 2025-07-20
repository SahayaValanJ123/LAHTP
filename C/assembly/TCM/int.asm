;interrupt program 
start:
mov AH , 0x10 ; to print single character
mov AL , 0x48 ; with 'H' in ascii for int 0x10
mov CX , 0x1 ;with 1 to specify no.of chars printed
int 0x10 ; interrupt to print single char out of AL register