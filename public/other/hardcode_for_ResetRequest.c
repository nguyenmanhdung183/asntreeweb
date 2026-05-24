#ifndef ASSIGN_HARDCODE_RESET_REQUEST_H
#define ASSIGN_HARDCODE_RESET_REQUEST_H
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

xnap_return_et assign_hardcode_value_ResetRequest(e2ap_ResetRequest_t* p_ResetRequest)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_TransactionID - mandatory=======*/
    {
    	//hc-p_ResetRequest->id_TransactionID -idx2- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - ResetRequest->ResetRequestIEs->TransactionID 
    	p_ResetRequest->id_TransactionID = 127;// change integer here
    	//end of hc-p_ResetRequest->id_TransactionID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_TransactionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_Cause - mandatory=======*/
    {
    	/*=== START CHOICE -idx4 -ROOTC1 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx5 -rootc1: Cause->ricRequest - alias = 13
    	p_ResetRequest->id_Cause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx6 - ResetRequest->ResetRequestIEs->Cause->CauseRICrequest
    	p_ResetRequest->id_Cause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx6- alias primitive
	
    	#endif /*choice-ELEM 1 -idx5 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 2 -idx7 -rootc1: Cause->ricService - alias = 13
    	p_ResetRequest->id_Cause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx8 - ResetRequest->ResetRequestIEs->Cause->CauseRICservice
    	p_ResetRequest->id_Cause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx8- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx7 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 3 -idx9 -rootc1: Cause->e2Node - alias = 13
    	p_ResetRequest->id_Cause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx10 - ResetRequest->ResetRequestIEs->Cause->CauseE2node
    	p_ResetRequest->id_Cause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx10- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx9 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 4 -idx11 -rootc1: Cause->transport - alias = 13
    	p_ResetRequest->id_Cause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx12 - ResetRequest->ResetRequestIEs->Cause->CauseTransport
    	p_ResetRequest->id_Cause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx12- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx11 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 5 -idx13 -rootc1: Cause->protocol - alias = 13
    	p_ResetRequest->id_Cause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx14 - ResetRequest->ResetRequestIEs->Cause->CauseProtocol
    	p_ResetRequest->id_Cause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx14- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx13 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 6 -idx15 -rootc1: Cause->misc - alias = 13
    	p_ResetRequest->id_Cause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx16 - ResetRequest->ResetRequestIEs->Cause->CauseMisc
    	p_ResetRequest->id_Cause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx16- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx15 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 7 -idx17 -rootc1: Cause->serviceLayer - alias = -1
    	p_ResetRequest->id_Cause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx18 - ResetRequest->ResetRequestIEs->Cause->CauseServiceLayer -ROOTS1 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx19 -roots1 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx20- alias primitive - pid = 9 - OCTET STRING - ResetRequest->ResetRequestIEs->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_ResetRequest->id_Cause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause);
    	p_ResetRequest->id_Cause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause));
    	XNAP_MEMCPY(p_ResetRequest->id_Cause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause, sizeof(temp_buff_for_serviceLayerCause)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx20- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx19 -roots1 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx18 - ResetRequest->ResetRequestIEs->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS1 ===*/
    	#endif /*hc-choice-ELEM 7 -idx17 -rootc1*/
	
    	/*=== END CHOICE -idx4 -ROOTC1 -Cause ===*/
    }
    #endif/*======== End Hardcode IE -idx3: id_Cause - mandatory ========*/
    return XNAP_SUCCESS;
}
/*
ResetRequest : (ResetRequest) 					---- (SEQUENCE) ---- [UNK] ----PATH: ResetRequest
    protocolIEs : (ResetRequestIEs) 					---- (IE-LIST) ---- [M] ----PATH: ResetRequest->ResetRequestIEs
        TransactionID : (TransactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: ResetRequest->ResetRequestIEs->TransactionID
        Cause : (Cause) 					---- (CHOICE) ---- [M] ----PATH: ResetRequest->ResetRequestIEs->Cause
            ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: ResetRequest->ResetRequestIEs->Cause->CauseRICrequest
            ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: ResetRequest->ResetRequestIEs->Cause->CauseRICservice
            e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: ResetRequest->ResetRequestIEs->Cause->CauseE2node
            transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: ResetRequest->ResetRequestIEs->Cause->CauseTransport
            protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: ResetRequest->ResetRequestIEs->Cause->CauseProtocol
            misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: ResetRequest->ResetRequestIEs->Cause->CauseMisc
            serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: ResetRequest->ResetRequestIEs->Cause->CauseServiceLayer
                serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: ResetRequest->ResetRequestIEs->Cause->CauseServiceLayer->ServiceLayerCause
*/
#endif // ASSIGN_HARDCODE_RESET_REQUEST_H

