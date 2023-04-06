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
				while(copy_id==ID){
			
				}
				temp=temp->next_patient; 
			}
		}
		return new_id;
}

//add new patinent
void Add_new(patient type){
	
	patient *x=(patient *)malloc(sizeof(patient));
	head=x;
}

//view patient's info
void view_records(void){
	u8 i=0;
	if(head!=null){
		patient *temp=head;
		while(temp!=null){

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

					
			}else{temp=temp->next_patient;}
		}
		if(temp==null){printf("incorrect ID\n");}
	}else{printf("empty records\n");}
}

//reserve slot
u8 reserve_slot( u8 Copy_slot ){
	
		if( (Copy_slot)  ){
		}else if( (Copy_slot==0) ){

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
				
			}else{
				temp=temp->next_patient;
				i++;
			}
		}
		if(temp==null){printf("incorrect id\n");}
}
