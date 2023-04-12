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
								
									patient new_patient;
									
									printf("please enter patient name:");
									scanf("%s",&new_patient.name);
									
									printf("please enter patient age:");
									scanf("%d",&new_patient.age);
									
									printf("please enter patient gender (M or F):");
									scanf("%s",&new_patient.gender);
									
									printf("please enter patient ID:");
									scanf("%d",&new_patient.id);

									new_patient.id = uniq_id (new_patient.id);
									new_patient.slot=0;
									Add_new(new_patient);

									printf("*--------------------------------*\n");
									printf("Would you like to do anthoer operation?\n");
									printf("1-yes or 2-No\nenter your choice:");
									scanf("%d",&times);
									printf("*--------------------------------*\n");
									
							}
							else if(op==2){
								
									u16 Edit_id;
									printf("please enter patient ID:");
									scanf("%d",&(Edit_id));
									printf("*--------------------------------*\n");
									Edit_info(Edit_id);
									printf("*--------------------------------*\n");
									
									printf("Would you like to do anthoer operation?\n");
									printf("1-yes or 2-No\nenter your choice:");
									scanf("%d",&times);
									
							}
								
							else if(op==3){
								
								u16 reserve;
								patient *Temp=head;
							    printf("please enter patient ID:");
								scanf("%d",&reserve);
								
								if(head!=null){
									while( 1 ){
										if(Temp==null){
											printf("Incorrect ID.\n");
											break;
										}else if(Temp->id == reserve){
											Temp->slot=reserve_slot(Temp->slot);
											break;
										}else{Temp=Temp->next_patient;} 
									}
								}else{printf("Empty records\n");}
								
								printf("*--------------------------------*\n");
								printf("Would you like to do anthoer operation?\n");
								printf("1-yes or 2-No\nenter your choice:");
								scanf("%d",&times);
								printf("*--------------------------------*\n");
									
							}	
							
							else if(op==4){
								
								
								u16 cancel_id;
								printf("please enter patient id:");
								scanf("%d",&cancel_id);
								cancel_reservtion(cancel_id);
								printf("*--------------------------------*\n");
								printf("Would you like to do anthoer operation?\n");
								printf("1-yes or 2-No\nenter your choice:");
								scanf("%d",&times);
								printf("*--------------------------------*\n");
								
							}
							else if(op==5){
								
								view_records();
								printf("Would you like to do anthoer operation?\n");
								printf("1-yes or 2-No\nenter your choice:");
								scanf("%d",&times);
								printf("*--------------------------------*\n");
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
										
								if(head!=null){
									u16 copy_id;
									printf("please enter your id:");
									scanf("%d",&copy_id);
									view_myrecord(copy_id);
								}else{printf("empty records\n");}
								printf("*--------------------------------*\n");
								printf("Would you like to do anthoer operation?\n");
								printf("1-yes or 2-No\nenter your choice:");
								scanf("%d",&times);
								printf("*--------------------------------*\n");
										
							}else if(op==2){
								view_reserved_slots();
								printf("Would you like to do anthoer operation?\n");
								printf("1-yes or 2-No\nenter your choice:");
								scanf("%d",&times);
								printf("*--------------------------------*\n");
									
							}else{
								printf("wrong choice.try again\n");
								printf("*--------------------------------*\n");
							}
					}
	}
	}
}
