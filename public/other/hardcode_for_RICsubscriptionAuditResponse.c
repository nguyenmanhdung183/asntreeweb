#ifndef ASSIGN_HARDCODE_RICSUBSCRIPTION_AUDIT_RESPONSE_H
#define ASSIGN_HARDCODE_RICSUBSCRIPTION_AUDIT_RESPONSE_H
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

xnap_return_et assign_hardcode_value_RICsubscriptionAuditResponse(e2ap_RICsubscriptionAuditResponse_t* p_RICsubscriptionAuditResponse)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICrequestID->ricRequestorID
    	p_RICsubscriptionAuditResponse->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICrequestID->ricInstanceID
    	p_RICsubscriptionAuditResponse->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RICsubscriptionAuditConfirmedList - mandatory=======*/
    {
    	/*=== START LIST -idx8 - RICsubscriptionAuditActionList===*/
    	p_RICsubscriptionAuditResponse->id_RICsubscriptionAuditConfirmedList.id_RICsubscriptionAuditAction_Item_count = 1;
    	/*=== START SEQUENCE -idx9 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item -ROOTS2 RICsubscriptionAuditAction_Item ===*/
    	//hc-sequence-ELEM 1: -idx10 -roots2 RICsubscriptionAuditAction_Item->ricRequestID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx11 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICrequestID -ROOTS3 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx12 -roots3 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx13 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICrequestID->ricRequestorID
    	p_RICsubscriptionAuditResponse->id_RICsubscriptionAuditConfirmedList.id_RICsubscriptionAuditAction_Item[0].ricRequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx13- primitive
	
    	//end of hc-sequence-ELEM 1: -idx12 -roots3 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx14 -roots3 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx15 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICrequestID->ricInstanceID
    	p_RICsubscriptionAuditResponse->id_RICsubscriptionAuditConfirmedList.id_RICsubscriptionAuditAction_Item[0].ricRequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx15- primitive
	
    	//end of hc-sequence-ELEM 2: -idx14 -roots3 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx11 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICrequestID - RICrequestID -ROOTS3 ===*/
    	//end of hc-sequence-ELEM 1: -idx10 -roots2 RICsubscriptionAuditAction_Item->ricRequestID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx16 -roots2 RICsubscriptionAuditAction_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx17- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RANfunctionID 
    	p_RICsubscriptionAuditResponse->id_RICsubscriptionAuditConfirmedList.id_RICsubscriptionAuditAction_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx17- alias primitive
    	//end of hc-sequence-ELEM 2: -idx16 -roots2 RICsubscriptionAuditAction_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 3: -idx18 -roots2 RICsubscriptionAuditAction_Item->ricAction_Admitted_List - alias = -1 -mandatory
    	/*=== START LIST -idx19 - RICaction_Admitted_List===*/
    	p_RICsubscriptionAuditResponse->id_RICsubscriptionAuditConfirmedList.id_RICsubscriptionAuditAction_Item[0].ricAction_Admitted_List.id_RICaction_Admitted_Item_count = 1;
    	/*=== START SEQUENCE -idx20 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICaction-Admitted-List->RICaction-Admitted-ItemIEs->RICaction-Admitted-Item -ROOTS4 RICaction_Admitted_Item ===*/
    	//hc-sequence-ELEM 1: -idx21 -roots4 RICaction_Admitted_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx22- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICaction-Admitted-List->RICaction-Admitted-ItemIEs->RICaction-Admitted-Item->RICactionID 
    	p_RICsubscriptionAuditResponse->id_RICsubscriptionAuditConfirmedList.id_RICsubscriptionAuditAction_Item[0].ricAction_Admitted_List.id_RICaction_Admitted_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx22- alias primitive
    	//end of hc-sequence-ELEM 1: -idx21 -roots4 RICaction_Admitted_Item->ricActionID - alias = 6
	
    	/*=== END SEQUENCE -idx20 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICaction-Admitted-List->RICaction-Admitted-ItemIEs->RICaction-Admitted-Item - RICaction_Admitted_Item -ROOTS4 ===*/
    	/*=== END LIST  -idx19 - RICaction_Admitted_List ===*/
    	//end of hc-sequence-ELEM 3: -idx18 -roots2 RICsubscriptionAuditAction_Item->ricAction_Admitted_List - alias = -1
	
    	/*=== END SEQUENCE -idx9 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item - RICsubscriptionAuditAction_Item -ROOTS2 ===*/
    	/*=== END LIST  -idx8 - RICsubscriptionAuditActionList ===*/
    }
    #endif/*======== End Hardcode IE -idx7: id_RICsubscriptionAuditConfirmedList - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx23: id_RICsubscriptionAuditUnkownList - optional=======*/
    {
    	 p_RICsubscriptionAuditResponse->bitmask |= E2AP_RICSUBSCRIPTION_AUDIT_RESPONSE_e2ap_ID_RICSUBSCRIPTION_AUDIT_UNKOWN_LIST_PRESENT;
    	/*=== START LIST -idx24 - RICsubscriptionAuditList===*/
    	p_RICsubscriptionAuditResponse->id_RICsubscriptionAuditUnkownList.id_RICsubscriptionAudit_Item_count = 1;
    	/*=== START SEQUENCE -idx25 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item -ROOTS5 RICsubscriptionAudit_Item ===*/
    	//hc-sequence-ELEM 1: -idx26 -roots5 RICsubscriptionAudit_Item->ricRequestID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx27 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RICrequestID -ROOTS6 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx28 -roots6 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx29 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RICrequestID->ricRequestorID
    	p_RICsubscriptionAuditResponse->id_RICsubscriptionAuditUnkownList.id_RICsubscriptionAudit_Item[0].ricRequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx29- primitive
	
    	//end of hc-sequence-ELEM 1: -idx28 -roots6 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx30 -roots6 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx31 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RICrequestID->ricInstanceID
    	p_RICsubscriptionAuditResponse->id_RICsubscriptionAuditUnkownList.id_RICsubscriptionAudit_Item[0].ricRequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx31- primitive
	
    	//end of hc-sequence-ELEM 2: -idx30 -roots6 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx27 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RICrequestID - RICrequestID -ROOTS6 ===*/
    	//end of hc-sequence-ELEM 1: -idx26 -roots5 RICsubscriptionAudit_Item->ricRequestID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx32 -roots5 RICsubscriptionAudit_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx33- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RANfunctionID 
    	p_RICsubscriptionAuditResponse->id_RICsubscriptionAuditUnkownList.id_RICsubscriptionAudit_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx33- alias primitive
    	//end of hc-sequence-ELEM 2: -idx32 -roots5 RICsubscriptionAudit_Item->ranFunctionID - alias = 6
	
    	/*=== END SEQUENCE -idx25 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item - RICsubscriptionAudit_Item -ROOTS5 ===*/
    	/*=== END LIST  -idx24 - RICsubscriptionAuditList ===*/
    }
    #endif/*======== End Hardcode IE -idx23: id_RICsubscriptionAuditUnkownList - optional ========*/

    #if 1/*======== Start Hardcode IE -idx34: id_RICsubscriptionAuditMissingList - optional=======*/
    {
    	 p_RICsubscriptionAuditResponse->bitmask |= E2AP_RICSUBSCRIPTION_AUDIT_RESPONSE_e2ap_ID_RICSUBSCRIPTION_AUDIT_MISSING_LIST_PRESENT;
    	/*=== START LIST -idx35 - RICsubscriptionAuditActionList===*/
    	p_RICsubscriptionAuditResponse->id_RICsubscriptionAuditMissingList.id_RICsubscriptionAuditAction_Item_count = 1;
    	/*=== START SEQUENCE -idx36 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item -ROOTS7 RICsubscriptionAuditAction_Item ===*/
    	//hc-sequence-ELEM 1: -idx37 -roots7 RICsubscriptionAuditAction_Item->ricRequestID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx38 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICrequestID -ROOTS8 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx39 -roots8 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx40 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICrequestID->ricRequestorID
    	p_RICsubscriptionAuditResponse->id_RICsubscriptionAuditMissingList.id_RICsubscriptionAuditAction_Item[0].ricRequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx40- primitive
	
    	//end of hc-sequence-ELEM 1: -idx39 -roots8 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx41 -roots8 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx42 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICrequestID->ricInstanceID
    	p_RICsubscriptionAuditResponse->id_RICsubscriptionAuditMissingList.id_RICsubscriptionAuditAction_Item[0].ricRequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx42- primitive
	
    	//end of hc-sequence-ELEM 2: -idx41 -roots8 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx38 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICrequestID - RICrequestID -ROOTS8 ===*/
    	//end of hc-sequence-ELEM 1: -idx37 -roots7 RICsubscriptionAuditAction_Item->ricRequestID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx43 -roots7 RICsubscriptionAuditAction_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx44- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RANfunctionID 
    	p_RICsubscriptionAuditResponse->id_RICsubscriptionAuditMissingList.id_RICsubscriptionAuditAction_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx44- alias primitive
    	//end of hc-sequence-ELEM 2: -idx43 -roots7 RICsubscriptionAuditAction_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 3: -idx45 -roots7 RICsubscriptionAuditAction_Item->ricAction_Admitted_List - alias = -1 -mandatory
    	/*=== START LIST -idx46 - RICaction_Admitted_List===*/
    	p_RICsubscriptionAuditResponse->id_RICsubscriptionAuditMissingList.id_RICsubscriptionAuditAction_Item[0].ricAction_Admitted_List.id_RICaction_Admitted_Item_count = 1;
    	/*=== START SEQUENCE -idx47 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICaction-Admitted-List->RICaction-Admitted-ItemIEs->RICaction-Admitted-Item -ROOTS9 RICaction_Admitted_Item ===*/
    	//hc-sequence-ELEM 1: -idx48 -roots9 RICaction_Admitted_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx49- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICaction-Admitted-List->RICaction-Admitted-ItemIEs->RICaction-Admitted-Item->RICactionID 
    	p_RICsubscriptionAuditResponse->id_RICsubscriptionAuditMissingList.id_RICsubscriptionAuditAction_Item[0].ricAction_Admitted_List.id_RICaction_Admitted_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx49- alias primitive
    	//end of hc-sequence-ELEM 1: -idx48 -roots9 RICaction_Admitted_Item->ricActionID - alias = 6
	
    	/*=== END SEQUENCE -idx47 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICaction-Admitted-List->RICaction-Admitted-ItemIEs->RICaction-Admitted-Item - RICaction_Admitted_Item -ROOTS9 ===*/
    	/*=== END LIST  -idx46 - RICaction_Admitted_List ===*/
    	//end of hc-sequence-ELEM 3: -idx45 -roots7 RICsubscriptionAuditAction_Item->ricAction_Admitted_List - alias = -1
	
    	/*=== END SEQUENCE -idx36 - RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item - RICsubscriptionAuditAction_Item -ROOTS7 ===*/
    	/*=== END LIST  -idx35 - RICsubscriptionAuditActionList ===*/
    }
    #endif/*======== End Hardcode IE -idx34: id_RICsubscriptionAuditMissingList - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICsubscriptionAuditResponse : (RICsubscriptionAuditResponse) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICsubscriptionAuditResponse
    protocolIEs : (RICsubscriptionAuditResponse-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICrequestID->ricInstanceID
        RICsubscriptionAuditActionList : (RICsubscriptionAuditActionList) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList
            RICsubscriptionAuditAction-ItemIEs : (RICsubscriptionAuditAction-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs
                RICsubscriptionAuditAction-Item : (RICsubscriptionAuditAction-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item
                    ricRequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICrequestID
                        ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICrequestID->ricRequestorID
                        ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICrequestID->ricInstanceID
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RANfunctionID
                    ricAction-Admitted-List : (RICaction-Admitted-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICaction-Admitted-List
                        RICaction-Admitted-ItemIEs : (RICaction-Admitted-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICaction-Admitted-List->RICaction-Admitted-ItemIEs
                            RICaction-Admitted-Item : (RICaction-Admitted-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICaction-Admitted-List->RICaction-Admitted-ItemIEs->RICaction-Admitted-Item
                                ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICaction-Admitted-List->RICaction-Admitted-ItemIEs->RICaction-Admitted-Item->RICactionID
        RICsubscriptionAuditList : (RICsubscriptionAuditList) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditList
            RICsubscriptionAudit-ItemIEs : (RICsubscriptionAudit-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs
                RICsubscriptionAudit-Item : (RICsubscriptionAudit-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item
                    ricRequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RICrequestID
                        ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RICrequestID->ricRequestorID
                        ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RICrequestID->ricInstanceID
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditList->RICsubscriptionAudit-ItemIEs->RICsubscriptionAudit-Item->RANfunctionID
        RICsubscriptionAuditActionList : (RICsubscriptionAuditActionList) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList
            RICsubscriptionAuditAction-ItemIEs : (RICsubscriptionAuditAction-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs
                RICsubscriptionAuditAction-Item : (RICsubscriptionAuditAction-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item
                    ricRequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICrequestID
                        ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICrequestID->ricRequestorID
                        ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICrequestID->ricInstanceID
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RANfunctionID
                    ricAction-Admitted-List : (RICaction-Admitted-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICaction-Admitted-List
                        RICaction-Admitted-ItemIEs : (RICaction-Admitted-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICaction-Admitted-List->RICaction-Admitted-ItemIEs
                            RICaction-Admitted-Item : (RICaction-Admitted-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICaction-Admitted-List->RICaction-Admitted-ItemIEs->RICaction-Admitted-Item
                                ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionAuditResponse->RICsubscriptionAuditResponse-IEs->RICsubscriptionAuditActionList->RICsubscriptionAuditAction-ItemIEs->RICsubscriptionAuditAction-Item->RICaction-Admitted-List->RICaction-Admitted-ItemIEs->RICaction-Admitted-Item->RICactionID
*/
#endif // ASSIGN_HARDCODE_RICSUBSCRIPTION_AUDIT_RESPONSE_H

