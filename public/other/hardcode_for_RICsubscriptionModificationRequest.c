#ifndef ASSIGN_HARDCODE_RICSUBSCRIPTION_MODIFICATION_REQUEST_H
#define ASSIGN_HARDCODE_RICSUBSCRIPTION_MODIFICATION_REQUEST_H
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

xnap_return_et assign_hardcode_value_RICsubscriptionModificationRequest(e2ap_RICsubscriptionModificationRequest_t* p_RICsubscriptionModificationRequest)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICrequestID->ricRequestorID
    	p_RICsubscriptionModificationRequest->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICrequestID->ricInstanceID
    	p_RICsubscriptionModificationRequest->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RANfunctionID - mandatory=======*/
    {
    	//hc-p_RICsubscriptionModificationRequest->id_RANfunctionID -idx8- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RANfunctionID 
    	p_RICsubscriptionModificationRequest->id_RANfunctionID = 2047;// change integer here
    	//end of hc-p_RICsubscriptionModificationRequest->id_RANfunctionID -idx8- alias primitive
    }
    #endif/*======== End Hardcode IE -idx7: id_RANfunctionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_RICeventTriggerDefinitionToBeModified - optional=======*/
    {
    	 p_RICsubscriptionModificationRequest->bitmask |= E2AP_RICSUBSCRIPTION_MODIFICATION_REQUEST_e2ap_ID_RICEVENT_TRIGGER_DEFINITION_TO_BE_MODIFIED_PRESENT;
    	//hc-p_RICsubscriptionModificationRequest->id_RICeventTriggerDefinitionToBeModified -idx10- alias primitive - pid = 9 - OCTET STRING - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICeventTriggerDefinition
    	OSOCTET temp_buff_for_p_RICsubscriptionModificationRequest->id_RICeventTriggerDefinitionToBeModified[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICsubscriptionModificationRequest->id_RICeventTriggerDefinitionToBeModified.numocts = sizeof(temp_buff_for_p_RICsubscriptionModificationRequest->id_RICeventTriggerDefinitionToBeModified);
    	p_RICsubscriptionModificationRequest->id_RICeventTriggerDefinitionToBeModified.data = xnap_mem_get(sizeof(temp_buff_for_p_RICsubscriptionModificationRequest->id_RICeventTriggerDefinitionToBeModified));
    	XNAP_MEMCPY(p_RICsubscriptionModificationRequest->id_RICeventTriggerDefinitionToBeModified.data, temp_buff_for_p_RICsubscriptionModificationRequest->id_RICeventTriggerDefinitionToBeModified, sizeof(temp_buff_for_p_RICsubscriptionModificationRequest->id_RICeventTriggerDefinitionToBeModified)); // change octetstring data here
    	//end of hc-p_RICsubscriptionModificationRequest->id_RICeventTriggerDefinitionToBeModified -idx10- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx9: id_RICeventTriggerDefinitionToBeModified - optional ========*/

    #if 1/*======== Start Hardcode IE -idx11: id_RICactionsToBeRemovedForModification_List - optional=======*/
    {
    	 p_RICsubscriptionModificationRequest->bitmask |= E2AP_RICSUBSCRIPTION_MODIFICATION_REQUEST_e2ap_ID_RICACTIONS_TO_BE_REMOVED_FOR_MODIFICATION_LIST_PRESENT;
    	/*=== START LIST -idx12 - RICactions_ToBeRemovedForModification_List===*/
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeRemovedForModification_List.id_RICaction_ToBeRemovedForModification_Item_count = 1;
    	/*=== START SEQUENCE -idx13 - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeRemovedForModification-List->RICaction-ToBeRemovedForModification-ItemIEs->RICaction-ToBeRemovedForModification-Item -ROOTS2 RICaction_ToBeRemovedForModification_Item ===*/
    	//hc-sequence-ELEM 1: -idx14 -roots2 RICaction_ToBeRemovedForModification_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx15- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeRemovedForModification-List->RICaction-ToBeRemovedForModification-ItemIEs->RICaction-ToBeRemovedForModification-Item->RICactionID 
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeRemovedForModification_List.id_RICaction_ToBeRemovedForModification_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx15- alias primitive
    	//end of hc-sequence-ELEM 1: -idx14 -roots2 RICaction_ToBeRemovedForModification_Item->ricActionID - alias = 6
	
    	/*=== END SEQUENCE -idx13 - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeRemovedForModification-List->RICaction-ToBeRemovedForModification-ItemIEs->RICaction-ToBeRemovedForModification-Item - RICaction_ToBeRemovedForModification_Item -ROOTS2 ===*/
    	/*=== END LIST  -idx12 - RICactions_ToBeRemovedForModification_List ===*/
    }
    #endif/*======== End Hardcode IE -idx11: id_RICactionsToBeRemovedForModification_List - optional ========*/

    #if 1/*======== Start Hardcode IE -idx16: id_RICactionsToBeModifiedForModification_List - optional=======*/
    {
    	 p_RICsubscriptionModificationRequest->bitmask |= E2AP_RICSUBSCRIPTION_MODIFICATION_REQUEST_e2ap_ID_RICACTIONS_TO_BE_MODIFIED_FOR_MODIFICATION_LIST_PRESENT;
    	/*=== START LIST -idx17 - RICactions_ToBeModifiedForModification_List===*/
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeModifiedForModification_List.id_RICaction_ToBeModifiedForModification_Item_count = 1;
    	/*=== START SEQUENCE -idx18 - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List->RICaction-ToBeModifiedForModification-ItemIEs->RICaction-ToBeModifiedForModification-Item -ROOTS3 RICaction_ToBeModifiedForModification_Item ===*/
    	//hc-sequence-ELEM 1: -idx19 -roots3 RICaction_ToBeModifiedForModification_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx20- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List->RICaction-ToBeModifiedForModification-ItemIEs->RICaction-ToBeModifiedForModification-Item->RICactionID 
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeModifiedForModification_List.id_RICaction_ToBeModifiedForModification_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx20- alias primitive
    	//end of hc-sequence-ELEM 1: -idx19 -roots3 RICaction_ToBeModifiedForModification_Item->ricActionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx21 -roots3 RICaction_ToBeModifiedForModification_Item->ricActionDefinition - alias = 9 -optional
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeModifiedForModification_List.id_RICaction_ToBeModifiedForModification_Item[0].bitmask |= E2AP_RICACTION_TO_BE_MODIFIED_FOR_MODIFICATION_ITEM_e2ap_RIC_ACTION_DEFINITION_PRESENT;
    	//hc-ricActionDefinition -idx22- alias primitive - pid = 9 - OCTET STRING - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List->RICaction-ToBeModifiedForModification-ItemIEs->RICaction-ToBeModifiedForModification-Item->RICactionDefinition
    	OSOCTET temp_buff_for_ricActionDefinition[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeModifiedForModification_List.id_RICaction_ToBeModifiedForModification_Item[0].ricActionDefinition.numocts = sizeof(temp_buff_for_ricActionDefinition);
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeModifiedForModification_List.id_RICaction_ToBeModifiedForModification_Item[0].ricActionDefinition.data = xnap_mem_get(sizeof(temp_buff_for_ricActionDefinition));
    	XNAP_MEMCPY(p_RICsubscriptionModificationRequest->id_RICactionsToBeModifiedForModification_List.id_RICaction_ToBeModifiedForModification_Item[0].ricActionDefinition.data, temp_buff_for_ricActionDefinition, sizeof(temp_buff_for_ricActionDefinition)); // change octetstring data here
    	//end of hc-ricActionDefinition -idx22- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx21 -roots3 RICaction_ToBeModifiedForModification_Item->ricActionDefinition - alias = 9
	
    	//hc-sequence-ELEM 3: -idx23 -roots3 RICaction_ToBeModifiedForModification_Item->ricActionExecutionOrder - alias = 5 -optional
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeModifiedForModification_List.id_RICaction_ToBeModifiedForModification_Item[0].bitmask |= E2AP_RICACTION_TO_BE_MODIFIED_FOR_MODIFICATION_ITEM_e2ap_RIC_ACTION_EXECUTION_ORDER_PRESENT;
    	//hc-ricActionExecutionOrder -idx24- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List->RICaction-ToBeModifiedForModification-ItemIEs->RICaction-ToBeModifiedForModification-Item->RICactionExecutionOrder 
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeModifiedForModification_List.id_RICaction_ToBeModifiedForModification_Item[0].ricActionExecutionOrder = 127;// change integer here
    	//end of hc-ricActionExecutionOrder -idx24- alias primitive
    	//end of hc-sequence-ELEM 3: -idx23 -roots3 RICaction_ToBeModifiedForModification_Item->ricActionExecutionOrder - alias = 5
	
    	//hc-sequence-ELEM 4: -idx25 -roots3 RICaction_ToBeModifiedForModification_Item->ricSubsequentAction - alias = -1 -optional
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeModifiedForModification_List.id_RICaction_ToBeModifiedForModification_Item[0].bitmask |= E2AP_RICACTION_TO_BE_MODIFIED_FOR_MODIFICATION_ITEM_e2ap_RIC_SUBSEQUENT_ACTION_PRESENT;
    	/*=== START SEQUENCE -idx26 - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List->RICaction-ToBeModifiedForModification-ItemIEs->RICaction-ToBeModifiedForModification-Item->RICsubsequentAction -ROOTS4 RICsubsequentAction ===*/
    	//hc-sequence-ELEM 1: -idx27 -roots4 RICsubsequentAction->ricSubsequentActionType - alias = 13 -mandatory
    	//hc-RICsubsequentActionType -idx28 - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List->RICaction-ToBeModifiedForModification-ItemIEs->RICaction-ToBeModifiedForModification-Item->RICsubsequentAction->RICsubsequentActionType
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeModifiedForModification_List.id_RICaction_ToBeModifiedForModification_Item[0].ricSubsequentAction.ricSubsequentActionType = E2AP_RICSUBSEQUENT_ACTION_TYPE_CONTINUE; // change enum value here
    	//end of hc-RICsubsequentActionType -idx28- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx27 -roots4 RICsubsequentAction->ricSubsequentActionType - alias = 13
	
    	//hc-sequence-ELEM 2: -idx29 -roots4 RICsubsequentAction->ricTimeToWait - alias = 13 -mandatory
    	//hc-RICtimeToWait -idx30 - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List->RICaction-ToBeModifiedForModification-ItemIEs->RICaction-ToBeModifiedForModification-Item->RICsubsequentAction->RICtimeToWait
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeModifiedForModification_List.id_RICaction_ToBeModifiedForModification_Item[0].ricSubsequentAction.ricTimeToWait = E2AP_RICTIME_TO_WAIT_W1MS; // change enum value here
    	//end of hc-RICtimeToWait -idx30- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx29 -roots4 RICsubsequentAction->ricTimeToWait - alias = 13
	
    	/*=== END SEQUENCE -idx26 - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List->RICaction-ToBeModifiedForModification-ItemIEs->RICaction-ToBeModifiedForModification-Item->RICsubsequentAction - RICsubsequentAction -ROOTS4 ===*/
    	//end of hc-sequence-ELEM 4: -idx25 -roots3 RICaction_ToBeModifiedForModification_Item->ricSubsequentAction - alias = -1
	
    	/*=== END SEQUENCE -idx18 - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List->RICaction-ToBeModifiedForModification-ItemIEs->RICaction-ToBeModifiedForModification-Item - RICaction_ToBeModifiedForModification_Item -ROOTS3 ===*/
    	/*=== END LIST  -idx17 - RICactions_ToBeModifiedForModification_List ===*/
    }
    #endif/*======== End Hardcode IE -idx16: id_RICactionsToBeModifiedForModification_List - optional ========*/

    #if 1/*======== Start Hardcode IE -idx31: id_RICactionsToBeAddedForModification_List - optional=======*/
    {
    	 p_RICsubscriptionModificationRequest->bitmask |= E2AP_RICSUBSCRIPTION_MODIFICATION_REQUEST_e2ap_ID_RICACTIONS_TO_BE_ADDED_FOR_MODIFICATION_LIST_PRESENT;
    	/*=== START LIST -idx32 - RICactions_ToBeAddedForModification_List===*/
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeAddedForModification_List.id_RICaction_ToBeAddedForModification_Item_count = 1;
    	/*=== START SEQUENCE -idx33 - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item -ROOTS5 RICaction_ToBeAddedForModification_Item ===*/
    	//hc-sequence-ELEM 1: -idx34 -roots5 RICaction_ToBeAddedForModification_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx35- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item->RICactionID 
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeAddedForModification_List.id_RICaction_ToBeAddedForModification_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx35- alias primitive
    	//end of hc-sequence-ELEM 1: -idx34 -roots5 RICaction_ToBeAddedForModification_Item->ricActionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx36 -roots5 RICaction_ToBeAddedForModification_Item->ricActionType - alias = 13 -mandatory
    	//hc-RICactionType -idx37 - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item->RICactionType
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeAddedForModification_List.id_RICaction_ToBeAddedForModification_Item[0].ricActionType = E2AP_RICACTION_TYPE_REPORT; // change enum value here
    	//end of hc-RICactionType -idx37- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx36 -roots5 RICaction_ToBeAddedForModification_Item->ricActionType - alias = 13
	
    	//hc-sequence-ELEM 3: -idx38 -roots5 RICaction_ToBeAddedForModification_Item->ricActionDefinition - alias = 9 -mandatory
    	//hc-ricActionDefinition -idx39- alias primitive - pid = 9 - OCTET STRING - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item->RICactionDefinition
    	OSOCTET temp_buff_for_ricActionDefinition_1[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeAddedForModification_List.id_RICaction_ToBeAddedForModification_Item[0].ricActionDefinition.numocts = sizeof(temp_buff_for_ricActionDefinition_1);
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeAddedForModification_List.id_RICaction_ToBeAddedForModification_Item[0].ricActionDefinition.data = xnap_mem_get(sizeof(temp_buff_for_ricActionDefinition_1));
    	XNAP_MEMCPY(p_RICsubscriptionModificationRequest->id_RICactionsToBeAddedForModification_List.id_RICaction_ToBeAddedForModification_Item[0].ricActionDefinition.data, temp_buff_for_ricActionDefinition_1, sizeof(temp_buff_for_ricActionDefinition_1)); // change octetstring data here
    	//end of hc-ricActionDefinition -idx39- alias primitive
	
    	//end of hc-sequence-ELEM 3: -idx38 -roots5 RICaction_ToBeAddedForModification_Item->ricActionDefinition - alias = 9
	
    	//hc-sequence-ELEM 4: -idx40 -roots5 RICaction_ToBeAddedForModification_Item->ricActionExecutionOrder - alias = 5 -mandatory
    	//hc-ricActionExecutionOrder -idx41- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item->RICactionExecutionOrder 
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeAddedForModification_List.id_RICaction_ToBeAddedForModification_Item[0].ricActionExecutionOrder = 127;// change integer here
    	//end of hc-ricActionExecutionOrder -idx41- alias primitive
    	//end of hc-sequence-ELEM 4: -idx40 -roots5 RICaction_ToBeAddedForModification_Item->ricActionExecutionOrder - alias = 5
	
    	//hc-sequence-ELEM 5: -idx42 -roots5 RICaction_ToBeAddedForModification_Item->ricSubsequentAction - alias = -1 -optional
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeAddedForModification_List.id_RICaction_ToBeAddedForModification_Item[0].bitmask |= E2AP_RICACTION_TO_BE_ADDED_FOR_MODIFICATION_ITEM_e2ap_RIC_SUBSEQUENT_ACTION_PRESENT;
    	/*=== START SEQUENCE -idx43 - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item->RICsubsequentAction -ROOTS6 RICsubsequentAction ===*/
    	//hc-sequence-ELEM 1: -idx44 -roots6 RICsubsequentAction->ricSubsequentActionType - alias = 13 -mandatory
    	//hc-RICsubsequentActionType -idx45 - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item->RICsubsequentAction->RICsubsequentActionType
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeAddedForModification_List.id_RICaction_ToBeAddedForModification_Item[0].ricSubsequentAction.ricSubsequentActionType = E2AP_RICSUBSEQUENT_ACTION_TYPE_CONTINUE; // change enum value here
    	//end of hc-RICsubsequentActionType -idx45- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx44 -roots6 RICsubsequentAction->ricSubsequentActionType - alias = 13
	
    	//hc-sequence-ELEM 2: -idx46 -roots6 RICsubsequentAction->ricTimeToWait - alias = 13 -mandatory
    	//hc-RICtimeToWait -idx47 - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item->RICsubsequentAction->RICtimeToWait
    	p_RICsubscriptionModificationRequest->id_RICactionsToBeAddedForModification_List.id_RICaction_ToBeAddedForModification_Item[0].ricSubsequentAction.ricTimeToWait = E2AP_RICTIME_TO_WAIT_W1MS; // change enum value here
    	//end of hc-RICtimeToWait -idx47- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx46 -roots6 RICsubsequentAction->ricTimeToWait - alias = 13
	
    	/*=== END SEQUENCE -idx43 - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item->RICsubsequentAction - RICsubsequentAction -ROOTS6 ===*/
    	//end of hc-sequence-ELEM 5: -idx42 -roots5 RICaction_ToBeAddedForModification_Item->ricSubsequentAction - alias = -1
	
    	/*=== END SEQUENCE -idx33 - RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item - RICaction_ToBeAddedForModification_Item -ROOTS5 ===*/
    	/*=== END LIST  -idx32 - RICactions_ToBeAddedForModification_List ===*/
    }
    #endif/*======== End Hardcode IE -idx31: id_RICactionsToBeAddedForModification_List - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICsubscriptionModificationRequest : (RICsubscriptionModificationRequest) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICsubscriptionModificationRequest
    protocolIEs : (RICsubscriptionModificationRequest-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICrequestID->ricInstanceID
        RANfunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RANfunctionID
        RICeventTriggerDefinition : (RICeventTriggerDefinition) 					---- (PRIMITIVE) ---- [O] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICeventTriggerDefinition
        RICactions-ToBeRemovedForModification-List : (RICactions-ToBeRemovedForModification-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeRemovedForModification-List
            RICaction-ToBeRemovedForModification-ItemIEs : (RICaction-ToBeRemovedForModification-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeRemovedForModification-List->RICaction-ToBeRemovedForModification-ItemIEs
                RICaction-ToBeRemovedForModification-Item : (RICaction-ToBeRemovedForModification-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeRemovedForModification-List->RICaction-ToBeRemovedForModification-ItemIEs->RICaction-ToBeRemovedForModification-Item
                    ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeRemovedForModification-List->RICaction-ToBeRemovedForModification-ItemIEs->RICaction-ToBeRemovedForModification-Item->RICactionID
        RICactions-ToBeModifiedForModification-List : (RICactions-ToBeModifiedForModification-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List
            RICaction-ToBeModifiedForModification-ItemIEs : (RICaction-ToBeModifiedForModification-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List->RICaction-ToBeModifiedForModification-ItemIEs
                RICaction-ToBeModifiedForModification-Item : (RICaction-ToBeModifiedForModification-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List->RICaction-ToBeModifiedForModification-ItemIEs->RICaction-ToBeModifiedForModification-Item
                    ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List->RICaction-ToBeModifiedForModification-ItemIEs->RICaction-ToBeModifiedForModification-Item->RICactionID
                    ricActionDefinition : (RICactionDefinition) 					---- (PRIMITIVE) ---- [O] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List->RICaction-ToBeModifiedForModification-ItemIEs->RICaction-ToBeModifiedForModification-Item->RICactionDefinition
                    ricActionExecutionOrder : (RICactionExecutionOrder) 					---- (PRIMITIVE) ---- [O] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List->RICaction-ToBeModifiedForModification-ItemIEs->RICaction-ToBeModifiedForModification-Item->RICactionExecutionOrder
                    ricSubsequentAction : (RICsubsequentAction) 					---- (SEQUENCE) ---- [O] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List->RICaction-ToBeModifiedForModification-ItemIEs->RICaction-ToBeModifiedForModification-Item->RICsubsequentAction
                        ricSubsequentActionType : (RICsubsequentActionType) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List->RICaction-ToBeModifiedForModification-ItemIEs->RICaction-ToBeModifiedForModification-Item->RICsubsequentAction->RICsubsequentActionType
                        ricTimeToWait : (RICtimeToWait) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeModifiedForModification-List->RICaction-ToBeModifiedForModification-ItemIEs->RICaction-ToBeModifiedForModification-Item->RICsubsequentAction->RICtimeToWait
        RICactions-ToBeAddedForModification-List : (RICactions-ToBeAddedForModification-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List
            RICaction-ToBeAddedForModification-ItemIEs : (RICaction-ToBeAddedForModification-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs
                RICaction-ToBeAddedForModification-Item : (RICaction-ToBeAddedForModification-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item
                    ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item->RICactionID
                    ricActionType : (RICactionType) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item->RICactionType
                    ricActionDefinition : (RICactionDefinition) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item->RICactionDefinition
                    ricActionExecutionOrder : (RICactionExecutionOrder) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item->RICactionExecutionOrder
                    ricSubsequentAction : (RICsubsequentAction) 					---- (SEQUENCE) ---- [O] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item->RICsubsequentAction
                        ricSubsequentActionType : (RICsubsequentActionType) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item->RICsubsequentAction->RICsubsequentActionType
                        ricTimeToWait : (RICtimeToWait) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationRequest->RICsubscriptionModificationRequest-IEs->RICactions-ToBeAddedForModification-List->RICaction-ToBeAddedForModification-ItemIEs->RICaction-ToBeAddedForModification-Item->RICsubsequentAction->RICtimeToWait
*/
#endif // ASSIGN_HARDCODE_RICSUBSCRIPTION_MODIFICATION_REQUEST_H

