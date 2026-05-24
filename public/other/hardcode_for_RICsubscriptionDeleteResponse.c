#ifndef ASSIGN_HARDCODE_RICSUBSCRIPTION_DELETE_RESPONSE_H
#define ASSIGN_HARDCODE_RICSUBSCRIPTION_DELETE_RESPONSE_H
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

xnap_return_et assign_hardcode_value_RICsubscriptionDeleteResponse(e2ap_RICsubscriptionDeleteResponse_t* p_RICsubscriptionDeleteResponse)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICsubscriptionDeleteResponse->RICsubscriptionDeleteResponse-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionDeleteResponse->RICsubscriptionDeleteResponse-IEs->RICrequestID->ricRequestorID
    	p_RICsubscriptionDeleteResponse->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionDeleteResponse->RICsubscriptionDeleteResponse-IEs->RICrequestID->ricInstanceID
    	p_RICsubscriptionDeleteResponse->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICsubscriptionDeleteResponse->RICsubscriptionDeleteResponse-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RANfunctionID - mandatory=======*/
    {
    	//hc-p_RICsubscriptionDeleteResponse->id_RANfunctionID -idx8- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICsubscriptionDeleteResponse->RICsubscriptionDeleteResponse-IEs->RANfunctionID 
    	p_RICsubscriptionDeleteResponse->id_RANfunctionID = 2047;// change integer here
    	//end of hc-p_RICsubscriptionDeleteResponse->id_RANfunctionID -idx8- alias primitive
    }
    #endif/*======== End Hardcode IE -idx7: id_RANfunctionID - mandatory ========*/
    return XNAP_SUCCESS;
}
/*
RICsubscriptionDeleteResponse : (RICsubscriptionDeleteResponse) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICsubscriptionDeleteResponse
    protocolIEs : (RICsubscriptionDeleteResponse-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICsubscriptionDeleteResponse->RICsubscriptionDeleteResponse-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionDeleteResponse->RICsubscriptionDeleteResponse-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionDeleteResponse->RICsubscriptionDeleteResponse-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionDeleteResponse->RICsubscriptionDeleteResponse-IEs->RICrequestID->ricInstanceID
        RANfunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionDeleteResponse->RICsubscriptionDeleteResponse-IEs->RANfunctionID
*/
#endif // ASSIGN_HARDCODE_RICSUBSCRIPTION_DELETE_RESPONSE_H

