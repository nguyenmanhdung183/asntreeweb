#ifndef ASSIGN_HARDCODE_RICQUERY_REQUEST_H
#define ASSIGN_HARDCODE_RICQUERY_REQUEST_H
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

xnap_return_et assign_hardcode_value_RICqueryRequest(e2ap_RICqueryRequest_t* p_RICqueryRequest)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICqueryRequest->RICqueryRequest-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICqueryRequest->RICqueryRequest-IEs->RICrequestID->ricRequestorID
    	p_RICqueryRequest->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICqueryRequest->RICqueryRequest-IEs->RICrequestID->ricInstanceID
    	p_RICqueryRequest->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICqueryRequest->RICqueryRequest-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RANfunctionID - mandatory=======*/
    {
    	//hc-p_RICqueryRequest->id_RANfunctionID -idx8- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICqueryRequest->RICqueryRequest-IEs->RANfunctionID 
    	p_RICqueryRequest->id_RANfunctionID = 2047;// change integer here
    	//end of hc-p_RICqueryRequest->id_RANfunctionID -idx8- alias primitive
    }
    #endif/*======== End Hardcode IE -idx7: id_RANfunctionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_RICqueryHeader - mandatory=======*/
    {
    	//hc-p_RICqueryRequest->id_RICqueryHeader -idx10- alias primitive - pid = 9 - OCTET STRING - RICqueryRequest->RICqueryRequest-IEs->RICqueryHeader
    	OSOCTET temp_buff_for_p_RICqueryRequest->id_RICqueryHeader[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICqueryRequest->id_RICqueryHeader.numocts = sizeof(temp_buff_for_p_RICqueryRequest->id_RICqueryHeader);
    	p_RICqueryRequest->id_RICqueryHeader.data = xnap_mem_get(sizeof(temp_buff_for_p_RICqueryRequest->id_RICqueryHeader));
    	XNAP_MEMCPY(p_RICqueryRequest->id_RICqueryHeader.data, temp_buff_for_p_RICqueryRequest->id_RICqueryHeader, sizeof(temp_buff_for_p_RICqueryRequest->id_RICqueryHeader)); // change octetstring data here
    	//end of hc-p_RICqueryRequest->id_RICqueryHeader -idx10- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx9: id_RICqueryHeader - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx11: id_RICqueryDefinition - mandatory=======*/
    {
    	//hc-p_RICqueryRequest->id_RICqueryDefinition -idx12- alias primitive - pid = 9 - OCTET STRING - RICqueryRequest->RICqueryRequest-IEs->RICqueryDefinition
    	OSOCTET temp_buff_for_p_RICqueryRequest->id_RICqueryDefinition[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICqueryRequest->id_RICqueryDefinition.numocts = sizeof(temp_buff_for_p_RICqueryRequest->id_RICqueryDefinition);
    	p_RICqueryRequest->id_RICqueryDefinition.data = xnap_mem_get(sizeof(temp_buff_for_p_RICqueryRequest->id_RICqueryDefinition));
    	XNAP_MEMCPY(p_RICqueryRequest->id_RICqueryDefinition.data, temp_buff_for_p_RICqueryRequest->id_RICqueryDefinition, sizeof(temp_buff_for_p_RICqueryRequest->id_RICqueryDefinition)); // change octetstring data here
    	//end of hc-p_RICqueryRequest->id_RICqueryDefinition -idx12- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx11: id_RICqueryDefinition - mandatory ========*/
    return XNAP_SUCCESS;
}
/*
RICqueryRequest : (RICqueryRequest) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICqueryRequest
    protocolIEs : (RICqueryRequest-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICqueryRequest->RICqueryRequest-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICqueryRequest->RICqueryRequest-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICqueryRequest->RICqueryRequest-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICqueryRequest->RICqueryRequest-IEs->RICrequestID->ricInstanceID
        RANfunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICqueryRequest->RICqueryRequest-IEs->RANfunctionID
        RICqueryHeader : (RICqueryHeader) 					---- (PRIMITIVE) ---- [M] ----PATH: RICqueryRequest->RICqueryRequest-IEs->RICqueryHeader
        RICqueryDefinition : (RICqueryDefinition) 					---- (PRIMITIVE) ---- [M] ----PATH: RICqueryRequest->RICqueryRequest-IEs->RICqueryDefinition
*/
#endif // ASSIGN_HARDCODE_RICQUERY_REQUEST_H

