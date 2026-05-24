#ifndef ASSIGN_HARDCODE_RICASSISTANCE_INDICATION_H
#define ASSIGN_HARDCODE_RICASSISTANCE_INDICATION_H
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

xnap_return_et assign_hardcode_value_RICassistanceIndication(e2ap_RICassistanceIndication_t* p_RICassistanceIndication)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICassistanceIndication->RICassistanceIndication-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICassistanceIndication->RICassistanceIndication-IEs->RICrequestID->ricRequestorID
    	p_RICassistanceIndication->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICassistanceIndication->RICassistanceIndication-IEs->RICrequestID->ricInstanceID
    	p_RICassistanceIndication->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICassistanceIndication->RICassistanceIndication-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RICassistanceSN - mandatory=======*/
    {
    	//hc-p_RICassistanceIndication->id_RICassistanceSN -idx8- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - RICassistanceIndication->RICassistanceIndication-IEs->RICassistanceSN 
    	p_RICassistanceIndication->id_RICassistanceSN = 32767;// change integer here
    	//end of hc-p_RICassistanceIndication->id_RICassistanceSN -idx8- alias primitive
    }
    #endif/*======== End Hardcode IE -idx7: id_RICassistanceSN - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_RICassistanceHeader - mandatory=======*/
    {
    	//hc-p_RICassistanceIndication->id_RICassistanceHeader -idx10- alias primitive - pid = 9 - OCTET STRING - RICassistanceIndication->RICassistanceIndication-IEs->RICassistanceHeader
    	OSOCTET temp_buff_for_p_RICassistanceIndication->id_RICassistanceHeader[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICassistanceIndication->id_RICassistanceHeader.numocts = sizeof(temp_buff_for_p_RICassistanceIndication->id_RICassistanceHeader);
    	p_RICassistanceIndication->id_RICassistanceHeader.data = xnap_mem_get(sizeof(temp_buff_for_p_RICassistanceIndication->id_RICassistanceHeader));
    	XNAP_MEMCPY(p_RICassistanceIndication->id_RICassistanceHeader.data, temp_buff_for_p_RICassistanceIndication->id_RICassistanceHeader, sizeof(temp_buff_for_p_RICassistanceIndication->id_RICassistanceHeader)); // change octetstring data here
    	//end of hc-p_RICassistanceIndication->id_RICassistanceHeader -idx10- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx9: id_RICassistanceHeader - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx11: id_RICassistanceOutcome - mandatory=======*/
    {
    	//hc-p_RICassistanceIndication->id_RICassistanceOutcome -idx12- alias primitive - pid = 9 - OCTET STRING - RICassistanceIndication->RICassistanceIndication-IEs->RICassistanceOutcome
    	OSOCTET temp_buff_for_p_RICassistanceIndication->id_RICassistanceOutcome[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICassistanceIndication->id_RICassistanceOutcome.numocts = sizeof(temp_buff_for_p_RICassistanceIndication->id_RICassistanceOutcome);
    	p_RICassistanceIndication->id_RICassistanceOutcome.data = xnap_mem_get(sizeof(temp_buff_for_p_RICassistanceIndication->id_RICassistanceOutcome));
    	XNAP_MEMCPY(p_RICassistanceIndication->id_RICassistanceOutcome.data, temp_buff_for_p_RICassistanceIndication->id_RICassistanceOutcome, sizeof(temp_buff_for_p_RICassistanceIndication->id_RICassistanceOutcome)); // change octetstring data here
    	//end of hc-p_RICassistanceIndication->id_RICassistanceOutcome -idx12- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx11: id_RICassistanceOutcome - mandatory ========*/
    return XNAP_SUCCESS;
}
/*
RICassistanceIndication : (RICassistanceIndication) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICassistanceIndication
    protocolIEs : (RICassistanceIndication-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICassistanceIndication->RICassistanceIndication-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICassistanceIndication->RICassistanceIndication-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICassistanceIndication->RICassistanceIndication-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICassistanceIndication->RICassistanceIndication-IEs->RICrequestID->ricInstanceID
        RICassistanceSN : (RICassistanceSN) 					---- (PRIMITIVE) ---- [M] ----PATH: RICassistanceIndication->RICassistanceIndication-IEs->RICassistanceSN
        RICassistanceHeader : (RICassistanceHeader) 					---- (PRIMITIVE) ---- [M] ----PATH: RICassistanceIndication->RICassistanceIndication-IEs->RICassistanceHeader
        RICassistanceOutcome : (RICassistanceOutcome) 					---- (PRIMITIVE) ---- [M] ----PATH: RICassistanceIndication->RICassistanceIndication-IEs->RICassistanceOutcome
*/
#endif // ASSIGN_HARDCODE_RICASSISTANCE_INDICATION_H

