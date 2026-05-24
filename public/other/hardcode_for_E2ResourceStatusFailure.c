#ifndef ASSIGN_HARDCODE_E2RESOURCE_STATUS_FAILURE_H
#define ASSIGN_HARDCODE_E2RESOURCE_STATUS_FAILURE_H
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

xnap_return_et assign_hardcode_value_E2ResourceStatusFailure(e2ap_E2ResourceStatusFailure_t* p_E2ResourceStatusFailure)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_TransactionID - mandatory=======*/
    {
    	//hc-p_E2ResourceStatusFailure->id_TransactionID -idx2- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->TransactionID 
    	p_E2ResourceStatusFailure->id_TransactionID = 127;// change integer here
    	//end of hc-p_E2ResourceStatusFailure->id_TransactionID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_TransactionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_RICloadMeasurementID - mandatory=======*/
    {
    	//hc-p_E2ResourceStatusFailure->id_RICloadMeasurementID -idx4- alias primitive - pid = 5 - INTEGER - min:1 - max:4095  - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->LoadMeasurementID 
    	p_E2ResourceStatusFailure->id_RICloadMeasurementID = 2048;// change integer here
    	//end of hc-p_E2ResourceStatusFailure->id_RICloadMeasurementID -idx4- alias primitive
    }
    #endif/*======== End Hardcode IE -idx3: id_RICloadMeasurementID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx5: id_E2nodeLoadMeasurementID - mandatory=======*/
    {
    	//hc-p_E2ResourceStatusFailure->id_E2nodeLoadMeasurementID -idx6- alias primitive - pid = 5 - INTEGER - min:1 - max:4095  - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->LoadMeasurementID 
    	p_E2ResourceStatusFailure->id_E2nodeLoadMeasurementID = 2048;// change integer here
    	//end of hc-p_E2ResourceStatusFailure->id_E2nodeLoadMeasurementID -idx6- alias primitive
    }
    #endif/*======== End Hardcode IE -idx5: id_E2nodeLoadMeasurementID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_Cause - mandatory=======*/
    {
    	/*=== START CHOICE -idx8 -ROOTC1 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx9 -rootc1: Cause->ricRequest - alias = 13
    	p_E2ResourceStatusFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx10 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause->CauseRICrequest
    	p_E2ResourceStatusFailure->id_Cause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx10- alias primitive
	
    	#endif /*choice-ELEM 1 -idx9 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 2 -idx11 -rootc1: Cause->ricService - alias = 13
    	p_E2ResourceStatusFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx12 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause->CauseRICservice
    	p_E2ResourceStatusFailure->id_Cause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx12- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx11 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 3 -idx13 -rootc1: Cause->e2Node - alias = 13
    	p_E2ResourceStatusFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx14 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause->CauseE2node
    	p_E2ResourceStatusFailure->id_Cause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx14- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx13 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 4 -idx15 -rootc1: Cause->transport - alias = 13
    	p_E2ResourceStatusFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx16 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause->CauseTransport
    	p_E2ResourceStatusFailure->id_Cause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx16- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx15 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 5 -idx17 -rootc1: Cause->protocol - alias = 13
    	p_E2ResourceStatusFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx18 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause->CauseProtocol
    	p_E2ResourceStatusFailure->id_Cause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx18- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx17 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 6 -idx19 -rootc1: Cause->misc - alias = 13
    	p_E2ResourceStatusFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx20 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause->CauseMisc
    	p_E2ResourceStatusFailure->id_Cause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx20- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx19 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 7 -idx21 -rootc1: Cause->serviceLayer - alias = -1
    	p_E2ResourceStatusFailure->id_Cause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx22 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause->CauseServiceLayer -ROOTS1 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx23 -roots1 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx24- alias primitive - pid = 9 - OCTET STRING - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_E2ResourceStatusFailure->id_Cause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause);
    	p_E2ResourceStatusFailure->id_Cause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause));
    	XNAP_MEMCPY(p_E2ResourceStatusFailure->id_Cause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause, sizeof(temp_buff_for_serviceLayerCause)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx24- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx23 -roots1 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx22 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS1 ===*/
    	#endif /*hc-choice-ELEM 7 -idx21 -rootc1*/
	
    	/*=== END CHOICE -idx8 -ROOTC1 -Cause ===*/
    }
    #endif/*======== End Hardcode IE -idx7: id_Cause - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx25: id_CriticalityDiagnostics - optional=======*/
    {
    	 p_E2ResourceStatusFailure->bitmask |= E2AP_E2RESOURCE_STATUS_FAILURE_e2ap_ID_CRITICALITY_DIAGNOSTICS_PRESENT;
    	/*=== START SEQUENCE -idx26 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics -ROOTS2 CriticalityDiagnostics ===*/
    	//hc-sequence-ELEM 1: -idx27 -roots2 CriticalityDiagnostics->procedureCode - alias = 6 -optional
    	p_E2ResourceStatusFailure->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_PROCEDURE_CODE_PRESENT;
    	//hc-procedureCode -idx28- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->ProcedureCode 
    	p_E2ResourceStatusFailure->id_CriticalityDiagnostics.procedureCode = 127;// change integer here
    	//end of hc-procedureCode -idx28- alias primitive
    	//end of hc-sequence-ELEM 1: -idx27 -roots2 CriticalityDiagnostics->procedureCode - alias = 6
	
    	//hc-sequence-ELEM 2: -idx29 -roots2 CriticalityDiagnostics->triggeringMessage - alias = 13 -optional
    	p_E2ResourceStatusFailure->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_TRIGGERING_MESSAGE_PRESENT;
    	//hc-TriggeringMessage -idx30 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->TriggeringMessage
    	p_E2ResourceStatusFailure->id_CriticalityDiagnostics.triggeringMessage = E2AP_TRIGGERING_MESSAGE_INITIATING_MESSAGE; // change enum value here
    	//end of hc-TriggeringMessage -idx30- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx29 -roots2 CriticalityDiagnostics->triggeringMessage - alias = 13
	
    	//hc-sequence-ELEM 3: -idx31 -roots2 CriticalityDiagnostics->procedureCriticality - alias = 13 -optional
    	p_E2ResourceStatusFailure->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_PROCEDURE_CRITICALITY_PRESENT;
    	//hc-Criticality -idx32 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->Criticality
    	p_E2ResourceStatusFailure->id_CriticalityDiagnostics.procedureCriticality = E2AP_CRITICALITY_REJECT; // change enum value here
    	//end of hc-Criticality -idx32- alias primitive
	
    	//end of hc-sequence-ELEM 3: -idx31 -roots2 CriticalityDiagnostics->procedureCriticality - alias = 13
	
    	//hc-sequence-ELEM 4: -idx33 -roots2 CriticalityDiagnostics->ricRequestorID - alias = -1 -optional
    	p_E2ResourceStatusFailure->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_RIC_REQUESTOR_ID_PRESENT;
    	/*=== START SEQUENCE -idx34 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->RICrequestID -ROOTS3 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx35 -roots3 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx36 - primitive in scope - pid = 6 - INTEGER - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->RICrequestID->ricRequestorID
    	p_E2ResourceStatusFailure->id_CriticalityDiagnostics.ricRequestorID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx36- primitive
	
    	//end of hc-sequence-ELEM 1: -idx35 -roots3 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx37 -roots3 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx38 - primitive in scope - pid = 6 - INTEGER - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->RICrequestID->ricInstanceID
    	p_E2ResourceStatusFailure->id_CriticalityDiagnostics.ricRequestorID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx38- primitive
	
    	//end of hc-sequence-ELEM 2: -idx37 -roots3 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx34 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->RICrequestID - RICrequestID -ROOTS3 ===*/
    	//end of hc-sequence-ELEM 4: -idx33 -roots2 CriticalityDiagnostics->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 5: -idx39 -roots2 CriticalityDiagnostics->iEsCriticalityDiagnostics - alias = -1 -optional
    	p_E2ResourceStatusFailure->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_I_ES_CRITICALITY_DIAGNOSTICS_PRESENT;
    	/*=== START SEQUENCE OF ITEM -idx40 - CriticalityDiagnostics_IE_List===*/
    	p_E2ResourceStatusFailure->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item_count = 1;
    	/*=== START SEQUENCE -idx41 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item -ROOTS4 CriticalityDiagnostics_IE_Item ===*/
    	//hc-sequence-ELEM 1: -idx42 -roots4 CriticalityDiagnostics_IE_Item->iECriticality - alias = 13 -mandatory
    	//hc-Criticality -idx43 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->Criticality
    	p_E2ResourceStatusFailure->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].iECriticality = E2AP_CRITICALITY_REJECT; // change enum value here
    	//end of hc-Criticality -idx43- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx42 -roots4 CriticalityDiagnostics_IE_Item->iECriticality - alias = 13
	
    	//hc-sequence-ELEM 2: -idx44 -roots4 CriticalityDiagnostics_IE_Item->iE_ID - alias = 6 -mandatory
    	//hc-iE_ID -idx45- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->ProtocolIE-ID 
    	p_E2ResourceStatusFailure->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].iE_ID = 32767;// change integer here
    	//end of hc-iE_ID -idx45- alias primitive
    	//end of hc-sequence-ELEM 2: -idx44 -roots4 CriticalityDiagnostics_IE_Item->iE_ID - alias = 6
	
    	//hc-sequence-ELEM 3: -idx46 -roots4 CriticalityDiagnostics_IE_Item->typeOfError - alias = 13 -mandatory
    	//hc-TypeOfError -idx47 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->TypeOfError
    	p_E2ResourceStatusFailure->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].typeOfError = E2AP_TYPE_OF_ERROR_NOT_UNDERSTOOD; // change enum value here
    	//end of hc-TypeOfError -idx47- alias primitive
	
    	//end of hc-sequence-ELEM 3: -idx46 -roots4 CriticalityDiagnostics_IE_Item->typeOfError - alias = 13
	
    	/*=== END SEQUENCE -idx41 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item - CriticalityDiagnostics_IE_Item -ROOTS4 ===*/
    	/*=== END SEQUENCE OF ITEM -idx40 - CriticalityDiagnostics_IE_List ===*/
    	//end of hc-sequence-ELEM 5: -idx39 -roots2 CriticalityDiagnostics->iEsCriticalityDiagnostics - alias = -1
	
    	/*=== END SEQUENCE -idx26 - E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics - CriticalityDiagnostics -ROOTS2 ===*/
    }
    #endif/*======== End Hardcode IE -idx25: id_CriticalityDiagnostics - optional ========*/
    return XNAP_SUCCESS;
}
/*
E2ResourceStatusFailure : (E2ResourceStatusFailure) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2ResourceStatusFailure
    protocolIEs : (E2ResourceStatusFailureIEs) 					---- (IE-LIST) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs
        TransactionID : (TransactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->TransactionID
        LoadMeasurementID : (LoadMeasurementID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->LoadMeasurementID
        LoadMeasurementID : (LoadMeasurementID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->LoadMeasurementID
        Cause : (Cause) 					---- (CHOICE) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause
            ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause->CauseRICrequest
            ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause->CauseRICservice
            e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause->CauseE2node
            transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause->CauseTransport
            protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause->CauseProtocol
            misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause->CauseMisc
            serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause->CauseServiceLayer
                serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->Cause->CauseServiceLayer->ServiceLayerCause
        CriticalityDiagnostics : (CriticalityDiagnostics) 					---- (SEQUENCE) ---- [O] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics
            procedureCode : (ProcedureCode) 					---- (PRIMITIVE) ---- [O] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->ProcedureCode
            triggeringMessage : (TriggeringMessage) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->TriggeringMessage
            procedureCriticality : (Criticality) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->Criticality
            ricRequestorID : (RICrequestID) 					---- (SEQUENCE) ---- [O] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->RICrequestID
                ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->RICrequestID->ricRequestorID
                ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->RICrequestID->ricInstanceID
            iEsCriticalityDiagnostics : (CriticalityDiagnostics-IE-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List
                CriticalityDiagnostics-IE-Item : (CriticalityDiagnostics-IE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item
                    iECriticality : (Criticality) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->Criticality
                    iE-ID : (ProtocolIE-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->ProtocolIE-ID
                    typeOfError : (TypeOfError) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2ResourceStatusFailure->E2ResourceStatusFailureIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->TypeOfError
*/
#endif // ASSIGN_HARDCODE_E2RESOURCE_STATUS_FAILURE_H

