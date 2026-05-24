#ifndef ASSIGN_HARDCODE_RICSUBSCRIPTION_MODIFICATION_REQUIRED_H
#define ASSIGN_HARDCODE_RICSUBSCRIPTION_MODIFICATION_REQUIRED_H
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

xnap_return_et assign_hardcode_value_RICsubscriptionModificationRequired(e2ap_RICsubscriptionModificationRequired_t* p_RICsubscriptionModificationRequired)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICrequestID->ricRequestorID
    	p_RICsubscriptionModificationRequired->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICrequestID->ricInstanceID
    	p_RICsubscriptionModificationRequired->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RANfunctionID - mandatory=======*/
    {
    	//hc-p_RICsubscriptionModificationRequired->id_RANfunctionID -idx8- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RANfunctionID 
    	p_RICsubscriptionModificationRequired->id_RANfunctionID = 2047;// change integer here
    	//end of hc-p_RICsubscriptionModificationRequired->id_RANfunctionID -idx8- alias primitive
    }
    #endif/*======== End Hardcode IE -idx7: id_RANfunctionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_RICactionsRequiredToBeModified_List - optional=======*/
    {
    	 p_RICsubscriptionModificationRequired->bitmask |= E2AP_RICSUBSCRIPTION_MODIFICATION_REQUIRED_e2ap_ID_RICACTIONS_REQUIRED_TO_BE_MODIFIED_LIST_PRESENT;
    	/*=== START LIST -idx10 - RICactions_RequiredToBeModified_List===*/
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeModified_List.id_RICaction_RequiredToBeModified_Item_count = 1;
    	/*=== START SEQUENCE -idx11 - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeModified-List->RICaction-RequiredToBeModified-ItemIEs->RICaction-RequiredToBeModified-Item -ROOTS2 RICaction_RequiredToBeModified_Item ===*/
    	//hc-sequence-ELEM 1: -idx12 -roots2 RICaction_RequiredToBeModified_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx13- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeModified-List->RICaction-RequiredToBeModified-ItemIEs->RICaction-RequiredToBeModified-Item->RICactionID 
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeModified_List.id_RICaction_RequiredToBeModified_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx13- alias primitive
    	//end of hc-sequence-ELEM 1: -idx12 -roots2 RICaction_RequiredToBeModified_Item->ricActionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx14 -roots2 RICaction_RequiredToBeModified_Item->ricTimeToWait - alias = 13 -mandatory
    	//hc-RICtimeToWait -idx15 - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeModified-List->RICaction-RequiredToBeModified-ItemIEs->RICaction-RequiredToBeModified-Item->RICtimeToWait
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeModified_List.id_RICaction_RequiredToBeModified_Item[0].ricTimeToWait = E2AP_RICTIME_TO_WAIT_W1MS; // change enum value here
    	//end of hc-RICtimeToWait -idx15- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx14 -roots2 RICaction_RequiredToBeModified_Item->ricTimeToWait - alias = 13
	
    	/*=== END SEQUENCE -idx11 - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeModified-List->RICaction-RequiredToBeModified-ItemIEs->RICaction-RequiredToBeModified-Item - RICaction_RequiredToBeModified_Item -ROOTS2 ===*/
    	/*=== END LIST  -idx10 - RICactions_RequiredToBeModified_List ===*/
    }
    #endif/*======== End Hardcode IE -idx9: id_RICactionsRequiredToBeModified_List - optional ========*/

    #if 1/*======== Start Hardcode IE -idx16: id_RICactionsRequiredToBeRemoved_List - optional=======*/
    {
    	 p_RICsubscriptionModificationRequired->bitmask |= E2AP_RICSUBSCRIPTION_MODIFICATION_REQUIRED_e2ap_ID_RICACTIONS_REQUIRED_TO_BE_REMOVED_LIST_PRESENT;
    	/*=== START LIST -idx17 - RICactions_RequiredToBeRemoved_List===*/
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item_count = 1;
    	/*=== START SEQUENCE -idx18 - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item -ROOTS3 RICaction_RequiredToBeRemoved_Item ===*/
    	//hc-sequence-ELEM 1: -idx19 -roots3 RICaction_RequiredToBeRemoved_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx20- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->RICactionID 
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx20- alias primitive
    	//end of hc-sequence-ELEM 1: -idx19 -roots3 RICaction_RequiredToBeRemoved_Item->ricActionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx21 -roots3 RICaction_RequiredToBeRemoved_Item->cause - alias = -1 -mandatory
    	/*=== START CHOICE -idx22 -ROOTC1 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx23 -rootc1: Cause->ricRequest - alias = 13
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx24 - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause->CauseRICrequest
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item[0].cause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx24- alias primitive
	
    	#endif /*choice-ELEM 1 -idx23 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 2 -idx25 -rootc1: Cause->ricService - alias = 13
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx26 - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause->CauseRICservice
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item[0].cause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx26- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx25 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 3 -idx27 -rootc1: Cause->e2Node - alias = 13
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx28 - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause->CauseE2node
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item[0].cause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx28- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx27 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 4 -idx29 -rootc1: Cause->transport - alias = 13
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx30 - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause->CauseTransport
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item[0].cause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx30- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx29 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 5 -idx31 -rootc1: Cause->protocol - alias = 13
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx32 - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause->CauseProtocol
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item[0].cause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx32- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx31 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 6 -idx33 -rootc1: Cause->misc - alias = 13
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx34 - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause->CauseMisc
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item[0].cause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx34- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx33 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 7 -idx35 -rootc1: Cause->serviceLayer - alias = -1
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx36 - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause->CauseServiceLayer -ROOTS4 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx37 -roots4 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx38- alias primitive - pid = 9 - OCTET STRING - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item[0].cause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause);
    	p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item[0].cause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause));
    	XNAP_MEMCPY(p_RICsubscriptionModificationRequired->id_RICactionsRequiredToBeRemoved_List.id_RICaction_RequiredToBeRemoved_Item[0].cause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause, sizeof(temp_buff_for_serviceLayerCause)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx38- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx37 -roots4 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx36 - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS4 ===*/
    	#endif /*hc-choice-ELEM 7 -idx35 -rootc1*/
	
    	/*=== END CHOICE -idx22 -ROOTC1 -Cause ===*/
    	//end of hc-sequence-ELEM 2: -idx21 -roots3 RICaction_RequiredToBeRemoved_Item->cause - alias = -1
	
    	/*=== END SEQUENCE -idx18 - RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item - RICaction_RequiredToBeRemoved_Item -ROOTS3 ===*/
    	/*=== END LIST  -idx17 - RICactions_RequiredToBeRemoved_List ===*/
    }
    #endif/*======== End Hardcode IE -idx16: id_RICactionsRequiredToBeRemoved_List - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICsubscriptionModificationRequired : (RICsubscriptionModificationRequired) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICsubscriptionModificationRequired
    protocolIEs : (RICsubscriptionModificationRequired-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICrequestID->ricInstanceID
        RANfunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RANfunctionID
        RICactions-RequiredToBeModified-List : (RICactions-RequiredToBeModified-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeModified-List
            RICaction-RequiredToBeModified-ItemIEs : (RICaction-RequiredToBeModified-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeModified-List->RICaction-RequiredToBeModified-ItemIEs
                RICaction-RequiredToBeModified-Item : (RICaction-RequiredToBeModified-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeModified-List->RICaction-RequiredToBeModified-ItemIEs->RICaction-RequiredToBeModified-Item
                    ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeModified-List->RICaction-RequiredToBeModified-ItemIEs->RICaction-RequiredToBeModified-Item->RICactionID
                    ricTimeToWait : (RICtimeToWait) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeModified-List->RICaction-RequiredToBeModified-ItemIEs->RICaction-RequiredToBeModified-Item->RICtimeToWait
        RICactions-RequiredToBeRemoved-List : (RICactions-RequiredToBeRemoved-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List
            RICaction-RequiredToBeRemoved-ItemIEs : (RICaction-RequiredToBeRemoved-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs
                RICaction-RequiredToBeRemoved-Item : (RICaction-RequiredToBeRemoved-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item
                    ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->RICactionID
                    cause : (Cause) 					---- (CHOICE) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause
                        ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause->CauseRICrequest
                        ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause->CauseRICservice
                        e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause->CauseE2node
                        transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause->CauseTransport
                        protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause->CauseProtocol
                        misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause->CauseMisc
                        serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause->CauseServiceLayer
                            serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionModificationRequired->RICsubscriptionModificationRequired-IEs->RICactions-RequiredToBeRemoved-List->RICaction-RequiredToBeRemoved-ItemIEs->RICaction-RequiredToBeRemoved-Item->Cause->CauseServiceLayer->ServiceLayerCause
*/
#endif // ASSIGN_HARDCODE_RICSUBSCRIPTION_MODIFICATION_REQUIRED_H

