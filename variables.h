#ifndef VARIABLES_H
#define VARIABLES_H

#define null 0
#pragma pack (1)

#define slot_1 1
#define slot_2 2
#define slot_3 3
#define slot_4 4
#define slot_5 5

u8 s_1;
u8 slots[5];

typedef struct new_patient{
	u8 name[10];
	u8 age;
	u8 gender[8];
	u8 slot;
	u16 id;
	struct new_patient *next_patient;
}patient;

patient *head=null;




#endif