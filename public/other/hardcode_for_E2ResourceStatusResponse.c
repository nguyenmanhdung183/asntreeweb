#ifndef ASSIGN_HARDCODE_E2RESOURCE_STATUS_RESPONSE_H
#define ASSIGN_HARDCODE_E2RESOURCE_STATUS_RESPONSE_H
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

xnap_return_et assign_hardcode_value_E2ResourceStatusResponse(e2ap_E2ResourceStatusResponse_t* p_E2ResourceStatusResponse)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_TransactionID - mandatory=======*/
    {
    	//hc-p_E2ResourceStatusResponse->id_TransactionID -idx2- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - E2ResourceStatusResponse->E2ResourceStatusResponseIEs->TransactionID 
    	p_E2ResourceStatusResponse->id_TransactionID = 127;// change integer here
    	//end of hc-p_E2ResourceStatusResponse->id_TransactionID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_TransactionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_RICloadMeasurementID - mandatory=======*/
    {
    	//hc-p_E2ResourceStatusResponse->id_RICloadMeasurementID -idx4- alias primitive - pid = 5 - INTEGER - min:1 - max:4095  - E2ResourceStatusResponse->E2ResourceStatusResponseIEs->LoadMeasurementID 
    	p_E2ResourceStatusResponse->id_RICloadMeasurementID = 2048;// change integer here
    	//end of hc-p_E2ResourceStatusResponse->id_RICloadMeasurementID -idx4- alias primitive
    }
    #endif/*======== End Hardcode IE -idx3: id_RICloadMeasurementID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx5: id_E2nodeLoadMeasurementID - mandatory=======*/
    {
    	//hc-p_E2ResourceStatusResponse->id_E2nodeLoadMeasurementID -idx6- alias primitive - pid = 5 - INTEGER - min:1 - max:4095  - E2ResourceStatusResponse->E2ResourceStatusResponseIEs->LoadMeasurementID 
    	p_E2ResourceStatusResponse->id_E2nodeLoadMeasurementID = 2048;// change integer here
    	//end of hc-p_E2ResourceStatusResponse->id_E2nodeLoadMeasurementID -idx6- alias primitive
    }
    #endif/*======== End Hardcode IE -idx5: id_E2nodeLoadMeasurementID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_CriticalityDiagnostics - optional=======*/
    {
    	 p_E2ResourceStatusResponse->bitmask |= E2AP_E2RESOURCE_STATUS_RESPONSE_e2ap_ID_CRITICALITY_DIAGNOSTICS_PRESENT;
    	/*=== START SEQUENCE -idx8 - E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics -ROOTS1 CriticalityDiagnostics ===*/
    	//hc-sequence-ELEM 1: -idx9 -roots1 CriticalityDiagnostics->procedureCode - alias = 6 -optional
    	p_E2ResourceStatusResponse->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_PROCEDURE_CODE_PRESENT;
    	//hc-procedureCode -idx10- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->ProcedureCode 
    	p_E2ResourceStatusResponse->id_CriticalityDiagnostics.procedureCode = 127;// change integer here
    	//end of hc-procedureCode -idx10- alias primitive
    	//end of hc-sequence-ELEM 1: -idx9 -roots1 CriticalityDiagnostics->procedureCode - alias = 6
	
    	//hc-sequence-ELEM 2: -idx11 -roots1 CriticalityDiagnostics->triggeringMessage - alias = 13 -optional
    	p_E2ResourceStatusResponse->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_TRIGGERING_MESSAGE_PRESENT;
    	//hc-TriggeringMessage -idx12 - E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->TriggeringMessage
    	p_E2ResourceStatusResponse->id_CriticalityDiagnostics.triggeringMessage = E2AP_TRIGGERING_MESSAGE_INITIATING_MESSAGE; // change enum value here
    	//end of hc-TriggeringMessage -idx12- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx11 -roots1 CriticalityDiagnostics->triggeringMessage - alias = 13
	
    	//hc-sequence-ELEM 3: -idx13 -roots1 CriticalityDiagnostics->procedureCriticality - alias = 13 -optional
    	p_E2ResourceStatusResponse->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_PROCEDURE_CRITICALITY_PRESENT;
    	//hc-Criticality -idx14 - E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->Criticality
    	p_E2ResourceStatusResponse->id_CriticalityDiagnostics.procedureCriticality = E2AP_CRITICALITY_REJECT; // change enum value here
    	//end of hc-Criticality -idx14- alias primitive
	
    	//end of hc-sequence-ELEM 3: -idx13 -roots1 CriticalityDiagnostics->procedureCriticality - alias = 13
	
    	//hc-sequence-ELEM 4: -idx15 -roots1 CriticalityDiagnostics->ricRequestorID - alias = -1 -optional
    	p_E2ResourceStatusResponse->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_RIC_REQUESTOR_ID_PRESENT;
    	/*=== START SEQUENCE -idx16 - E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->RICrequestID -ROOTS2 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx17 -roots2 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx18 - primitive in scope - pid = 6 - INTEGER - E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->RICrequestID->ricRequestorID
    	p_E2ResourceStatusResponse->id_CriticalityDiagnostics.ricRequestorID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx18- primitive
	
    	//end of hc-sequence-ELEM 1: -idx17 -roots2 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx19 -roots2 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx20 - primitive in scope - pid = 6 - INTEGER - E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->RICrequestID->ricInstanceID
    	p_E2ResourceStatusResponse->id_CriticalityDiagnostics.ricRequestorID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx20- primitive
	
    	//end of hc-sequence-ELEM 2: -idx19 -roots2 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx16 - E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->RICrequestID - RICrequestID -ROOTS2 ===*/
    	//end of hc-sequence-ELEM 4: -idx15 -roots1 CriticalityDiagnostics->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 5: -idx21 -roots1 CriticalityDiagnostics->iEsCriticalityDiagnostics - alias = -1 -optional
    	p_E2ResourceStatusResponse->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_I_ES_CRITICALITY_DIAGNOSTICS_PRESENT;
    	/*=== START SEQUENCE OF ITEM -idx22 - CriticalityDiagnostics_IE_List===*/
    	p_E2ResourceStatusResponse->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item_count = 1;
    	/*=== START SEQUENCE -idx23 - E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item -ROOTS3 CriticalityDiagnostics_IE_Item ===*/
    	//hc-sequence-ELEM 1: -idx24 -roots3 CriticalityDiagnostics_IE_Item->iECriticality - alias = 13 -mandatory
    	//hc-Criticality -idx25 - E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->Criticality
    	p_E2ResourceStatusResponse->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].iECriticality = E2AP_CRITICALITY_REJECT; // change enum value here
    	//end of hc-Criticality -idx25- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx24 -roots3 CriticalityDiagnostics_IE_Item->iECriticality - alias = 13
	
    	//hc-sequence-ELEM 2: -idx26 -roots3 CriticalityDiagnostics_IE_Item->iE_ID - alias = 6 -mandatory
    	//hc-iE_ID -idx27- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->ProtocolIE-ID 
    	p_E2ResourceStatusResponse->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].iE_ID = 32767;// change integer here
    	//end of hc-iE_ID -idx27- alias primitive
    	//end of hc-sequence-ELEM 2: -idx26 -roots3 CriticalityDiagnostics_IE_Item->iE_ID - alias = 6
	
    	//hc-sequence-ELEM 3: -idx28 -roots3 CriticalityDiagnostics_IE_Item->typeOfError - alias = 13 -mandatory
    	//hc-TypeOfError -idx29 - E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->TypeOfError
    	p_E2ResourceStatusResponse->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].typeOfError = E2AP_TYPE_OF_ERROR_NOT_UNDERSTOOD; // change enum value here
    	//end of hc-TypeOfError -idx29- alias primitive
	
    	//end of hc-sequence-ELEM 3: -idx28 -roots3 CriticalityDiagnostics_IE_Item->typeOfError - alias = 13
	
    	/*=== END SEQUENCE -idx23 - E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item - CriticalityDiagnostics_IE_Item -ROOTS3 ===*/
    	/*=== END SEQUENCE OF ITEM -idx22 - CriticalityDiagnostics_IE_List ===*/
    	//end of hc-sequence-ELEM 5: -idx21 -roots1 CriticalityDiagnostics->iEsCriticalityDiagnostics - alias = -1
	
    	/*=== END SEQUENCE -idx8 - E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics - CriticalityDiagnostics -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx7: id_CriticalityDiagnostics - optional ========*/
    return XNAP_SUCCESS;
}
/*
E2ResourceStatusResponse : (E2ResourceStatusResponse) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2ResourceStatusResponse
    protocolIEs : (E2ResourceStatusResponseIEs) 					---- (IE-LIST) ---- [M] ----PATH: E2ResourceStatusResponse->E2ResourceStatusResponseIEs
        TransactionID : (TransactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2ResourceStatusResponse->E2ResourceStatusResponseIEs->TransactionID
        LoadMeasurementID : (LoadMeasurementID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2ResourceStatusResponse->E2ResourceStatusResponseIEs->LoadMeasurementID
        LoadMeasurementID : (LoadMeasurementID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2ResourceStatusResponse->E2ResourceStatusResponseIEs->LoadMeasurementID
        CriticalityDiagnostics : (CriticalityDiagnostics) 					---- (SEQUENCE) ---- [O] ----PATH: E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics
            procedureCode : (ProcedureCode) 					---- (PRIMITIVE) ---- [O] ----PATH: E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->ProcedureCode
            triggeringMessage : (TriggeringMessage) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->TriggeringMessage
            procedureCriticality : (Criticality) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->Criticality
            ricRequestorID : (RICrequestID) 					---- (SEQUENCE) ---- [O] ----PATH: E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->RICrequestID
                ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->RICrequestID->ricRequestorID
                ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->RICrequestID->ricInstanceID
            iEsCriticalityDiagnostics : (CriticalityDiagnostics-IE-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List
                CriticalityDiagnostics-IE-Item : (CriticalityDiagnostics-IE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item
                    iECriticality : (Criticality) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->Criticality
                    iE-ID : (ProtocolIE-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->ProtocolIE-ID
                    typeOfError : (TypeOfError) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2ResourceStatusResponse->E2ResourceStatusResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->TypeOfError
*/
#endif // ASSIGN_HARDCODE_E2RESOURCE_STATUS_RESPONSE_H

