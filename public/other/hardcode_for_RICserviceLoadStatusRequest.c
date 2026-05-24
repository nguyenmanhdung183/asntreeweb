#ifndef ASSIGN_HARDCODE_RICSERVICE_LOAD_STATUS_REQUEST_H
#define ASSIGN_HARDCODE_RICSERVICE_LOAD_STATUS_REQUEST_H
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

xnap_return_et assign_hardcode_value_RICserviceLoadStatusRequest(e2ap_RICserviceLoadStatusRequest_t* p_RICserviceLoadStatusRequest)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICloadMeasurementID - mandatory=======*/
    {
    	//hc-p_RICserviceLoadStatusRequest->id_RICloadMeasurementID -idx2- alias primitive - pid = 5 - INTEGER - min:1 - max:4095  - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->LoadMeasurementID 
    	p_RICserviceLoadStatusRequest->id_RICloadMeasurementID = 2048;// change integer here
    	//end of hc-p_RICserviceLoadStatusRequest->id_RICloadMeasurementID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_RICloadMeasurementID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_E2nodeLoadMeasurementID - mandatory=======*/
    {
    	//hc-p_RICserviceLoadStatusRequest->id_E2nodeLoadMeasurementID -idx4- alias primitive - pid = 5 - INTEGER - min:1 - max:4095  - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->LoadMeasurementID 
    	p_RICserviceLoadStatusRequest->id_E2nodeLoadMeasurementID = 2048;// change integer here
    	//end of hc-p_RICserviceLoadStatusRequest->id_E2nodeLoadMeasurementID -idx4- alias primitive
    }
    #endif/*======== End Hardcode IE -idx3: id_E2nodeLoadMeasurementID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx5: id_RegistrationRequest - mandatory=======*/
    {
    	//hc-RegistrationRequest -idx6 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RegistrationRequest
    	p_RICserviceLoadStatusRequest->id_RegistrationRequest = E2AP_REGISTRATION_REQUEST_START; // change enum value here
    	//end of hc-RegistrationRequest -idx6- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx5: id_RegistrationRequest - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RANfunctionLoadRequest_List - mandatory=======*/
    {
    	/*=== START LIST -idx8 - RANfunctionLoadRequest_List===*/
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item_count = 1;
    	/*=== START SEQUENCE -idx9 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item -ROOTS1 RANfunctionLoadRequest_Item ===*/
    	//hc-sequence-ELEM 1: -idx10 -roots1 RANfunctionLoadRequest_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx11- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RANfunctionID 
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx11- alias primitive
    	//end of hc-sequence-ELEM 1: -idx10 -roots1 RANfunctionLoadRequest_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx12 -roots1 RANfunctionLoadRequest_Item->ranFunctionLoadRequest - alias = 13 -optional
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].bitmask |= E2AP_RANFUNCTION_LOAD_REQUEST_ITEM_e2ap_RAN_FUNCTION_LOAD_REQUEST_PRESENT;
    	//hc-RICloadRequest -idx13 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICloadRequest
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ranFunctionLoadRequest = E2AP_RICLOAD_REQUEST_TRUE; // change enum value here
    	//end of hc-RICloadRequest -idx13- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx12 -roots1 RANfunctionLoadRequest_Item->ranFunctionLoadRequest - alias = 13
	
    	//hc-sequence-ELEM 3: -idx14 -roots1 RANfunctionLoadRequest_Item->ricServiceLoadRequest - alias = -1 -optional
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].bitmask |= E2AP_RANFUNCTION_LOAD_REQUEST_ITEM_e2ap_RIC_SERVICE_LOAD_REQUEST_PRESENT;
    	/*=== START SEQUENCE -idx15 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICserviceLoadRequest -ROOTS2 RICserviceLoadRequest ===*/
    	//hc-sequence-ELEM 1: -idx16 -roots2 RICserviceLoadRequest->ricServiceReportLoadRequest - alias = 13 -optional
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricServiceLoadRequest.bitmask |= E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_REPORT_LOAD_REQUEST_PRESENT;
    	//hc-RICloadRequest -idx17 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICserviceLoadRequest->RICloadRequest
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricServiceLoadRequest.ricServiceReportLoadRequest = E2AP_RICLOAD_REQUEST_TRUE; // change enum value here
    	//end of hc-RICloadRequest -idx17- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx16 -roots2 RICserviceLoadRequest->ricServiceReportLoadRequest - alias = 13
	
    	//hc-sequence-ELEM 2: -idx18 -roots2 RICserviceLoadRequest->ricServiceInsertLoadRequest - alias = 13 -optional
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricServiceLoadRequest.bitmask |= E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_INSERT_LOAD_REQUEST_PRESENT;
    	//hc-RICloadRequest -idx19 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICserviceLoadRequest->RICloadRequest
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricServiceLoadRequest.ricServiceInsertLoadRequest = E2AP_RICLOAD_REQUEST_TRUE; // change enum value here
    	//end of hc-RICloadRequest -idx19- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx18 -roots2 RICserviceLoadRequest->ricServiceInsertLoadRequest - alias = 13
	
    	//hc-sequence-ELEM 3: -idx20 -roots2 RICserviceLoadRequest->ricServiceControlLoadRequest - alias = 13 -optional
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricServiceLoadRequest.bitmask |= E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_CONTROL_LOAD_REQUEST_PRESENT;
    	//hc-RICloadRequest -idx21 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICserviceLoadRequest->RICloadRequest
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricServiceLoadRequest.ricServiceControlLoadRequest = E2AP_RICLOAD_REQUEST_TRUE; // change enum value here
    	//end of hc-RICloadRequest -idx21- alias primitive
	
    	//end of hc-sequence-ELEM 3: -idx20 -roots2 RICserviceLoadRequest->ricServiceControlLoadRequest - alias = 13
	
    	//hc-sequence-ELEM 4: -idx22 -roots2 RICserviceLoadRequest->ricServicePolicyLoadRequest - alias = 13 -optional
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricServiceLoadRequest.bitmask |= E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_POLICY_LOAD_REQUEST_PRESENT;
    	//hc-RICloadRequest -idx23 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICserviceLoadRequest->RICloadRequest
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricServiceLoadRequest.ricServicePolicyLoadRequest = E2AP_RICLOAD_REQUEST_TRUE; // change enum value here
    	//end of hc-RICloadRequest -idx23- alias primitive
	
    	//end of hc-sequence-ELEM 4: -idx22 -roots2 RICserviceLoadRequest->ricServicePolicyLoadRequest - alias = 13
	
    	//hc-sequence-ELEM 5: -idx24 -roots2 RICserviceLoadRequest->ricServiceQueryLoadRequest - alias = 13 -optional
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricServiceLoadRequest.bitmask |= E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_QUERY_LOAD_REQUEST_PRESENT;
    	//hc-RICloadRequest -idx25 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICserviceLoadRequest->RICloadRequest
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricServiceLoadRequest.ricServiceQueryLoadRequest = E2AP_RICLOAD_REQUEST_TRUE; // change enum value here
    	//end of hc-RICloadRequest -idx25- alias primitive
	
    	//end of hc-sequence-ELEM 5: -idx24 -roots2 RICserviceLoadRequest->ricServiceQueryLoadRequest - alias = 13
	
    	/*=== END SEQUENCE -idx15 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICserviceLoadRequest - RICserviceLoadRequest -ROOTS2 ===*/
    	//end of hc-sequence-ELEM 3: -idx14 -roots1 RANfunctionLoadRequest_Item->ricServiceLoadRequest - alias = -1
	
    	//hc-sequence-ELEM 4: -idx26 -roots1 RANfunctionLoadRequest_Item->ricSubscriptionLoadRequest_list - alias = -1 -optional
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].bitmask |= E2AP_RANFUNCTION_LOAD_REQUEST_ITEM_e2ap_RIC_SUBSCRIPTION_LOAD_REQUEST_LIST_PRESENT;
    	/*=== START LIST -idx27 - RICsubscriptionLoadRequest_List===*/
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricSubscriptionLoadRequest_list.id_RICsubscriptionLoadRequest_Item_count = 1;
    	/*=== START SEQUENCE -idx28 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE -ROOTS3 RICsubscriptionLoadRequest_ItemIE ===*/
    	//hc-sequence-ELEM 1: -idx29 -roots3 RICsubscriptionLoadRequest_ItemIE->ricRequestID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx30 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICrequestID -ROOTS4 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx31 -roots4 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx32 - primitive in scope - pid = 6 - INTEGER - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICrequestID->ricRequestorID
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricSubscriptionLoadRequest_list.id_RICsubscriptionLoadRequest_Item[0].ricRequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx32- primitive
	
    	//end of hc-sequence-ELEM 1: -idx31 -roots4 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx33 -roots4 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx34 - primitive in scope - pid = 6 - INTEGER - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICrequestID->ricInstanceID
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricSubscriptionLoadRequest_list.id_RICsubscriptionLoadRequest_Item[0].ricRequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx34- primitive
	
    	//end of hc-sequence-ELEM 2: -idx33 -roots4 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx30 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICrequestID - RICrequestID -ROOTS4 ===*/
    	//end of hc-sequence-ELEM 1: -idx29 -roots3 RICsubscriptionLoadRequest_ItemIE->ricRequestID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx35 -roots3 RICsubscriptionLoadRequest_ItemIE->ricSubscriptionLoadRequest - alias = 13 -optional
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricSubscriptionLoadRequest_list.id_RICsubscriptionLoadRequest_Item[0].bitmask |= E2AP_RICSUBSCRIPTION_LOAD_REQUEST_ITEM_IE_e2ap_RIC_SUBSCRIPTION_LOAD_REQUEST_PRESENT;
    	//hc-RICloadRequest -idx36 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICloadRequest
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricSubscriptionLoadRequest_list.id_RICsubscriptionLoadRequest_Item[0].ricSubscriptionLoadRequest = E2AP_RICLOAD_REQUEST_TRUE; // change enum value here
    	//end of hc-RICloadRequest -idx36- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx35 -roots3 RICsubscriptionLoadRequest_ItemIE->ricSubscriptionLoadRequest - alias = 13
	
    	//hc-sequence-ELEM 3: -idx37 -roots3 RICsubscriptionLoadRequest_ItemIE->ricActionLoadRequest_list - alias = -1 -optional
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricSubscriptionLoadRequest_list.id_RICsubscriptionLoadRequest_Item[0].bitmask |= E2AP_RICSUBSCRIPTION_LOAD_REQUEST_ITEM_IE_e2ap_RIC_ACTION_LOAD_REQUEST_LIST_PRESENT;
    	/*=== START LIST -idx38 - RICactionLoadRequest_List===*/
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricSubscriptionLoadRequest_list.id_RICsubscriptionLoadRequest_Item[0].ricActionLoadRequest_list.id_RICactionLoadRequest_Item_count = 1;
    	/*=== START SEQUENCE -idx39 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICactionLoadRequest-List->RICactionLoadRequest-ItemIEs->RICactionLoadRequest-Item -ROOTS5 RICactionLoadRequest_Item ===*/
    	//hc-sequence-ELEM 1: -idx40 -roots5 RICactionLoadRequest_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx41- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICactionLoadRequest-List->RICactionLoadRequest-ItemIEs->RICactionLoadRequest-Item->RICactionID 
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricSubscriptionLoadRequest_list.id_RICsubscriptionLoadRequest_Item[0].ricActionLoadRequest_list.id_RICactionLoadRequest_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx41- alias primitive
    	//end of hc-sequence-ELEM 1: -idx40 -roots5 RICactionLoadRequest_Item->ricActionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx42 -roots5 RICactionLoadRequest_Item->ricActionLoadRequest - alias = 13 -mandatory
    	//hc-RICloadRequest -idx43 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICactionLoadRequest-List->RICactionLoadRequest-ItemIEs->RICactionLoadRequest-Item->RICloadRequest
    	p_RICserviceLoadStatusRequest->id_RANfunctionLoadRequest_List.id_RANfunctionLoadRequest_Item[0].ricSubscriptionLoadRequest_list.id_RICsubscriptionLoadRequest_Item[0].ricActionLoadRequest_list.id_RICactionLoadRequest_Item[0].ricActionLoadRequest = E2AP_RICLOAD_REQUEST_TRUE; // change enum value here
    	//end of hc-RICloadRequest -idx43- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx42 -roots5 RICactionLoadRequest_Item->ricActionLoadRequest - alias = 13
	
    	/*=== END SEQUENCE -idx39 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICactionLoadRequest-List->RICactionLoadRequest-ItemIEs->RICactionLoadRequest-Item - RICactionLoadRequest_Item -ROOTS5 ===*/
    	/*=== END LIST  -idx38 - RICactionLoadRequest_List ===*/
    	//end of hc-sequence-ELEM 3: -idx37 -roots3 RICsubscriptionLoadRequest_ItemIE->ricActionLoadRequest_list - alias = -1
	
    	/*=== END SEQUENCE -idx28 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE - RICsubscriptionLoadRequest_ItemIE -ROOTS3 ===*/
    	/*=== END LIST  -idx27 - RICsubscriptionLoadRequest_List ===*/
    	//end of hc-sequence-ELEM 4: -idx26 -roots1 RANfunctionLoadRequest_Item->ricSubscriptionLoadRequest_list - alias = -1
	
    	/*=== END SEQUENCE -idx9 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item - RANfunctionLoadRequest_Item -ROOTS1 ===*/
    	/*=== END LIST  -idx8 - RANfunctionLoadRequest_List ===*/
    }
    #endif/*======== End Hardcode IE -idx7: id_RANfunctionLoadRequest_List - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx44: id_ReportingPeriodicity - optional=======*/
    {
    	 p_RICserviceLoadStatusRequest->bitmask |= E2AP_RICSERVICE_LOAD_STATUS_REQUEST_e2ap_ID_REPORTING_PERIODICITY_PRESENT;
    	//hc-ReportingPeriodicity -idx45 - RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->ReportingPeriodicity
    	p_RICserviceLoadStatusRequest->id_ReportingPeriodicity = E2AP_REPORTING_PERIODICITY_MS500; // change enum value here
    	//end of hc-ReportingPeriodicity -idx45- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx44: id_ReportingPeriodicity - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICserviceLoadStatusRequest : (RICserviceLoadStatusRequest) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICserviceLoadStatusRequest
    protocolIEs : (RICserviceLoadStatusRequest-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs
        LoadMeasurementID : (LoadMeasurementID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->LoadMeasurementID
        LoadMeasurementID : (LoadMeasurementID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->LoadMeasurementID
        RegistrationRequest : (RegistrationRequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RegistrationRequest
        RANfunctionLoadRequest-List : (RANfunctionLoadRequest-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [M] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List
            RANfunctionLoadRequest-ItemIEs : (RANfunctionLoadRequest-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs
                RANfunctionLoadRequest-Item : (RANfunctionLoadRequest-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RANfunctionID
                    ranFunctionLoadRequest : (RICloadRequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICloadRequest
                    ricServiceLoadRequest : (RICserviceLoadRequest) 					---- (SEQUENCE) ---- [O] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICserviceLoadRequest
                        ricServiceReportLoadRequest : (RICloadRequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICserviceLoadRequest->RICloadRequest
                        ricServiceInsertLoadRequest : (RICloadRequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICserviceLoadRequest->RICloadRequest
                        ricServiceControlLoadRequest : (RICloadRequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICserviceLoadRequest->RICloadRequest
                        ricServicePolicyLoadRequest : (RICloadRequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICserviceLoadRequest->RICloadRequest
                        ricServiceQueryLoadRequest : (RICloadRequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICserviceLoadRequest->RICloadRequest
                    ricSubscriptionLoadRequest-list : (RICsubscriptionLoadRequest-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List
                        RICsubscriptionLoadRequest-ItemIEs : (RICsubscriptionLoadRequest-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs
                            RICsubscriptionLoadRequest-ItemIE : (RICsubscriptionLoadRequest-ItemIE) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE
                                ricRequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICrequestID
                                    ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICrequestID->ricRequestorID
                                    ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICrequestID->ricInstanceID
                                ricSubscriptionLoadRequest : (RICloadRequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICloadRequest
                                ricActionLoadRequest-list : (RICactionLoadRequest-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICactionLoadRequest-List
                                    RICactionLoadRequest-ItemIEs : (RICactionLoadRequest-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICactionLoadRequest-List->RICactionLoadRequest-ItemIEs
                                        RICactionLoadRequest-Item : (RICactionLoadRequest-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICactionLoadRequest-List->RICactionLoadRequest-ItemIEs->RICactionLoadRequest-Item
                                            ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICactionLoadRequest-List->RICactionLoadRequest-ItemIEs->RICactionLoadRequest-Item->RICactionID
                                            ricActionLoadRequest : (RICloadRequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->RANfunctionLoadRequest-List->RANfunctionLoadRequest-ItemIEs->RANfunctionLoadRequest-Item->RICsubscriptionLoadRequest-List->RICsubscriptionLoadRequest-ItemIEs->RICsubscriptionLoadRequest-ItemIE->RICactionLoadRequest-List->RICactionLoadRequest-ItemIEs->RICactionLoadRequest-Item->RICloadRequest
        ReportingPeriodicity : (ReportingPeriodicity) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICserviceLoadStatusRequest->RICserviceLoadStatusRequest-IEs->ReportingPeriodicity
*/
#endif // ASSIGN_HARDCODE_RICSERVICE_LOAD_STATUS_REQUEST_H

