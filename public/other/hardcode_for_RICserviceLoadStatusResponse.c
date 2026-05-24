#ifndef ASSIGN_HARDCODE_RICSERVICE_LOAD_STATUS_RESPONSE_H
#define ASSIGN_HARDCODE_RICSERVICE_LOAD_STATUS_RESPONSE_H
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

xnap_return_et assign_hardcode_value_RICserviceLoadStatusResponse(e2ap_RICserviceLoadStatusResponse_t* p_RICserviceLoadStatusResponse)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICloadMeasurementID - mandatory=======*/
    {
    	//hc-p_RICserviceLoadStatusResponse->id_RICloadMeasurementID -idx2- alias primitive - pid = 5 - INTEGER - min:1 - max:4095  - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->LoadMeasurementID 
    	p_RICserviceLoadStatusResponse->id_RICloadMeasurementID = 2048;// change integer here
    	//end of hc-p_RICserviceLoadStatusResponse->id_RICloadMeasurementID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_RICloadMeasurementID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_E2nodeLoadMeasurementID - mandatory=======*/
    {
    	//hc-p_RICserviceLoadStatusResponse->id_E2nodeLoadMeasurementID -idx4- alias primitive - pid = 5 - INTEGER - min:1 - max:4095  - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->LoadMeasurementID 
    	p_RICserviceLoadStatusResponse->id_E2nodeLoadMeasurementID = 2048;// change integer here
    	//end of hc-p_RICserviceLoadStatusResponse->id_E2nodeLoadMeasurementID -idx4- alias primitive
    }
    #endif/*======== End Hardcode IE -idx3: id_E2nodeLoadMeasurementID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx5: id_RANfunctionLoadConfirm_List - mandatory=======*/
    {
    	/*=== START LIST -idx6 - RANfunctionLoadConfirm_List===*/
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item_count = 1;
    	/*=== START SEQUENCE -idx7 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item -ROOTS1 RANfunctionLoadConfirm_Item ===*/
    	//hc-sequence-ELEM 1: -idx8 -roots1 RANfunctionLoadConfirm_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx9- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RANfunctionID 
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx9- alias primitive
    	//end of hc-sequence-ELEM 1: -idx8 -roots1 RANfunctionLoadConfirm_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx10 -roots1 RANfunctionLoadConfirm_Item->ranFunctionLoadConfirm - alias = 13 -optional
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].bitmask |= E2AP_RANFUNCTION_LOAD_CONFIRM_ITEM_e2ap_RAN_FUNCTION_LOAD_CONFIRM_PRESENT;
    	//hc-RICloadConfirm -idx11 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICloadConfirm
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ranFunctionLoadConfirm = E2AP_RICLOAD_CONFIRM_TRUE; // change enum value here
    	//end of hc-RICloadConfirm -idx11- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx10 -roots1 RANfunctionLoadConfirm_Item->ranFunctionLoadConfirm - alias = 13
	
    	//hc-sequence-ELEM 3: -idx12 -roots1 RANfunctionLoadConfirm_Item->ricServiceLoadConfirm - alias = -1 -optional
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].bitmask |= E2AP_RANFUNCTION_LOAD_CONFIRM_ITEM_e2ap_RIC_SERVICE_LOAD_CONFIRM_PRESENT;
    	/*=== START SEQUENCE -idx13 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICserviceLoadConfirm -ROOTS2 RICserviceLoadConfirm ===*/
    	//hc-sequence-ELEM 1: -idx14 -roots2 RICserviceLoadConfirm->ricServiceReportLoadConfirm - alias = 13 -optional
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricServiceLoadConfirm.bitmask |= E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_REPORT_LOAD_CONFIRM_PRESENT;
    	//hc-RICloadConfirm -idx15 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICserviceLoadConfirm->RICloadConfirm
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricServiceLoadConfirm.ricServiceReportLoadConfirm = E2AP_RICLOAD_CONFIRM_TRUE; // change enum value here
    	//end of hc-RICloadConfirm -idx15- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx14 -roots2 RICserviceLoadConfirm->ricServiceReportLoadConfirm - alias = 13
	
    	//hc-sequence-ELEM 2: -idx16 -roots2 RICserviceLoadConfirm->ricServiceInsertLoadConfirm - alias = 13 -optional
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricServiceLoadConfirm.bitmask |= E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_INSERT_LOAD_CONFIRM_PRESENT;
    	//hc-RICloadConfirm -idx17 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICserviceLoadConfirm->RICloadConfirm
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricServiceLoadConfirm.ricServiceInsertLoadConfirm = E2AP_RICLOAD_CONFIRM_TRUE; // change enum value here
    	//end of hc-RICloadConfirm -idx17- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx16 -roots2 RICserviceLoadConfirm->ricServiceInsertLoadConfirm - alias = 13
	
    	//hc-sequence-ELEM 3: -idx18 -roots2 RICserviceLoadConfirm->ricServiceControlLoadConfirm - alias = 13 -optional
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricServiceLoadConfirm.bitmask |= E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_CONTROL_LOAD_CONFIRM_PRESENT;
    	//hc-RICloadConfirm -idx19 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICserviceLoadConfirm->RICloadConfirm
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricServiceLoadConfirm.ricServiceControlLoadConfirm = E2AP_RICLOAD_CONFIRM_TRUE; // change enum value here
    	//end of hc-RICloadConfirm -idx19- alias primitive
	
    	//end of hc-sequence-ELEM 3: -idx18 -roots2 RICserviceLoadConfirm->ricServiceControlLoadConfirm - alias = 13
	
    	//hc-sequence-ELEM 4: -idx20 -roots2 RICserviceLoadConfirm->ricServicePolicyLoadConfirm - alias = 13 -optional
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricServiceLoadConfirm.bitmask |= E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_POLICY_LOAD_CONFIRM_PRESENT;
    	//hc-RICloadConfirm -idx21 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICserviceLoadConfirm->RICloadConfirm
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricServiceLoadConfirm.ricServicePolicyLoadConfirm = E2AP_RICLOAD_CONFIRM_TRUE; // change enum value here
    	//end of hc-RICloadConfirm -idx21- alias primitive
	
    	//end of hc-sequence-ELEM 4: -idx20 -roots2 RICserviceLoadConfirm->ricServicePolicyLoadConfirm - alias = 13
	
    	//hc-sequence-ELEM 5: -idx22 -roots2 RICserviceLoadConfirm->ricServiceQueryLoadConfirm - alias = 13 -optional
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricServiceLoadConfirm.bitmask |= E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_QUERY_LOAD_CONFIRM_PRESENT;
    	//hc-RICloadConfirm -idx23 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICserviceLoadConfirm->RICloadConfirm
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricServiceLoadConfirm.ricServiceQueryLoadConfirm = E2AP_RICLOAD_CONFIRM_TRUE; // change enum value here
    	//end of hc-RICloadConfirm -idx23- alias primitive
	
    	//end of hc-sequence-ELEM 5: -idx22 -roots2 RICserviceLoadConfirm->ricServiceQueryLoadConfirm - alias = 13
	
    	/*=== END SEQUENCE -idx13 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICserviceLoadConfirm - RICserviceLoadConfirm -ROOTS2 ===*/
    	//end of hc-sequence-ELEM 3: -idx12 -roots1 RANfunctionLoadConfirm_Item->ricServiceLoadConfirm - alias = -1
	
    	//hc-sequence-ELEM 4: -idx24 -roots1 RANfunctionLoadConfirm_Item->ricSubscriptionLoadConfirm_list - alias = -1 -optional
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].bitmask |= E2AP_RANFUNCTION_LOAD_CONFIRM_ITEM_e2ap_RIC_SUBSCRIPTION_LOAD_CONFIRM_LIST_PRESENT;
    	/*=== START LIST -idx25 - RICsubscriptionLoadConfirm_List===*/
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricSubscriptionLoadConfirm_list.id_RICsubscriptionLoadConfirm_Item_count = 1;
    	/*=== START SEQUENCE -idx26 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE -ROOTS3 RICsubscriptionLoadConfirm_ItemIE ===*/
    	//hc-sequence-ELEM 1: -idx27 -roots3 RICsubscriptionLoadConfirm_ItemIE->ricRequestID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx28 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICrequestID -ROOTS4 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx29 -roots4 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx30 - primitive in scope - pid = 6 - INTEGER - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICrequestID->ricRequestorID
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricSubscriptionLoadConfirm_list.id_RICsubscriptionLoadConfirm_Item[0].ricRequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx30- primitive
	
    	//end of hc-sequence-ELEM 1: -idx29 -roots4 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx31 -roots4 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx32 - primitive in scope - pid = 6 - INTEGER - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICrequestID->ricInstanceID
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricSubscriptionLoadConfirm_list.id_RICsubscriptionLoadConfirm_Item[0].ricRequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx32- primitive
	
    	//end of hc-sequence-ELEM 2: -idx31 -roots4 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx28 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICrequestID - RICrequestID -ROOTS4 ===*/
    	//end of hc-sequence-ELEM 1: -idx27 -roots3 RICsubscriptionLoadConfirm_ItemIE->ricRequestID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx33 -roots3 RICsubscriptionLoadConfirm_ItemIE->ricSubscriptionLoadConfirm - alias = 13 -optional
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricSubscriptionLoadConfirm_list.id_RICsubscriptionLoadConfirm_Item[0].bitmask |= E2AP_RICSUBSCRIPTION_LOAD_CONFIRM_ITEM_IE_e2ap_RIC_SUBSCRIPTION_LOAD_CONFIRM_PRESENT;
    	//hc-RICloadConfirm -idx34 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICloadConfirm
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricSubscriptionLoadConfirm_list.id_RICsubscriptionLoadConfirm_Item[0].ricSubscriptionLoadConfirm = E2AP_RICLOAD_CONFIRM_TRUE; // change enum value here
    	//end of hc-RICloadConfirm -idx34- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx33 -roots3 RICsubscriptionLoadConfirm_ItemIE->ricSubscriptionLoadConfirm - alias = 13
	
    	//hc-sequence-ELEM 3: -idx35 -roots3 RICsubscriptionLoadConfirm_ItemIE->ricActionLoadConfirm_list - alias = -1 -optional
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricSubscriptionLoadConfirm_list.id_RICsubscriptionLoadConfirm_Item[0].bitmask |= E2AP_RICSUBSCRIPTION_LOAD_CONFIRM_ITEM_IE_e2ap_RIC_ACTION_LOAD_CONFIRM_LIST_PRESENT;
    	/*=== START LIST -idx36 - RICactionLoadConfirm_List===*/
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricSubscriptionLoadConfirm_list.id_RICsubscriptionLoadConfirm_Item[0].ricActionLoadConfirm_list.id_RICactionLoadConfirm_Item_count = 1;
    	/*=== START SEQUENCE -idx37 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICactionLoadConfirm-List->RICactionLoadConfirm-ItemIEs->RICactionLoadConfirm-Item -ROOTS5 RICactionLoadConfirm_Item ===*/
    	//hc-sequence-ELEM 1: -idx38 -roots5 RICactionLoadConfirm_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx39- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICactionLoadConfirm-List->RICactionLoadConfirm-ItemIEs->RICactionLoadConfirm-Item->RICactionID 
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricSubscriptionLoadConfirm_list.id_RICsubscriptionLoadConfirm_Item[0].ricActionLoadConfirm_list.id_RICactionLoadConfirm_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx39- alias primitive
    	//end of hc-sequence-ELEM 1: -idx38 -roots5 RICactionLoadConfirm_Item->ricActionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx40 -roots5 RICactionLoadConfirm_Item->ricActionLoadConfirm - alias = 13 -mandatory
    	//hc-RICloadConfirm -idx41 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICactionLoadConfirm-List->RICactionLoadConfirm-ItemIEs->RICactionLoadConfirm-Item->RICloadConfirm
    	p_RICserviceLoadStatusResponse->id_RANfunctionLoadConfirm_List.id_RANfunctionLoadConfirm_Item[0].ricSubscriptionLoadConfirm_list.id_RICsubscriptionLoadConfirm_Item[0].ricActionLoadConfirm_list.id_RICactionLoadConfirm_Item[0].ricActionLoadConfirm = E2AP_RICLOAD_CONFIRM_TRUE; // change enum value here
    	//end of hc-RICloadConfirm -idx41- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx40 -roots5 RICactionLoadConfirm_Item->ricActionLoadConfirm - alias = 13
	
    	/*=== END SEQUENCE -idx37 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICactionLoadConfirm-List->RICactionLoadConfirm-ItemIEs->RICactionLoadConfirm-Item - RICactionLoadConfirm_Item -ROOTS5 ===*/
    	/*=== END LIST  -idx36 - RICactionLoadConfirm_List ===*/
    	//end of hc-sequence-ELEM 3: -idx35 -roots3 RICsubscriptionLoadConfirm_ItemIE->ricActionLoadConfirm_list - alias = -1
	
    	/*=== END SEQUENCE -idx26 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE - RICsubscriptionLoadConfirm_ItemIE -ROOTS3 ===*/
    	/*=== END LIST  -idx25 - RICsubscriptionLoadConfirm_List ===*/
    	//end of hc-sequence-ELEM 4: -idx24 -roots1 RANfunctionLoadConfirm_Item->ricSubscriptionLoadConfirm_list - alias = -1
	
    	/*=== END SEQUENCE -idx7 - RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item - RANfunctionLoadConfirm_Item -ROOTS1 ===*/
    	/*=== END LIST  -idx6 - RANfunctionLoadConfirm_List ===*/
    }
    #endif/*======== End Hardcode IE -idx5: id_RANfunctionLoadConfirm_List - mandatory ========*/
    return XNAP_SUCCESS;
}
/*
RICserviceLoadStatusResponse : (RICserviceLoadStatusResponse) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICserviceLoadStatusResponse
    protocolIEs : (RICserviceLoadStatusResponse-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs
        LoadMeasurementID : (LoadMeasurementID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->LoadMeasurementID
        LoadMeasurementID : (LoadMeasurementID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->LoadMeasurementID
        RANfunctionLoadConfirm-List : (RANfunctionLoadConfirm-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [M] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List
            RANfunctionLoadConfirm-ItemIEs : (RANfunctionLoadConfirm-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs
                RANfunctionLoadConfirm-Item : (RANfunctionLoadConfirm-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RANfunctionID
                    ranFunctionLoadConfirm : (RICloadConfirm) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICloadConfirm
                    ricServiceLoadConfirm : (RICserviceLoadConfirm) 					---- (SEQUENCE) ---- [O] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICserviceLoadConfirm
                        ricServiceReportLoadConfirm : (RICloadConfirm) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICserviceLoadConfirm->RICloadConfirm
                        ricServiceInsertLoadConfirm : (RICloadConfirm) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICserviceLoadConfirm->RICloadConfirm
                        ricServiceControlLoadConfirm : (RICloadConfirm) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICserviceLoadConfirm->RICloadConfirm
                        ricServicePolicyLoadConfirm : (RICloadConfirm) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICserviceLoadConfirm->RICloadConfirm
                        ricServiceQueryLoadConfirm : (RICloadConfirm) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICserviceLoadConfirm->RICloadConfirm
                    ricSubscriptionLoadConfirm-list : (RICsubscriptionLoadConfirm-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List
                        RICsubscriptionLoadConfirm-ItemIEs : (RICsubscriptionLoadConfirm-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs
                            RICsubscriptionLoadConfirm-ItemIE : (RICsubscriptionLoadConfirm-ItemIE) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE
                                ricRequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICrequestID
                                    ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICrequestID->ricRequestorID
                                    ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICrequestID->ricInstanceID
                                ricSubscriptionLoadConfirm : (RICloadConfirm) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICloadConfirm
                                ricActionLoadConfirm-list : (RICactionLoadConfirm-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICactionLoadConfirm-List
                                    RICactionLoadConfirm-ItemIEs : (RICactionLoadConfirm-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICactionLoadConfirm-List->RICactionLoadConfirm-ItemIEs
                                        RICactionLoadConfirm-Item : (RICactionLoadConfirm-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICactionLoadConfirm-List->RICactionLoadConfirm-ItemIEs->RICactionLoadConfirm-Item
                                            ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICactionLoadConfirm-List->RICactionLoadConfirm-ItemIEs->RICactionLoadConfirm-Item->RICactionID
                                            ricActionLoadConfirm : (RICloadConfirm) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: RICserviceLoadStatusResponse->RICserviceLoadStatusResponse-IEs->RANfunctionLoadConfirm-List->RANfunctionLoadConfirm-ItemIEs->RANfunctionLoadConfirm-Item->RICsubscriptionLoadConfirm-List->RICsubscriptionLoadConfirm-ItemIEs->RICsubscriptionLoadConfirm-ItemIE->RICactionLoadConfirm-List->RICactionLoadConfirm-ItemIEs->RICactionLoadConfirm-Item->RICloadConfirm
*/
#endif // ASSIGN_HARDCODE_RICSERVICE_LOAD_STATUS_RESPONSE_H

