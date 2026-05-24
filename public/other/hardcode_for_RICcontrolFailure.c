#ifndef ASSIGN_HARDCODE_RICCONTROL_FAILURE_H
#define ASSIGN_HARDCODE_RICCONTROL_FAILURE_H
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

xnap_return_et assign_hardcode_value_RICcontrolFailure(e2ap_RICcontrolFailure_t* p_RICcontrolFailure)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICrequestID - mandatory=======*/
    {
    	/*=== START SEQUENCE -idx2 - RICcontrolFailure->RICcontrolFailure-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx4 - primitive in scope - pid = 6 - INTEGER - RICcontrolFailure->RICcontrolFailure-IEs->RICrequestID->ricRequestorID
    	p_RICcontrolFailure->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx4- primitive
	
    	//end of hc-sequence-ELEM 1: -idx3 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx6 - primitive in scope - pid = 6 - INTEGER - RICcontrolFailure->RICcontrolFailure-IEs->RICrequestID->ricInstanceID
    	p_RICcontrolFailure->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx6- primitive
	
    	//end of hc-sequence-ELEM 2: -idx5 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx2 - RICcontrolFailure->RICcontrolFailure-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx1: id_RICrequestID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RANfunctionID - mandatory=======*/
    {
    	//hc-p_RICcontrolFailure->id_RANfunctionID -idx8- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICcontrolFailure->RICcontrolFailure-IEs->RANfunctionID 
    	p_RICcontrolFailure->id_RANfunctionID = 2047;// change integer here
    	//end of hc-p_RICcontrolFailure->id_RANfunctionID -idx8- alias primitive
    }
    #endif/*======== End Hardcode IE -idx7: id_RANfunctionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_RICcallProcessID - optional=======*/
    {
    	 p_RICcontrolFailure->bitmask |= E2AP_RICCONTROL_FAILURE_e2ap_ID_RICCALL_PROCESS_ID_PRESENT;
    	//hc-p_RICcontrolFailure->id_RICcallProcessID -idx10- alias primitive - pid = 9 - OCTET STRING - RICcontrolFailure->RICcontrolFailure-IEs->RICcallProcessID
    	OSOCTET temp_buff_for_p_RICcontrolFailure->id_RICcallProcessID[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICcontrolFailure->id_RICcallProcessID.numocts = sizeof(temp_buff_for_p_RICcontrolFailure->id_RICcallProcessID);
    	p_RICcontrolFailure->id_RICcallProcessID.data = xnap_mem_get(sizeof(temp_buff_for_p_RICcontrolFailure->id_RICcallProcessID));
    	XNAP_MEMCPY(p_RICcontrolFailure->id_RICcallProcessID.data, temp_buff_for_p_RICcontrolFailure->id_RICcallProcessID, sizeof(temp_buff_for_p_RICcontrolFailure->id_RICcallProcessID)); // change octetstring data here
    	//end of hc-p_RICcontrolFailure->id_RICcallProcessID -idx10- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx9: id_RICcallProcessID - optional ========*/

    #if 1/*======== Start Hardcode IE -idx11: id_Cause - mandatory=======*/
    {
    	/*=== START CHOICE -idx12 -ROOTC1 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx13 -rootc1: Cause->ricRequest - alias = 13
    	p_RICcontrolFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx14 - RICcontrolFailure->RICcontrolFailure-IEs->Cause->CauseRICrequest
    	p_RICcontrolFailure->id_Cause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx14- alias primitive
	
    	#endif /*choice-ELEM 1 -idx13 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 2 -idx15 -rootc1: Cause->ricService - alias = 13
    	p_RICcontrolFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx16 - RICcontrolFailure->RICcontrolFailure-IEs->Cause->CauseRICservice
    	p_RICcontrolFailure->id_Cause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx16- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx15 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 3 -idx17 -rootc1: Cause->e2Node - alias = 13
    	p_RICcontrolFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx18 - RICcontrolFailure->RICcontrolFailure-IEs->Cause->CauseE2node
    	p_RICcontrolFailure->id_Cause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx18- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx17 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 4 -idx19 -rootc1: Cause->transport - alias = 13
    	p_RICcontrolFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx20 - RICcontrolFailure->RICcontrolFailure-IEs->Cause->CauseTransport
    	p_RICcontrolFailure->id_Cause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx20- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx19 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 5 -idx21 -rootc1: Cause->protocol - alias = 13
    	p_RICcontrolFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx22 - RICcontrolFailure->RICcontrolFailure-IEs->Cause->CauseProtocol
    	p_RICcontrolFailure->id_Cause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx22- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx21 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 6 -idx23 -rootc1: Cause->misc - alias = 13
    	p_RICcontrolFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx24 - RICcontrolFailure->RICcontrolFailure-IEs->Cause->CauseMisc
    	p_RICcontrolFailure->id_Cause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx24- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx23 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 7 -idx25 -rootc1: Cause->serviceLayer - alias = -1
    	p_RICcontrolFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx26 - RICcontrolFailure->RICcontrolFailure-IEs->Cause->CauseServiceLayer -ROOTS2 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx27 -roots2 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx28- alias primitive - pid = 9 - OCTET STRING - RICcontrolFailure->RICcontrolFailure-IEs->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICcontrolFailure->id_Cause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause);
    	p_RICcontrolFailure->id_Cause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause));
    	XNAP_MEMCPY(p_RICcontrolFailure->id_Cause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause, sizeof(temp_buff_for_serviceLayerCause)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx28- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx27 -roots2 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx26 - RICcontrolFailure->RICcontrolFailure-IEs->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS2 ===*/
    	#endif /*hc-choice-ELEM 7 -idx25 -rootc1*/
	
    	/*=== END CHOICE -idx12 -ROOTC1 -Cause ===*/
    }
    #endif/*======== End Hardcode IE -idx11: id_Cause - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx29: id_RICcontrolOutcome - optional=======*/
    {
    	 p_RICcontrolFailure->bitmask |= E2AP_RICCONTROL_FAILURE_e2ap_ID_RICCONTROL_OUTCOME_PRESENT;
    	//hc-p_RICcontrolFailure->id_RICcontrolOutcome -idx30- alias primitive - pid = 9 - OCTET STRING - RICcontrolFailure->RICcontrolFailure-IEs->RICcontrolOutcome
    	OSOCTET temp_buff_for_p_RICcontrolFailure->id_RICcontrolOutcome[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICcontrolFailure->id_RICcontrolOutcome.numocts = sizeof(temp_buff_for_p_RICcontrolFailure->id_RICcontrolOutcome);
    	p_RICcontrolFailure->id_RICcontrolOutcome.data = xnap_mem_get(sizeof(temp_buff_for_p_RICcontrolFailure->id_RICcontrolOutcome));
    	XNAP_MEMCPY(p_RICcontrolFailure->id_RICcontrolOutcome.data, temp_buff_for_p_RICcontrolFailure->id_RICcontrolOutcome, sizeof(temp_buff_for_p_RICcontrolFailure->id_RICcontrolOutcome)); // change octetstring data here
    	//end of hc-p_RICcontrolFailure->id_RICcontrolOutcome -idx30- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx29: id_RICcontrolOutcome - optional ========*/

    #if 1/*======== Start Hardcode IE -idx31: id_CriticalityDiagnostics - optional=======*/
    {
    	 p_RICcontrolFailure->bitmask |= E2AP_RICCONTROL_FAILURE_e2ap_ID_CRITICALITY_DIAGNOSTICS_PRESENT;
    	/*=== START SEQUENCE -idx32 - RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics -ROOTS3 CriticalityDiagnostics ===*/
    	//hc-sequence-ELEM 1: -idx33 -roots3 CriticalityDiagnostics->procedureCode - alias = 6 -optional
    	p_RICcontrolFailure->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_PROCEDURE_CODE_PRESENT;
    	//hc-procedureCode -idx34- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->ProcedureCode 
    	p_RICcontrolFailure->id_CriticalityDiagnostics.procedureCode = 127;// change integer here
    	//end of hc-procedureCode -idx34- alias primitive
    	//end of hc-sequence-ELEM 1: -idx33 -roots3 CriticalityDiagnostics->procedureCode - alias = 6
	
    	//hc-sequence-ELEM 2: -idx35 -roots3 CriticalityDiagnostics->triggeringMessage - alias = 13 -optional
    	p_RICcontrolFailure->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_TRIGGERING_MESSAGE_PRESENT;
    	//hc-TriggeringMessage -idx36 - RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->TriggeringMessage
    	p_RICcontrolFailure->id_CriticalityDiagnostics.triggeringMessage = E2AP_TRIGGERING_MESSAGE_INITIATING_MESSAGE; // change enum value here
    	//end of hc-TriggeringMessage -idx36- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx35 -roots3 CriticalityDiagnostics->triggeringMessage - alias = 13
	
    	//hc-sequence-ELEM 3: -idx37 -roots3 CriticalityDiagnostics->procedureCriticality - alias = 13 -optional
    	p_RICcontrolFailure->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_PROCEDURE_CRITICALITY_PRESENT;
    	//hc-Criticality -idx38 - RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->Criticality
    	p_RICcontrolFailure->id_CriticalityDiagnostics.procedureCriticality = E2AP_CRITICALITY_REJECT; // change enum value here
    	//end of hc-Criticality -idx38- alias primitive
	
    	//end of hc-sequence-ELEM 3: -idx37 -roots3 CriticalityDiagnostics->procedureCriticality - alias = 13
	
    	//hc-sequence-ELEM 4: -idx39 -roots3 CriticalityDiagnostics->ricRequestorID - alias = -1 -optional
    	p_RICcontrolFailure->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_RIC_REQUESTOR_ID_PRESENT;
    	/*=== START SEQUENCE -idx40 - RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->RICrequestID -ROOTS4 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx41 -roots4 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx42 - primitive in scope - pid = 6 - INTEGER - RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->RICrequestID->ricRequestorID
    	p_RICcontrolFailure->id_CriticalityDiagnostics.ricRequestorID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx42- primitive
	
    	//end of hc-sequence-ELEM 1: -idx41 -roots4 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx43 -roots4 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx44 - primitive in scope - pid = 6 - INTEGER - RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->RICrequestID->ricInstanceID
    	p_RICcontrolFailure->id_CriticalityDiagnostics.ricRequestorID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx44- primitive
	
    	//end of hc-sequence-ELEM 2: -idx43 -roots4 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx40 - RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->RICrequestID - RICrequestID -ROOTS4 ===*/
    	//end of hc-sequence-ELEM 4: -idx39 -roots3 CriticalityDiagnostics->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 5: -idx45 -roots3 CriticalityDiagnostics->iEsCriticalityDiagnostics - alias = -1 -optional
    	p_RICcontrolFailure->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_I_ES_CRITICALITY_DIAGNOSTICS_PRESENT;
    	/*=== START SEQUENCE OF ITEM -idx46 - CriticalityDiagnostics_IE_List===*/
    	p_RICcontrolFailure->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item_count = 1;
    	/*=== START SEQUENCE -idx47 - RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item -ROOTS5 CriticalityDiagnostics_IE_Item ===*/
    	//hc-sequence-ELEM 1: -idx48 -roots5 CriticalityDiagnostics_IE_Item->iECriticality - alias = 13 -mandatory
    	//hc-Criticality -idx49 - RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->Criticality
    	p_RICcontrolFailure->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].iECriticality = E2AP_CRITICALITY_REJECT; // change enum value here
    	//end of hc-Criticality -idx49- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx48 -roots5 CriticalityDiagnostics_IE_Item->iECriticality - alias = 13
	
    	//hc-sequence-ELEM 2: -idx50 -roots5 CriticalityDiagnostics_IE_Item->iE_ID - alias = 6 -mandatory
    	//hc-iE_ID -idx51- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->ProtocolIE-ID 
    	p_RICcontrolFailure->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].iE_ID = 32767;// change integer here
    	//end of hc-iE_ID -idx51- alias primitive
    	//end of hc-sequence-ELEM 2: -idx50 -roots5 CriticalityDiagnostics_IE_Item->iE_ID - alias = 6
	
    	//hc-sequence-ELEM 3: -idx52 -roots5 CriticalityDiagnostics_IE_Item->typeOfError - alias = 13 -mandatory
    	//hc-TypeOfError -idx53 - RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->TypeOfError
    	p_RICcontrolFailure->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].typeOfError = E2AP_TYPE_OF_ERROR_NOT_UNDERSTOOD; // change enum value here
    	//end of hc-TypeOfError -idx53- alias primitive
	
    	//end of hc-sequence-ELEM 3: -idx52 -roots5 CriticalityDiagnostics_IE_Item->typeOfError - alias = 13
	
    	/*=== END SEQUENCE -idx47 - RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item - CriticalityDiagnostics_IE_Item -ROOTS5 ===*/
    	/*=== END SEQUENCE OF ITEM -idx46 - CriticalityDiagnostics_IE_List ===*/
    	//end of hc-sequence-ELEM 5: -idx45 -roots3 CriticalityDiagnostics->iEsCriticalityDiagnostics - alias = -1
	
    	/*=== END SEQUENCE -idx32 - RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics - CriticalityDiagnostics -ROOTS3 ===*/
    }
    #endif/*======== End Hardcode IE -idx31: id_CriticalityDiagnostics - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICcontrolFailure : (RICcontrolFailure) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICcontrolFailure
    protocolIEs : (RICcontrolFailure-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->RICrequestID->ricInstanceID
        RANfunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->RANfunctionID
        RICcallProcessID : (RICcallProcessID) 					---- (PRIMITIVE) ---- [O] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->RICcallProcessID
        Cause : (Cause) 					---- (CHOICE) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->Cause
            ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->Cause->CauseRICrequest
            ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->Cause->CauseRICservice
            e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->Cause->CauseE2node
            transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->Cause->CauseTransport
            protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->Cause->CauseProtocol
            misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->Cause->CauseMisc
            serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->Cause->CauseServiceLayer
                serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->Cause->CauseServiceLayer->ServiceLayerCause
        RICcontrolOutcome : (RICcontrolOutcome) 					---- (PRIMITIVE) ---- [O] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->RICcontrolOutcome
        CriticalityDiagnostics : (CriticalityDiagnostics) 					---- (SEQUENCE) ---- [O] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics
            procedureCode : (ProcedureCode) 					---- (PRIMITIVE) ---- [O] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->ProcedureCode
            triggeringMessage : (TriggeringMessage) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->TriggeringMessage
            procedureCriticality : (Criticality) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->Criticality
            ricRequestorID : (RICrequestID) 					---- (SEQUENCE) ---- [O] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->RICrequestID
                ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->RICrequestID->ricRequestorID
                ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->RICrequestID->ricInstanceID
            iEsCriticalityDiagnostics : (CriticalityDiagnostics-IE-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List
                CriticalityDiagnostics-IE-Item : (CriticalityDiagnostics-IE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item
                    iECriticality : (Criticality) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->Criticality
                    iE-ID : (ProtocolIE-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->ProtocolIE-ID
                    typeOfError : (TypeOfError) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICcontrolFailure->RICcontrolFailure-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->TypeOfError
*/
#endif // ASSIGN_HARDCODE_RICCONTROL_FAILURE_H

