#ifndef ASSIGN_HARDCODE_ERROR_INDICATION_H
#define ASSIGN_HARDCODE_ERROR_INDICATION_H
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

xnap_return_et assign_hardcode_value_ErrorIndication(e2ap_ErrorIndication_t* p_ErrorIndication)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_TransactionID - optional=======*/
    {
    	 p_ErrorIndication->bitmask |= E2AP_ERROR_INDICATION_e2ap_ID_TRANSACTION_ID_PRESENT;
    	//hc-p_ErrorIndication->id_TransactionID -idx2- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - ErrorIndication->ErrorIndication-IEs->TransactionID 
    	p_ErrorIndication->id_TransactionID = 127;// change integer here
    	//end of hc-p_ErrorIndication->id_TransactionID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_TransactionID - optional ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_RICrequestID - optional=======*/
    {
    	 p_ErrorIndication->bitmask |= E2AP_ERROR_INDICATION_e2ap_ID_RICREQUEST_ID_PRESENT;
    	/*=== START SEQUENCE -idx4 - ErrorIndication->ErrorIndication-IEs->RICrequestID -ROOTS1 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx5 -roots1 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx6 - primitive in scope - pid = 6 - INTEGER - ErrorIndication->ErrorIndication-IEs->RICrequestID->ricRequestorID
    	p_ErrorIndication->id_RICrequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx6- primitive
	
    	//end of hc-sequence-ELEM 1: -idx5 -roots1 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx7 -roots1 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx8 - primitive in scope - pid = 6 - INTEGER - ErrorIndication->ErrorIndication-IEs->RICrequestID->ricInstanceID
    	p_ErrorIndication->id_RICrequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx8- primitive
	
    	//end of hc-sequence-ELEM 2: -idx7 -roots1 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx4 - ErrorIndication->ErrorIndication-IEs->RICrequestID - RICrequestID -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx3: id_RICrequestID - optional ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_RANfunctionID - optional=======*/
    {
    	 p_ErrorIndication->bitmask |= E2AP_ERROR_INDICATION_e2ap_ID_RANFUNCTION_ID_PRESENT;
    	//hc-p_ErrorIndication->id_RANfunctionID -idx10- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - ErrorIndication->ErrorIndication-IEs->RANfunctionID 
    	p_ErrorIndication->id_RANfunctionID = 2047;// change integer here
    	//end of hc-p_ErrorIndication->id_RANfunctionID -idx10- alias primitive
    }
    #endif/*======== End Hardcode IE -idx9: id_RANfunctionID - optional ========*/

    #if 1/*======== Start Hardcode IE -idx11: id_Cause - optional=======*/
    {
    	 p_ErrorIndication->bitmask |= E2AP_ERROR_INDICATION_e2ap_ID_CAUSE_PRESENT;
    	/*=== START CHOICE -idx12 -ROOTC1 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx13 -rootc1: Cause->ricRequest - alias = 13
    	p_ErrorIndication->id_Cause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx14 - ErrorIndication->ErrorIndication-IEs->Cause->CauseRICrequest
    	p_ErrorIndication->id_Cause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx14- alias primitive
	
    	#endif /*choice-ELEM 1 -idx13 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 2 -idx15 -rootc1: Cause->ricService - alias = 13
    	p_ErrorIndication->id_Cause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx16 - ErrorIndication->ErrorIndication-IEs->Cause->CauseRICservice
    	p_ErrorIndication->id_Cause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx16- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx15 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 3 -idx17 -rootc1: Cause->e2Node - alias = 13
    	p_ErrorIndication->id_Cause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx18 - ErrorIndication->ErrorIndication-IEs->Cause->CauseE2node
    	p_ErrorIndication->id_Cause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx18- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx17 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 4 -idx19 -rootc1: Cause->transport - alias = 13
    	p_ErrorIndication->id_Cause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx20 - ErrorIndication->ErrorIndication-IEs->Cause->CauseTransport
    	p_ErrorIndication->id_Cause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx20- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx19 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 5 -idx21 -rootc1: Cause->protocol - alias = 13
    	p_ErrorIndication->id_Cause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx22 - ErrorIndication->ErrorIndication-IEs->Cause->CauseProtocol
    	p_ErrorIndication->id_Cause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx22- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx21 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 6 -idx23 -rootc1: Cause->misc - alias = 13
    	p_ErrorIndication->id_Cause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx24 - ErrorIndication->ErrorIndication-IEs->Cause->CauseMisc
    	p_ErrorIndication->id_Cause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx24- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx23 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 7 -idx25 -rootc1: Cause->serviceLayer - alias = -1
    	p_ErrorIndication->id_Cause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx26 - ErrorIndication->ErrorIndication-IEs->Cause->CauseServiceLayer -ROOTS2 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx27 -roots2 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx28- alias primitive - pid = 9 - OCTET STRING - ErrorIndication->ErrorIndication-IEs->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_ErrorIndication->id_Cause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause);
    	p_ErrorIndication->id_Cause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause));
    	XNAP_MEMCPY(p_ErrorIndication->id_Cause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause, sizeof(temp_buff_for_serviceLayerCause)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx28- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx27 -roots2 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx26 - ErrorIndication->ErrorIndication-IEs->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS2 ===*/
    	#endif /*hc-choice-ELEM 7 -idx25 -rootc1*/
	
    	/*=== END CHOICE -idx12 -ROOTC1 -Cause ===*/
    }
    #endif/*======== End Hardcode IE -idx11: id_Cause - optional ========*/

    #if 1/*======== Start Hardcode IE -idx29: id_CriticalityDiagnostics - optional=======*/
    {
    	 p_ErrorIndication->bitmask |= E2AP_ERROR_INDICATION_e2ap_ID_CRITICALITY_DIAGNOSTICS_PRESENT;
    	/*=== START SEQUENCE -idx30 - ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics -ROOTS3 CriticalityDiagnostics ===*/
    	//hc-sequence-ELEM 1: -idx31 -roots3 CriticalityDiagnostics->procedureCode - alias = 6 -optional
    	p_ErrorIndication->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_PROCEDURE_CODE_PRESENT;
    	//hc-procedureCode -idx32- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->ProcedureCode 
    	p_ErrorIndication->id_CriticalityDiagnostics.procedureCode = 127;// change integer here
    	//end of hc-procedureCode -idx32- alias primitive
    	//end of hc-sequence-ELEM 1: -idx31 -roots3 CriticalityDiagnostics->procedureCode - alias = 6
	
    	//hc-sequence-ELEM 2: -idx33 -roots3 CriticalityDiagnostics->triggeringMessage - alias = 13 -optional
    	p_ErrorIndication->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_TRIGGERING_MESSAGE_PRESENT;
    	//hc-TriggeringMessage -idx34 - ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->TriggeringMessage
    	p_ErrorIndication->id_CriticalityDiagnostics.triggeringMessage = E2AP_TRIGGERING_MESSAGE_INITIATING_MESSAGE; // change enum value here
    	//end of hc-TriggeringMessage -idx34- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx33 -roots3 CriticalityDiagnostics->triggeringMessage - alias = 13
	
    	//hc-sequence-ELEM 3: -idx35 -roots3 CriticalityDiagnostics->procedureCriticality - alias = 13 -optional
    	p_ErrorIndication->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_PROCEDURE_CRITICALITY_PRESENT;
    	//hc-Criticality -idx36 - ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->Criticality
    	p_ErrorIndication->id_CriticalityDiagnostics.procedureCriticality = E2AP_CRITICALITY_REJECT; // change enum value here
    	//end of hc-Criticality -idx36- alias primitive
	
    	//end of hc-sequence-ELEM 3: -idx35 -roots3 CriticalityDiagnostics->procedureCriticality - alias = 13
	
    	//hc-sequence-ELEM 4: -idx37 -roots3 CriticalityDiagnostics->ricRequestorID - alias = -1 -optional
    	p_ErrorIndication->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_RIC_REQUESTOR_ID_PRESENT;
    	/*=== START SEQUENCE -idx38 - ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->RICrequestID -ROOTS4 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx39 -roots4 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx40 - primitive in scope - pid = 6 - INTEGER - ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->RICrequestID->ricRequestorID
    	p_ErrorIndication->id_CriticalityDiagnostics.ricRequestorID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx40- primitive
	
    	//end of hc-sequence-ELEM 1: -idx39 -roots4 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx41 -roots4 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx42 - primitive in scope - pid = 6 - INTEGER - ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->RICrequestID->ricInstanceID
    	p_ErrorIndication->id_CriticalityDiagnostics.ricRequestorID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx42- primitive
	
    	//end of hc-sequence-ELEM 2: -idx41 -roots4 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx38 - ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->RICrequestID - RICrequestID -ROOTS4 ===*/
    	//end of hc-sequence-ELEM 4: -idx37 -roots3 CriticalityDiagnostics->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 5: -idx43 -roots3 CriticalityDiagnostics->iEsCriticalityDiagnostics - alias = -1 -optional
    	p_ErrorIndication->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_I_ES_CRITICALITY_DIAGNOSTICS_PRESENT;
    	/*=== START SEQUENCE OF ITEM -idx44 - CriticalityDiagnostics_IE_List===*/
    	p_ErrorIndication->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item_count = 1;
    	/*=== START SEQUENCE -idx45 - ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item -ROOTS5 CriticalityDiagnostics_IE_Item ===*/
    	//hc-sequence-ELEM 1: -idx46 -roots5 CriticalityDiagnostics_IE_Item->iECriticality - alias = 13 -mandatory
    	//hc-Criticality -idx47 - ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->Criticality
    	p_ErrorIndication->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].iECriticality = E2AP_CRITICALITY_REJECT; // change enum value here
    	//end of hc-Criticality -idx47- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx46 -roots5 CriticalityDiagnostics_IE_Item->iECriticality - alias = 13
	
    	//hc-sequence-ELEM 2: -idx48 -roots5 CriticalityDiagnostics_IE_Item->iE_ID - alias = 6 -mandatory
    	//hc-iE_ID -idx49- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->ProtocolIE-ID 
    	p_ErrorIndication->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].iE_ID = 32767;// change integer here
    	//end of hc-iE_ID -idx49- alias primitive
    	//end of hc-sequence-ELEM 2: -idx48 -roots5 CriticalityDiagnostics_IE_Item->iE_ID - alias = 6
	
    	//hc-sequence-ELEM 3: -idx50 -roots5 CriticalityDiagnostics_IE_Item->typeOfError - alias = 13 -mandatory
    	//hc-TypeOfError -idx51 - ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->TypeOfError
    	p_ErrorIndication->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].typeOfError = E2AP_TYPE_OF_ERROR_NOT_UNDERSTOOD; // change enum value here
    	//end of hc-TypeOfError -idx51- alias primitive
	
    	//end of hc-sequence-ELEM 3: -idx50 -roots5 CriticalityDiagnostics_IE_Item->typeOfError - alias = 13
	
    	/*=== END SEQUENCE -idx45 - ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item - CriticalityDiagnostics_IE_Item -ROOTS5 ===*/
    	/*=== END SEQUENCE OF ITEM -idx44 - CriticalityDiagnostics_IE_List ===*/
    	//end of hc-sequence-ELEM 5: -idx43 -roots3 CriticalityDiagnostics->iEsCriticalityDiagnostics - alias = -1
	
    	/*=== END SEQUENCE -idx30 - ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics - CriticalityDiagnostics -ROOTS3 ===*/
    }
    #endif/*======== End Hardcode IE -idx29: id_CriticalityDiagnostics - optional ========*/
    return XNAP_SUCCESS;
}
/*
ErrorIndication : (ErrorIndication) 					---- (SEQUENCE) ---- [UNK] ----PATH: ErrorIndication
    protocolIEs : (ErrorIndication-IEs) 					---- (IE-LIST) ---- [M] ----PATH: ErrorIndication->ErrorIndication-IEs
        TransactionID : (TransactionID) 					---- (PRIMITIVE) ---- [O] ----PATH: ErrorIndication->ErrorIndication-IEs->TransactionID
        RICrequestID : (RICrequestID) 					---- (SEQUENCE) ---- [O] ----PATH: ErrorIndication->ErrorIndication-IEs->RICrequestID
            ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: ErrorIndication->ErrorIndication-IEs->RICrequestID->ricRequestorID
            ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: ErrorIndication->ErrorIndication-IEs->RICrequestID->ricInstanceID
        RANfunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [O] ----PATH: ErrorIndication->ErrorIndication-IEs->RANfunctionID
        Cause : (Cause) 					---- (CHOICE) ---- [O] ----PATH: ErrorIndication->ErrorIndication-IEs->Cause
            ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: ErrorIndication->ErrorIndication-IEs->Cause->CauseRICrequest
            ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: ErrorIndication->ErrorIndication-IEs->Cause->CauseRICservice
            e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: ErrorIndication->ErrorIndication-IEs->Cause->CauseE2node
            transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: ErrorIndication->ErrorIndication-IEs->Cause->CauseTransport
            protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: ErrorIndication->ErrorIndication-IEs->Cause->CauseProtocol
            misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: ErrorIndication->ErrorIndication-IEs->Cause->CauseMisc
            serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: ErrorIndication->ErrorIndication-IEs->Cause->CauseServiceLayer
                serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: ErrorIndication->ErrorIndication-IEs->Cause->CauseServiceLayer->ServiceLayerCause
        CriticalityDiagnostics : (CriticalityDiagnostics) 					---- (SEQUENCE) ---- [O] ----PATH: ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics
            procedureCode : (ProcedureCode) 					---- (PRIMITIVE) ---- [O] ----PATH: ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->ProcedureCode
            triggeringMessage : (TriggeringMessage) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->TriggeringMessage
            procedureCriticality : (Criticality) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->Criticality
            ricRequestorID : (RICrequestID) 					---- (SEQUENCE) ---- [O] ----PATH: ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->RICrequestID
                ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->RICrequestID->ricRequestorID
                ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->RICrequestID->ricInstanceID
            iEsCriticalityDiagnostics : (CriticalityDiagnostics-IE-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List
                CriticalityDiagnostics-IE-Item : (CriticalityDiagnostics-IE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item
                    iECriticality : (Criticality) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->Criticality
                    iE-ID : (ProtocolIE-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->ProtocolIE-ID
                    typeOfError : (TypeOfError) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: ErrorIndication->ErrorIndication-IEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->TypeOfError
*/
#endif // ASSIGN_HARDCODE_ERROR_INDICATION_H

