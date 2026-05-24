#ifndef ASSIGN_HARDCODE_E2SETUP_RESPONSE_H
#define ASSIGN_HARDCODE_E2SETUP_RESPONSE_H
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

xnap_return_et assign_hardcode_value_E2setupResponse(e2ap_E2setupResponse_t* p_E2setupResponse)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_TransactionID - mandatory=======*/
    {
    	//hc-p_E2setupResponse->id_TransactionID -idx2- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - E2setupResponse->E2setupResponseIEs->TransactionID 
    	p_E2setupResponse->id_TransactionID = 127;// change integer here
    	//end of hc-p_E2setupResponse->id_TransactionID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_TransactionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_GlobalRIC_ID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx4 - E2setupResponse->E2setupResponseIEs->GlobalRIC-ID -ROOTS1 GlobalRIC_ID ===*/
    	//hc-sequence-ELEM 1: -idx5 -roots1 GlobalRIC_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx6- alias primitive - pid = 8 - OCTET STRING - E2setupResponse->E2setupResponseIEs->GlobalRIC-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2setupResponse->id_GlobalRIC_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity);
    	XNAP_MEMCPY(p_E2setupResponse->id_GlobalRIC_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity, sizeof(temp_buff_for_pLMN_Identity)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx6- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx5 -roots1 GlobalRIC_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx7 -roots1 GlobalRIC_ID->ric_ID - alias = -1 -mandatory
    	//hc-ric_ID -idx8- primitive in scope - pid = 3 - BIT STRING - E2setupResponse->E2setupResponseIEs->GlobalRIC-ID->ric-ID
    	OSOCTET temp_buff_for_ric_ID[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2setupResponse->id_GlobalRIC_ID.ric_ID.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupResponse->id_GlobalRIC_ID.ric_ID.data, temp_buff_for_ric_ID, 3);
    	//end of hc-ric_ID -idx8- primitive
    	//end of hc-sequence-ELEM 2: -idx7 -roots1 GlobalRIC_ID->ric_ID - alias = -1
	
    	/*=== END SEQUENCE -idx4 - E2setupResponse->E2setupResponseIEs->GlobalRIC-ID - GlobalRIC_ID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx3: id_GlobalRIC_ID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_RANfunctionsAccepted - optional=======*/
    {
    	 p_E2setupResponse->bitmask |= E2AP_E2SETUP_RESPONSE_e2ap_ID_RANFUNCTIONS_ACCEPTED_PRESENT;
    	/*=== START LIST -idx10 - RANfunctionsID_List===*/
    	p_E2setupResponse->id_RANfunctionsAccepted.id_RANfunctionID_Item_count = 1;
    	/*=== START SEQUENCE -idx11 - E2setupResponse->E2setupResponseIEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item -ROOTS2 RANfunctionID_Item ===*/
    	//hc-sequence-ELEM 1: -idx12 -roots2 RANfunctionID_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx13- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2setupResponse->E2setupResponseIEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item->RANfunctionID 
    	p_E2setupResponse->id_RANfunctionsAccepted.id_RANfunctionID_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx13- alias primitive
    	//end of hc-sequence-ELEM 1: -idx12 -roots2 RANfunctionID_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx14 -roots2 RANfunctionID_Item->ranFunctionRevision - alias = 6 -mandatory
    	//hc-ranFunctionRevision -idx15- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2setupResponse->E2setupResponseIEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item->RANfunctionRevision 
    	p_E2setupResponse->id_RANfunctionsAccepted.id_RANfunctionID_Item[0].ranFunctionRevision = 2047;// change integer here
    	//end of hc-ranFunctionRevision -idx15- alias primitive
    	//end of hc-sequence-ELEM 2: -idx14 -roots2 RANfunctionID_Item->ranFunctionRevision - alias = 6
	
    	/*=== END SEQUENCE -idx11 - E2setupResponse->E2setupResponseIEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item - RANfunctionID_Item -ROOTS2 ===*/
    	/*=== END LIST  -idx10 - RANfunctionsID_List ===*/
    }
    #endif/*======== End Hardcode IE -idx9: id_RANfunctionsAccepted - optional ========*/

    #if 1/*======== Start Hardcode IE -idx16: id_RANfunctionsRejected - optional=======*/
    {
    	 p_E2setupResponse->bitmask |= E2AP_E2SETUP_RESPONSE_e2ap_ID_RANFUNCTIONS_REJECTED_PRESENT;
    	/*=== START LIST -idx17 - RANfunctionsIDcause_List===*/
    	p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item_count = 1;
    	/*=== START SEQUENCE -idx18 - E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item -ROOTS3 RANfunctionIDcause_Item ===*/
    	//hc-sequence-ELEM 1: -idx19 -roots3 RANfunctionIDcause_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx20- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->RANfunctionID 
    	p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx20- alias primitive
    	//end of hc-sequence-ELEM 1: -idx19 -roots3 RANfunctionIDcause_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx21 -roots3 RANfunctionIDcause_Item->cause - alias = -1 -mandatory
    	/*=== START CHOICE -idx22 -ROOTC1 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx23 -rootc1: Cause->ricRequest - alias = 13
    	p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx24 - E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseRICrequest
    	p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx24- alias primitive
	
    	#endif /*choice-ELEM 1 -idx23 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 2 -idx25 -rootc1: Cause->ricService - alias = 13
    	p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx26 - E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseRICservice
    	p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx26- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx25 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 3 -idx27 -rootc1: Cause->e2Node - alias = 13
    	p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx28 - E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseE2node
    	p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx28- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx27 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 4 -idx29 -rootc1: Cause->transport - alias = 13
    	p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx30 - E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseTransport
    	p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx30- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx29 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 5 -idx31 -rootc1: Cause->protocol - alias = 13
    	p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx32 - E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseProtocol
    	p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx32- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx31 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 6 -idx33 -rootc1: Cause->misc - alias = 13
    	p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx34 - E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseMisc
    	p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx34- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx33 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 7 -idx35 -rootc1: Cause->serviceLayer - alias = -1
    	p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx36 - E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseServiceLayer -ROOTS4 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx37 -roots4 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx38- alias primitive - pid = 9 - OCTET STRING - E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause);
    	p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause));
    	XNAP_MEMCPY(p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause, sizeof(temp_buff_for_serviceLayerCause)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx38- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx37 -roots4 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx36 - E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS4 ===*/
    	#endif /*hc-choice-ELEM 7 -idx35 -rootc1*/
	
    	/*=== END CHOICE -idx22 -ROOTC1 -Cause ===*/
    	//end of hc-sequence-ELEM 2: -idx21 -roots3 RANfunctionIDcause_Item->cause - alias = -1
	
    	/*=== END SEQUENCE -idx18 - E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item - RANfunctionIDcause_Item -ROOTS3 ===*/
    	/*=== END LIST  -idx17 - RANfunctionsIDcause_List ===*/
    }
    #endif/*======== End Hardcode IE -idx16: id_RANfunctionsRejected - optional ========*/

    #if 1/*======== Start Hardcode IE -idx39: id_E2nodeComponentConfigAdditionAck - mandatory=======*/
    {
    	/*=== START LIST -idx40 - E2nodeComponentConfigAdditionAck_List===*/
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item_count = 1;
    	/*=== START SEQUENCE -idx41 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item -ROOTS5 E2nodeComponentConfigAdditionAck_Item ===*/
    	//hc-sequence-ELEM 1: -idx42 -roots5 E2nodeComponentConfigAdditionAck_Item->e2nodeComponentInterfaceType - alias = 13 -mandatory
    	//hc-E2nodeComponentInterfaceType -idx43 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentInterfaceType
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentInterfaceType = E2AP_E2NODE_COMPONENT_INTERFACE_TYPE_NG; // change enum value here
    	//end of hc-E2nodeComponentInterfaceType -idx43- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx42 -roots5 E2nodeComponentConfigAdditionAck_Item->e2nodeComponentInterfaceType - alias = 13
	
    	//hc-sequence-ELEM 2: -idx44 -roots5 E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID - alias = -1 -mandatory
    	/*=== START CHOICE -idx45 -ROOTC2 -E2nodeComponentID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx46 -rootc2: E2nodeComponentID->e2nodeComponentInterfaceTypeNG - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_NG;
    	/*=== START SEQUENCE -idx47 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG -ROOTS6 E2nodeComponentInterfaceNG ===*/
    	//hc-sequence-ELEM 1: -idx48 -roots6 E2nodeComponentInterfaceNG->amf_name - alias = 10 -mandatory
    	//hc-amf_name -idx49- alias primitive - pid = 10 Printable STRING - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG->AMFName
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeNG.amf_name = "hardcoded string value"; // change printable string here
    	//end of hc-amf_name -idx49- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx48 -roots6 E2nodeComponentInterfaceNG->amf_name - alias = 10
	
    	/*=== END SEQUENCE -idx47 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG - E2nodeComponentInterfaceNG -ROOTS6 ===*/
    	#endif /*choice-ELEM 1 -idx46 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 2 -idx50 -rootc2: E2nodeComponentID->e2nodeComponentInterfaceTypeXn - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_XN;
    	/*=== START SEQUENCE -idx51 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn -ROOTS7 E2nodeComponentInterfaceXn ===*/
    	//hc-sequence-ELEM 1: -idx52 -roots7 E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx53 -ROOTC3 -GlobalNG_RANNode_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx54 -rootc3: GlobalNG_RANNode_ID->gNB - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_G_NB;
    	/*=== START SEQUENCE -idx55 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID -ROOTS8 GlobalgNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx56 -roots8 GlobalgNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx57- alias primitive - pid = 8 - OCTET STRING - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id);
    	XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.data, temp_buff_for_plmn_id, sizeof(temp_buff_for_plmn_id)); // change octetstring data here
    	//end of hc-plmn_id -idx57- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx56 -roots8 GlobalgNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx58 -roots8 GlobalgNB_ID->gnb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx59 -ROOTC4 -GNB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx60 -rootc4: GNB_ID_Choice->gnb_ID - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.choice_type = E2AP_GNB_ID_CHOICE_e2ap_GNB_ID;
    	//hc-gnb_ID -idx61- primitive in scope - pid = 4 - BIT STRING - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
    	OSOCTET temp_buff_for_gnb_ID[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.data, temp_buff_for_gnb_ID, 3);
    	//end of hc-gnb_ID -idx61- primitive
    	#endif /*choice-ELEM 1 -idx60 -rootc4*/
	
    	/*=== END CHOICE -idx59 -ROOTC4 -GNB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx58 -roots8 GlobalgNB_ID->gnb_id - alias = -1
	
    	/*=== END SEQUENCE -idx55 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID - GlobalgNB_ID -ROOTS8 ===*/
    	#endif /*choice-ELEM 1 -idx54 -rootc3*/
	
    	#if 0 //hc-choice-ELEM 2 -idx62 -rootc3: GlobalNG_RANNode_ID->ng_eNB - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_NG_E_NB;
    	/*=== START SEQUENCE -idx63 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID -ROOTS9 GlobalngeNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx64 -roots9 GlobalngeNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx65- alias primitive - pid = 8 - OCTET STRING - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id_1[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id_1);
    	XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.data, temp_buff_for_plmn_id_1, sizeof(temp_buff_for_plmn_id_1)); // change octetstring data here
    	//end of hc-plmn_id -idx65- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx64 -roots9 GlobalngeNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx66 -roots9 GlobalngeNB_ID->enb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx67 -ROOTC5 -ENB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx68 -rootc5: ENB_ID_Choice->enb_ID_macro - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO;
    	//hc-enb_ID_macro -idx69- primitive in scope - pid = 3 - BIT STRING - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
    	OSOCTET temp_buff_for_enb_ID_macro[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.data, temp_buff_for_enb_ID_macro, 3);
    	//end of hc-enb_ID_macro -idx69- primitive
    	#endif /*choice-ELEM 1 -idx68 -rootc5*/
	
    	#if 0 //hc-choice-ELEM 2 -idx70 -rootc5: ENB_ID_Choice->enb_ID_shortmacro - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO;
    	//hc-enb_ID_shortmacro -idx71- primitive in scope - pid = 3 - BIT STRING - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
    	OSOCTET temp_buff_for_enb_ID_shortmacro[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.data, temp_buff_for_enb_ID_shortmacro, 3);
    	//end of hc-enb_ID_shortmacro -idx71- primitive
    	#endif /*hc-choice-ELEM 2 -idx70 -rootc5*/
	
    	#if 0 //hc-choice-ELEM 3 -idx72 -rootc5: ENB_ID_Choice->enb_ID_longmacro - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO;
    	//hc-enb_ID_longmacro -idx73- primitive in scope - pid = 3 - BIT STRING - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
    	OSOCTET temp_buff_for_enb_ID_longmacro[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.data, temp_buff_for_enb_ID_longmacro, 3);
    	//end of hc-enb_ID_longmacro -idx73- primitive
    	#endif /*hc-choice-ELEM 3 -idx72 -rootc5*/
	
    	/*=== END CHOICE -idx67 -ROOTC5 -ENB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx66 -roots9 GlobalngeNB_ID->enb_id - alias = -1
	
    	/*=== END SEQUENCE -idx63 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID - GlobalngeNB_ID -ROOTS9 ===*/
    	#endif /*hc-choice-ELEM 2 -idx62 -rootc3*/
	
    	/*=== END CHOICE -idx53 -ROOTC3 -GlobalNG_RANNode_ID ===*/
    	//end of hc-sequence-ELEM 1: -idx52 -roots7 E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID - alias = -1
	
    	/*=== END SEQUENCE -idx51 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn - E2nodeComponentInterfaceXn -ROOTS7 ===*/
    	#endif /*hc-choice-ELEM 2 -idx50 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 3 -idx74 -rootc2: E2nodeComponentID->e2nodeComponentInterfaceTypeE1 - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_E1;
    	/*=== START SEQUENCE -idx75 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1 -ROOTS10 E2nodeComponentInterfaceE1 ===*/
    	//hc-sequence-ELEM 1: -idx76 -roots10 E2nodeComponentInterfaceE1->gNB_CU_UP_ID - alias = 6 -mandatory
    	//hc-gNB_CU_UP_ID -idx77- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1->GNB-CU-UP-ID 
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeE1.gNB_CU_UP_ID = 34359738367;// change integer here
    	//end of hc-gNB_CU_UP_ID -idx77- alias primitive
    	//end of hc-sequence-ELEM 1: -idx76 -roots10 E2nodeComponentInterfaceE1->gNB_CU_UP_ID - alias = 6
	
    	/*=== END SEQUENCE -idx75 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1 - E2nodeComponentInterfaceE1 -ROOTS10 ===*/
    	#endif /*hc-choice-ELEM 3 -idx74 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 4 -idx78 -rootc2: E2nodeComponentID->e2nodeComponentInterfaceTypeF1 - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_F1;
    	/*=== START SEQUENCE -idx79 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1 -ROOTS11 E2nodeComponentInterfaceF1 ===*/
    	//hc-sequence-ELEM 1: -idx80 -roots11 E2nodeComponentInterfaceF1->gNB_DU_ID - alias = 6 -mandatory
    	//hc-gNB_DU_ID -idx81- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1->GNB-DU-ID 
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeF1.gNB_DU_ID = 34359738367;// change integer here
    	//end of hc-gNB_DU_ID -idx81- alias primitive
    	//end of hc-sequence-ELEM 1: -idx80 -roots11 E2nodeComponentInterfaceF1->gNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx79 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1 - E2nodeComponentInterfaceF1 -ROOTS11 ===*/
    	#endif /*hc-choice-ELEM 4 -idx78 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 5 -idx82 -rootc2: E2nodeComponentID->e2nodeComponentInterfaceTypeW1 - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_W1;
    	/*=== START SEQUENCE -idx83 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1 -ROOTS12 E2nodeComponentInterfaceW1 ===*/
    	//hc-sequence-ELEM 1: -idx84 -roots12 E2nodeComponentInterfaceW1->ng_eNB_DU_ID - alias = 6 -mandatory
    	//hc-ng_eNB_DU_ID -idx85- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1->NGENB-DU-ID 
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeW1.ng_eNB_DU_ID = 34359738367;// change integer here
    	//end of hc-ng_eNB_DU_ID -idx85- alias primitive
    	//end of hc-sequence-ELEM 1: -idx84 -roots12 E2nodeComponentInterfaceW1->ng_eNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx83 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1 - E2nodeComponentInterfaceW1 -ROOTS12 ===*/
    	#endif /*hc-choice-ELEM 5 -idx82 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 6 -idx86 -rootc2: E2nodeComponentID->e2nodeComponentInterfaceTypeS1 - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_S1;
    	/*=== START SEQUENCE -idx87 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1 -ROOTS13 E2nodeComponentInterfaceS1 ===*/
    	//hc-sequence-ELEM 1: -idx88 -roots13 E2nodeComponentInterfaceS1->mme_name - alias = 10 -mandatory
    	//hc-mme_name -idx89- alias primitive - pid = 10 Printable STRING - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1->MMEname
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeS1.mme_name = "hardcoded string value"; // change printable string here
    	//end of hc-mme_name -idx89- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx88 -roots13 E2nodeComponentInterfaceS1->mme_name - alias = 10
	
    	/*=== END SEQUENCE -idx87 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1 - E2nodeComponentInterfaceS1 -ROOTS13 ===*/
    	#endif /*hc-choice-ELEM 6 -idx86 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 7 -idx90 -rootc2: E2nodeComponentID->e2nodeComponentInterfaceTypeX2 - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_X2;
    	/*=== START SEQUENCE -idx91 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2 -ROOTS14 E2nodeComponentInterfaceX2 ===*/
    	//hc-sequence-ELEM 1: -idx92 -roots14 E2nodeComponentInterfaceX2->global_eNB_ID - alias = -1 -optional
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_E_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx93 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID -ROOTS15 GlobalENB_ID ===*/
    	//hc-sequence-ELEM 1: -idx94 -roots15 GlobalENB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx95- alias primitive - pid = 8 - OCTET STRING - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_1[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_1);
    	XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_1, sizeof(temp_buff_for_pLMN_Identity_1)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx95- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx94 -roots15 GlobalENB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx96 -roots15 GlobalENB_ID->eNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx97 -ROOTC6 -ENB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx98 -rootc6: ENB_ID->macro_eNB_ID - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    	//hc-macro_eNB_ID -idx99- primitive in scope - pid = 3 - BIT STRING - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->macro-eNB-ID
    	OSOCTET temp_buff_for_macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID, 3);
    	//end of hc-macro_eNB_ID -idx99- primitive
    	#endif /*choice-ELEM 1 -idx98 -rootc6*/
	
    	#if 0 //hc-choice-ELEM 2 -idx100 -rootc6: ENB_ID->home_eNB_ID - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    	//hc-home_eNB_ID -idx101- primitive in scope - pid = 3 - BIT STRING - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->home-eNB-ID
    	OSOCTET temp_buff_for_home_eNB_ID[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID, 4);
    	//end of hc-home_eNB_ID -idx101- primitive
    	#endif /*hc-choice-ELEM 2 -idx100 -rootc6*/
	
    	#if 0 //hc-choice-ELEM 3 -idx102 -rootc6: ENB_ID->short_Macro_eNB_ID - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    	//hc-short_Macro_eNB_ID -idx103- primitive in scope - pid = 3 - BIT STRING - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    	OSOCTET temp_buff_for_short_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID, 3);
    	//end of hc-short_Macro_eNB_ID -idx103- primitive
    	#endif /*hc-choice-ELEM 3 -idx102 -rootc6*/
	
    	#if 0 //hc-choice-ELEM 4 -idx104 -rootc6: ENB_ID->long_Macro_eNB_ID - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    	//hc-long_Macro_eNB_ID -idx105- primitive in scope - pid = 3 - BIT STRING - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    	OSOCTET temp_buff_for_long_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID, 3);
    	//end of hc-long_Macro_eNB_ID -idx105- primitive
    	#endif /*hc-choice-ELEM 4 -idx104 -rootc6*/
	
    	/*=== END CHOICE -idx97 -ROOTC6 -ENB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx96 -roots15 GlobalENB_ID->eNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx93 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID - GlobalENB_ID -ROOTS15 ===*/
    	//end of hc-sequence-ELEM 1: -idx92 -roots14 E2nodeComponentInterfaceX2->global_eNB_ID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx106 -roots14 E2nodeComponentInterfaceX2->global_en_gNB_ID - alias = -1 -optional
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_EN_G_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx107 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID -ROOTS16 GlobalenGNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx108 -roots16 GlobalenGNB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx109- alias primitive - pid = 8 - OCTET STRING - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_2[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_2);
    	XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_2, sizeof(temp_buff_for_pLMN_Identity_2)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx109- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx108 -roots16 GlobalenGNB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx110 -roots16 GlobalenGNB_ID->gNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx111 -ROOTC7 -ENGNB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx112 -rootc7: ENGNB_ID->gNB_ID - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.choice_type = E2AP_ENGNB_ID_e2ap_G_NB_ID;
    	//hc-gNB_ID -idx113- primitive in scope - pid = 4 - BIT STRING - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID->gNB-ID
    	OSOCTET temp_buff_for_gNB_ID[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID, 3);
    	//end of hc-gNB_ID -idx113- primitive
    	#endif /*choice-ELEM 1 -idx112 -rootc7*/
	
    	/*=== END CHOICE -idx111 -ROOTC7 -ENGNB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx110 -roots16 GlobalenGNB_ID->gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx107 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID - GlobalenGNB_ID -ROOTS16 ===*/
    	//end of hc-sequence-ELEM 2: -idx106 -roots14 E2nodeComponentInterfaceX2->global_en_gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx91 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2 - E2nodeComponentInterfaceX2 -ROOTS14 ===*/
    	#endif /*hc-choice-ELEM 7 -idx90 -rootc2*/
	
    	/*=== END CHOICE -idx45 -ROOTC2 -E2nodeComponentID ===*/
    	//end of hc-sequence-ELEM 2: -idx44 -roots5 E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID - alias = -1
	
    	//hc-sequence-ELEM 3: -idx114 -roots5 E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx115 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck -ROOTS17 E2nodeComponentConfigurationAck ===*/
    	//hc-sequence-ELEM 1: -idx116 -roots17 E2nodeComponentConfigurationAck->updateOutcome - alias = -1 -mandatory
    	//hc-updateOutcome -idx117- primitive in scope - pid = 13 ENUMURATE - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->updateOutcome
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.updateOutcome = E2AP_E2NODE_COMPONENT_CONFIGURATION_ACK_SUCCESS; // change enum value here
    	//end of hc-updateOutcome -idx117- primitive
    	//end of hc-sequence-ELEM 1: -idx116 -roots17 E2nodeComponentConfigurationAck->updateOutcome - alias = -1
	
    	//hc-sequence-ELEM 2: -idx118 -roots17 E2nodeComponentConfigurationAck->failureCause - alias = -1 -optional
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.bitmask |= E2AP_E2NODE_COMPONENT_CONFIGURATION_ACK_e2ap_FAILURE_CAUSE_PRESENT;
    	/*=== START CHOICE -idx119 -ROOTC8 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx120 -rootc8: Cause->ricRequest - alias = 13
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx121 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseRICrequest
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx121- alias primitive
	
    	#endif /*choice-ELEM 1 -idx120 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 2 -idx122 -rootc8: Cause->ricService - alias = 13
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx123 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseRICservice
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx123- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx122 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 3 -idx124 -rootc8: Cause->e2Node - alias = 13
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx125 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseE2node
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx125- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx124 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 4 -idx126 -rootc8: Cause->transport - alias = 13
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx127 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseTransport
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx127- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx126 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 5 -idx128 -rootc8: Cause->protocol - alias = 13
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx129 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseProtocol
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx129- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx128 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 6 -idx130 -rootc8: Cause->misc - alias = 13
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx131 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseMisc
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx131- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx130 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 7 -idx132 -rootc8: Cause->serviceLayer - alias = -1
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx133 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer -ROOTS18 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx134 -roots18 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx135- alias primitive - pid = 9 - OCTET STRING - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause_1[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause_1);
    	p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause_1));
    	XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause_1, sizeof(temp_buff_for_serviceLayerCause_1)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx135- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx134 -roots18 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx133 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS18 ===*/
    	#endif /*hc-choice-ELEM 7 -idx132 -rootc8*/
	
    	/*=== END CHOICE -idx119 -ROOTC8 -Cause ===*/
    	//end of hc-sequence-ELEM 2: -idx118 -roots17 E2nodeComponentConfigurationAck->failureCause - alias = -1
	
    	/*=== END SEQUENCE -idx115 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck - E2nodeComponentConfigurationAck -ROOTS17 ===*/
    	//end of hc-sequence-ELEM 3: -idx114 -roots5 E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck - alias = -1
	
    	/*=== END SEQUENCE -idx41 - E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item - E2nodeComponentConfigAdditionAck_Item -ROOTS5 ===*/
    	/*=== END LIST  -idx40 - E2nodeComponentConfigAdditionAck_List ===*/
    }
    #endif/*======== End Hardcode IE -idx39: id_E2nodeComponentConfigAdditionAck - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx136: id_RANfunctionsAcceptModified_List - optional=======*/
    {
    	 p_E2setupResponse->bitmask |= E2AP_E2SETUP_RESPONSE_e2ap_ID_RANFUNCTIONS_ACCEPT_MODIFIED_LIST_PRESENT;
    	/*=== START LIST -idx137 - RANfunctions_AcceptModified_List===*/
    	p_E2setupResponse->id_RANfunctionsAcceptModified_List.id_RANfunction_AcceptModified_Item_count = 1;
    	/*=== START SEQUENCE -idx138 - E2setupResponse->E2setupResponseIEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item -ROOTS19 RANfunction_AcceptModified_Item ===*/
    	//hc-sequence-ELEM 1: -idx139 -roots19 RANfunction_AcceptModified_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx140- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2setupResponse->E2setupResponseIEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item->RANfunctionID 
    	p_E2setupResponse->id_RANfunctionsAcceptModified_List.id_RANfunction_AcceptModified_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx140- alias primitive
    	//end of hc-sequence-ELEM 1: -idx139 -roots19 RANfunction_AcceptModified_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx141 -roots19 RANfunction_AcceptModified_Item->revRanFunctionDefinition - alias = 9 -mandatory
    	//hc-revRanFunctionDefinition -idx142- alias primitive - pid = 9 - OCTET STRING - E2setupResponse->E2setupResponseIEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item->RANfunctionDefinition
    	OSOCTET temp_buff_for_revRanFunctionDefinition[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_E2setupResponse->id_RANfunctionsAcceptModified_List.id_RANfunction_AcceptModified_Item[0].revRanFunctionDefinition.numocts = sizeof(temp_buff_for_revRanFunctionDefinition);
    	p_E2setupResponse->id_RANfunctionsAcceptModified_List.id_RANfunction_AcceptModified_Item[0].revRanFunctionDefinition.data = xnap_mem_get(sizeof(temp_buff_for_revRanFunctionDefinition));
    	XNAP_MEMCPY(p_E2setupResponse->id_RANfunctionsAcceptModified_List.id_RANfunction_AcceptModified_Item[0].revRanFunctionDefinition.data, temp_buff_for_revRanFunctionDefinition, sizeof(temp_buff_for_revRanFunctionDefinition)); // change octetstring data here
    	//end of hc-revRanFunctionDefinition -idx142- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx141 -roots19 RANfunction_AcceptModified_Item->revRanFunctionDefinition - alias = 9
	
    	//hc-sequence-ELEM 3: -idx143 -roots19 RANfunction_AcceptModified_Item->ranFunctionRevision - alias = 6 -mandatory
    	//hc-ranFunctionRevision -idx144- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2setupResponse->E2setupResponseIEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item->RANfunctionRevision 
    	p_E2setupResponse->id_RANfunctionsAcceptModified_List.id_RANfunction_AcceptModified_Item[0].ranFunctionRevision = 2047;// change integer here
    	//end of hc-ranFunctionRevision -idx144- alias primitive
    	//end of hc-sequence-ELEM 3: -idx143 -roots19 RANfunction_AcceptModified_Item->ranFunctionRevision - alias = 6
	
    	/*=== END SEQUENCE -idx138 - E2setupResponse->E2setupResponseIEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item - RANfunction_AcceptModified_Item -ROOTS19 ===*/
    	/*=== END LIST  -idx137 - RANfunctions_AcceptModified_List ===*/
    }
    #endif/*======== End Hardcode IE -idx136: id_RANfunctionsAcceptModified_List - optional ========*/
    return XNAP_SUCCESS;
}
/*
E2setupResponse : (E2setupResponse) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2setupResponse
    protocolIEs : (E2setupResponseIEs) 					---- (IE-LIST) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs
        TransactionID : (TransactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->TransactionID
        GlobalRIC-ID : (GlobalRIC-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->GlobalRIC-ID
            pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->GlobalRIC-ID->PLMN-Identity
            ric-ID : (ric-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->GlobalRIC-ID->ric-ID
        RANfunctionsID-List : (RANfunctionsID-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsID-List
            RANfunctionID-ItemIEs : (RANfunctionID-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsID-List->RANfunctionID-ItemIEs
                RANfunctionID-Item : (RANfunctionID-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item->RANfunctionID
                    ranFunctionRevision : (RANfunctionRevision) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item->RANfunctionRevision
        RANfunctionsIDcause-List : (RANfunctionsIDcause-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List
            RANfunctionIDcause-ItemIEs : (RANfunctionIDcause-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs
                RANfunctionIDcause-Item : (RANfunctionIDcause-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->RANfunctionID
                    cause : (Cause) 					---- (CHOICE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause
                        ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseRICrequest
                        ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseRICservice
                        e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseE2node
                        transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseTransport
                        protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseProtocol
                        misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseMisc
                        serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseServiceLayer
                            serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctionsIDcause-List->RANfunctionIDcause-ItemIEs->RANfunctionIDcause-Item->Cause->CauseServiceLayer->ServiceLayerCause
        E2nodeComponentConfigAdditionAck-List : (E2nodeComponentConfigAdditionAck-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List
            E2nodeComponentConfigAdditionAck-ItemIEs : (E2nodeComponentConfigAdditionAck-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs
                E2nodeComponentConfigAdditionAck-Item : (E2nodeComponentConfigAdditionAck-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item
                    e2nodeComponentInterfaceType : (E2nodeComponentInterfaceType) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentInterfaceType
                    e2nodeComponentID : (E2nodeComponentID) 					---- (CHOICE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID
                        e2nodeComponentInterfaceTypeNG : (E2nodeComponentInterfaceNG) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG
                            amf-name : (AMFName) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG->AMFName
                        e2nodeComponentInterfaceTypeXn : (E2nodeComponentInterfaceXn) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn
                            global-NG-RAN-Node-ID : (GlobalNG-RANNode-ID) 					---- (CHOICE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID
                                gNB : (GlobalgNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID
                                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->PLMN-Identity
                                    gnb-id : (GNB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice
                                        gnb-ID : (gnb-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
                                ng-eNB : (GlobalngeNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID
                                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->PLMN-Identity
                                    enb-id : (ENB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice
                                        enb-ID-macro : (enb-ID-macro) 					---- (BIT STRING) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
                                        enb-ID-shortmacro : (enb-ID-shortmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
                                        enb-ID-longmacro : (enb-ID-longmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
                        e2nodeComponentInterfaceTypeE1 : (E2nodeComponentInterfaceE1) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1
                            gNB-CU-UP-ID : (GNB-CU-UP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1->GNB-CU-UP-ID
                        e2nodeComponentInterfaceTypeF1 : (E2nodeComponentInterfaceF1) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1
                            gNB-DU-ID : (GNB-DU-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1->GNB-DU-ID
                        e2nodeComponentInterfaceTypeW1 : (E2nodeComponentInterfaceW1) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1
                            ng-eNB-DU-ID : (NGENB-DU-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1->NGENB-DU-ID
                        e2nodeComponentInterfaceTypeS1 : (E2nodeComponentInterfaceS1) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1
                            mme-name : (MMEname) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1->MMEname
                        e2nodeComponentInterfaceTypeX2 : (E2nodeComponentInterfaceX2) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2
                            global-eNB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID
                                pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->PLMN-Identity
                                eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID
                                    macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->macro-eNB-ID
                                    home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->home-eNB-ID
                                    short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                                    long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                            global-en-gNB-ID : (GlobalenGNB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID
                                pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->PLMN-Identity
                                gNB-ID : (ENGNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID
                                    gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID->gNB-ID
                    e2nodeComponentConfigurationAck : (E2nodeComponentConfigurationAck) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck
                        updateOutcome : (updateOutcome) 					---- (ENUMERATED) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->updateOutcome
                        failureCause : (Cause) 					---- (CHOICE) ---- [O] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause
                            ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseRICrequest
                            ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseRICservice
                            e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseE2node
                            transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseTransport
                            protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseProtocol
                            misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseMisc
                            serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer
                                serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer->ServiceLayerCause
        RANfunctions-AcceptModified-List : (RANfunctions-AcceptModified-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctions-AcceptModified-List
            RANfunction-AcceptModified-ItemIEs : (RANfunction-AcceptModified-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs
                RANfunction-AcceptModified-Item : (RANfunction-AcceptModified-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item->RANfunctionID
                    revRanFunctionDefinition : (RANfunctionDefinition) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item->RANfunctionDefinition
                    ranFunctionRevision : (RANfunctionRevision) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupResponse->E2setupResponseIEs->RANfunctions-AcceptModified-List->RANfunction-AcceptModified-ItemIEs->RANfunction-AcceptModified-Item->RANfunctionRevision
*/
#endif // ASSIGN_HARDCODE_E2SETUP_RESPONSE_H

