#ifndef ASSIGN_HARDCODE_RICSUBSCRIPTION_RESPONSE_H
#define ASSIGN_HARDCODE_RICSUBSCRIPTION_RESPONSE_H
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

xnap_return_et assign_hardcode_value_RICsubscriptionResponse(e2ap_RICsubscriptionResponse_t* p_RICsubscriptionResponse)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICrequestID->ricRequestorID
    	p_RICsubscriptionResponse->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICrequestID->ricInstanceID
    	p_RICsubscriptionResponse->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RANfunctionID - mandatory=======*/
    {
    	//hc-p_RICsubscriptionResponse->id_RANfunctionID -idx8- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RANfunctionID 
    	p_RICsubscriptionResponse->id_RANfunctionID = 2047;// change integer here
    	//end of hc-p_RICsubscriptionResponse->id_RANfunctionID -idx8- alias primitive
    }
    #endif/*======== End Hardcode IE -idx7: id_RANfunctionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_RICactions_Admitted - mandatory=======*/
    {
    	/*=== START LIST -idx10 - RICaction_Admitted_List===*/
    	p_RICsubscriptionResponse->id_RICactions_Admitted.id_RICaction_Admitted_Item_count = 1;
    	/*=== START SEQUENCE -idx11 - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-Admitted-List->RICaction-Admitted-ItemIEs->RICaction-Admitted-Item -ROOTS2 RICaction_Admitted_Item ===*/
    	//hc-sequence-ELEM 1: -idx12 -roots2 RICaction_Admitted_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx13- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-Admitted-List->RICaction-Admitted-ItemIEs->RICaction-Admitted-Item->RICactionID 
    	p_RICsubscriptionResponse->id_RICactions_Admitted.id_RICaction_Admitted_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx13- alias primitive
    	//end of hc-sequence-ELEM 1: -idx12 -roots2 RICaction_Admitted_Item->ricActionID - alias = 6
	
    	/*=== END SEQUENCE -idx11 - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-Admitted-List->RICaction-Admitted-ItemIEs->RICaction-Admitted-Item - RICaction_Admitted_Item -ROOTS2 ===*/
    	/*=== END LIST  -idx10 - RICaction_Admitted_List ===*/
    }
    #endif/*======== End Hardcode IE -idx9: id_RICactions_Admitted - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx14: id_RICactions_NotAdmitted - optional=======*/
    {
    	 p_RICsubscriptionResponse->bitmask |= E2AP_RICSUBSCRIPTION_RESPONSE_e2ap_ID_RICACTIONS_NOT_ADMITTED_PRESENT;
    	/*=== START LIST -idx15 - RICaction_NotAdmitted_List===*/
    	p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item_count = 1;
    	/*=== START SEQUENCE -idx16 - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item -ROOTS3 RICaction_NotAdmitted_Item ===*/
    	//hc-sequence-ELEM 1: -idx17 -roots3 RICaction_NotAdmitted_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx18- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->RICactionID 
    	p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx18- alias primitive
    	//end of hc-sequence-ELEM 1: -idx17 -roots3 RICaction_NotAdmitted_Item->ricActionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx19 -roots3 RICaction_NotAdmitted_Item->cause - alias = -1 -mandatory
    	/*=== START CHOICE -idx20 -ROOTC1 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx21 -rootc1: Cause->ricRequest - alias = 13
    	p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx22 - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause->CauseRICrequest
    	p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item[0].cause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx22- alias primitive
	
    	#endif /*choice-ELEM 1 -idx21 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 2 -idx23 -rootc1: Cause->ricService - alias = 13
    	p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx24 - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause->CauseRICservice
    	p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item[0].cause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx24- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx23 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 3 -idx25 -rootc1: Cause->e2Node - alias = 13
    	p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx26 - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause->CauseE2node
    	p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item[0].cause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx26- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx25 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 4 -idx27 -rootc1: Cause->transport - alias = 13
    	p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx28 - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause->CauseTransport
    	p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item[0].cause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx28- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx27 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 5 -idx29 -rootc1: Cause->protocol - alias = 13
    	p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx30 - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause->CauseProtocol
    	p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item[0].cause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx30- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx29 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 6 -idx31 -rootc1: Cause->misc - alias = 13
    	p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx32 - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause->CauseMisc
    	p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item[0].cause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx32- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx31 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 7 -idx33 -rootc1: Cause->serviceLayer - alias = -1
    	p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx34 - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause->CauseServiceLayer -ROOTS4 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx35 -roots4 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx36- alias primitive - pid = 9 - OCTET STRING - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item[0].cause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause);
    	p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item[0].cause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause));
    	XNAP_MEMCPY(p_RICsubscriptionResponse->id_RICactions_NotAdmitted.id_RICaction_NotAdmitted_Item[0].cause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause, sizeof(temp_buff_for_serviceLayerCause)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx36- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx35 -roots4 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx34 - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS4 ===*/
    	#endif /*hc-choice-ELEM 7 -idx33 -rootc1*/
	
    	/*=== END CHOICE -idx20 -ROOTC1 -Cause ===*/
    	//end of hc-sequence-ELEM 2: -idx19 -roots3 RICaction_NotAdmitted_Item->cause - alias = -1
	
    	/*=== END SEQUENCE -idx16 - RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item - RICaction_NotAdmitted_Item -ROOTS3 ===*/
    	/*=== END LIST  -idx15 - RICaction_NotAdmitted_List ===*/
    }
    #endif/*======== End Hardcode IE -idx14: id_RICactions_NotAdmitted - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICsubscriptionResponse : (RICsubscriptionResponse) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICsubscriptionResponse
    protocolIEs : (RICsubscriptionResponse-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICrequestID->ricInstanceID
        RANfunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RANfunctionID
        RICaction-Admitted-List : (RICaction-Admitted-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-Admitted-List
            RICaction-Admitted-ItemIEs : (RICaction-Admitted-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-Admitted-List->RICaction-Admitted-ItemIEs
                RICaction-Admitted-Item : (RICaction-Admitted-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-Admitted-List->RICaction-Admitted-ItemIEs->RICaction-Admitted-Item
                    ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-Admitted-List->RICaction-Admitted-ItemIEs->RICaction-Admitted-Item->RICactionID
        RICaction-NotAdmitted-List : (RICaction-NotAdmitted-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List
            RICaction-NotAdmitted-ItemIEs : (RICaction-NotAdmitted-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs
                RICaction-NotAdmitted-Item : (RICaction-NotAdmitted-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item
                    ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->RICactionID
                    cause : (Cause) 					---- (CHOICE) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause
                        ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause->CauseRICrequest
                        ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause->CauseRICservice
                        e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause->CauseE2node
                        transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause->CauseTransport
                        protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause->CauseProtocol
                        misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause->CauseMisc
                        serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause->CauseServiceLayer
                            serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionResponse->RICsubscriptionResponse-IEs->RICaction-NotAdmitted-List->RICaction-NotAdmitted-ItemIEs->RICaction-NotAdmitted-Item->Cause->CauseServiceLayer->ServiceLayerCause
*/
#endif // ASSIGN_HARDCODE_RICSUBSCRIPTION_RESPONSE_H

