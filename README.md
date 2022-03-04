# Clinic-Management-System
Clinic Management System using C-programing language and Data Structure

	# first mode is admin mode:
		
		In this mode user can: 
                                   1-add new patient record
				       2-Edit patient record
				       3-Reserve a slot with the doctor
				       4-Cancel reservation
				       5-display records

	# second mode is user mode:
  
		In this mode user can: 
                                   1-View his record 
				       2-View today's reservations





In admin mode the system ask for password,The defult password is 1234. the sysytem allows 3 trails for the password entry,if the password is wrong for 3 times the system will close if not the system will 
provide the following features.

#  To add a new patient 
   The admin shall enter these basic information: name, age, gender and ID.
   The ID shall be unique for the user, if the ID which has been entered already exists, the system shall reject the ID and will keep giving you another tries.

#  Edit patient record
   By entering patient ID the system shall checks if the ID exists, the system shall allow the user to edit the
   patient information. If not, the system shall display incorrect ID message.

# Reserve a slot with the doctor
  By default there are 5 available slots, 2pm to 2:30pm, 2:30pm to 3pm, 3pm to 3:30pm, 4pm to 4:30pm
	and 4:30pm to 5pm. Upon opening of this window, the system shall display the available slots. 
	The admin shall enter the patient ID and the desired slot. The reserved slot shall not appear again in the next patient reservation.

# Cancel reservation
  The admin can cancel the desierd reservation by entering the patient ID. This reservation shall be shown again in the available slots window.

# display records
  Display all patients info.
  
# The system allows the following features:
  View patient record, By entering the patient ID, the system shall show the basic information for the patient.
  View today's reservations, In this view, the system shall print all reservations with the patient ID attached to each reservation slot.
  
  Note:- In User mode There is no password. 
