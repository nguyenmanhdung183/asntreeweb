#ifndef ASSIGN_HARDCODE_RICQUERY_RESPONSE_H
#define ASSIGN_HARDCODE_RICQUERY_RESPONSE_H
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

xnap_return_et assign_hardcode_value_RICqueryResponse(e2ap_RICqueryResponse_t* p_RICqueryResponse)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICqueryResponse->RICqueryResponse-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICqueryResponse->RICqueryResponse-IEs->RICrequestID->ricRequestorID
    	p_RICqueryResponse->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICqueryResponse->RICqueryResponse-IEs->RICrequestID->ricInstanceID
    	p_RICqueryResponse->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICqueryResponse->RICqueryResponse-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RANfunctionID - mandatory=======*/
    {
    	//hc-p_RICqueryResponse->id_RANfunctionID -idx8- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICqueryResponse->RICqueryResponse-IEs->RANfunctionID 
    	p_RICqueryResponse->id_RANfunctionID = 2047;// change integer here
    	//end of hc-p_RICqueryResponse->id_RANfunctionID -idx8- alias primitive
    }
    #endif/*======== End Hardcode IE -idx7: id_RANfunctionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_RICqueryOutcome - mandatory=======*/
    {
    	//hc-p_RICqueryResponse->id_RICqueryOutcome -idx10- alias primitive - pid = 9 - OCTET STRING - RICqueryResponse->RICqueryResponse-IEs->RICqueryOutcome
    	OSOCTET temp_buff_for_p_RICqueryResponse->id_RICqueryOutcome[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICqueryResponse->id_RICqueryOutcome.numocts = sizeof(temp_buff_for_p_RICqueryResponse->id_RICqueryOutcome);
    	p_RICqueryResponse->id_RICqueryOutcome.data = xnap_mem_get(sizeof(temp_buff_for_p_RICqueryResponse->id_RICqueryOutcome));
    	XNAP_MEMCPY(p_RICqueryResponse->id_RICqueryOutcome.data, temp_buff_for_p_RICqueryResponse->id_RICqueryOutcome, sizeof(temp_buff_for_p_RICqueryResponse->id_RICqueryOutcome)); // change octetstring data here
    	//end of hc-p_RICqueryResponse->id_RICqueryOutcome -idx10- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx9: id_RICqueryOutcome - mandatory ========*/
    return XNAP_SUCCESS;
}
/*
RICqueryResponse : (RICqueryResponse) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICqueryResponse
    protocolIEs : (RICqueryResponse-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICqueryResponse->RICqueryResponse-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICqueryResponse->RICqueryResponse-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICqueryResponse->RICqueryResponse-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICqueryResponse->RICqueryResponse-IEs->RICrequestID->ricInstanceID
        RANfunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICqueryResponse->RICqueryResponse-IEs->RANfunctionID
        RICqueryOutcome : (RICqueryOutcome) 					---- (PRIMITIVE) ---- [M] ----PATH: RICqueryResponse->RICqueryResponse-IEs->RICqueryOutcome
*/
#endif // ASSIGN_HARDCODE_RICQUERY_RESPONSE_H

