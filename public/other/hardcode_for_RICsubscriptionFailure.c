#ifndef ASSIGN_HARDCODE_RICSUBSCRIPTION_FAILURE_H
#define ASSIGN_HARDCODE_RICSUBSCRIPTION_FAILURE_H
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

xnap_return_et assign_hardcode_value_RICsubscriptionFailure(e2ap_RICsubscriptionFailure_t* p_RICsubscriptionFailure)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionFailure->RICsubscriptionFailure-IEs->RICrequestID->ricRequestorID
    	p_RICsubscriptionFailure->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionFailure->RICsubscriptionFailure-IEs->RICrequestID->ricInstanceID
    	p_RICsubscriptionFailure->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RANfunctionID - mandatory=======*/
    {
    	//hc-p_RICsubscriptionFailure->id_RANfunctionID -idx8- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICsubscriptionFailure->RICsubscriptionFailure-IEs->RANfunctionID 
    	p_RICsubscriptionFailure->id_RANfunctionID = 2047;// change integer here
    	//end of hc-p_RICsubscriptionFailure->id_RANfunctionID -idx8- alias primitive
    }
    #endif/*======== End Hardcode IE -idx7: id_RANfunctionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_Cause - mandatory=======*/
    {
    	/*=== START CHOICE -idx10 -ROOTC1 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx11 -rootc1: Cause->ricRequest - alias = 13
    	p_RICsubscriptionFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx12 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause->CauseRICrequest
    	p_RICsubscriptionFailure->id_Cause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx12- alias primitive
	
    	#endif /*choice-ELEM 1 -idx11 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 2 -idx13 -rootc1: Cause->ricService - alias = 13
    	p_RICsubscriptionFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx14 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause->CauseRICservice
    	p_RICsubscriptionFailure->id_Cause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx14- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx13 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 3 -idx15 -rootc1: Cause->e2Node - alias = 13
    	p_RICsubscriptionFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx16 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause->CauseE2node
    	p_RICsubscriptionFailure->id_Cause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx16- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx15 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 4 -idx17 -rootc1: Cause->transport - alias = 13
    	p_RICsubscriptionFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx18 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause->CauseTransport
    	p_RICsubscriptionFailure->id_Cause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx18- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx17 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 5 -idx19 -rootc1: Cause->protocol - alias = 13
    	p_RICsubscriptionFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx20 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause->CauseProtocol
    	p_RICsubscriptionFailure->id_Cause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx20- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx19 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 6 -idx21 -rootc1: Cause->misc - alias = 13
    	p_RICsubscriptionFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx22 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause->CauseMisc
    	p_RICsubscriptionFailure->id_Cause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx22- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx21 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 7 -idx23 -rootc1: Cause->serviceLayer - alias = -1
    	p_RICsubscriptionFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx24 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause->CauseServiceLayer -ROOTS2 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx25 -roots2 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx26- alias primitive - pid = 9 - OCTET STRING - RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICsubscriptionFailure->id_Cause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause);
    	p_RICsubscriptionFailure->id_Cause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause));
    	XNAP_MEMCPY(p_RICsubscriptionFailure->id_Cause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause, sizeof(temp_buff_for_serviceLayerCause)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx26- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx25 -roots2 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx24 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS2 ===*/
    	#endif /*hc-choice-ELEM 7 -idx23 -rootc1*/
	
    	/*=== END CHOICE -idx10 -ROOTC1 -Cause ===*/
    }
    #endif/*======== End Hardcode IE -idx9: id_Cause - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx27: id_CriticalityDiagnostics - optional=======*/
    {
    	 p_RICsubscriptionFailure->bitmask |= E2AP_RICSUBSCRIPTION_FAILURE_e2ap_ID_CRITICALITY_DIAGNOSTICS_PRESENT;
    	/*=== START SEQUENCE -idx28 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics -ROOTS3 CriticalityDiagnostics ===*/
    	//hc-sequence-ELEM 1: -idx29 -roots3 CriticalityDiagnostics->procedureCode - alias = 6 -optional
    	p_RICsubscriptionFailure->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_PROCEDURE_CODE_PRESENT;
    	//hc-procedureCode -idx30- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->ProcedureCode 
    	p_RICsubscriptionFailure->id_CriticalityDiagnostics.procedureCode = 127;// change integer here
    	//end of hc-procedureCode -idx30- alias primitive
    	//end of hc-sequence-ELEM 1: -idx29 -roots3 CriticalityDiagnostics->procedureCode - alias = 6
	
    	//hc-sequence-ELEM 2: -idx31 -roots3 CriticalityDiagnostics->triggeringMessage - alias = 13 -optional
    	p_RICsubscriptionFailure->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_TRIGGERING_MESSAGE_PRESENT;
    	//hc-TriggeringMessage -idx32 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->TriggeringMessage
    	p_RICsubscriptionFailure->id_CriticalityDiagnostics.triggeringMessage = E2AP_TRIGGERING_MESSAGE_INITIATING_MESSAGE; // change enum value here
    	//end of hc-TriggeringMessage -idx32- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx31 -roots3 CriticalityDiagnostics->triggeringMessage - alias = 13
	
    	//hc-sequence-ELEM 3: -idx33 -roots3 CriticalityDiagnostics->procedureCriticality - alias = 13 -optional
    	p_RICsubscriptionFailure->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_PROCEDURE_CRITICALITY_PRESENT;
    	//hc-Criticality -idx34 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->Criticality
    	p_RICsubscriptionFailure->id_CriticalityDiagnostics.procedureCriticality = E2AP_CRITICALITY_REJECT; // change enum value here
    	//end of hc-Criticality -idx34- alias primitive
	
    	//end of hc-sequence-ELEM 3: -idx33 -roots3 CriticalityDiagnostics->procedureCriticality - alias = 13
	
    	//hc-sequence-ELEM 4: -idx35 -roots3 CriticalityDiagnostics->ricRequestorID - alias = -1 -optional
    	p_RICsubscriptionFailure->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_RIC_REQUESTOR_ID_PRESENT;
    	/*=== START SEQUENCE -idx36 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->RICrequestID -ROOTS4 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx37 -roots4 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx38 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->RICrequestID->ricRequestorID
    	p_RICsubscriptionFailure->id_CriticalityDiagnostics.ricRequestorID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx38- primitive
	
    	//end of hc-sequence-ELEM 1: -idx37 -roots4 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx39 -roots4 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx40 - primitive in scope - pid = 6 - INTEGER - RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->RICrequestID->ricInstanceID
    	p_RICsubscriptionFailure->id_CriticalityDiagnostics.ricRequestorID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx40- primitive
	
    	//end of hc-sequence-ELEM 2: -idx39 -roots4 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx36 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->RICrequestID - RICrequestID -ROOTS4 ===*/
    	//end of hc-sequence-ELEM 4: -idx35 -roots3 CriticalityDiagnostics->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 5: -idx41 -roots3 CriticalityDiagnostics->iEsCriticalityDiagnostics - alias = -1 -optional
    	p_RICsubscriptionFailure->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_I_ES_CRITICALITY_DIAGNOSTICS_PRESENT;
    	/*=== START SEQUENCE OF ITEM -idx42 - CriticalityDiagnostics_IE_List===*/
    	p_RICsubscriptionFailure->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item_count = 1;
    	/*=== START SEQUENCE -idx43 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item -ROOTS5 CriticalityDiagnostics_IE_Item ===*/
    	//hc-sequence-ELEM 1: -idx44 -roots5 CriticalityDiagnostics_IE_Item->iECriticality - alias = 13 -mandatory
    	//hc-Criticality -idx45 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->Criticality
    	p_RICsubscriptionFailure->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].iECriticality = E2AP_CRITICALITY_REJECT; // change enum value here
    	//end of hc-Criticality -idx45- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx44 -roots5 CriticalityDiagnostics_IE_Item->iECriticality - alias = 13
	
    	//hc-sequence-ELEM 2: -idx46 -roots5 CriticalityDiagnostics_IE_Item->iE_ID - alias = 6 -mandatory
    	//hc-iE_ID -idx47- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->ProtocolIE-ID 
    	p_RICsubscriptionFailure->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].iE_ID = 32767;// change integer here
    	//end of hc-iE_ID -idx47- alias primitive
    	//end of hc-sequence-ELEM 2: -idx46 -roots5 CriticalityDiagnostics_IE_Item->iE_ID - alias = 6
	
    	//hc-sequence-ELEM 3: -idx48 -roots5 CriticalityDiagnostics_IE_Item->typeOfError - alias = 13 -mandatory
    	//hc-TypeOfError -idx49 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->TypeOfError
    	p_RICsubscriptionFailure->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].typeOfError = E2AP_TYPE_OF_ERROR_NOT_UNDERSTOOD; // change enum value here
    	//end of hc-TypeOfError -idx49- alias primitive
	
    	//end of hc-sequence-ELEM 3: -idx48 -roots5 CriticalityDiagnostics_IE_Item->typeOfError - alias = 13
	
    	/*=== END SEQUENCE -idx43 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item - CriticalityDiagnostics_IE_Item -ROOTS5 ===*/
    	/*=== END SEQUENCE OF ITEM -idx42 - CriticalityDiagnostics_IE_List ===*/
    	//end of hc-sequence-ELEM 5: -idx41 -roots3 CriticalityDiagnostics->iEsCriticalityDiagnostics - alias = -1
	
    	/*=== END SEQUENCE -idx28 - RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics - CriticalityDiagnostics -ROOTS3 ===*/
    }
    #endif/*======== End Hardcode IE -idx27: id_CriticalityDiagnostics - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICsubscriptionFailure : (RICsubscriptionFailure) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICsubscriptionFailure
    protocolIEs : (RICsubscriptionFailure-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->RICrequestID->ricInstanceID
        RANfunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->RANfunctionID
        Cause : (Cause) 					---- (CHOICE) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause
            ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause->CauseRICrequest
            ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause->CauseRICservice
            e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause->CauseE2node
            transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause->CauseTransport
            protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause->CauseProtocol
            misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause->CauseMisc
            serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause->CauseServiceLayer
                serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->Cause->CauseServiceLayer->ServiceLayerCause
        CriticalityDiagnostics : (CriticalityDiagnostics) 					---- (SEQUENCE) ---- [O] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics
            procedureCode : (ProcedureCode) 					---- (PRIMITIVE) ---- [O] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->ProcedureCode
            triggeringMessage : (TriggeringMessage) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->TriggeringMessage
            procedureCriticality : (Criticality) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->Criticality
            ricRequestorID : (RICrequestID) 					---- (SEQUENCE) ---- [O] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->RICrequestID
                ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->RICrequestID->ricRequestorID
                ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->RICrequestID->ricInstanceID
            iEsCriticalityDiagnostics : (CriticalityDiagnostics-IE-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List
                CriticalityDiagnostics-IE-Item : (CriticalityDiagnostics-IE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item
                    iECriticality : (Criticality) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->Criticality
                    iE-ID : (ProtocolIE-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->ProtocolIE-ID
                    typeOfError : (TypeOfError) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICsubscriptionFailure->RICsubscriptionFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->TypeOfError
*/
#endif // ASSIGN_HARDCODE_RICSUBSCRIPTION_FAILURE_H

