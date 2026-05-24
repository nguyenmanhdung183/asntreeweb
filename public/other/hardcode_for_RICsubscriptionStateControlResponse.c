#ifndef ASSIGN_HARDCODE_RICSUBSCRIPTION_STATE_CONTROL_RESPONSE_H
#define ASSIGN_HARDCODE_RICSUBSCRIPTION_STATE_CONTROL_RESPONSE_H
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

xnap_return_et assign_hardcode_value_RICsubscriptionStateControlResponse(e2ap_RICsubscriptionStateControlResponse_t* p_RICsubscriptionStateControlResponse)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RICrequestID->ricRequestorID
    	p_RICsubscriptionStateControlResponse->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RICrequestID->ricInstanceID
    	p_RICsubscriptionStateControlResponse->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RANfunctionStateConfirm_List - mandatory=======*/
    {
    	/*=== START LIST -idx8 - RANfunctionStateConfirm_List===*/
    	p_RICsubscriptionStateControlResponse->id_RANfunctionStateConfirm_List.id_RANfunctionStateConfirm_Item_count = 1;
    	/*=== START SEQUENCE -idx9 - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item -ROOTS2 RANfunctionStateConfirm_Item ===*/
    	//hc-sequence-ELEM 1: -idx10 -roots2 RANfunctionStateConfirm_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx11- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RANfunctionID 
    	p_RICsubscriptionStateControlResponse->id_RANfunctionStateConfirm_List.id_RANfunctionStateConfirm_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx11- alias primitive
    	//end of hc-sequence-ELEM 1: -idx10 -roots2 RANfunctionStateConfirm_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx12 -roots2 RANfunctionStateConfirm_Item->ricSubscriptionSuspended_list - alias = -1 -optional
    	p_RICsubscriptionStateControlResponse->id_RANfunctionStateConfirm_List.id_RANfunctionStateConfirm_Item[0].bitmask |= E2AP_RANFUNCTION_STATE_CONFIRM_ITEM_e2ap_RIC_SUBSCRIPTION_SUSPENDED_LIST_PRESENT;
    	/*=== START LIST -idx13 - RICsubscriptionSuspended_List===*/
    	p_RICsubscriptionStateControlResponse->id_RANfunctionStateConfirm_List.id_RANfunctionStateConfirm_Item[0].ricSubscriptionSuspended_list.id_RICsubscriptionList_Item_count = 1;
    	/*=== START SEQUENCE -idx14 - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item -ROOTS3 RICsubscriptionList_Item ===*/
    	//hc-sequence-ELEM 1: -idx15 -roots3 RICsubscriptionList_Item->ricRequestID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx16 - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICrequestID -ROOTS4 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx17 -roots4 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx18 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICrequestID->ricRequestorID
    	p_RICsubscriptionStateControlResponse->id_RANfunctionStateConfirm_List.id_RANfunctionStateConfirm_Item[0].ricSubscriptionSuspended_list.id_RICsubscriptionList_Item[0].ricRequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx18- primitive
	
    	//end of hc-sequence-ELEM 1: -idx17 -roots4 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx19 -roots4 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx20 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICrequestID->ricInstanceID
    	p_RICsubscriptionStateControlResponse->id_RANfunctionStateConfirm_List.id_RANfunctionStateConfirm_Item[0].ricSubscriptionSuspended_list.id_RICsubscriptionList_Item[0].ricRequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx20- primitive
	
    	//end of hc-sequence-ELEM 2: -idx19 -roots4 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx16 - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICrequestID - RICrequestID -ROOTS4 ===*/
    	//end of hc-sequence-ELEM 1: -idx15 -roots3 RICsubscriptionList_Item->ricRequestID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx21 -roots3 RICsubscriptionList_Item->ricAction_list - alias = -1 -optional
    	p_RICsubscriptionStateControlResponse->id_RANfunctionStateConfirm_List.id_RANfunctionStateConfirm_Item[0].ricSubscriptionSuspended_list.id_RICsubscriptionList_Item[0].bitmask |= E2AP_RICSUBSCRIPTION_LIST_ITEM_e2ap_RIC_ACTION_LIST_PRESENT;
    	/*=== START LIST -idx22 - RICaction_List===*/
    	p_RICsubscriptionStateControlResponse->id_RANfunctionStateConfirm_List.id_RANfunctionStateConfirm_Item[0].ricSubscriptionSuspended_list.id_RICsubscriptionList_Item[0].ricAction_list.id_RICactionList_Item_count = 1;
    	/*=== START SEQUENCE -idx23 - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICaction-List->RICaction-ItemIEs->RICactionList-Item -ROOTS5 RICactionList_Item ===*/
    	//hc-sequence-ELEM 1: -idx24 -roots5 RICactionList_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx25- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICaction-List->RICaction-ItemIEs->RICactionList-Item->RICactionID 
    	p_RICsubscriptionStateControlResponse->id_RANfunctionStateConfirm_List.id_RANfunctionStateConfirm_Item[0].ricSubscriptionSuspended_list.id_RICsubscriptionList_Item[0].ricAction_list.id_RICactionList_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx25- alias primitive
    	//end of hc-sequence-ELEM 1: -idx24 -roots5 RICactionList_Item->ricActionID - alias = 6
	
    	/*=== END SEQUENCE -idx23 - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICaction-List->RICaction-ItemIEs->RICactionList-Item - RICactionList_Item -ROOTS5 ===*/
    	/*=== END LIST  -idx22 - RICaction_List ===*/
    	//end of hc-sequence-ELEM 2: -idx21 -roots3 RICsubscriptionList_Item->ricAction_list - alias = -1
	
    	/*=== END SEQUENCE -idx14 - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item - RICsubscriptionList_Item -ROOTS3 ===*/
    	/*=== END LIST  -idx13 - RICsubscriptionSuspended_List ===*/
    	//end of hc-sequence-ELEM 2: -idx12 -roots2 RANfunctionStateConfirm_Item->ricSubscriptionSuspended_list - alias = -1
	
    	//hc-sequence-ELEM 3: -idx26 -roots2 RANfunctionStateConfirm_Item->ricSubscriptionResumed_list - alias = -1 -optional
    	p_RICsubscriptionStateControlResponse->id_RANfunctionStateConfirm_List.id_RANfunctionStateConfirm_Item[0].bitmask |= E2AP_RANFUNCTION_STATE_CONFIRM_ITEM_e2ap_RIC_SUBSCRIPTION_RESUMED_LIST_PRESENT;
    	/*=== START LIST -idx27 - RICsubscriptionResumed_List===*/
    	p_RICsubscriptionStateControlResponse->id_RANfunctionStateConfirm_List.id_RANfunctionStateConfirm_Item[0].ricSubscriptionResumed_list.id_RICsubscriptionList_Item_count = 1;
    	/*=== START SEQUENCE -idx28 - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item -ROOTS6 RICsubscriptionList_Item ===*/
    	//hc-sequence-ELEM 1: -idx29 -roots6 RICsubscriptionList_Item->ricRequestID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx30 - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICrequestID -ROOTS7 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx31 -roots7 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx32 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICrequestID->ricRequestorID
    	p_RICsubscriptionStateControlResponse->id_RANfunctionStateConfirm_List.id_RANfunctionStateConfirm_Item[0].ricSubscriptionResumed_list.id_RICsubscriptionList_Item[0].ricRequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx32- primitive
	
    	//end of hc-sequence-ELEM 1: -idx31 -roots7 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx33 -roots7 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx34 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICrequestID->ricInstanceID
    	p_RICsubscriptionStateControlResponse->id_RANfunctionStateConfirm_List.id_RANfunctionStateConfirm_Item[0].ricSubscriptionResumed_list.id_RICsubscriptionList_Item[0].ricRequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx34- primitive
	
    	//end of hc-sequence-ELEM 2: -idx33 -roots7 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx30 - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICrequestID - RICrequestID -ROOTS7 ===*/
    	//end of hc-sequence-ELEM 1: -idx29 -roots6 RICsubscriptionList_Item->ricRequestID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx35 -roots6 RICsubscriptionList_Item->ricAction_list - alias = -1 -optional
    	p_RICsubscriptionStateControlResponse->id_RANfunctionStateConfirm_List.id_RANfunctionStateConfirm_Item[0].ricSubscriptionResumed_list.id_RICsubscriptionList_Item[0].bitmask |= E2AP_RICSUBSCRIPTION_LIST_ITEM_e2ap_RIC_ACTION_LIST_PRESENT;
    	/*=== START LIST -idx36 - RICaction_List===*/
    	p_RICsubscriptionStateControlResponse->id_RANfunctionStateConfirm_List.id_RANfunctionStateConfirm_Item[0].ricSubscriptionResumed_list.id_RICsubscriptionList_Item[0].ricAction_list.id_RICactionList_Item_count = 1;
    	/*=== START SEQUENCE -idx37 - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICaction-List->RICaction-ItemIEs->RICactionList-Item -ROOTS8 RICactionList_Item ===*/
    	//hc-sequence-ELEM 1: -idx38 -roots8 RICactionList_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx39- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICaction-List->RICaction-ItemIEs->RICactionList-Item->RICactionID 
    	p_RICsubscriptionStateControlResponse->id_RANfunctionStateConfirm_List.id_RANfunctionStateConfirm_Item[0].ricSubscriptionResumed_list.id_RICsubscriptionList_Item[0].ricAction_list.id_RICactionList_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx39- alias primitive
    	//end of hc-sequence-ELEM 1: -idx38 -roots8 RICactionList_Item->ricActionID - alias = 6
	
    	/*=== END SEQUENCE -idx37 - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICaction-List->RICaction-ItemIEs->RICactionList-Item - RICactionList_Item -ROOTS8 ===*/
    	/*=== END LIST  -idx36 - RICaction_List ===*/
    	//end of hc-sequence-ELEM 2: -idx35 -roots6 RICsubscriptionList_Item->ricAction_list - alias = -1
	
    	/*=== END SEQUENCE -idx28 - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item - RICsubscriptionList_Item -ROOTS6 ===*/
    	/*=== END LIST  -idx27 - RICsubscriptionResumed_List ===*/
    	//end of hc-sequence-ELEM 3: -idx26 -roots2 RANfunctionStateConfirm_Item->ricSubscriptionResumed_list - alias = -1
	
    	/*=== END SEQUENCE -idx9 - RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item - RANfunctionStateConfirm_Item -ROOTS2 ===*/
    	/*=== END LIST  -idx8 - RANfunctionStateConfirm_List ===*/
    }
    #endif/*======== End Hardcode IE -idx7: id_RANfunctionStateConfirm_List - mandatory ========*/
    return XNAP_SUCCESS;
}
/*
RICsubscriptionStateControlResponse : (RICsubscriptionStateControlResponse) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICsubscriptionStateControlResponse
    protocolIEs : (RICsubscriptionStateControlResponse-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RICrequestID->ricInstanceID
        RANfunctionStateConfirm-List : (RANfunctionStateConfirm-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List
            RANfunctionStateConfirm-ItemIEs : (RANfunctionStateConfirm-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs
                RANfunctionStateConfirm-Item : (RANfunctionStateConfirm-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RANfunctionID
                    ricSubscriptionSuspended-list : (RICsubscriptionSuspended-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List
                        RICsubscriptionList-ItemIEs : (RICsubscriptionList-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs
                            RICsubscriptionList-Item : (RICsubscriptionList-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item
                                ricRequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICrequestID
                                    ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICrequestID->ricRequestorID
                                    ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICrequestID->ricInstanceID
                                ricAction-list : (RICaction-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICaction-List
                                    RICaction-ItemIEs : (RICaction-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICaction-List->RICaction-ItemIEs
                                        RICactionList-Item : (RICactionList-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICaction-List->RICaction-ItemIEs->RICactionList-Item
                                            ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionSuspended-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICaction-List->RICaction-ItemIEs->RICactionList-Item->RICactionID
                    ricSubscriptionResumed-list : (RICsubscriptionResumed-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List
                        RICsubscriptionList-ItemIEs : (RICsubscriptionList-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs
                            RICsubscriptionList-Item : (RICsubscriptionList-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item
                                ricRequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICrequestID
                                    ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICrequestID->ricRequestorID
                                    ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICrequestID->ricInstanceID
                                ricAction-list : (RICaction-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICaction-List
                                    RICaction-ItemIEs : (RICaction-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICaction-List->RICaction-ItemIEs
                                        RICactionList-Item : (RICactionList-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICaction-List->RICaction-ItemIEs->RICactionList-Item
                                            ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionStateControlResponse->RICsubscriptionStateControlResponse-IEs->RANfunctionStateConfirm-List->RANfunctionStateConfirm-ItemIEs->RANfunctionStateConfirm-Item->RICsubscriptionResumed-List->RICsubscriptionList-ItemIEs->RICsubscriptionList-Item->RICaction-List->RICaction-ItemIEs->RICactionList-Item->RICactionID
*/
#endif // ASSIGN_HARDCODE_RICSUBSCRIPTION_STATE_CONTROL_RESPONSE_H

