#ifndef ASSIGN_HARDCODE_RICINDICATION_H
#define ASSIGN_HARDCODE_RICINDICATION_H
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

xnap_return_et assign_hardcode_value_RICindication(e2ap_RICindication_t* p_RICindication)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICindication->RICindication-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICindication->RICindication-IEs->RICrequestID->ricRequestorID
    	p_RICindication->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICindication->RICindication-IEs->RICrequestID->ricInstanceID
    	p_RICindication->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICindication->RICindication-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RANfunctionID - mandatory=======*/
    {
    	//hc-p_RICindication->id_RANfunctionID -idx8- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICindication->RICindication-IEs->RANfunctionID 
    	p_RICindication->id_RANfunctionID = 2047;// change integer here
    	//end of hc-p_RICindication->id_RANfunctionID -idx8- alias primitive
    }
    #endif/*======== End Hardcode IE -idx7: id_RANfunctionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_RICactionID - mandatory=======*/
    {
    	//hc-p_RICindication->id_RICactionID -idx10- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICindication->RICindication-IEs->RICactionID 
    	p_RICindication->id_RICactionID = 127;// change integer here
    	//end of hc-p_RICindication->id_RICactionID -idx10- alias primitive
    }
    #endif/*======== End Hardcode IE -idx9: id_RICactionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx11: id_RICindicationSN - optional=======*/
    {
    	 p_RICindication->bitmask |= E2AP_RICINDICATION_e2ap_ID_RICINDICATION_SN_PRESENT;
    	//hc-p_RICindication->id_RICindicationSN -idx12- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - RICindication->RICindication-IEs->RICindicationSN 
    	p_RICindication->id_RICindicationSN = 32767;// change integer here
    	//end of hc-p_RICindication->id_RICindicationSN -idx12- alias primitive
    }
    #endif/*======== End Hardcode IE -idx11: id_RICindicationSN - optional ========*/

    #if 1/*======== Start Hardcode IE -idx13: id_RICindicationType - mandatory=======*/
    {
    	//hc-RICindicationType -idx14 - RICindication->RICindication-IEs->RICindicationType
    	p_RICindication->id_RICindicationType = E2AP_RICINDICATION_TYPE_REPORT; // change enum value here
    	//end of hc-RICindicationType -idx14- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx13: id_RICindicationType - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx15: id_RICindicationHeader - mandatory=======*/
    {
    	//hc-p_RICindication->id_RICindicationHeader -idx16- alias primitive - pid = 9 - OCTET STRING - RICindication->RICindication-IEs->RICindicationHeader
    	OSOCTET temp_buff_for_p_RICindication->id_RICindicationHeader[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICindication->id_RICindicationHeader.numocts = sizeof(temp_buff_for_p_RICindication->id_RICindicationHeader);
    	p_RICindication->id_RICindicationHeader.data = xnap_mem_get(sizeof(temp_buff_for_p_RICindication->id_RICindicationHeader));
    	XNAP_MEMCPY(p_RICindication->id_RICindicationHeader.data, temp_buff_for_p_RICindication->id_RICindicationHeader, sizeof(temp_buff_for_p_RICindication->id_RICindicationHeader)); // change octetstring data here
    	//end of hc-p_RICindication->id_RICindicationHeader -idx16- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx15: id_RICindicationHeader - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx17: id_RICindicationMessage - mandatory=======*/
    {
    	//hc-p_RICindication->id_RICindicationMessage -idx18- alias primitive - pid = 9 - OCTET STRING - RICindication->RICindication-IEs->RICindicationMessage
    	OSOCTET temp_buff_for_p_RICindication->id_RICindicationMessage[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICindication->id_RICindicationMessage.numocts = sizeof(temp_buff_for_p_RICindication->id_RICindicationMessage);
    	p_RICindication->id_RICindicationMessage.data = xnap_mem_get(sizeof(temp_buff_for_p_RICindication->id_RICindicationMessage));
    	XNAP_MEMCPY(p_RICindication->id_RICindicationMessage.data, temp_buff_for_p_RICindication->id_RICindicationMessage, sizeof(temp_buff_for_p_RICindication->id_RICindicationMessage)); // change octetstring data here
    	//end of hc-p_RICindication->id_RICindicationMessage -idx18- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx17: id_RICindicationMessage - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx19: id_RICcallProcessID - optional=======*/
    {
    	 p_RICindication->bitmask |= E2AP_RICINDICATION_e2ap_ID_RICCALL_PROCESS_ID_PRESENT;
    	//hc-p_RICindication->id_RICcallProcessID -idx20- alias primitive - pid = 9 - OCTET STRING - RICindication->RICindication-IEs->RICcallProcessID
    	OSOCTET temp_buff_for_p_RICindication->id_RICcallProcessID[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICindication->id_RICcallProcessID.numocts = sizeof(temp_buff_for_p_RICindication->id_RICcallProcessID);
    	p_RICindication->id_RICcallProcessID.data = xnap_mem_get(sizeof(temp_buff_for_p_RICindication->id_RICcallProcessID));
    	XNAP_MEMCPY(p_RICindication->id_RICcallProcessID.data, temp_buff_for_p_RICindication->id_RICcallProcessID, sizeof(temp_buff_for_p_RICindication->id_RICcallProcessID)); // change octetstring data here
    	//end of hc-p_RICindication->id_RICcallProcessID -idx20- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx19: id_RICcallProcessID - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICindication : (RICindication) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICindication
    protocolIEs : (RICindication-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICindication->RICindication-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICindication->RICindication-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICindication->RICindication-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICindication->RICindication-IEs->RICrequestID->ricInstanceID
        RANfunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICindication->RICindication-IEs->RANfunctionID
        RICactionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICindication->RICindication-IEs->RICactionID
        RICindicationSN : (RICindicationSN) 					---- (PRIMITIVE) ---- [O] ----PATH: RICindication->RICindication-IEs->RICindicationSN
        RICindicationType : (RICindicationType) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICindication->RICindication-IEs->RICindicationType
        RICindicationHeader : (RICindicationHeader) 					---- (PRIMITIVE) ---- [M] ----PATH: RICindication->RICindication-IEs->RICindicationHeader
        RICindicationMessage : (RICindicationMessage) 					---- (PRIMITIVE) ---- [M] ----PATH: RICindication->RICindication-IEs->RICindicationMessage
        RICcallProcessID : (RICcallProcessID) 					---- (PRIMITIVE) ---- [O] ----PATH: RICindication->RICindication-IEs->RICcallProcessID
*/
#endif // ASSIGN_HARDCODE_RICINDICATION_H

