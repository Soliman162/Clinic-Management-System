#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "std_types.h"
#include "variables.h"
#include "functions.c"

void main(void){
	while(1){
		printf("*------------------------------------*\n");
		printf("clinic mangment system:-\n");
		printf("*------------------------------------*\n");
		u8 mode;
		u8 times=1 ,op;
		u16 password;
		//init slot value
		for(s_1=0;s_1<=4;s_1++){slots[s_1]=(s_1+1);}
		
		printf("Are you:  1-user or  2-admin ?\n");
		printf("please enter your mode:");
		scanf("%d",&mode);

	    if(mode==2){
		
					printf("please enter your password:");
					scanf("%d",&password);
					
					while(password!=1234){
						printf("wrong password.please try again\n");
						printf("please enter your password:");
						scanf("%d",&password);
						times++;
						if(times==3 && password!=1234){
							printf("wrong password.system is closed");
							break;
						}
						if(password==1234){
							times=1;
							break;
						}
					}
					
					if(password==1234){
						
						while(times==1){
							printf("*---------------------------------------------*\n");
							printf("which of the following would you like to do?\n");
							printf("1-Add new patient record.\n");
							printf("2-Edit patient record.\n");
							printf("3-Reserve a slot with the doctor.\n");
							printf("4-Cancel reservation.\n");
							printf("5-display records.\n");
							
							
							printf("\nplease enter the number of operation:");
							scanf("%d",&op);
							printf("*--------------------------------*\n");
							
							if(op==1){
								
									
							}
							else if(op==2){
								
					
									
							}
								
							else if(op==3){
								
	
							}	
							
							else if(op==4){
								
								
								
							}
							else if(op==5){
								
		
							}
							else{
									printf("wrong choice.try again\n");
									printf("*--------------------------------*\n");
							}
							
						}
					}	
	}
	else if(mode==1){
		
					times=1;
					while(times==1){
							printf("which of the following would you like to do?\n");
							printf("1- View my record.\n");
							printf("2- View today\'s reservations.\n");

							printf("\nplease enter the number of operation:");
							scanf("%d",&op);
					
							printf("*--------------------------------*\n");
							if(op==1){
										
								
										
							}else if(op==2){
								
									
							}else{
								printf("wrong choice.try again\n");
								printf("*--------------------------------*\n");
							}
					}
	}
	}
}
