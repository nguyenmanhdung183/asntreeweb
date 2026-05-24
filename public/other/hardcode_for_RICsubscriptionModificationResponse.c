#ifndef ASSIGN_HARDCODE_RICSUBSCRIPTION_MODIFICATION_RESPONSE_H
#define ASSIGN_HARDCODE_RICSUBSCRIPTION_MODIFICATION_RESPONSE_H
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

xnap_return_et assign_hardcode_value_RICsubscriptionModificationResponse(e2ap_RICsubscriptionModificationResponse_t* p_RICsubscriptionModificationResponse)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICrequestID->ricRequestorID
    	p_RICsubscriptionModificationResponse->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICrequestID->ricInstanceID
    	p_RICsubscriptionModificationResponse->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RANfunctionID - mandatory=======*/
    {
    	//hc-p_RICsubscriptionModificationResponse->id_RANfunctionID -idx8- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RANfunctionID 
    	p_RICsubscriptionModificationResponse->id_RANfunctionID = 2047;// change integer here
    	//end of hc-p_RICsubscriptionModificationResponse->id_RANfunctionID -idx8- alias primitive
    }
    #endif/*======== End Hardcode IE -idx7: id_RANfunctionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_RICactionsRemovedForModification_List - optional=======*/
    {
    	 p_RICsubscriptionModificationResponse->bitmask |= E2AP_RICSUBSCRIPTION_MODIFICATION_RESPONSE_e2ap_ID_RICACTIONS_REMOVED_FOR_MODIFICATION_LIST_PRESENT;
    	/*=== START LIST -idx10 - RICactions_RemovedForModification_List===*/
    	p_RICsubscriptionModificationResponse->id_RICactionsRemovedForModification_List.id_RICaction_RemovedForModification_Item_count = 1;
    	/*=== START SEQUENCE -idx11 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-RemovedForModification-List->RICaction-RemovedForModification-ItemIEs->RICaction-RemovedForModification-Item -ROOTS2 RICaction_RemovedForModification_Item ===*/
    	//hc-sequence-ELEM 1: -idx12 -roots2 RICaction_RemovedForModification_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx13- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-RemovedForModification-List->RICaction-RemovedForModification-ItemIEs->RICaction-RemovedForModification-Item->RICactionID 
    	p_RICsubscriptionModificationResponse->id_RICactionsRemovedForModification_List.id_RICaction_RemovedForModification_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx13- alias primitive
    	//end of hc-sequence-ELEM 1: -idx12 -roots2 RICaction_RemovedForModification_Item->ricActionID - alias = 6
	
    	/*=== END SEQUENCE -idx11 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-RemovedForModification-List->RICaction-RemovedForModification-ItemIEs->RICaction-RemovedForModification-Item - RICaction_RemovedForModification_Item -ROOTS2 ===*/
    	/*=== END LIST  -idx10 - RICactions_RemovedForModification_List ===*/
    }
    #endif/*======== End Hardcode IE -idx9: id_RICactionsRemovedForModification_List - optional ========*/

    #if 1/*======== Start Hardcode IE -idx14: id_RICactionsFailedToBeRemovedForModification_List - optional=======*/
    {
    	 p_RICsubscriptionModificationResponse->bitmask |= E2AP_RICSUBSCRIPTION_MODIFICATION_RESPONSE_e2ap_ID_RICACTIONS_FAILED_TO_BE_REMOVED_FOR_MODIFICATION_LIST_PRESENT;
    	/*=== START LIST -idx15 - RICactions_FailedToBeRemovedForModification_List===*/
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item_count = 1;
    	/*=== START SEQUENCE -idx16 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item -ROOTS3 RICaction_FailedToBeRemovedForModification_Item ===*/
    	//hc-sequence-ELEM 1: -idx17 -roots3 RICaction_FailedToBeRemovedForModification_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx18- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->RICactionID 
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx18- alias primitive
    	//end of hc-sequence-ELEM 1: -idx17 -roots3 RICaction_FailedToBeRemovedForModification_Item->ricActionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx19 -roots3 RICaction_FailedToBeRemovedForModification_Item->cause - alias = -1 -mandatory
    	/*=== START CHOICE -idx20 -ROOTC1 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx21 -rootc1: Cause->ricRequest - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx22 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause->CauseRICrequest
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item[0].cause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx22- alias primitive
	
    	#endif /*choice-ELEM 1 -idx21 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 2 -idx23 -rootc1: Cause->ricService - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx24 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause->CauseRICservice
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item[0].cause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx24- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx23 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 3 -idx25 -rootc1: Cause->e2Node - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx26 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause->CauseE2node
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item[0].cause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx26- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx25 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 4 -idx27 -rootc1: Cause->transport - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx28 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause->CauseTransport
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item[0].cause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx28- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx27 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 5 -idx29 -rootc1: Cause->protocol - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx30 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause->CauseProtocol
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item[0].cause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx30- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx29 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 6 -idx31 -rootc1: Cause->misc - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx32 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause->CauseMisc
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item[0].cause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx32- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx31 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 7 -idx33 -rootc1: Cause->serviceLayer - alias = -1
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx34 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause->CauseServiceLayer -ROOTS4 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx35 -roots4 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx36- alias primitive - pid = 9 - OCTET STRING - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item[0].cause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause);
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item[0].cause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause));
    	XNAP_MEMCPY(p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeRemovedForModification_List.id_RICaction_FailedToBeRemovedForModification_Item[0].cause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause, sizeof(temp_buff_for_serviceLayerCause)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx36- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx35 -roots4 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx34 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS4 ===*/
    	#endif /*hc-choice-ELEM 7 -idx33 -rootc1*/
	
    	/*=== END CHOICE -idx20 -ROOTC1 -Cause ===*/
    	//end of hc-sequence-ELEM 2: -idx19 -roots3 RICaction_FailedToBeRemovedForModification_Item->cause - alias = -1
	
    	/*=== END SEQUENCE -idx16 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item - RICaction_FailedToBeRemovedForModification_Item -ROOTS3 ===*/
    	/*=== END LIST  -idx15 - RICactions_FailedToBeRemovedForModification_List ===*/
    }
    #endif/*======== End Hardcode IE -idx14: id_RICactionsFailedToBeRemovedForModification_List - optional ========*/

    #if 1/*======== Start Hardcode IE -idx37: id_RICactionsModifiedForModification_List - optional=======*/
    {
    	 p_RICsubscriptionModificationResponse->bitmask |= E2AP_RICSUBSCRIPTION_MODIFICATION_RESPONSE_e2ap_ID_RICACTIONS_MODIFIED_FOR_MODIFICATION_LIST_PRESENT;
    	/*=== START LIST -idx38 - RICactions_ModifiedForModification_List===*/
    	p_RICsubscriptionModificationResponse->id_RICactionsModifiedForModification_List.id_RICaction_ModifiedForModification_Item_count = 1;
    	/*=== START SEQUENCE -idx39 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-ModifiedForModification-List->RICaction-ModifiedForModification-ItemIEs->RICaction-ModifiedForModification-Item -ROOTS5 RICaction_ModifiedForModification_Item ===*/
    	//hc-sequence-ELEM 1: -idx40 -roots5 RICaction_ModifiedForModification_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx41- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-ModifiedForModification-List->RICaction-ModifiedForModification-ItemIEs->RICaction-ModifiedForModification-Item->RICactionID 
    	p_RICsubscriptionModificationResponse->id_RICactionsModifiedForModification_List.id_RICaction_ModifiedForModification_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx41- alias primitive
    	//end of hc-sequence-ELEM 1: -idx40 -roots5 RICaction_ModifiedForModification_Item->ricActionID - alias = 6
	
    	/*=== END SEQUENCE -idx39 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-ModifiedForModification-List->RICaction-ModifiedForModification-ItemIEs->RICaction-ModifiedForModification-Item - RICaction_ModifiedForModification_Item -ROOTS5 ===*/
    	/*=== END LIST  -idx38 - RICactions_ModifiedForModification_List ===*/
    }
    #endif/*======== End Hardcode IE -idx37: id_RICactionsModifiedForModification_List - optional ========*/

    #if 1/*======== Start Hardcode IE -idx42: id_RICactionsFailedToBeModifiedForModification_List - optional=======*/
    {
    	 p_RICsubscriptionModificationResponse->bitmask |= E2AP_RICSUBSCRIPTION_MODIFICATION_RESPONSE_e2ap_ID_RICACTIONS_FAILED_TO_BE_MODIFIED_FOR_MODIFICATION_LIST_PRESENT;
    	/*=== START LIST -idx43 - RICactions_FailedToBeModifiedForModification_List===*/
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item_count = 1;
    	/*=== START SEQUENCE -idx44 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item -ROOTS6 RICaction_FailedToBeModifiedForModification_Item ===*/
    	//hc-sequence-ELEM 1: -idx45 -roots6 RICaction_FailedToBeModifiedForModification_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx46- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->RICactionID 
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx46- alias primitive
    	//end of hc-sequence-ELEM 1: -idx45 -roots6 RICaction_FailedToBeModifiedForModification_Item->ricActionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx47 -roots6 RICaction_FailedToBeModifiedForModification_Item->cause - alias = -1 -mandatory
    	/*=== START CHOICE -idx48 -ROOTC2 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx49 -rootc2: Cause->ricRequest - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx50 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause->CauseRICrequest
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item[0].cause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx50- alias primitive
	
    	#endif /*choice-ELEM 1 -idx49 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 2 -idx51 -rootc2: Cause->ricService - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx52 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause->CauseRICservice
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item[0].cause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx52- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx51 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 3 -idx53 -rootc2: Cause->e2Node - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx54 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause->CauseE2node
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item[0].cause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx54- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx53 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 4 -idx55 -rootc2: Cause->transport - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx56 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause->CauseTransport
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item[0].cause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx56- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx55 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 5 -idx57 -rootc2: Cause->protocol - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx58 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause->CauseProtocol
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item[0].cause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx58- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx57 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 6 -idx59 -rootc2: Cause->misc - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx60 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause->CauseMisc
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item[0].cause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx60- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx59 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 7 -idx61 -rootc2: Cause->serviceLayer - alias = -1
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx62 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause->CauseServiceLayer -ROOTS7 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx63 -roots7 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx64- alias primitive - pid = 9 - OCTET STRING - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause_1[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item[0].cause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause_1);
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item[0].cause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause_1));
    	XNAP_MEMCPY(p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeModifiedForModification_List.id_RICaction_FailedToBeModifiedForModification_Item[0].cause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause_1, sizeof(temp_buff_for_serviceLayerCause_1)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx64- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx63 -roots7 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx62 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS7 ===*/
    	#endif /*hc-choice-ELEM 7 -idx61 -rootc2*/
	
    	/*=== END CHOICE -idx48 -ROOTC2 -Cause ===*/
    	//end of hc-sequence-ELEM 2: -idx47 -roots6 RICaction_FailedToBeModifiedForModification_Item->cause - alias = -1
	
    	/*=== END SEQUENCE -idx44 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item - RICaction_FailedToBeModifiedForModification_Item -ROOTS6 ===*/
    	/*=== END LIST  -idx43 - RICactions_FailedToBeModifiedForModification_List ===*/
    }
    #endif/*======== End Hardcode IE -idx42: id_RICactionsFailedToBeModifiedForModification_List - optional ========*/

    #if 1/*======== Start Hardcode IE -idx65: id_RICactionsAddedForModification_List - optional=======*/
    {
    	 p_RICsubscriptionModificationResponse->bitmask |= E2AP_RICSUBSCRIPTION_MODIFICATION_RESPONSE_e2ap_ID_RICACTIONS_ADDED_FOR_MODIFICATION_LIST_PRESENT;
    	/*=== START LIST -idx66 - RICactions_AddedForModification_List===*/
    	p_RICsubscriptionModificationResponse->id_RICactionsAddedForModification_List.id_RICaction_AddedForModification_Item_count = 1;
    	/*=== START SEQUENCE -idx67 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-AddedForModification-List->RICaction-AddedForModification-ItemIEs->RICaction-AddedForModification-Item -ROOTS8 RICaction_AddedForModification_Item ===*/
    	//hc-sequence-ELEM 1: -idx68 -roots8 RICaction_AddedForModification_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx69- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-AddedForModification-List->RICaction-AddedForModification-ItemIEs->RICaction-AddedForModification-Item->RICactionID 
    	p_RICsubscriptionModificationResponse->id_RICactionsAddedForModification_List.id_RICaction_AddedForModification_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx69- alias primitive
    	//end of hc-sequence-ELEM 1: -idx68 -roots8 RICaction_AddedForModification_Item->ricActionID - alias = 6
	
    	/*=== END SEQUENCE -idx67 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-AddedForModification-List->RICaction-AddedForModification-ItemIEs->RICaction-AddedForModification-Item - RICaction_AddedForModification_Item -ROOTS8 ===*/
    	/*=== END LIST  -idx66 - RICactions_AddedForModification_List ===*/
    }
    #endif/*======== End Hardcode IE -idx65: id_RICactionsAddedForModification_List - optional ========*/

    #if 1/*======== Start Hardcode IE -idx70: id_RICactionsFailedToBeAddedForModification_List - optional=======*/
    {
    	 p_RICsubscriptionModificationResponse->bitmask |= E2AP_RICSUBSCRIPTION_MODIFICATION_RESPONSE_e2ap_ID_RICACTIONS_FAILED_TO_BE_ADDED_FOR_MODIFICATION_LIST_PRESENT;
    	/*=== START LIST -idx71 - RICactions_FailedToBeAddedForModification_List===*/
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item_count = 1;
    	/*=== START SEQUENCE -idx72 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item -ROOTS9 RICaction_FailedToBeAddedForModification_Item ===*/
    	//hc-sequence-ELEM 1: -idx73 -roots9 RICaction_FailedToBeAddedForModification_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx74- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->RICactionID 
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx74- alias primitive
    	//end of hc-sequence-ELEM 1: -idx73 -roots9 RICaction_FailedToBeAddedForModification_Item->ricActionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx75 -roots9 RICaction_FailedToBeAddedForModification_Item->cause - alias = -1 -mandatory
    	/*=== START CHOICE -idx76 -ROOTC3 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx77 -rootc3: Cause->ricRequest - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx78 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause->CauseRICrequest
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item[0].cause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx78- alias primitive
	
    	#endif /*choice-ELEM 1 -idx77 -rootc3*/
	
    	#if 0 //hc-choice-ELEM 2 -idx79 -rootc3: Cause->ricService - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx80 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause->CauseRICservice
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item[0].cause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx80- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx79 -rootc3*/
	
    	#if 0 //hc-choice-ELEM 3 -idx81 -rootc3: Cause->e2Node - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx82 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause->CauseE2node
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item[0].cause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx82- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx81 -rootc3*/
	
    	#if 0 //hc-choice-ELEM 4 -idx83 -rootc3: Cause->transport - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx84 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause->CauseTransport
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item[0].cause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx84- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx83 -rootc3*/
	
    	#if 0 //hc-choice-ELEM 5 -idx85 -rootc3: Cause->protocol - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx86 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause->CauseProtocol
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item[0].cause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx86- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx85 -rootc3*/
	
    	#if 0 //hc-choice-ELEM 6 -idx87 -rootc3: Cause->misc - alias = 13
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx88 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause->CauseMisc
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item[0].cause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx88- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx87 -rootc3*/
	
    	#if 0 //hc-choice-ELEM 7 -idx89 -rootc3: Cause->serviceLayer - alias = -1
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx90 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause->CauseServiceLayer -ROOTS10 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx91 -roots10 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx92- alias primitive - pid = 9 - OCTET STRING - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause_2[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item[0].cause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause_2);
    	p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item[0].cause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause_2));
    	XNAP_MEMCPY(p_RICsubscriptionModificationResponse->id_RICactionsFailedToBeAddedForModification_List.id_RICaction_FailedToBeAddedForModification_Item[0].cause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause_2, sizeof(temp_buff_for_serviceLayerCause_2)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx92- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx91 -roots10 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx90 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS10 ===*/
    	#endif /*hc-choice-ELEM 7 -idx89 -rootc3*/
	
    	/*=== END CHOICE -idx76 -ROOTC3 -Cause ===*/
    	//end of hc-sequence-ELEM 2: -idx75 -roots9 RICaction_FailedToBeAddedForModification_Item->cause - alias = -1
	
    	/*=== END SEQUENCE -idx72 - RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item - RICaction_FailedToBeAddedForModification_Item -ROOTS9 ===*/
    	/*=== END LIST  -idx71 - RICactions_FailedToBeAddedForModification_List ===*/
    }
    #endif/*======== End Hardcode IE -idx70: id_RICactionsFailedToBeAddedForModification_List - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICsubscriptionModificationResponse : (RICsubscriptionModificationResponse) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICsubscriptionModificationResponse
    protocolIEs : (RICsubscriptionModificationResponse-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICrequestID->ricInstanceID
        RANfunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RANfunctionID
        RICactions-RemovedForModification-List : (RICactions-RemovedForModification-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-RemovedForModification-List
            RICaction-RemovedForModification-ItemIEs : (RICaction-RemovedForModification-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-RemovedForModification-List->RICaction-RemovedForModification-ItemIEs
                RICaction-RemovedForModification-Item : (RICaction-RemovedForModification-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-RemovedForModification-List->RICaction-RemovedForModification-ItemIEs->RICaction-RemovedForModification-Item
                    ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-RemovedForModification-List->RICaction-RemovedForModification-ItemIEs->RICaction-RemovedForModification-Item->RICactionID
        RICactions-FailedToBeRemovedForModification-List : (RICactions-FailedToBeRemovedForModification-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List
            RICaction-FailedToBeRemovedForModification-ItemIEs : (RICaction-FailedToBeRemovedForModification-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs
                RICaction-FailedToBeRemovedForModification-Item : (RICaction-FailedToBeRemovedForModification-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item
                    ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->RICactionID
                    cause : (Cause) 					---- (CHOICE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause
                        ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause->CauseRICrequest
                        ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause->CauseRICservice
                        e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause->CauseE2node
                        transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause->CauseTransport
                        protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause->CauseProtocol
                        misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause->CauseMisc
                        serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause->CauseServiceLayer
                            serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeRemovedForModification-List->RICaction-FailedToBeRemovedForModification-ItemIEs->RICaction-FailedToBeRemovedForModification-Item->Cause->CauseServiceLayer->ServiceLayerCause
        RICactions-ModifiedForModification-List : (RICactions-ModifiedForModification-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-ModifiedForModification-List
            RICaction-ModifiedForModification-ItemIEs : (RICaction-ModifiedForModification-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-ModifiedForModification-List->RICaction-ModifiedForModification-ItemIEs
                RICaction-ModifiedForModification-Item : (RICaction-ModifiedForModification-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-ModifiedForModification-List->RICaction-ModifiedForModification-ItemIEs->RICaction-ModifiedForModification-Item
                    ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-ModifiedForModification-List->RICaction-ModifiedForModification-ItemIEs->RICaction-ModifiedForModification-Item->RICactionID
        RICactions-FailedToBeModifiedForModification-List : (RICactions-FailedToBeModifiedForModification-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List
            RICaction-FailedToBeModifiedForModification-ItemIEs : (RICaction-FailedToBeModifiedForModification-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs
                RICaction-FailedToBeModifiedForModification-Item : (RICaction-FailedToBeModifiedForModification-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item
                    ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->RICactionID
                    cause : (Cause) 					---- (CHOICE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause
                        ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause->CauseRICrequest
                        ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause->CauseRICservice
                        e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause->CauseE2node
                        transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause->CauseTransport
                        protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause->CauseProtocol
                        misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause->CauseMisc
                        serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause->CauseServiceLayer
                            serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeModifiedForModification-List->RICaction-FailedToBeModifiedForModification-ItemIEs->RICaction-FailedToBeModifiedForModification-Item->Cause->CauseServiceLayer->ServiceLayerCause
        RICactions-AddedForModification-List : (RICactions-AddedForModification-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-AddedForModification-List
            RICaction-AddedForModification-ItemIEs : (RICaction-AddedForModification-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-AddedForModification-List->RICaction-AddedForModification-ItemIEs
                RICaction-AddedForModification-Item : (RICaction-AddedForModification-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-AddedForModification-List->RICaction-AddedForModification-ItemIEs->RICaction-AddedForModification-Item
                    ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-AddedForModification-List->RICaction-AddedForModification-ItemIEs->RICaction-AddedForModification-Item->RICactionID
        RICactions-FailedToBeAddedForModification-List : (RICactions-FailedToBeAddedForModification-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List
            RICaction-FailedToBeAddedForModification-ItemIEs : (RICaction-FailedToBeAddedForModification-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs
                RICaction-FailedToBeAddedForModification-Item : (RICaction-FailedToBeAddedForModification-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item
                    ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->RICactionID
                    cause : (Cause) 					---- (CHOICE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause
                        ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause->CauseRICrequest
                        ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause->CauseRICservice
                        e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause->CauseE2node
                        transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause->CauseTransport
                        protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause->CauseProtocol
                        misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause->CauseMisc
                        serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause->CauseServiceLayer
                            serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationResponse->RICsubscriptionModificationResponse-IEs->RICactions-FailedToBeAddedForModification-List->RICaction-FailedToBeAddedForModification-ItemIEs->RICaction-FailedToBeAddedForModification-Item->Cause->CauseServiceLayer->ServiceLayerCause
*/
#endif // ASSIGN_HARDCODE_RICSUBSCRIPTION_MODIFICATION_RESPONSE_H

