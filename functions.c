#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "std_types.h"
#include "variables.h"
//makeing uniq id for every patient
u16 uniq_id (u16 ID){
		u16 new_id=ID;
	    if(head!=null){
			patient *temp=head;
			u16 copy_id;
			while(temp!=null){
				copy_id =temp->id;
				while(copy_id==ID){
					  printf("reapeated id.try again\n");
					  printf("please enter patient ID:");
					  scanf("%d",&new_id);
					  copy_id=new_id;
				}
				temp=temp->next_patient; 
			}
		}
		return new_id;
}

//add new patinent
void Add_new(patient type){
	
	patient *x=(patient *)malloc(sizeof(patient));
	strcpy(x->name,type.name);
	x->age=type.age;
	strcpy(x->gender,type.gender);
	x->id=type.id;
	x->slot=type.slot;
	x->next_patient=head;
	head=x;
}

//view patient's info
void view_records(void){
	u8 i=0;
	if(head!=null){
		patient *temp=head;
		while(temp!=null){
			printf("*--------------------------------*\n");
			printf("patient number %d:-\n",i+1);
			printf("name:%s\n",temp->name);
			printf("age:%d\n",temp->age);
			printf("gender:%s\n",temp->gender);
			printf("id:%d\n",temp->id);
			if(temp->slot){printf("reserved slot is:%d\n",temp->slot);}
			else{printf("the patient did not make any reservation\n");}
			printf("*--------------------------------*\n");
			temp=temp->next_patient;
			i++;
		}
	}else{printf("empty records\n");}
}

//Edit patient info
void Edit_info(u16 Edit_id){
	if(head!=null){
		patient *temp=head;
		while(temp!=null){
			if((temp->id)==Edit_id){
					printf("*--------------------------------*\n");
					printf("please enter patient new name:");
					scanf("%s",&temp->name);
					
					printf("please enter patient new age:");
					scanf("%d",&temp->age);
					
					printf("please enter patient new gender (M or F):");
					scanf("%s",&temp->gender);
					printf("*--------------------------------*\n");
					break;
					
			}else{temp=temp->next_patient;}
		}
		if(temp==null){printf("incorrect ID\n");}
	}else{printf("empty records\n");}
}

//reserve slot
u8 reserve_slot( u8 Copy_slot ){
	
		if( (Copy_slot)  ){
			printf("patient had reserved slot number :%d \n",Copy_slot);
		}else if( (Copy_slot==0) ){
			printf("The available slots are:-\n");
			printf("*--------------------------------*\n");
						
			if(slots[0]==slot_1){printf("1- from 2pm to 2:30pm\n");}
			if(slots[1]==slot_2){printf("2- from 2:30pm to 3pm\n");}
			if(slots[2]==slot_3){printf("3- from 3pm to 3:30pm\n");}
			if(slots[3]==slot_4){printf("4- from 4pm to 4:30pm\n");}
			if(slots[4]==slot_5){printf("5- from 4:30pm to 5pm\n");}
						
			printf("*--------------------------------*\n");
			printf("enter the number of your desired slot:");
			scanf("%d",&Copy_slot);
			printf("*--------------------------------*\n");
		}
		
		for(s_1=0;s_1 <=4;s_1++){if(slots[s_1]==(Copy_slot)){slots[s_1]=0;}}
		
		return Copy_slot;
}

//view today's reservetions
void view_reserved_slots(void){
	u8 flag=0;
	if(head!=null){
			patient *temp=head;
			while(temp!= null){
				
				if(temp->slot==slot_1){
					printf("1- from 2pm to 2:30pm is reserved for id:%d\n",temp->id);
					flag++;
				}
				if(temp->slot==slot_2){
					printf("2- from 2:30pm to 3pm is reserved for id:%d\n",temp->id);
					flag++;
				}
				if(temp->slot==slot_3){
					printf("3- from 3pm to 3:30pm is reserved for id:%d\n",temp->id);
					flag++;
				}
				if(temp->slot==slot_4){
					printf("4- from 4pm to 4:30pm is reserved for id:%d\n",temp->id);
					flag++;
				}
				if(temp->slot==slot_5){
					printf("5- from 4:30pm to 5pm is reserved for id:%d\n",temp->id);
					flag++;
				}
				temp=temp->next_patient;
			}
			if( flag==0 ){printf("NO reserved Slot.All slots are available\n");} 
	}else{printf("empty records\n");}
}

//cancel reserved slot
void cancel_reservtion(u16 Reserved_id){
	
	if(head!=null){
		patient *temp=head;
		do{
			if(temp->id==Reserved_id){
				for(s_1=0;s_1 <=4;s_1++){if((slots[s_1]==0) && (temp->slot)){slots[s_1]=(s_1+1);}}
				temp->slot=0;
				break;
			}
			temp=temp->next_patient;
		}while(temp!=null);
		if(temp==null){printf("incorrect ID\n");}
	}
	else{printf("empty records\n");}	
}

//view patient record
void view_myrecord(u16 copy_id){
	u8 i=0;

		patient *temp=head;
		while(temp!=null){
			if(temp->id==copy_id){
				printf("*----------------------------------------------------*\n");
				printf("patient number %d:-\n",i+1);
				printf("name:%s\n",temp->name);
				printf("age:%d\n",temp->age);
				printf("gender:%s\n",temp->gender);
				printf("id:%d\n",temp->id);
				if(temp->slot){printf("reserved slot is:%d",temp->slot);}
				else{printf("the patient did not make any reservation\n");}
				printf("*------------------------------------------------------*\n");
				break;
			}else{
				temp=temp->next_patient;
				i++;
			}
		}
		if(temp==null){printf("incorrect id\n");}
}
