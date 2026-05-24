#ifndef ASSIGN_HARDCODE_RICSUBSCRIPTION_REQUEST_H
#define ASSIGN_HARDCODE_RICSUBSCRIPTION_REQUEST_H
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

xnap_return_et assign_hardcode_value_RICsubscriptionRequest(e2ap_RICsubscriptionRequest_t* p_RICsubscriptionRequest)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICrequestID->ricRequestorID
    	p_RICsubscriptionRequest->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICrequestID->ricInstanceID
    	p_RICsubscriptionRequest->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RANfunctionID - mandatory=======*/
    {
    	//hc-p_RICsubscriptionRequest->id_RANfunctionID -idx8- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RANfunctionID 
    	p_RICsubscriptionRequest->id_RANfunctionID = 2047;// change integer here
    	//end of hc-p_RICsubscriptionRequest->id_RANfunctionID -idx8- alias primitive
    }
    #endif/*======== End Hardcode IE -idx7: id_RANfunctionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_RICsubscriptionDetails - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx10 - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails -ROOTS2 RICsubscriptionDetails ===*/
    	//hc-sequence-ELEM 1: -idx11 -roots2 RICsubscriptionDetails->ricEventTriggerDefinition - alias = 9 -mandatory
    	//hc-ricEventTriggerDefinition -idx12- alias primitive - pid = 9 - OCTET STRING - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICeventTriggerDefinition
    	OSOCTET temp_buff_for_ricEventTriggerDefinition[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICsubscriptionRequest->id_RICsubscriptionDetails.ricEventTriggerDefinition.numocts = sizeof(temp_buff_for_ricEventTriggerDefinition);
    	p_RICsubscriptionRequest->id_RICsubscriptionDetails.ricEventTriggerDefinition.data = xnap_mem_get(sizeof(temp_buff_for_ricEventTriggerDefinition));
    	XNAP_MEMCPY(p_RICsubscriptionRequest->id_RICsubscriptionDetails.ricEventTriggerDefinition.data, temp_buff_for_ricEventTriggerDefinition, sizeof(temp_buff_for_ricEventTriggerDefinition)); // change octetstring data here
    	//end of hc-ricEventTriggerDefinition -idx12- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx11 -roots2 RICsubscriptionDetails->ricEventTriggerDefinition - alias = 9
	
    	//hc-sequence-ELEM 2: -idx13 -roots2 RICsubscriptionDetails->ricAction_ToBeSetup_List - alias = -1 -mandatory
    	/*=== START LIST -idx14 - RICactions_ToBeSetup_List===*/
    	p_RICsubscriptionRequest->id_RICsubscriptionDetails.ricAction_ToBeSetup_List.id_RICaction_ToBeSetup_Item_count = 1;
    	/*=== START SEQUENCE -idx15 - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item -ROOTS3 RICaction_ToBeSetup_Item ===*/
    	//hc-sequence-ELEM 1: -idx16 -roots3 RICaction_ToBeSetup_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx17- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item->RICactionID 
    	p_RICsubscriptionRequest->id_RICsubscriptionDetails.ricAction_ToBeSetup_List.id_RICaction_ToBeSetup_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx17- alias primitive
    	//end of hc-sequence-ELEM 1: -idx16 -roots3 RICaction_ToBeSetup_Item->ricActionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx18 -roots3 RICaction_ToBeSetup_Item->ricActionType - alias = 13 -mandatory
    	//hc-RICactionType -idx19 - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item->RICactionType
    	p_RICsubscriptionRequest->id_RICsubscriptionDetails.ricAction_ToBeSetup_List.id_RICaction_ToBeSetup_Item[0].ricActionType = E2AP_RICACTION_TYPE_REPORT; // change enum value here
    	//end of hc-RICactionType -idx19- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx18 -roots3 RICaction_ToBeSetup_Item->ricActionType - alias = 13
	
    	//hc-sequence-ELEM 3: -idx20 -roots3 RICaction_ToBeSetup_Item->ricActionDefinition - alias = 9 -optional
    	p_RICsubscriptionRequest->id_RICsubscriptionDetails.ricAction_ToBeSetup_List.id_RICaction_ToBeSetup_Item[0].bitmask |= E2AP_RICACTION_TO_BE_SETUP_ITEM_e2ap_RIC_ACTION_DEFINITION_PRESENT;
    	//hc-ricActionDefinition -idx21- alias primitive - pid = 9 - OCTET STRING - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item->RICactionDefinition
    	OSOCTET temp_buff_for_ricActionDefinition[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICsubscriptionRequest->id_RICsubscriptionDetails.ricAction_ToBeSetup_List.id_RICaction_ToBeSetup_Item[0].ricActionDefinition.numocts = sizeof(temp_buff_for_ricActionDefinition);
    	p_RICsubscriptionRequest->id_RICsubscriptionDetails.ricAction_ToBeSetup_List.id_RICaction_ToBeSetup_Item[0].ricActionDefinition.data = xnap_mem_get(sizeof(temp_buff_for_ricActionDefinition));
    	XNAP_MEMCPY(p_RICsubscriptionRequest->id_RICsubscriptionDetails.ricAction_ToBeSetup_List.id_RICaction_ToBeSetup_Item[0].ricActionDefinition.data, temp_buff_for_ricActionDefinition, sizeof(temp_buff_for_ricActionDefinition)); // change octetstring data here
    	//end of hc-ricActionDefinition -idx21- alias primitive
	
    	//end of hc-sequence-ELEM 3: -idx20 -roots3 RICaction_ToBeSetup_Item->ricActionDefinition - alias = 9
	
    	//hc-sequence-ELEM 4: -idx22 -roots3 RICaction_ToBeSetup_Item->ricSubsequentAction - alias = -1 -optional
    	p_RICsubscriptionRequest->id_RICsubscriptionDetails.ricAction_ToBeSetup_List.id_RICaction_ToBeSetup_Item[0].bitmask |= E2AP_RICACTION_TO_BE_SETUP_ITEM_e2ap_RIC_SUBSEQUENT_ACTION_PRESENT;
    	/*=== START SEQUENCE -idx23 - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item->RICsubsequentAction -ROOTS4 RICsubsequentAction ===*/
    	//hc-sequence-ELEM 1: -idx24 -roots4 RICsubsequentAction->ricSubsequentActionType - alias = 13 -mandatory
    	//hc-RICsubsequentActionType -idx25 - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item->RICsubsequentAction->RICsubsequentActionType
    	p_RICsubscriptionRequest->id_RICsubscriptionDetails.ricAction_ToBeSetup_List.id_RICaction_ToBeSetup_Item[0].ricSubsequentAction.ricSubsequentActionType = E2AP_RICSUBSEQUENT_ACTION_TYPE_CONTINUE; // change enum value here
    	//end of hc-RICsubsequentActionType -idx25- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx24 -roots4 RICsubsequentAction->ricSubsequentActionType - alias = 13
	
    	//hc-sequence-ELEM 2: -idx26 -roots4 RICsubsequentAction->ricTimeToWait - alias = 13 -mandatory
    	//hc-RICtimeToWait -idx27 - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item->RICsubsequentAction->RICtimeToWait
    	p_RICsubscriptionRequest->id_RICsubscriptionDetails.ricAction_ToBeSetup_List.id_RICaction_ToBeSetup_Item[0].ricSubsequentAction.ricTimeToWait = E2AP_RICTIME_TO_WAIT_W1MS; // change enum value here
    	//end of hc-RICtimeToWait -idx27- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx26 -roots4 RICsubsequentAction->ricTimeToWait - alias = 13
	
    	/*=== END SEQUENCE -idx23 - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item->RICsubsequentAction - RICsubsequentAction -ROOTS4 ===*/
    	//end of hc-sequence-ELEM 4: -idx22 -roots3 RICaction_ToBeSetup_Item->ricSubsequentAction - alias = -1
	
    	//hc-sequence-ELEM 5: -idx28 -roots3 RICaction_ToBeSetup_Item->ricActionExecutionOrder - alias = 5 -optional
    	p_RICsubscriptionRequest->id_RICsubscriptionDetails.ricAction_ToBeSetup_List.id_RICaction_ToBeSetup_Item[0].bitmask |= E2AP_RICACTION_TO_BE_SETUP_ITEM_e2ap_RIC_ACTION_EXECUTION_ORDER_PRESENT;
    	//hc-ricActionExecutionOrder -idx29- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item->RICactionExecutionOrder 
    	p_RICsubscriptionRequest->id_RICsubscriptionDetails.ricAction_ToBeSetup_List.id_RICaction_ToBeSetup_Item[0].ricActionExecutionOrder = 127;// change integer here
    	//end of hc-ricActionExecutionOrder -idx29- alias primitive
    	//end of hc-sequence-ELEM 5: -idx28 -roots3 RICaction_ToBeSetup_Item->ricActionExecutionOrder - alias = 5
	
    	/*=== END SEQUENCE -idx15 - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item - RICaction_ToBeSetup_Item -ROOTS3 ===*/
    	/*=== END LIST  -idx14 - RICactions_ToBeSetup_List ===*/
    	//end of hc-sequence-ELEM 2: -idx13 -roots2 RICsubscriptionDetails->ricAction_ToBeSetup_List - alias = -1
	
    	/*=== END SEQUENCE -idx10 - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails - RICsubscriptionDetails -ROOTS2 ===*/
    }
    #endif/*======== End Hardcode IE -idx9: id_RICsubscriptionDetails - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx30: id_RICsubscriptionStartTime - optional=======*/
    {
    	 p_RICsubscriptionRequest->bitmask |= E2AP_RICSUBSCRIPTION_REQUEST_e2ap_ID_RICSUBSCRIPTION_START_TIME_PRESENT;
    	//hc-p_RICsubscriptionRequest->id_RICsubscriptionStartTime -idx31- alias primitive - pid = 8 - OCTET STRING - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionTime
    	OSOCTET temp_buff_for_p_RICsubscriptionRequest->id_RICsubscriptionStartTime[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    	p_RICsubscriptionRequest->id_RICsubscriptionStartTime.numocts = sizeof(temp_buff_for_p_RICsubscriptionRequest->id_RICsubscriptionStartTime);
    	XNAP_MEMCPY(p_RICsubscriptionRequest->id_RICsubscriptionStartTime.data, temp_buff_for_p_RICsubscriptionRequest->id_RICsubscriptionStartTime, sizeof(temp_buff_for_p_RICsubscriptionRequest->id_RICsubscriptionStartTime)); // change octetstring data here
    	//end of hc-p_RICsubscriptionRequest->id_RICsubscriptionStartTime -idx31- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx30: id_RICsubscriptionStartTime - optional ========*/

    #if 1/*======== Start Hardcode IE -idx32: id_RICsubscriptionEndTime - optional=======*/
    {
    	 p_RICsubscriptionRequest->bitmask |= E2AP_RICSUBSCRIPTION_REQUEST_e2ap_ID_RICSUBSCRIPTION_END_TIME_PRESENT;
    	//hc-p_RICsubscriptionRequest->id_RICsubscriptionEndTime -idx33- alias primitive - pid = 8 - OCTET STRING - RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionTime
    	OSOCTET temp_buff_for_p_RICsubscriptionRequest->id_RICsubscriptionEndTime[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    	p_RICsubscriptionRequest->id_RICsubscriptionEndTime.numocts = sizeof(temp_buff_for_p_RICsubscriptionRequest->id_RICsubscriptionEndTime);
    	XNAP_MEMCPY(p_RICsubscriptionRequest->id_RICsubscriptionEndTime.data, temp_buff_for_p_RICsubscriptionRequest->id_RICsubscriptionEndTime, sizeof(temp_buff_for_p_RICsubscriptionRequest->id_RICsubscriptionEndTime)); // change octetstring data here
    	//end of hc-p_RICsubscriptionRequest->id_RICsubscriptionEndTime -idx33- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx32: id_RICsubscriptionEndTime - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICsubscriptionRequest : (RICsubscriptionRequest) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICsubscriptionRequest
    protocolIEs : (RICsubscriptionRequest-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICrequestID->ricInstanceID
        RANfunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RANfunctionID
        RICsubscriptionDetails : (RICsubscriptionDetails) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails
            ricEventTriggerDefinition : (RICeventTriggerDefinition) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICeventTriggerDefinition
            ricAction-ToBeSetup-List : (RICactions-ToBeSetup-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [M] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List
                RICaction-ToBeSetup-ItemIEs : (RICaction-ToBeSetup-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs
                    RICaction-ToBeSetup-Item : (RICaction-ToBeSetup-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item
                        ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item->RICactionID
                        ricActionType : (RICactionType) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item->RICactionType
                        ricActionDefinition : (RICactionDefinition) 					---- (PRIMITIVE) ---- [O] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item->RICactionDefinition
                        ricSubsequentAction : (RICsubsequentAction) 					---- (SEQUENCE) ---- [O] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item->RICsubsequentAction
                            ricSubsequentActionType : (RICsubsequentActionType) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item->RICsubsequentAction->RICsubsequentActionType
                            ricTimeToWait : (RICtimeToWait) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item->RICsubsequentAction->RICtimeToWait
                        ricActionExecutionOrder : (RICactionExecutionOrder) 					---- (PRIMITIVE) ---- [O] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionDetails->RICactions-ToBeSetup-List->RICaction-ToBeSetup-ItemIEs->RICaction-ToBeSetup-Item->RICactionExecutionOrder
        RICsubscriptionTime : (RICsubscriptionTime) 					---- (PRIMITIVE) ---- [O] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionTime
        RICsubscriptionTime : (RICsubscriptionTime) 					---- (PRIMITIVE) ---- [O] ----PATH: RICsubscriptionRequest->RICsubscriptionRequest-IEs->RICsubscriptionTime
*/
#endif // ASSIGN_HARDCODE_RICSUBSCRIPTION_REQUEST_H

