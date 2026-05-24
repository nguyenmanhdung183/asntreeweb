#ifndef ASSIGN_HARDCODE_RICSERVICE_UPDATE_ACKNOWLEDGE_H
#define ASSIGN_HARDCODE_RICSERVICE_UPDATE_ACKNOWLEDGE_H
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

xnap_return_et assign_hardcode_value_RICserviceUpdateAcknowledge(e2ap_RICserviceUpdateAcknowledge_t* p_RICserviceUpdateAcknowledge)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_TransactionID - mandatory=======*/
    {
    	//hc-p_RICserviceUpdateAcknowledge->id_TransactionID -idx2- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->TransactionID 
    	p_RICserviceUpdateAcknowledge->id_TransactionID = 127;// change integer here
    	//end of hc-p_RICserviceUpdateAcknowledge->id_TransactionID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_TransactionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_RANfunctionsAccepted - optional=======*/
    {
    	 p_RICserviceUpdateAcknowledge->bitmask |= E2AP_RICSERVICE_UPDATE_ACKNOWLEDGE_e2ap_ID_RANFUNCTIONS_ACCEPTED_PRESENT;
    	/*=== START LIST -idx4 - RANfunctionsID_List===*/
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsAccepted.id_RANfunctionID_Item_count = 1;
    	/*=== START SEQUENCE -idx5 - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item -ROOTS1 RANfunctionID_Item ===*/
    	//hc-sequence-ELEM 1: -idx6 -roots1 RANfunctionID_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx7- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item->RANfunctionID 
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsAccepted.id_RANfunctionID_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx7- alias primitive
    	//end of hc-sequence-ELEM 1: -idx6 -roots1 RANfunctionID_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx8 -roots1 RANfunctionID_Item->ranFunctionRevision - alias = 6 -mandatory
    	//hc-ranFunctionRevision -idx9- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item->RANfunctionRevision 
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsAccepted.id_RANfunctionID_Item[0].ranFunctionRevision = 2047;// change integer here
    	//end of hc-ranFunctionRevision -idx9- alias primitive
    	//end of hc-sequence-ELEM 2: -idx8 -roots1 RANfunctionID_Item->ranFunctionRevision - alias = 6
	
    	/*=== END SEQUENCE -idx5 - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item - RANfunctionID_Item -ROOTS1 ===*/
    	/*=== END LIST  -idx4 - RANfunctionsID_List ===*/
    }
    #endif/*======== End Hardcode IE -idx3: id_RANfunctionsAccepted - optional ========*/

    #if 1/*======== Start Hardcode IE -idx10: id_RANfunctionsRejected - optional=======*/
    {
    	 p_RICserviceUpdateAcknowledge->bitmask |= E2AP_RICSERVICE_UPDATE_ACKNOWLEDGE_e2ap_ID_RANFUNCTIONS_REJECTED_PRESENT;
    	/*=== START LIST -idx11 - RANfunctionsIDcause_List===*/
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item_count = 1;
    	/*=== START SEQUENCE -idx12 - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item -ROOTS2 RANfunctionIDcause_Item ===*/
    	//hc-sequence-ELEM 1: -idx13 -roots2 RANfunctionIDcause_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx14- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->RANfunctionID 
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx14- alias primitive
    	//end of hc-sequence-ELEM 1: -idx13 -roots2 RANfunctionIDcause_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx15 -roots2 RANfunctionIDcause_Item->cause - alias = -1 -mandatory
    	/*=== START CHOICE -idx16 -ROOTC1 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx17 -rootc1: Cause->ricRequest - alias = 13
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx18 - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseRICrequest
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx18- alias primitive
	
    	#endif /*choice-ELEM 1 -idx17 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 2 -idx19 -rootc1: Cause->ricService - alias = 13
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx20 - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseRICservice
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx20- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx19 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 3 -idx21 -rootc1: Cause->e2Node - alias = 13
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx22 - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseE2node
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx22- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx21 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 4 -idx23 -rootc1: Cause->transport - alias = 13
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx24 - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseTransport
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx24- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx23 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 5 -idx25 -rootc1: Cause->protocol - alias = 13
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx26 - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseProtocol
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx26- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx25 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 6 -idx27 -rootc1: Cause->misc - alias = 13
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx28 - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseMisc
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx28- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx27 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 7 -idx29 -rootc1: Cause->serviceLayer - alias = -1
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx30 - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseServiceLayer -ROOTS3 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx31 -roots3 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx32- alias primitive - pid = 9 - OCTET STRING - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause);
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause));
    	XNAP_MEMCPY(p_RICserviceUpdateAcknowledge->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause, sizeof(temp_buff_for_serviceLayerCause)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx32- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx31 -roots3 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx30 - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS3 ===*/
    	#endif /*hc-choice-ELEM 7 -idx29 -rootc1*/
	
    	/*=== END CHOICE -idx16 -ROOTC1 -Cause ===*/
    	//end of hc-sequence-ELEM 2: -idx15 -roots2 RANfunctionIDcause_Item->cause - alias = -1
	
    	/*=== END SEQUENCE -idx12 - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item - RANfunctionIDcause_Item -ROOTS2 ===*/
    	/*=== END LIST  -idx11 - RANfunctionsIDcause_List ===*/
    }
    #endif/*======== End Hardcode IE -idx10: id_RANfunctionsRejected - optional ========*/

    #if 1/*======== Start Hardcode IE -idx33: id_RANfunctionsAcceptModified_List - optional=======*/
    {
    	 p_RICserviceUpdateAcknowledge->bitmask |= E2AP_RICSERVICE_UPDATE_ACKNOWLEDGE_e2ap_ID_RANFUNCTIONS_ACCEPT_MODIFIED_LIST_PRESENT;
    	/*=== START LIST -idx34 - RANfunctions_AcceptModified_List===*/
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsAcceptModified_List.id_RANfunction_AcceptModified_Item_count = 1;
    	/*=== START SEQUENCE -idx35 - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item -ROOTS4 RANfunction_AcceptModified_Item ===*/
    	//hc-sequence-ELEM 1: -idx36 -roots4 RANfunction_AcceptModified_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx37- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item->RANfunctionID 
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsAcceptModified_List.id_RANfunction_AcceptModified_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx37- alias primitive
    	//end of hc-sequence-ELEM 1: -idx36 -roots4 RANfunction_AcceptModified_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx38 -roots4 RANfunction_AcceptModified_Item->revRanFunctionDefinition - alias = 9 -mandatory
    	//hc-revRanFunctionDefinition -idx39- alias primitive - pid = 9 - OCTET STRING - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item->RANfunctionDefinition
    	OSOCTET temp_buff_for_revRanFunctionDefinition[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsAcceptModified_List.id_RANfunction_AcceptModified_Item[0].revRanFunctionDefinition.numocts = sizeof(temp_buff_for_revRanFunctionDefinition);
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsAcceptModified_List.id_RANfunction_AcceptModified_Item[0].revRanFunctionDefinition.data = xnap_mem_get(sizeof(temp_buff_for_revRanFunctionDefinition));
    	XNAP_MEMCPY(p_RICserviceUpdateAcknowledge->id_RANfunctionsAcceptModified_List.id_RANfunction_AcceptModified_Item[0].revRanFunctionDefinition.data, temp_buff_for_revRanFunctionDefinition, sizeof(temp_buff_for_revRanFunctionDefinition)); // change octetstring data here
    	//end of hc-revRanFunctionDefinition -idx39- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx38 -roots4 RANfunction_AcceptModified_Item->revRanFunctionDefinition - alias = 9
	
    	//hc-sequence-ELEM 3: -idx40 -roots4 RANfunction_AcceptModified_Item->ranFunctionRevision - alias = 6 -mandatory
    	//hc-ranFunctionRevision -idx41- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item->RANfunctionRevision 
    	p_RICserviceUpdateAcknowledge->id_RANfunctionsAcceptModified_List.id_RANfunction_AcceptModified_Item[0].ranFunctionRevision = 2047;// change integer here
    	//end of hc-ranFunctionRevision -idx41- alias primitive
    	//end of hc-sequence-ELEM 3: -idx40 -roots4 RANfunction_AcceptModified_Item->ranFunctionRevision - alias = 6
	
    	/*=== END SEQUENCE -idx35 - RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item - RANfunction_AcceptModified_Item -ROOTS4 ===*/
    	/*=== END LIST  -idx34 - RANfunctions_AcceptModified_List ===*/
    }
    #endif/*======== End Hardcode IE -idx33: id_RANfunctionsAcceptModified_List - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICserviceUpdateAcknowledge : (RICserviceUpdateAcknowledge) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICserviceUpdateAcknowledge
    protocolIEs : (RICserviceUpdateAcknowledge-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs
        TransactionID : (TransactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->TransactionID
        RANfunctionsID-List : (RANfunctionsID-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsID-List
            RANfunctionID-ItemIEs : (RANfunctionID-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs
                RANfunctionID-Item : (RANfunctionID-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item->RANfunctionID
                    ranFunctionRevision : (RANfunctionRevision) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item->RANfunctionRevision
        RANfunctionsIDcause-List : (RANfunctionsIDcause-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List
            RANfunctionIDcause-ItemIEs : (RANfunctionIDcause-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs
                RANfunctionIDcause-Item : (RANfunctionIDcause-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->RANfunctionID
                    cause : (Cause) 					---- (CHOICE) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause
                        ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseRICrequest
                        ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseRICservice
                        e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseE2node
                        transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseTransport
                        protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseProtocol
                        misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseMisc
                        serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseServiceLayer
                            serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseServiceLayer->ServiceLayerCause
        RANfunctions-AcceptModified-List : (RANfunctions-AcceptModified-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctions-AcceptModified-List
            RANfunction-AcceptModified-ItemIEs : (RANfunction-AcceptModified-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs
                RANfunction-AcceptModified-Item : (RANfunction-AcceptModified-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item->RANfunctionID
                    revRanFunctionDefinition : (RANfunctionDefinition) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item->RANfunctionDefinition
                    ranFunctionRevision : (RANfunctionRevision) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdateAcknowledge->RICserviceUpdateAcknowledge-IEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item->RANfunctionRevision
*/
#endif // ASSIGN_HARDCODE_RICSERVICE_UPDATE_ACKNOWLEDGE_H

