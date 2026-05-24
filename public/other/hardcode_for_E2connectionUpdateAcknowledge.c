#ifndef ASSIGN_HARDCODE_E2CONNECTION_UPDATE_ACKNOWLEDGE_H
#define ASSIGN_HARDCODE_E2CONNECTION_UPDATE_ACKNOWLEDGE_H
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

xnap_return_et assign_hardcode_value_E2connectionUpdateAcknowledge(e2ap_E2connectionUpdateAcknowledge_t* p_E2connectionUpdateAcknowledge)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_TransactionID - mandatory=======*/
    {
    	//hc-p_E2connectionUpdateAcknowledge->id_TransactionID -idx2- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->TransactionID 
    	p_E2connectionUpdateAcknowledge->id_TransactionID = 127;// change integer here
    	//end of hc-p_E2connectionUpdateAcknowledge->id_TransactionID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_TransactionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_E2connectionSetup - optional=======*/
    {
    	 p_E2connectionUpdateAcknowledge->bitmask |= E2AP_E2CONNECTION_UPDATE_ACKNOWLEDGE_e2ap_ID_E2CONNECTION_SETUP_PRESENT;
    	/*=== START LIST -idx4 - E2connectionUpdate_List===*/
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetup.id_E2connectionUpdate_Item_count = 1;
    	/*=== START SEQUENCE -idx5 - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item -ROOTS1 E2connectionUpdate_Item ===*/
    	//hc-sequence-ELEM 1: -idx6 -roots1 E2connectionUpdate_Item->tnlInformation - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx7 - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation -ROOTS2 TNLinformation ===*/
    	//hc-sequence-ELEM 1: -idx8 -roots2 TNLinformation->tnlAddress - alias = -1 -mandatory
    	//hc-tnlAddress -idx9- primitive in scope - pid = 2 - BIT STRING - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation->tnlAddress
    	OSOCTET temp_buff_for_tnlAddress[] = {0x99}; // min =1 - max = 160 bits
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetup.id_E2connectionUpdate_Item[0].tnlInformation.tnlAddress.numbits = 1; // change bitstring data here
    	XNAP_MEMCPY(p_E2connectionUpdateAcknowledge->id_E2connectionSetup.id_E2connectionUpdate_Item[0].tnlInformation.tnlAddress.data, temp_buff_for_tnlAddress, 1);
    	//end of hc-tnlAddress -idx9- primitive
    	//end of hc-sequence-ELEM 1: -idx8 -roots2 TNLinformation->tnlAddress - alias = -1
	
    	//hc-sequence-ELEM 2: -idx10 -roots2 TNLinformation->tnlPort - alias = -1 -optional
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetup.id_E2connectionUpdate_Item[0].tnlInformation.bitmask |= E2AP_TNLINFORMATION_e2ap_TNL_PORT_PRESENT;
    	//hc-tnlPort -idx11- primitive in scope - pid = 3 - BIT STRING - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation->tnlPort
    	OSOCTET temp_buff_for_tnlPort[] = {0x01, 0x02}; // min =16 - max = 16 bits
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetup.id_E2connectionUpdate_Item[0].tnlInformation.tnlPort.numbits = 16; // change bitstring data here
    	XNAP_MEMCPY(p_E2connectionUpdateAcknowledge->id_E2connectionSetup.id_E2connectionUpdate_Item[0].tnlInformation.tnlPort.data, temp_buff_for_tnlPort, 2);
    	//end of hc-tnlPort -idx11- primitive
    	//end of hc-sequence-ELEM 2: -idx10 -roots2 TNLinformation->tnlPort - alias = -1
	
    	/*=== END SEQUENCE -idx7 - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation - TNLinformation -ROOTS2 ===*/
    	//end of hc-sequence-ELEM 1: -idx6 -roots1 E2connectionUpdate_Item->tnlInformation - alias = -1
	
    	//hc-sequence-ELEM 2: -idx12 -roots1 E2connectionUpdate_Item->tnlUsage - alias = 13 -mandatory
    	//hc-TNLusage -idx13 - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLusage
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetup.id_E2connectionUpdate_Item[0].tnlUsage = E2AP_TNLUSAGE_RIC_SERVICE; // change enum value here
    	//end of hc-TNLusage -idx13- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx12 -roots1 E2connectionUpdate_Item->tnlUsage - alias = 13
	
    	/*=== END SEQUENCE -idx5 - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item - E2connectionUpdate_Item -ROOTS1 ===*/
    	/*=== END LIST  -idx4 - E2connectionUpdate_List ===*/
    }
    #endif/*======== End Hardcode IE -idx3: id_E2connectionSetup - optional ========*/

    #if 1/*======== Start Hardcode IE -idx14: id_E2connectionSetupFailed - optional=======*/
    {
    	 p_E2connectionUpdateAcknowledge->bitmask |= E2AP_E2CONNECTION_UPDATE_ACKNOWLEDGE_e2ap_ID_E2CONNECTION_SETUP_FAILED_PRESENT;
    	/*=== START LIST -idx15 - E2connectionSetupFailed_List===*/
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item_count = 1;
    	/*=== START SEQUENCE -idx16 - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item -ROOTS3 E2connectionSetupFailed_Item ===*/
    	//hc-sequence-ELEM 1: -idx17 -roots3 E2connectionSetupFailed_Item->tnlInformation - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx18 - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->TNLinformation -ROOTS4 TNLinformation ===*/
    	//hc-sequence-ELEM 1: -idx19 -roots4 TNLinformation->tnlAddress - alias = -1 -mandatory
    	//hc-tnlAddress -idx20- primitive in scope - pid = 2 - BIT STRING - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->TNLinformation->tnlAddress
    	OSOCTET temp_buff_for_tnlAddress_1[] = {0x99}; // min =1 - max = 160 bits
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].tnlInformation.tnlAddress.numbits = 1; // change bitstring data here
    	XNAP_MEMCPY(p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].tnlInformation.tnlAddress.data, temp_buff_for_tnlAddress_1, 1);
    	//end of hc-tnlAddress -idx20- primitive
    	//end of hc-sequence-ELEM 1: -idx19 -roots4 TNLinformation->tnlAddress - alias = -1
	
    	//hc-sequence-ELEM 2: -idx21 -roots4 TNLinformation->tnlPort - alias = -1 -optional
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].tnlInformation.bitmask |= E2AP_TNLINFORMATION_e2ap_TNL_PORT_PRESENT;
    	//hc-tnlPort -idx22- primitive in scope - pid = 3 - BIT STRING - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->TNLinformation->tnlPort
    	OSOCTET temp_buff_for_tnlPort_1[] = {0x01, 0x02}; // min =16 - max = 16 bits
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].tnlInformation.tnlPort.numbits = 16; // change bitstring data here
    	XNAP_MEMCPY(p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].tnlInformation.tnlPort.data, temp_buff_for_tnlPort_1, 2);
    	//end of hc-tnlPort -idx22- primitive
    	//end of hc-sequence-ELEM 2: -idx21 -roots4 TNLinformation->tnlPort - alias = -1
	
    	/*=== END SEQUENCE -idx18 - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->TNLinformation - TNLinformation -ROOTS4 ===*/
    	//end of hc-sequence-ELEM 1: -idx17 -roots3 E2connectionSetupFailed_Item->tnlInformation - alias = -1
	
    	//hc-sequence-ELEM 2: -idx23 -roots3 E2connectionSetupFailed_Item->cause - alias = -1 -mandatory
    	/*=== START CHOICE -idx24 -ROOTC1 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx25 -rootc1: Cause->ricRequest - alias = 13
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx26 - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause->CauseRICrequest
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx26- alias primitive
	
    	#endif /*choice-ELEM 1 -idx25 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 2 -idx27 -rootc1: Cause->ricService - alias = 13
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx28 - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause->CauseRICservice
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx28- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx27 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 3 -idx29 -rootc1: Cause->e2Node - alias = 13
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx30 - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause->CauseE2node
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx30- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx29 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 4 -idx31 -rootc1: Cause->transport - alias = 13
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx32 - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause->CauseTransport
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx32- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx31 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 5 -idx33 -rootc1: Cause->protocol - alias = 13
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx34 - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause->CauseProtocol
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx34- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx33 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 6 -idx35 -rootc1: Cause->misc - alias = 13
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx36 - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause->CauseMisc
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx36- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx35 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 7 -idx37 -rootc1: Cause->serviceLayer - alias = -1
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx38 - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause->CauseServiceLayer -ROOTS5 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx39 -roots5 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx40- alias primitive - pid = 9 - OCTET STRING - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause);
    	p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause));
    	XNAP_MEMCPY(p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause, sizeof(temp_buff_for_serviceLayerCause)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx40- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx39 -roots5 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx38 - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS5 ===*/
    	#endif /*hc-choice-ELEM 7 -idx37 -rootc1*/
	
    	/*=== END CHOICE -idx24 -ROOTC1 -Cause ===*/
    	//end of hc-sequence-ELEM 2: -idx23 -roots3 E2connectionSetupFailed_Item->cause - alias = -1
	
    	/*=== END SEQUENCE -idx16 - E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item - E2connectionSetupFailed_Item -ROOTS3 ===*/
    	/*=== END LIST  -idx15 - E2connectionSetupFailed_List ===*/
    }
    #endif/*======== End Hardcode IE -idx14: id_E2connectionSetupFailed - optional ========*/
    return XNAP_SUCCESS;
}
/*
E2connectionUpdateAcknowledge : (E2connectionUpdateAcknowledge) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2connectionUpdateAcknowledge
    protocolIEs : (E2connectionUpdateAck-IEs) 					---- (IE-LIST) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs
        TransactionID : (TransactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->TransactionID
        E2connectionUpdate-List : (E2connectionUpdate-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionUpdate-List
            E2connectionUpdate-ItemIEs : (E2connectionUpdate-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs
                E2connectionUpdate-Item : (E2connectionUpdate-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item
                    tnlInformation : (TNLinformation) 					---- (SEQUENCE) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation
                        tnlAddress : (tnlAddress) 					---- (BIT STRING) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation->tnlAddress
                        tnlPort : (tnlPort) 					---- (BIT STRING) ---- [O] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation->tnlPort
                    tnlUsage : (TNLusage) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLusage
        E2connectionSetupFailed-List : (E2connectionSetupFailed-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List
            E2connectionSetupFailed-ItemIEs : (E2connectionSetupFailed-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs
                E2connectionSetupFailed-Item : (E2connectionSetupFailed-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item
                    tnlInformation : (TNLinformation) 					---- (SEQUENCE) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->TNLinformation
                        tnlAddress : (tnlAddress) 					---- (BIT STRING) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->TNLinformation->tnlAddress
                        tnlPort : (tnlPort) 					---- (BIT STRING) ---- [O] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->TNLinformation->tnlPort
                    cause : (Cause) 					---- (CHOICE) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause
                        ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause->CauseRICrequest
                        ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause->CauseRICservice
                        e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause->CauseE2node
                        transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause->CauseTransport
                        protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause->CauseProtocol
                        misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause->CauseMisc
                        serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause->CauseServiceLayer
                            serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: E2connectionUpdateAcknowledge->E2connectionUpdateAck-IEs->E2connectionSetupFailed-List->E2connectionSetupFailed-ItemIEs->E2connectionSetupFailed-Item->Cause->CauseServiceLayer->ServiceLayerCause
*/
#endif // ASSIGN_HARDCODE_E2CONNECTION_UPDATE_ACKNOWLEDGE_H

