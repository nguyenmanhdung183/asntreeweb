#ifndef ASSIGN_HARDCODE_RICSUBSCRIPTION_DELETE_REQUIRED_H
#define ASSIGN_HARDCODE_RICSUBSCRIPTION_DELETE_REQUIRED_H
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

xnap_return_et assign_hardcode_value_RICsubscriptionDeleteRequired(e2ap_RICsubscriptionDeleteRequired_t* p_RICsubscriptionDeleteRequired)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICsubscriptionToBeRemoved - mandatory=======*/
    {
    	/*=== START LIST -idx2 - RICsubscription_List_withCause===*/
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item_count = 1;
    	/*=== START SEQUENCE -idx3 - RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item -ROOTS1 RICsubscription_withCause_Item ===*/
    	//hc-sequence-ELEM 1: -idx4 -roots1 RICsubscription_withCause_Item->ricRequestID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx5 - RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->RICrequestID -ROOTS2 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx6 -roots2 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx7 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->RICrequestID->ricRequestorID
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].ricRequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx7- primitive
	
    	//end of hc-sequence-ELEM 1: -idx6 -roots2 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx8 -roots2 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx9 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->RICrequestID->ricInstanceID
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].ricRequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx9- primitive
	
    	//end of hc-sequence-ELEM 2: -idx8 -roots2 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx5 - RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->RICrequestID - RICrequestID -ROOTS2 ===*/
    	//end of hc-sequence-ELEM 1: -idx4 -roots1 RICsubscription_withCause_Item->ricRequestID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx10 -roots1 RICsubscription_withCause_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx11- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->RANfunctionID 
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx11- alias primitive
    	//end of hc-sequence-ELEM 2: -idx10 -roots1 RICsubscription_withCause_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 3: -idx12 -roots1 RICsubscription_withCause_Item->cause - alias = -1 -mandatory
    	/*=== START CHOICE -idx13 -ROOTC1 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx14 -rootc1: Cause->ricRequest - alias = 13
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx15 - RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause->CauseRICrequest
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].cause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx15- alias primitive
	
    	#endif /*choice-ELEM 1 -idx14 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 2 -idx16 -rootc1: Cause->ricService - alias = 13
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx17 - RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause->CauseRICservice
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].cause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx17- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx16 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 3 -idx18 -rootc1: Cause->e2Node - alias = 13
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx19 - RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause->CauseE2node
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].cause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx19- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx18 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 4 -idx20 -rootc1: Cause->transport - alias = 13
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx21 - RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause->CauseTransport
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].cause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx21- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx20 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 5 -idx22 -rootc1: Cause->protocol - alias = 13
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx23 - RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause->CauseProtocol
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].cause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx23- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx22 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 6 -idx24 -rootc1: Cause->misc - alias = 13
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx25 - RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause->CauseMisc
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].cause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx25- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx24 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 7 -idx26 -rootc1: Cause->serviceLayer - alias = -1
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx27 - RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause->CauseServiceLayer -ROOTS3 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx28 -roots3 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx29- alias primitive - pid = 9 - OCTET STRING - RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].cause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause);
    	p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].cause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause));
    	XNAP_MEMCPY(p_RICsubscriptionDeleteRequired->id_RICsubscriptionToBeRemoved.id_RICsubscription_withCause_Item[0].cause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause, sizeof(temp_buff_for_serviceLayerCause)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx29- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx28 -roots3 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx27 - RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS3 ===*/
    	#endif /*hc-choice-ELEM 7 -idx26 -rootc1*/
	
    	/*=== END CHOICE -idx13 -ROOTC1 -Cause ===*/
    	//end of hc-sequence-ELEM 3: -idx12 -roots1 RICsubscription_withCause_Item->cause - alias = -1
	
    	/*=== END SEQUENCE -idx3 - RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item - RICsubscription_withCause_Item -ROOTS1 ===*/
    	/*=== END LIST  -idx2 - RICsubscription_List_withCause ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICsubscriptionToBeRemoved - mandatory ========*/
    return XNAP_SUCCESS;
}
/*
RICsubscriptionDeleteRequired : (RICsubscriptionDeleteRequired) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICsubscriptionDeleteRequired
    protocolIEs : (RICsubscriptionDeleteRequired-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs
        RICsubscription-List-withCause : (RICsubscription-List-withCause) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [M] ----PATH: RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause
            RICsubscription-withCause-ItemIEs : (RICsubscription-withCause-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs
                RICsubscription-withCause-Item : (RICsubscription-withCause-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item
                    ricRequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->RICrequestID
                        ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->RICrequestID->ricRequestorID
                        ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->RICrequestID->ricInstanceID
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->RANfunctionID
                    cause : (Cause) 					---- (CHOICE) ---- [M] ----PATH: RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause
                        ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause->CauseRICrequest
                        ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause->CauseRICservice
                        e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause->CauseE2node
                        transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause->CauseTransport
                        protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause->CauseProtocol
                        misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause->CauseMisc
                        serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause->CauseServiceLayer
                            serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionDeleteRequired->RICsubscriptionDeleteRequired-IEs->RICsubscription-List-withCause->RICsubscription-withCause-ItemIEs->RICsubscription-withCause-Item->Cause->CauseServiceLayer->ServiceLayerCause
*/
#endif // ASSIGN_HARDCODE_RICSUBSCRIPTION_DELETE_REQUIRED_H

