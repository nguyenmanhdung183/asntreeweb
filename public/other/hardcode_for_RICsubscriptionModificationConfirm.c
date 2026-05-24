#ifndef ASSIGN_HARDCODE_RICSUBSCRIPTION_MODIFICATION_CONFIRM_H
#define ASSIGN_HARDCODE_RICSUBSCRIPTION_MODIFICATION_CONFIRM_H
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

xnap_return_et assign_hardcode_value_RICsubscriptionModificationConfirm(e2ap_RICsubscriptionModificationConfirm_t* p_RICsubscriptionModificationConfirm)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICrequestID->ricRequestorID
    	p_RICsubscriptionModificationConfirm->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICrequestID->ricInstanceID
    	p_RICsubscriptionModificationConfirm->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RANfunctionID - mandatory=======*/
    {
    	//hc-p_RICsubscriptionModificationConfirm->id_RANfunctionID -idx8- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RANfunctionID 
    	p_RICsubscriptionModificationConfirm->id_RANfunctionID = 2047;// change integer here
    	//end of hc-p_RICsubscriptionModificationConfirm->id_RANfunctionID -idx8- alias primitive
    }
    #endif/*======== End Hardcode IE -idx7: id_RANfunctionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_RICactionsConfirmedForModification_List - optional=======*/
    {
    	 p_RICsubscriptionModificationConfirm->bitmask |= E2AP_RICSUBSCRIPTION_MODIFICATION_CONFIRM_e2ap_ID_RICACTIONS_CONFIRMED_FOR_MODIFICATION_LIST_PRESENT;
    	/*=== START LIST -idx10 - RICactions_ConfirmedForModification_List===*/
    	p_RICsubscriptionModificationConfirm->id_RICactionsConfirmedForModification_List.id_RICaction_ConfirmedForModification_Item_count = 1;
    	/*=== START SEQUENCE -idx11 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-ConfirmedForModification-List->RICaction-ConfirmedForModification-ItemIEs->RICaction-ConfirmedForModification-Item -ROOTS2 RICaction_ConfirmedForModification_Item ===*/
    	//hc-sequence-ELEM 1: -idx12 -roots2 RICaction_ConfirmedForModification_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx13- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-ConfirmedForModification-List->RICaction-ConfirmedForModification-ItemIEs->RICaction-ConfirmedForModification-Item->RICactionID 
    	p_RICsubscriptionModificationConfirm->id_RICactionsConfirmedForModification_List.id_RICaction_ConfirmedForModification_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx13- alias primitive
    	//end of hc-sequence-ELEM 1: -idx12 -roots2 RICaction_ConfirmedForModification_Item->ricActionID - alias = 6
	
    	/*=== END SEQUENCE -idx11 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-ConfirmedForModification-List->RICaction-ConfirmedForModification-ItemIEs->RICaction-ConfirmedForModification-Item - RICaction_ConfirmedForModification_Item -ROOTS2 ===*/
    	/*=== END LIST  -idx10 - RICactions_ConfirmedForModification_List ===*/
    }
    #endif/*======== End Hardcode IE -idx9: id_RICactionsConfirmedForModification_List - optional ========*/

    #if 1/*======== Start Hardcode IE -idx14: id_RICactionsRefusedToBeModified_List - optional=======*/
    {
    	 p_RICsubscriptionModificationConfirm->bitmask |= E2AP_RICSUBSCRIPTION_MODIFICATION_CONFIRM_e2ap_ID_RICACTIONS_REFUSED_TO_BE_MODIFIED_LIST_PRESENT;
    	/*=== START LIST -idx15 - RICactions_RefusedToBeModified_List===*/
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item_count = 1;
    	/*=== START SEQUENCE -idx16 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item -ROOTS3 RICaction_RefusedToBeModified_Item ===*/
    	//hc-sequence-ELEM 1: -idx17 -roots3 RICaction_RefusedToBeModified_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx18- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->RICactionID 
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx18- alias primitive
    	//end of hc-sequence-ELEM 1: -idx17 -roots3 RICaction_RefusedToBeModified_Item->ricActionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx19 -roots3 RICaction_RefusedToBeModified_Item->cause - alias = -1 -mandatory
    	/*=== START CHOICE -idx20 -ROOTC1 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx21 -rootc1: Cause->ricRequest - alias = 13
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx22 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause->CauseRICrequest
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item[0].cause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx22- alias primitive
	
    	#endif /*choice-ELEM 1 -idx21 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 2 -idx23 -rootc1: Cause->ricService - alias = 13
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx24 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause->CauseRICservice
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item[0].cause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx24- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx23 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 3 -idx25 -rootc1: Cause->e2Node - alias = 13
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx26 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause->CauseE2node
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item[0].cause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx26- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx25 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 4 -idx27 -rootc1: Cause->transport - alias = 13
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx28 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause->CauseTransport
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item[0].cause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx28- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx27 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 5 -idx29 -rootc1: Cause->protocol - alias = 13
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx30 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause->CauseProtocol
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item[0].cause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx30- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx29 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 6 -idx31 -rootc1: Cause->misc - alias = 13
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx32 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause->CauseMisc
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item[0].cause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx32- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx31 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 7 -idx33 -rootc1: Cause->serviceLayer - alias = -1
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx34 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause->CauseServiceLayer -ROOTS4 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx35 -roots4 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx36- alias primitive - pid = 9 - OCTET STRING - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item[0].cause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause);
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item[0].cause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause));
    	XNAP_MEMCPY(p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeModified_List.id_RICaction_RefusedToBeModified_Item[0].cause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause, sizeof(temp_buff_for_serviceLayerCause)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx36- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx35 -roots4 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx34 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS4 ===*/
    	#endif /*hc-choice-ELEM 7 -idx33 -rootc1*/
	
    	/*=== END CHOICE -idx20 -ROOTC1 -Cause ===*/
    	//end of hc-sequence-ELEM 2: -idx19 -roots3 RICaction_RefusedToBeModified_Item->cause - alias = -1
	
    	/*=== END SEQUENCE -idx16 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item - RICaction_RefusedToBeModified_Item -ROOTS3 ===*/
    	/*=== END LIST  -idx15 - RICactions_RefusedToBeModified_List ===*/
    }
    #endif/*======== End Hardcode IE -idx14: id_RICactionsRefusedToBeModified_List - optional ========*/

    #if 1/*======== Start Hardcode IE -idx37: id_RICactionsConfirmedForRemoval_List - optional=======*/
    {
    	 p_RICsubscriptionModificationConfirm->bitmask |= E2AP_RICSUBSCRIPTION_MODIFICATION_CONFIRM_e2ap_ID_RICACTIONS_CONFIRMED_FOR_REMOVAL_LIST_PRESENT;
    	/*=== START LIST -idx38 - RICactions_ConfirmedForRemoval_List===*/
    	p_RICsubscriptionModificationConfirm->id_RICactionsConfirmedForRemoval_List.id_RICaction_ConfirmedForRemoval_Item_count = 1;
    	/*=== START SEQUENCE -idx39 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-ConfirmedForRemoval-List->RICaction-ConfirmedForRemoval-ItemIEs->RICaction-ConfirmedForRemoval-Item -ROOTS5 RICaction_ConfirmedForRemoval_Item ===*/
    	//hc-sequence-ELEM 1: -idx40 -roots5 RICaction_ConfirmedForRemoval_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx41- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-ConfirmedForRemoval-List->RICaction-ConfirmedForRemoval-ItemIEs->RICaction-ConfirmedForRemoval-Item->RICactionID 
    	p_RICsubscriptionModificationConfirm->id_RICactionsConfirmedForRemoval_List.id_RICaction_ConfirmedForRemoval_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx41- alias primitive
    	//end of hc-sequence-ELEM 1: -idx40 -roots5 RICaction_ConfirmedForRemoval_Item->ricActionID - alias = 6
	
    	/*=== END SEQUENCE -idx39 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-ConfirmedForRemoval-List->RICaction-ConfirmedForRemoval-ItemIEs->RICaction-ConfirmedForRemoval-Item - RICaction_ConfirmedForRemoval_Item -ROOTS5 ===*/
    	/*=== END LIST  -idx38 - RICactions_ConfirmedForRemoval_List ===*/
    }
    #endif/*======== End Hardcode IE -idx37: id_RICactionsConfirmedForRemoval_List - optional ========*/

    #if 1/*======== Start Hardcode IE -idx42: id_RICactionsRefusedToBeRemoved_List - optional=======*/
    {
    	 p_RICsubscriptionModificationConfirm->bitmask |= E2AP_RICSUBSCRIPTION_MODIFICATION_CONFIRM_e2ap_ID_RICACTIONS_REFUSED_TO_BE_REMOVED_LIST_PRESENT;
    	/*=== START LIST -idx43 - RICactions_RefusedToBeRemoved_List===*/
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item_count = 1;
    	/*=== START SEQUENCE -idx44 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item -ROOTS6 RICaction_RefusedToBeRemoved_Item ===*/
    	//hc-sequence-ELEM 1: -idx45 -roots6 RICaction_RefusedToBeRemoved_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx46- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->RICactionID 
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx46- alias primitive
    	//end of hc-sequence-ELEM 1: -idx45 -roots6 RICaction_RefusedToBeRemoved_Item->ricActionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx47 -roots6 RICaction_RefusedToBeRemoved_Item->cause - alias = -1 -mandatory
    	/*=== START CHOICE -idx48 -ROOTC2 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx49 -rootc2: Cause->ricRequest - alias = 13
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx50 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause->CauseRICrequest
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item[0].cause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx50- alias primitive
	
    	#endif /*choice-ELEM 1 -idx49 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 2 -idx51 -rootc2: Cause->ricService - alias = 13
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx52 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause->CauseRICservice
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item[0].cause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx52- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx51 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 3 -idx53 -rootc2: Cause->e2Node - alias = 13
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx54 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause->CauseE2node
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item[0].cause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx54- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx53 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 4 -idx55 -rootc2: Cause->transport - alias = 13
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx56 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause->CauseTransport
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item[0].cause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx56- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx55 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 5 -idx57 -rootc2: Cause->protocol - alias = 13
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx58 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause->CauseProtocol
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item[0].cause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx58- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx57 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 6 -idx59 -rootc2: Cause->misc - alias = 13
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx60 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause->CauseMisc
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item[0].cause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx60- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx59 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 7 -idx61 -rootc2: Cause->serviceLayer - alias = -1
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx62 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause->CauseServiceLayer -ROOTS7 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx63 -roots7 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx64- alias primitive - pid = 9 - OCTET STRING - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause_1[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item[0].cause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause_1);
    	p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item[0].cause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause_1));
    	XNAP_MEMCPY(p_RICsubscriptionModificationConfirm->id_RICactionsRefusedToBeRemoved_List.id_RICaction_RefusedToBeRemoved_Item[0].cause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause_1, sizeof(temp_buff_for_serviceLayerCause_1)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx64- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx63 -roots7 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx62 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS7 ===*/
    	#endif /*hc-choice-ELEM 7 -idx61 -rootc2*/
	
    	/*=== END CHOICE -idx48 -ROOTC2 -Cause ===*/
    	//end of hc-sequence-ELEM 2: -idx47 -roots6 RICaction_RefusedToBeRemoved_Item->cause - alias = -1
	
    	/*=== END SEQUENCE -idx44 - RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item - RICaction_RefusedToBeRemoved_Item -ROOTS6 ===*/
    	/*=== END LIST  -idx43 - RICactions_RefusedToBeRemoved_List ===*/
    }
    #endif/*======== End Hardcode IE -idx42: id_RICactionsRefusedToBeRemoved_List - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICsubscriptionModificationConfirm : (RICsubscriptionModificationConfirm) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICsubscriptionModificationConfirm
    protocolIEs : (RICsubscriptionModificationConfirm-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICrequestID->ricInstanceID
        RANfunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RANfunctionID
        RICactions-ConfirmedForModification-List : (RICactions-ConfirmedForModification-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-ConfirmedForModification-List
            RICaction-ConfirmedForModification-ItemIEs : (RICaction-ConfirmedForModification-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-ConfirmedForModification-List->RICaction-ConfirmedForModification-ItemIEs
                RICaction-ConfirmedForModification-Item : (RICaction-ConfirmedForModification-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-ConfirmedForModification-List->RICaction-ConfirmedForModification-ItemIEs->RICaction-ConfirmedForModification-Item
                    ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-ConfirmedForModification-List->RICaction-ConfirmedForModification-ItemIEs->RICaction-ConfirmedForModification-Item->RICactionID
        RICactions-RefusedToBeModified-List : (RICactions-RefusedToBeModified-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List
            RICaction-RefusedToBeModified-ItemIEs : (RICaction-RefusedToBeModified-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs
                RICaction-RefusedToBeModified-Item : (RICaction-RefusedToBeModified-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item
                    ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->RICactionID
                    cause : (Cause) 					---- (CHOICE) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause
                        ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause->CauseRICrequest
                        ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause->CauseRICservice
                        e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause->CauseE2node
                        transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause->CauseTransport
                        protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause->CauseProtocol
                        misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause->CauseMisc
                        serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause->CauseServiceLayer
                            serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeModified-List->RICaction-RefusedToBeModified-ItemIEs->RICaction-RefusedToBeModified-Item->Cause->CauseServiceLayer->ServiceLayerCause
        RICactions-ConfirmedForRemoval-List : (RICactions-ConfirmedForRemoval-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-ConfirmedForRemoval-List
            RICaction-ConfirmedForRemoval-ItemIEs : (RICaction-ConfirmedForRemoval-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-ConfirmedForRemoval-List->RICaction-ConfirmedForRemoval-ItemIEs
                RICaction-ConfirmedForRemoval-Item : (RICaction-ConfirmedForRemoval-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-ConfirmedForRemoval-List->RICaction-ConfirmedForRemoval-ItemIEs->RICaction-ConfirmedForRemoval-Item
                    ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-ConfirmedForRemoval-List->RICaction-ConfirmedForRemoval-ItemIEs->RICaction-ConfirmedForRemoval-Item->RICactionID
        RICactions-RefusedToBeRemoved-List : (RICactions-RefusedToBeRemoved-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List
            RICaction-RefusedToBeRemoved-ItemIEs : (RICaction-RefusedToBeRemoved-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs
                RICaction-RefusedToBeRemoved-Item : (RICaction-RefusedToBeRemoved-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item
                    ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->RICactionID
                    cause : (Cause) 					---- (CHOICE) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause
                        ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause->CauseRICrequest
                        ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause->CauseRICservice
                        e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause->CauseE2node
                        transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause->CauseTransport
                        protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause->CauseProtocol
                        misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause->CauseMisc
                        serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause->CauseServiceLayer
                            serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationConfirm->RICsubscriptionModificationConfirm-IEs->RICactions-RefusedToBeRemoved-List->RICaction-RefusedToBeRemoved-ItemIEs->RICaction-RefusedToBeRemoved-Item->Cause->CauseServiceLayer->ServiceLayerCause
*/
#endif // ASSIGN_HARDCODE_RICSUBSCRIPTION_MODIFICATION_CONFIRM_H

