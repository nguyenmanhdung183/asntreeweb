#ifndef ASSIGN_HARDCODE_RICSUBSCRIPTION_AUDIT_REQUEST_H
#define ASSIGN_HARDCODE_RICSUBSCRIPTION_AUDIT_REQUEST_H
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

xnap_return_et assign_hardcode_value_RICsubscriptionAuditRequest(e2ap_RICsubscriptionAuditRequest_t* p_RICsubscriptionAuditRequest)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICrequestID->ricRequestorID
    	p_RICsubscriptionAuditRequest->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICrequestID->ricInstanceID
    	p_RICsubscriptionAuditRequest->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RICsubscriptionAuditFlag - optional=======*/
    {
    	 p_RICsubscriptionAuditRequest->bitmask |= E2AP_RICSUBSCRIPTION_AUDIT_REQUEST_e2ap_ID_RICSUBSCRIPTION_AUDIT_FLAG_PRESENT;
    	/*=== START SEQUENCE -idx8 - RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditFlag -ROOTS2 RICsubscriptionAuditFlag ===*/
    	//hc-sequence-ELEM 1: -idx9 -roots2 RICsubscriptionAuditFlag->listedRecordsOnly - alias = 13 -optional
    	p_RICsubscriptionAuditRequest->id_RICsubscriptionAuditFlag.bitmask |= E2AP_RICSUBSCRIPTION_AUDIT_FLAG_e2ap_LISTED_RECORDS_ONLY_PRESENT;
    	//hc-ListedRecordsOnly -idx10 - RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditFlag->ListedRecordsOnly
    	p_RICsubscriptionAuditRequest->id_RICsubscriptionAuditFlag.listedRecordsOnly = E2AP_LISTED_RECORDS_ONLY_TRUE; // change enum value here
    	//end of hc-ListedRecordsOnly -idx10- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx9 -roots2 RICsubscriptionAuditFlag->listedRecordsOnly - alias = 13
	
    	/*=== END SEQUENCE -idx8 - RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditFlag - RICsubscriptionAuditFlag -ROOTS2 ===*/
    }
    #endif/*======== End Hardcode IE -idx7: id_RICsubscriptionAuditFlag - optional ========*/

    #if 1/*======== Start Hardcode IE -idx11: id_RICsubscriptionAuditList - optional=======*/
    {
    	 p_RICsubscriptionAuditRequest->bitmask |= E2AP_RICSUBSCRIPTION_AUDIT_REQUEST_e2ap_ID_RICSUBSCRIPTION_AUDIT_LIST_PRESENT;
    	/*=== START LIST -idx12 - RICsubscriptionAuditList===*/
    	p_RICsubscriptionAuditRequest->id_RICsubscriptionAuditList.id_RICsubscriptionAudit_Item_count = 1;
    	/*=== START SEQUENCE -idx13 - RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item -ROOTS3 RICsubscriptionAudit_Item ===*/
    	//hc-sequence-ELEM 1: -idx14 -roots3 RICsubscriptionAudit_Item->ricRequestID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx15 - RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RICrequestID -ROOTS4 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx16 -roots4 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx17 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RICrequestID->ricRequestorID
    	p_RICsubscriptionAuditRequest->id_RICsubscriptionAuditList.id_RICsubscriptionAudit_Item[0].ricRequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx17- primitive
	
    	//end of hc-sequence-ELEM 1: -idx16 -roots4 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx18 -roots4 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx19 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RICrequestID->ricInstanceID
    	p_RICsubscriptionAuditRequest->id_RICsubscriptionAuditList.id_RICsubscriptionAudit_Item[0].ricRequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx19- primitive
	
    	//end of hc-sequence-ELEM 2: -idx18 -roots4 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx15 - RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RICrequestID - RICrequestID -ROOTS4 ===*/
    	//end of hc-sequence-ELEM 1: -idx14 -roots3 RICsubscriptionAudit_Item->ricRequestID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx20 -roots3 RICsubscriptionAudit_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx21- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RANfunctionID 
    	p_RICsubscriptionAuditRequest->id_RICsubscriptionAuditList.id_RICsubscriptionAudit_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx21- alias primitive
    	//end of hc-sequence-ELEM 2: -idx20 -roots3 RICsubscriptionAudit_Item->ranFunctionID - alias = 6
	
    	/*=== END SEQUENCE -idx13 - RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item - RICsubscriptionAudit_Item -ROOTS3 ===*/
    	/*=== END LIST  -idx12 - RICsubscriptionAuditList ===*/
    }
    #endif/*======== End Hardcode IE -idx11: id_RICsubscriptionAuditList - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICsubscriptionAuditRequest : (RICsubscriptionAuditRequest) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICsubscriptionAuditRequest
    protocolIEs : (RICsubscriptionAuditRequest-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICrequestID->ricInstanceID
        RICsubscriptionAuditFlag : (RICsubscriptionAuditFlag) 					---- (SEQUENCE) ---- [O] ----PATH: RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditFlag
            listedRecordsOnly : (ListedRecordsOnly) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditFlag->ListedRecordsOnly
        RICsubscriptionAuditList : (RICsubscriptionAuditList) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditList
            RICsubscriptionAudit-ItemIEs : (RICsubscriptionAudit-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs
                RICsubscriptionAudit-Item : (RICsubscriptionAudit-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item
                    ricRequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RICrequestID
                        ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RICrequestID->ricRequestorID
                        ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RICrequestID->ricInstanceID
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionAuditRequest->RICsubscriptionAuditRequest-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RANfunctionID
*/
#endif // ASSIGN_HARDCODE_RICSUBSCRIPTION_AUDIT_REQUEST_H

