#ifndef ASSIGN_HARDCODE_RICCONTROL_REQUEST_H
#define ASSIGN_HARDCODE_RICCONTROL_REQUEST_H
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

xnap_return_et assign_hardcode_value_RICcontrolRequest(e2ap_RICcontrolRequest_t* p_RICcontrolRequest)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICcontrolRequest->RICcontrolRequest-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICcontrolRequest->RICcontrolRequest-IEs->RICrequestID->ricRequestorID
    	p_RICcontrolRequest->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICcontrolRequest->RICcontrolRequest-IEs->RICrequestID->ricInstanceID
    	p_RICcontrolRequest->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICcontrolRequest->RICcontrolRequest-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RANfunctionID - mandatory=======*/
    {
    	//hc-p_RICcontrolRequest->id_RANfunctionID -idx8- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICcontrolRequest->RICcontrolRequest-IEs->RANfunctionID 
    	p_RICcontrolRequest->id_RANfunctionID = 2047;// change integer here
    	//end of hc-p_RICcontrolRequest->id_RANfunctionID -idx8- alias primitive
    }
    #endif/*======== End Hardcode IE -idx7: id_RANfunctionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_RICcallProcessID - optional=======*/
    {
    	 p_RICcontrolRequest->bitmask |= E2AP_RICCONTROL_REQUEST_e2ap_ID_RICCALL_PROCESS_ID_PRESENT;
    	//hc-p_RICcontrolRequest->id_RICcallProcessID -idx10- alias primitive - pid = 9 - OCTET STRING - RICcontrolRequest->RICcontrolRequest-IEs->RICcallProcessID
    	OSOCTET temp_buff_for_p_RICcontrolRequest->id_RICcallProcessID[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICcontrolRequest->id_RICcallProcessID.numocts = sizeof(temp_buff_for_p_RICcontrolRequest->id_RICcallProcessID);
    	p_RICcontrolRequest->id_RICcallProcessID.data = xnap_mem_get(sizeof(temp_buff_for_p_RICcontrolRequest->id_RICcallProcessID));
    	XNAP_MEMCPY(p_RICcontrolRequest->id_RICcallProcessID.data, temp_buff_for_p_RICcontrolRequest->id_RICcallProcessID, sizeof(temp_buff_for_p_RICcontrolRequest->id_RICcallProcessID)); // change octetstring data here
    	//end of hc-p_RICcontrolRequest->id_RICcallProcessID -idx10- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx9: id_RICcallProcessID - optional ========*/

    #if 1/*======== Start Hardcode IE -idx11: id_RICcontrolHeader - mandatory=======*/
    {
    	//hc-p_RICcontrolRequest->id_RICcontrolHeader -idx12- alias primitive - pid = 9 - OCTET STRING - RICcontrolRequest->RICcontrolRequest-IEs->RICcontrolHeader
    	OSOCTET temp_buff_for_p_RICcontrolRequest->id_RICcontrolHeader[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICcontrolRequest->id_RICcontrolHeader.numocts = sizeof(temp_buff_for_p_RICcontrolRequest->id_RICcontrolHeader);
    	p_RICcontrolRequest->id_RICcontrolHeader.data = xnap_mem_get(sizeof(temp_buff_for_p_RICcontrolRequest->id_RICcontrolHeader));
    	XNAP_MEMCPY(p_RICcontrolRequest->id_RICcontrolHeader.data, temp_buff_for_p_RICcontrolRequest->id_RICcontrolHeader, sizeof(temp_buff_for_p_RICcontrolRequest->id_RICcontrolHeader)); // change octetstring data here
    	//end of hc-p_RICcontrolRequest->id_RICcontrolHeader -idx12- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx11: id_RICcontrolHeader - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx13: id_RICcontrolMessage - mandatory=======*/
    {
    	//hc-p_RICcontrolRequest->id_RICcontrolMessage -idx14- alias primitive - pid = 9 - OCTET STRING - RICcontrolRequest->RICcontrolRequest-IEs->RICcontrolMessage
    	OSOCTET temp_buff_for_p_RICcontrolRequest->id_RICcontrolMessage[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICcontrolRequest->id_RICcontrolMessage.numocts = sizeof(temp_buff_for_p_RICcontrolRequest->id_RICcontrolMessage);
    	p_RICcontrolRequest->id_RICcontrolMessage.data = xnap_mem_get(sizeof(temp_buff_for_p_RICcontrolRequest->id_RICcontrolMessage));
    	XNAP_MEMCPY(p_RICcontrolRequest->id_RICcontrolMessage.data, temp_buff_for_p_RICcontrolRequest->id_RICcontrolMessage, sizeof(temp_buff_for_p_RICcontrolRequest->id_RICcontrolMessage)); // change octetstring data here
    	//end of hc-p_RICcontrolRequest->id_RICcontrolMessage -idx14- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx13: id_RICcontrolMessage - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx15: id_RICcontrolAckRequest - optional=======*/
    {
    	 p_RICcontrolRequest->bitmask |= E2AP_RICCONTROL_REQUEST_e2ap_ID_RICCONTROL_ACK_REQUEST_PRESENT;
    	//hc-RICcontrolAckRequest -idx16 - RICcontrolRequest->RICcontrolRequest-IEs->RICcontrolAckRequest
    	p_RICcontrolRequest->id_RICcontrolAckRequest = E2AP_RICCONTROL_ACK_REQUEST_NO_ACK; // change enum value here
    	//end of hc-RICcontrolAckRequest -idx16- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx15: id_RICcontrolAckRequest - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICcontrolRequest : (RICcontrolRequest) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICcontrolRequest
    protocolIEs : (RICcontrolRequest-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICcontrolRequest->RICcontrolRequest-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICcontrolRequest->RICcontrolRequest-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICcontrolRequest->RICcontrolRequest-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICcontrolRequest->RICcontrolRequest-IEs->RICrequestID->ricInstanceID
        RANfunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICcontrolRequest->RICcontrolRequest-IEs->RANfunctionID
        RICcallProcessID : (RICcallProcessID) 					---- (PRIMITIVE) ---- [O] ----PATH: RICcontrolRequest->RICcontrolRequest-IEs->RICcallProcessID
        RICcontrolHeader : (RICcontrolHeader) 					---- (PRIMITIVE) ---- [M] ----PATH: RICcontrolRequest->RICcontrolRequest-IEs->RICcontrolHeader
        RICcontrolMessage : (RICcontrolMessage) 					---- (PRIMITIVE) ---- [M] ----PATH: RICcontrolRequest->RICcontrolRequest-IEs->RICcontrolMessage
        RICcontrolAckRequest : (RICcontrolAckRequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICcontrolRequest->RICcontrolRequest-IEs->RICcontrolAckRequest
*/
#endif // ASSIGN_HARDCODE_RICCONTROL_REQUEST_H

