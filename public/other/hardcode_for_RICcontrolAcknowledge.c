#ifndef ASSIGN_HARDCODE_RICCONTROL_ACKNOWLEDGE_H
#define ASSIGN_HARDCODE_RICCONTROL_ACKNOWLEDGE_H
#include<stdio.h>
#include"output_main.h"
#include "MAIN_STRUCT.h"


/*
Có thể có lỗi ở BitString
với BitString, hardcode đang làm tròn theo Byte rồi dùng MEMCPY
tìm -> change enum value here -> để chỉnh giá trị hardcode cho ENUM
tìm -> change printable string here
tìm -> change octetstring data here
tìm -> change bitstring data here
tìm -> change integer here

các cặp idx đánh dấu start-end của từng phần hardcode
Nếu có nhiều CHOICE rootc đánh dấu 1 tập chung CHOICE
Nếu có nhiều SEQUENCE roots đánh dấu 1 tập chung SEQUENCE

trong cùng 1 tập rootc (CHOICE) thì chỉ mở 1 nhánh #if 1, các nhánh còn lại #if 0

trong 1 List set count lên và mở rộng mảng cho xxx_Item[idx] nếu cần thêm
*/

xnap_return_et assign_hardcode_value_RICcontrolAcknowledge(e2ap_RICcontrolAcknowledge_t* p_RICcontrolAcknowledge)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICcontrolAcknowledge->RICcontrolAcknowledge-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICcontrolAcknowledge->RICcontrolAcknowledge-IEs->RICrequestID->ricRequestorID
    	p_RICcontrolAcknowledge->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICcontrolAcknowledge->RICcontrolAcknowledge-IEs->RICrequestID->ricInstanceID
    	p_RICcontrolAcknowledge->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICcontrolAcknowledge->RICcontrolAcknowledge-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RANfunctionID - mandatory=======*/
    {
    	//hc-p_RICcontrolAcknowledge->id_RANfunctionID -idx8- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICcontrolAcknowledge->RICcontrolAcknowledge-IEs->RANfunctionID 
    	p_RICcontrolAcknowledge->id_RANfunctionID = 2047;// change integer here
    	//end of hc-p_RICcontrolAcknowledge->id_RANfunctionID -idx8- alias primitive
    }
    #endif/*======== End Hardcode IE -idx7: id_RANfunctionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_RICcallProcessID - optional=======*/
    {
    	 p_RICcontrolAcknowledge->bitmask |= E2AP_RICCONTROL_ACKNOWLEDGE_e2ap_ID_RICCALL_PROCESS_ID_PRESENT;
    	//hc-p_RICcontrolAcknowledge->id_RICcallProcessID -idx10- alias primitive - pid = 9 - OCTET STRING - RICcontrolAcknowledge->RICcontrolAcknowledge-IEs->RICcallProcessID
    	OSOCTET temp_buff_for_p_RICcontrolAcknowledge->id_RICcallProcessID[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICcontrolAcknowledge->id_RICcallProcessID.numocts = sizeof(temp_buff_for_p_RICcontrolAcknowledge->id_RICcallProcessID);
    	p_RICcontrolAcknowledge->id_RICcallProcessID.data = xnap_mem_get(sizeof(temp_buff_for_p_RICcontrolAcknowledge->id_RICcallProcessID));
    	XNAP_MEMCPY(p_RICcontrolAcknowledge->id_RICcallProcessID.data, temp_buff_for_p_RICcontrolAcknowledge->id_RICcallProcessID, sizeof(temp_buff_for_p_RICcontrolAcknowledge->id_RICcallProcessID)); // change octetstring data here
    	//end of hc-p_RICcontrolAcknowledge->id_RICcallProcessID -idx10- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx9: id_RICcallProcessID - optional ========*/

    #if 1/*======== Start Hardcode IE -idx11: id_RICcontrolOutcome - optional=======*/
    {
    	 p_RICcontrolAcknowledge->bitmask |= E2AP_RICCONTROL_ACKNOWLEDGE_e2ap_ID_RICCONTROL_OUTCOME_PRESENT;
    	//hc-p_RICcontrolAcknowledge->id_RICcontrolOutcome -idx12- alias primitive - pid = 9 - OCTET STRING - RICcontrolAcknowledge->RICcontrolAcknowledge-IEs->RICcontrolOutcome
    	OSOCTET temp_buff_for_p_RICcontrolAcknowledge->id_RICcontrolOutcome[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICcontrolAcknowledge->id_RICcontrolOutcome.numocts = sizeof(temp_buff_for_p_RICcontrolAcknowledge->id_RICcontrolOutcome);
    	p_RICcontrolAcknowledge->id_RICcontrolOutcome.data = xnap_mem_get(sizeof(temp_buff_for_p_RICcontrolAcknowledge->id_RICcontrolOutcome));
    	XNAP_MEMCPY(p_RICcontrolAcknowledge->id_RICcontrolOutcome.data, temp_buff_for_p_RICcontrolAcknowledge->id_RICcontrolOutcome, sizeof(temp_buff_for_p_RICcontrolAcknowledge->id_RICcontrolOutcome)); // change octetstring data here
    	//end of hc-p_RICcontrolAcknowledge->id_RICcontrolOutcome -idx12- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx11: id_RICcontrolOutcome - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICcontrolAcknowledge : (RICcontrolAcknowledge) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICcontrolAcknowledge
    protocolIEs : (RICcontrolAcknowledge-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICcontrolAcknowledge->RICcontrolAcknowledge-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICcontrolAcknowledge->RICcontrolAcknowledge-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICcontrolAcknowledge->RICcontrolAcknowledge-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICcontrolAcknowledge->RICcontrolAcknowledge-IEs->RICrequestID->ricInstanceID
        RANfunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICcontrolAcknowledge->RICcontrolAcknowledge-IEs->RANfunctionID
        RICcallProcessID : (RICcallProcessID) 					---- (PRIMITIVE) ---- [O] ----PATH: RICcontrolAcknowledge->RICcontrolAcknowledge-IEs->RICcallProcessID
        RICcontrolOutcome : (RICcontrolOutcome) 					---- (PRIMITIVE) ---- [O] ----PATH: RICcontrolAcknowledge->RICcontrolAcknowledge-IEs->RICcontrolOutcome
*/
#endif // ASSIGN_HARDCODE_RICCONTROL_ACKNOWLEDGE_H

