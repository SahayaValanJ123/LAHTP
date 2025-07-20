;program of mov instruction
_start: ;where the entry point of the program starts
mov AH,0x15 ;moving hex 15 into AH
mov AL,15 
mov BH, 0b1010 ; b means binary so 1010 in hex is a..
mov AX , 65535 ; change the AH and AL values . 
mov AH, BH  ;moving BH data into Ah register