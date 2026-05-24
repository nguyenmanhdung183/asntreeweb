#ifndef ASSIGN_HARDCODE_RICASSISTANCE_REQUEST_H
#define ASSIGN_HARDCODE_RICASSISTANCE_REQUEST_H
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

xnap_return_et assign_hardcode_value_RICassistanceRequest(e2ap_RICassistanceRequest_t* p_RICassistanceRequest)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICassistanceRequest->RICassistanceRequest-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICassistanceRequest->RICassistanceRequest-IEs->RICrequestID->ricRequestorID
    	p_RICassistanceRequest->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICassistanceRequest->RICassistanceRequest-IEs->RICrequestID->ricInstanceID
    	p_RICassistanceRequest->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICassistanceRequest->RICassistanceRequest-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RICassistanceHeader - mandatory=======*/
    {
    	//hc-p_RICassistanceRequest->id_RICassistanceHeader -idx8- alias primitive - pid = 9 - OCTET STRING - RICassistanceRequest->RICassistanceRequest-IEs->RICassistanceHeader
    	OSOCTET temp_buff_for_p_RICassistanceRequest->id_RICassistanceHeader[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICassistanceRequest->id_RICassistanceHeader.numocts = sizeof(temp_buff_for_p_RICassistanceRequest->id_RICassistanceHeader);
    	p_RICassistanceRequest->id_RICassistanceHeader.data = xnap_mem_get(sizeof(temp_buff_for_p_RICassistanceRequest->id_RICassistanceHeader));
    	XNAP_MEMCPY(p_RICassistanceRequest->id_RICassistanceHeader.data, temp_buff_for_p_RICassistanceRequest->id_RICassistanceHeader, sizeof(temp_buff_for_p_RICassistanceRequest->id_RICassistanceHeader)); // change octetstring data here
    	//end of hc-p_RICassistanceRequest->id_RICassistanceHeader -idx8- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx7: id_RICassistanceHeader - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_RICassistanceMessage - mandatory=======*/
    {
    	//hc-p_RICassistanceRequest->id_RICassistanceMessage -idx10- alias primitive - pid = 9 - OCTET STRING - RICassistanceRequest->RICassistanceRequest-IEs->RICassistanceMessage
    	OSOCTET temp_buff_for_p_RICassistanceRequest->id_RICassistanceMessage[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICassistanceRequest->id_RICassistanceMessage.numocts = sizeof(temp_buff_for_p_RICassistanceRequest->id_RICassistanceMessage);
    	p_RICassistanceRequest->id_RICassistanceMessage.data = xnap_mem_get(sizeof(temp_buff_for_p_RICassistanceRequest->id_RICassistanceMessage));
    	XNAP_MEMCPY(p_RICassistanceRequest->id_RICassistanceMessage.data, temp_buff_for_p_RICassistanceRequest->id_RICassistanceMessage, sizeof(temp_buff_for_p_RICassistanceRequest->id_RICassistanceMessage)); // change octetstring data here
    	//end of hc-p_RICassistanceRequest->id_RICassistanceMessage -idx10- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx9: id_RICassistanceMessage - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx11: id_RICassistanceUpdate - optional=======*/
    {
    	 p_RICassistanceRequest->bitmask |= E2AP_RICASSISTANCE_REQUEST_e2ap_ID_RICASSISTANCE_UPDATE_PRESENT;
    	//hc-RICassistanceUpdate -idx12 - RICassistanceRequest->RICassistanceRequest-IEs->RICassistanceUpdate
    	p_RICassistanceRequest->id_RICassistanceUpdate = E2AP_RICASSISTANCE_UPDATE_TRUE; // change enum value here
    	//end of hc-RICassistanceUpdate -idx12- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx11: id_RICassistanceUpdate - optional ========*/

    #if 1/*======== Start Hardcode IE -idx13: id_RICassistanceUpdateNumber - optional=======*/
    {
    	 p_RICassistanceRequest->bitmask |= E2AP_RICASSISTANCE_REQUEST_e2ap_ID_RICASSISTANCE_UPDATE_NUMBER_PRESENT;
    	//hc-p_RICassistanceRequest->id_RICassistanceUpdateNumber -idx14- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - RICassistanceRequest->RICassistanceRequest-IEs->RICassistanceUpdateNumber 
    	p_RICassistanceRequest->id_RICassistanceUpdateNumber = 32767;// change integer here
    	//end of hc-p_RICassistanceRequest->id_RICassistanceUpdateNumber -idx14- alias primitive
    }
    #endif/*======== End Hardcode IE -idx13: id_RICassistanceUpdateNumber - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICassistanceRequest : (RICassistanceRequest) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICassistanceRequest
    protocolIEs : (RICassistanceRequest-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICassistanceRequest->RICassistanceRequest-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICassistanceRequest->RICassistanceRequest-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICassistanceRequest->RICassistanceRequest-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICassistanceRequest->RICassistanceRequest-IEs->RICrequestID->ricInstanceID
        RICassistanceHeader : (RICassistanceHeader) 					---- (PRIMITIVE) ---- [M] ----PATH: RICassistanceRequest->RICassistanceRequest-IEs->RICassistanceHeader
        RICassistanceMessage : (RICassistanceMessage) 					---- (PRIMITIVE) ---- [M] ----PATH: RICassistanceRequest->RICassistanceRequest-IEs->RICassistanceMessage
        RICassistanceUpdate : (RICassistanceUpdate) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICassistanceRequest->RICassistanceRequest-IEs->RICassistanceUpdate
        RICassistanceUpdateNumber : (RICassistanceUpdateNumber) 					---- (PRIMITIVE) ---- [O] ----PATH: RICassistanceRequest->RICassistanceRequest-IEs->RICassistanceUpdateNumber
*/
#endif // ASSIGN_HARDCODE_RICASSISTANCE_REQUEST_H

