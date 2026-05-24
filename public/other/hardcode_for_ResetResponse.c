#ifndef ASSIGN_HARDCODE_RESET_RESPONSE_H
#define ASSIGN_HARDCODE_RESET_RESPONSE_H
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

xnap_return_et assign_hardcode_value_ResetResponse(e2ap_ResetResponse_t* p_ResetResponse)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_TransactionID - mandatory=======*/
    {
    	//hc-p_ResetResponse->id_TransactionID -idx2- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - ResetResponse->ResetResponseIEs->TransactionID 
    	p_ResetResponse->id_TransactionID = 127;// change integer here
    	//end of hc-p_ResetResponse->id_TransactionID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_TransactionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_CriticalityDiagnostics - optional=======*/
    {
    	 p_ResetResponse->bitmask |= E2AP_RESET_RESPONSE_e2ap_ID_CRITICALITY_DIAGNOSTICS_PRESENT;
    	/*=== START SEQUENCE -idx4 - ResetResponse->ResetResponseIEs->CriticalityDiagnostics -ROOTS1 CriticalityDiagnostics ===*/
    	//hc-sequence-ELEM 1: -idx5 -roots1 CriticalityDiagnostics->procedureCode - alias = 6 -optional
    	p_ResetResponse->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_PROCEDURE_CODE_PRESENT;
    	//hc-procedureCode -idx6- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - ResetResponse->ResetResponseIEs->CriticalityDiagnostics->ProcedureCode 
    	p_ResetResponse->id_CriticalityDiagnostics.procedureCode = 127;// change integer here
    	//end of hc-procedureCode -idx6- alias primitive
    	//end of hc-sequence-ELEM 1: -idx5 -roots1 CriticalityDiagnostics->procedureCode - alias = 6
	
    	//hc-sequence-ELEM 2: -idx7 -roots1 CriticalityDiagnostics->triggeringMessage - alias = 13 -optional
    	p_ResetResponse->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_TRIGGERING_MESSAGE_PRESENT;
    	//hc-TriggeringMessage -idx8 - ResetResponse->ResetResponseIEs->CriticalityDiagnostics->TriggeringMessage
    	p_ResetResponse->id_CriticalityDiagnostics.triggeringMessage = E2AP_TRIGGERING_MESSAGE_INITIATING_MESSAGE; // change enum value here
    	//end of hc-TriggeringMessage -idx8- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx7 -roots1 CriticalityDiagnostics->triggeringMessage - alias = 13
	
    	//hc-sequence-ELEM 3: -idx9 -roots1 CriticalityDiagnostics->procedureCriticality - alias = 13 -optional
    	p_ResetResponse->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_PROCEDURE_CRITICALITY_PRESENT;
    	//hc-Criticality -idx10 - ResetResponse->ResetResponseIEs->CriticalityDiagnostics->Criticality
    	p_ResetResponse->id_CriticalityDiagnostics.procedureCriticality = E2AP_CRITICALITY_REJECT; // change enum value here
    	//end of hc-Criticality -idx10- alias primitive
	
    	//end of hc-sequence-ELEM 3: -idx9 -roots1 CriticalityDiagnostics->procedureCriticality - alias = 13
	
    	//hc-sequence-ELEM 4: -idx11 -roots1 CriticalityDiagnostics->ricRequestorID - alias = -1 -optional
    	p_ResetResponse->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_RIC_REQUESTOR_ID_PRESENT;
    	/*=== START SEQUENCE -idx12 - ResetResponse->ResetResponseIEs->CriticalityDiagnostics->RICrequestID -ROOTS2 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx13 -roots2 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx14 - primitive in scope - pid = 6 - INTEGER - ResetResponse->ResetResponseIEs->CriticalityDiagnostics->RICrequestID->ricRequestorID
    	p_ResetResponse->id_CriticalityDiagnostics.ricRequestorID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx14- primitive
	
    	//end of hc-sequence-ELEM 1: -idx13 -roots2 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx15 -roots2 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx16 - primitive in scope - pid = 6 - INTEGER - ResetResponse->ResetResponseIEs->CriticalityDiagnostics->RICrequestID->ricInstanceID
    	p_ResetResponse->id_CriticalityDiagnostics.ricRequestorID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx16- primitive
	
    	//end of hc-sequence-ELEM 2: -idx15 -roots2 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx12 - ResetResponse->ResetResponseIEs->CriticalityDiagnostics->RICrequestID - RICrequestID -ROOTS2 ===*/
    	//end of hc-sequence-ELEM 4: -idx11 -roots1 CriticalityDiagnostics->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 5: -idx17 -roots1 CriticalityDiagnostics->iEsCriticalityDiagnostics - alias = -1 -optional
    	p_ResetResponse->id_CriticalityDiagnostics.bitmask |= E2AP_CRITICALITY_DIAGNOSTICS_e2ap_I_ES_CRITICALITY_DIAGNOSTICS_PRESENT;
    	/*=== START SEQUENCE OF ITEM -idx18 - CriticalityDiagnostics_IE_List===*/
    	p_ResetResponse->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item_count = 1;
    	/*=== START SEQUENCE -idx19 - ResetResponse->ResetResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item -ROOTS3 CriticalityDiagnostics_IE_Item ===*/
    	//hc-sequence-ELEM 1: -idx20 -roots3 CriticalityDiagnostics_IE_Item->iECriticality - alias = 13 -mandatory
    	//hc-Criticality -idx21 - ResetResponse->ResetResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->Criticality
    	p_ResetResponse->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].iECriticality = E2AP_CRITICALITY_REJECT; // change enum value here
    	//end of hc-Criticality -idx21- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx20 -roots3 CriticalityDiagnostics_IE_Item->iECriticality - alias = 13
	
    	//hc-sequence-ELEM 2: -idx22 -roots3 CriticalityDiagnostics_IE_Item->iE_ID - alias = 6 -mandatory
    	//hc-iE_ID -idx23- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - ResetResponse->ResetResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->ProtocolIE-ID 
    	p_ResetResponse->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].iE_ID = 32767;// change integer here
    	//end of hc-iE_ID -idx23- alias primitive
    	//end of hc-sequence-ELEM 2: -idx22 -roots3 CriticalityDiagnostics_IE_Item->iE_ID - alias = 6
	
    	//hc-sequence-ELEM 3: -idx24 -roots3 CriticalityDiagnostics_IE_Item->typeOfError - alias = 13 -mandatory
    	//hc-TypeOfError -idx25 - ResetResponse->ResetResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item->TypeOfError
    	p_ResetResponse->id_CriticalityDiagnostics.iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0].typeOfError = E2AP_TYPE_OF_ERROR_NOT_UNDERSTOOD; // change enum value here
    	//end of hc-TypeOfError -idx25- alias primitive
	
    	//end of hc-sequence-ELEM 3: -idx24 -roots3 CriticalityDiagnostics_IE_Item->typeOfError - alias = 13
	
    	/*=== END SEQUENCE -idx19 - ResetResponse->ResetResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics_IE_Item - CriticalityDiagnostics_IE_Item -ROOTS3 ===*/
    	/*=== END SEQUENCE OF ITEM -idx18 - CriticalityDiagnostics_IE_List ===*/
    	//end of hc-sequence-ELEM 5: -idx17 -roots1 CriticalityDiagnostics->iEsCriticalityDiagnostics - alias = -1
	
    	/*=== END SEQUENCE -idx4 - ResetResponse->ResetResponseIEs->CriticalityDiagnostics - CriticalityDiagnostics -ROOTS1 ===*/
    }
    #endif/*======== End Hardcode IE -idx3: id_CriticalityDiagnostics - optional ========*/
    return XNAP_SUCCESS;
}
/*
ResetResponse : (ResetResponse) 					---- (SEQUENCE) ---- [UNK] ----PATH: ResetResponse
    protocolIEs : (ResetResponseIEs) 					---- (IE-LIST) ---- [M] ----PATH: ResetResponse->ResetResponseIEs
        TransactionID : (TransactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: ResetResponse->ResetResponseIEs->TransactionID
        CriticalityDiagnostics : (CriticalityDiagnostics) 					---- (SEQUENCE) ---- [O] ----PATH: ResetResponse->ResetResponseIEs->CriticalityDiagnostics
            procedureCode : (ProcedureCode) 					---- (PRIMITIVE) ---- [O] ----PATH: ResetResponse->ResetResponseIEs->CriticalityDiagnostics->ProcedureCode
            triggeringMessage : (TriggeringMessage) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: ResetResponse->ResetResponseIEs->CriticalityDiagnostics->TriggeringMessage
            procedureCriticality : (Criticality) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: ResetResponse->ResetResponseIEs->CriticalityDiagnostics->Criticality
            ricRequestorID : (RICrequestID) 					---- (SEQUENCE) ---- [O] ----PATH: ResetResponse->ResetResponseIEs->CriticalityDiagnostics->RICrequestID
                ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: ResetResponse->ResetResponseIEs->CriticalityDiagnostics->RICrequestID->ricRequestorID
                ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: ResetResponse->ResetResponseIEs->CriticalityDiagnostics->RICrequestID->ricInstanceID
            iEsCriticalityDiagnostics : (CriticalityDiagnostics-IE-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: ResetResponse->ResetResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List
                CriticalityDiagnostics-IE-Item : (CriticalityDiagnostics-IE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: ResetResponse->ResetResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item
                    iECriticality : (Criticality) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: ResetResponse->ResetResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->Criticality
                    iE-ID : (ProtocolIE-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: ResetResponse->ResetResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->ProtocolIE-ID
                    typeOfError : (TypeOfError) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: ResetResponse->ResetResponseIEs->CriticalityDiagnostics->CriticalityDiagnostics-IE-List->CriticalityDiagnostics-IE-Item->TypeOfError
*/
#endif // ASSIGN_HARDCODE_RESET_RESPONSE_H

