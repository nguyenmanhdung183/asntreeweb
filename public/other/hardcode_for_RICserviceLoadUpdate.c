#ifndef ASSIGN_HARDCODE_RICSERVICE_LOAD_UPDATE_H
#define ASSIGN_HARDCODE_RICSERVICE_LOAD_UPDATE_H
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

xnap_return_et assign_hardcode_value_RICserviceLoadUpdate(e2ap_RICserviceLoadUpdate_t* p_RICserviceLoadUpdate)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_RICloadMeasurementID - mandatory=======*/
    {
    	//hc-p_RICserviceLoadUpdate->id_RICloadMeasurementID -idx2- alias primitive - pid = 5 - INTEGER - min:1 - max:4095  - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->LoadMeasurementID 
    	p_RICserviceLoadUpdate->id_RICloadMeasurementID = 2048;// change integer here
    	//end of hc-p_RICserviceLoadUpdate->id_RICloadMeasurementID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_RICloadMeasurementID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_E2nodeLoadMeasurementID - mandatory=======*/
    {
    	//hc-p_RICserviceLoadUpdate->id_E2nodeLoadMeasurementID -idx4- alias primitive - pid = 5 - INTEGER - min:1 - max:4095  - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->LoadMeasurementID 
    	p_RICserviceLoadUpdate->id_E2nodeLoadMeasurementID = 2048;// change integer here
    	//end of hc-p_RICserviceLoadUpdate->id_E2nodeLoadMeasurementID -idx4- alias primitive
    }
    #endif/*======== End Hardcode IE -idx3: id_E2nodeLoadMeasurementID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx5: id_RANfunctionLoad_List - mandatory=======*/
    {
    	/*=== START LIST -idx6 - RANfunctionLoad_List===*/
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item_count = 1;
    	/*=== START SEQUENCE -idx7 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item -ROOTS1 RANfunctionLoad_Item ===*/
    	//hc-sequence-ELEM 1: -idx8 -roots1 RANfunctionLoad_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx9- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RANfunctionID 
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx9- alias primitive
    	//end of hc-sequence-ELEM 1: -idx8 -roots1 RANfunctionLoad_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx10 -roots1 RANfunctionLoad_Item->ranFunctionLoadInformation - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].bitmask |= E2AP_RANFUNCTION_LOAD_ITEM_e2ap_RAN_FUNCTION_LOAD_INFORMATION_PRESENT;
    	/*=== START SEQUENCE -idx11 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICloadInformation -ROOTS2 RICloadInformation ===*/
    	//hc-sequence-ELEM 1: -idx12 -roots2 RICloadInformation->loadStatus - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ranFunctionLoadInformation.bitmask |= E2AP_RICLOAD_INFORMATION_e2ap_LOAD_STATUS_PRESENT;
    	//hc-loadStatus -idx13- primitive in scope - pid = 13 ENUMURATE - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICloadInformation->loadStatus
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ranFunctionLoadInformation.loadStatus = E2AP_RICLOAD_INFORMATION_OVERLOAD; // change enum value here
    	//end of hc-loadStatus -idx13- primitive
    	//end of hc-sequence-ELEM 1: -idx12 -roots2 RICloadInformation->loadStatus - alias = -1
	
    	//hc-sequence-ELEM 2: -idx14 -roots2 RICloadInformation->loadEstimate - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ranFunctionLoadInformation.bitmask |= E2AP_RICLOAD_INFORMATION_e2ap_LOAD_ESTIMATE_PRESENT;
    	//hc-loadEstimate -idx15 - primitive in scope - pid = 6 - INTEGER - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICloadInformation->loadEstimate
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ranFunctionLoadInformation.loadEstimate = 50; // change integer here
    	//end of hc-loadEstimate -idx15- primitive
	
    	//end of hc-sequence-ELEM 2: -idx14 -roots2 RICloadInformation->loadEstimate - alias = -1
	
    	/*=== END SEQUENCE -idx11 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICloadInformation - RICloadInformation -ROOTS2 ===*/
    	//end of hc-sequence-ELEM 2: -idx10 -roots1 RANfunctionLoad_Item->ranFunctionLoadInformation - alias = -1
	
    	//hc-sequence-ELEM 3: -idx16 -roots1 RANfunctionLoad_Item->ricServiceLoadInformation - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].bitmask |= E2AP_RANFUNCTION_LOAD_ITEM_e2ap_RIC_SERVICE_LOAD_INFORMATION_PRESENT;
    	/*=== START SEQUENCE -idx17 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation -ROOTS3 RICserviceLoadInformation ===*/
    	//hc-sequence-ELEM 1: -idx18 -roots3 RICserviceLoadInformation->ricServiceReportLoadInformation - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.bitmask |= E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_REPORT_LOAD_INFORMATION_PRESENT;
    	/*=== START SEQUENCE -idx19 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation -ROOTS4 RICloadInformation ===*/
    	//hc-sequence-ELEM 1: -idx20 -roots4 RICloadInformation->loadStatus - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServiceReportLoadInformation.bitmask |= E2AP_RICLOAD_INFORMATION_e2ap_LOAD_STATUS_PRESENT;
    	//hc-loadStatus -idx21- primitive in scope - pid = 13 ENUMURATE - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadStatus
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServiceReportLoadInformation.loadStatus = E2AP_RICLOAD_INFORMATION_OVERLOAD; // change enum value here
    	//end of hc-loadStatus -idx21- primitive
    	//end of hc-sequence-ELEM 1: -idx20 -roots4 RICloadInformation->loadStatus - alias = -1
	
    	//hc-sequence-ELEM 2: -idx22 -roots4 RICloadInformation->loadEstimate - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServiceReportLoadInformation.bitmask |= E2AP_RICLOAD_INFORMATION_e2ap_LOAD_ESTIMATE_PRESENT;
    	//hc-loadEstimate -idx23 - primitive in scope - pid = 6 - INTEGER - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadEstimate
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServiceReportLoadInformation.loadEstimate = 50; // change integer here
    	//end of hc-loadEstimate -idx23- primitive
	
    	//end of hc-sequence-ELEM 2: -idx22 -roots4 RICloadInformation->loadEstimate - alias = -1
	
    	/*=== END SEQUENCE -idx19 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation - RICloadInformation -ROOTS4 ===*/
    	//end of hc-sequence-ELEM 1: -idx18 -roots3 RICserviceLoadInformation->ricServiceReportLoadInformation - alias = -1
	
    	//hc-sequence-ELEM 2: -idx24 -roots3 RICserviceLoadInformation->ricServiceInsertLoadInformation - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.bitmask |= E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_INSERT_LOAD_INFORMATION_PRESENT;
    	/*=== START SEQUENCE -idx25 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation -ROOTS5 RICloadInformation ===*/
    	//hc-sequence-ELEM 1: -idx26 -roots5 RICloadInformation->loadStatus - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServiceInsertLoadInformation.bitmask |= E2AP_RICLOAD_INFORMATION_e2ap_LOAD_STATUS_PRESENT;
    	//hc-loadStatus -idx27- primitive in scope - pid = 13 ENUMURATE - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadStatus
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServiceInsertLoadInformation.loadStatus = E2AP_RICLOAD_INFORMATION_OVERLOAD; // change enum value here
    	//end of hc-loadStatus -idx27- primitive
    	//end of hc-sequence-ELEM 1: -idx26 -roots5 RICloadInformation->loadStatus - alias = -1
	
    	//hc-sequence-ELEM 2: -idx28 -roots5 RICloadInformation->loadEstimate - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServiceInsertLoadInformation.bitmask |= E2AP_RICLOAD_INFORMATION_e2ap_LOAD_ESTIMATE_PRESENT;
    	//hc-loadEstimate -idx29 - primitive in scope - pid = 6 - INTEGER - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadEstimate
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServiceInsertLoadInformation.loadEstimate = 50; // change integer here
    	//end of hc-loadEstimate -idx29- primitive
	
    	//end of hc-sequence-ELEM 2: -idx28 -roots5 RICloadInformation->loadEstimate - alias = -1
	
    	/*=== END SEQUENCE -idx25 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation - RICloadInformation -ROOTS5 ===*/
    	//end of hc-sequence-ELEM 2: -idx24 -roots3 RICserviceLoadInformation->ricServiceInsertLoadInformation - alias = -1
	
    	//hc-sequence-ELEM 3: -idx30 -roots3 RICserviceLoadInformation->ricServiceControlLoadInformation - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.bitmask |= E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_CONTROL_LOAD_INFORMATION_PRESENT;
    	/*=== START SEQUENCE -idx31 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation -ROOTS6 RICloadInformation ===*/
    	//hc-sequence-ELEM 1: -idx32 -roots6 RICloadInformation->loadStatus - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServiceControlLoadInformation.bitmask |= E2AP_RICLOAD_INFORMATION_e2ap_LOAD_STATUS_PRESENT;
    	//hc-loadStatus -idx33- primitive in scope - pid = 13 ENUMURATE - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadStatus
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServiceControlLoadInformation.loadStatus = E2AP_RICLOAD_INFORMATION_OVERLOAD; // change enum value here
    	//end of hc-loadStatus -idx33- primitive
    	//end of hc-sequence-ELEM 1: -idx32 -roots6 RICloadInformation->loadStatus - alias = -1
	
    	//hc-sequence-ELEM 2: -idx34 -roots6 RICloadInformation->loadEstimate - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServiceControlLoadInformation.bitmask |= E2AP_RICLOAD_INFORMATION_e2ap_LOAD_ESTIMATE_PRESENT;
    	//hc-loadEstimate -idx35 - primitive in scope - pid = 6 - INTEGER - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadEstimate
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServiceControlLoadInformation.loadEstimate = 50; // change integer here
    	//end of hc-loadEstimate -idx35- primitive
	
    	//end of hc-sequence-ELEM 2: -idx34 -roots6 RICloadInformation->loadEstimate - alias = -1
	
    	/*=== END SEQUENCE -idx31 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation - RICloadInformation -ROOTS6 ===*/
    	//end of hc-sequence-ELEM 3: -idx30 -roots3 RICserviceLoadInformation->ricServiceControlLoadInformation - alias = -1
	
    	//hc-sequence-ELEM 4: -idx36 -roots3 RICserviceLoadInformation->ricServicePolicyLoadInformation - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.bitmask |= E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_POLICY_LOAD_INFORMATION_PRESENT;
    	/*=== START SEQUENCE -idx37 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation -ROOTS7 RICloadInformation ===*/
    	//hc-sequence-ELEM 1: -idx38 -roots7 RICloadInformation->loadStatus - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServicePolicyLoadInformation.bitmask |= E2AP_RICLOAD_INFORMATION_e2ap_LOAD_STATUS_PRESENT;
    	//hc-loadStatus -idx39- primitive in scope - pid = 13 ENUMURATE - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadStatus
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServicePolicyLoadInformation.loadStatus = E2AP_RICLOAD_INFORMATION_OVERLOAD; // change enum value here
    	//end of hc-loadStatus -idx39- primitive
    	//end of hc-sequence-ELEM 1: -idx38 -roots7 RICloadInformation->loadStatus - alias = -1
	
    	//hc-sequence-ELEM 2: -idx40 -roots7 RICloadInformation->loadEstimate - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServicePolicyLoadInformation.bitmask |= E2AP_RICLOAD_INFORMATION_e2ap_LOAD_ESTIMATE_PRESENT;
    	//hc-loadEstimate -idx41 - primitive in scope - pid = 6 - INTEGER - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadEstimate
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServicePolicyLoadInformation.loadEstimate = 50; // change integer here
    	//end of hc-loadEstimate -idx41- primitive
	
    	//end of hc-sequence-ELEM 2: -idx40 -roots7 RICloadInformation->loadEstimate - alias = -1
	
    	/*=== END SEQUENCE -idx37 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation - RICloadInformation -ROOTS7 ===*/
    	//end of hc-sequence-ELEM 4: -idx36 -roots3 RICserviceLoadInformation->ricServicePolicyLoadInformation - alias = -1
	
    	//hc-sequence-ELEM 5: -idx42 -roots3 RICserviceLoadInformation->ricServiceQueryLoadInformation - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.bitmask |= E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_QUERY_LOAD_INFORMATION_PRESENT;
    	/*=== START SEQUENCE -idx43 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation -ROOTS8 RICloadInformation ===*/
    	//hc-sequence-ELEM 1: -idx44 -roots8 RICloadInformation->loadStatus - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServiceQueryLoadInformation.bitmask |= E2AP_RICLOAD_INFORMATION_e2ap_LOAD_STATUS_PRESENT;
    	//hc-loadStatus -idx45- primitive in scope - pid = 13 ENUMURATE - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadStatus
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServiceQueryLoadInformation.loadStatus = E2AP_RICLOAD_INFORMATION_OVERLOAD; // change enum value here
    	//end of hc-loadStatus -idx45- primitive
    	//end of hc-sequence-ELEM 1: -idx44 -roots8 RICloadInformation->loadStatus - alias = -1
	
    	//hc-sequence-ELEM 2: -idx46 -roots8 RICloadInformation->loadEstimate - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServiceQueryLoadInformation.bitmask |= E2AP_RICLOAD_INFORMATION_e2ap_LOAD_ESTIMATE_PRESENT;
    	//hc-loadEstimate -idx47 - primitive in scope - pid = 6 - INTEGER - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadEstimate
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricServiceLoadInformation.ricServiceQueryLoadInformation.loadEstimate = 50; // change integer here
    	//end of hc-loadEstimate -idx47- primitive
	
    	//end of hc-sequence-ELEM 2: -idx46 -roots8 RICloadInformation->loadEstimate - alias = -1
	
    	/*=== END SEQUENCE -idx43 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation - RICloadInformation -ROOTS8 ===*/
    	//end of hc-sequence-ELEM 5: -idx42 -roots3 RICserviceLoadInformation->ricServiceQueryLoadInformation - alias = -1
	
    	/*=== END SEQUENCE -idx17 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation - RICserviceLoadInformation -ROOTS3 ===*/
    	//end of hc-sequence-ELEM 3: -idx16 -roots1 RANfunctionLoad_Item->ricServiceLoadInformation - alias = -1
	
    	//hc-sequence-ELEM 4: -idx48 -roots1 RANfunctionLoad_Item->ricSubscriptionLoad_list - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].bitmask |= E2AP_RANFUNCTION_LOAD_ITEM_e2ap_RIC_SUBSCRIPTION_LOAD_LIST_PRESENT;
    	/*=== START LIST -idx49 - RICsubscriptionLoad_List===*/
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricSubscriptionLoad_list.id_RICsubscriptionLoad_Item_count = 1;
    	/*=== START SEQUENCE -idx50 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE -ROOTS9 RICsubscriptionLoad_ItemIE ===*/
    	//hc-sequence-ELEM 1: -idx51 -roots9 RICsubscriptionLoad_ItemIE->ricRequestID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx52 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICrequestID -ROOTS10 RICrequestID ===*/
    	//hc-sequence-ELEM 1: -idx53 -roots10 RICrequestID->ricRequestorID - alias = -1 -mandatory
    	//hc-ricRequestorID -idx54 - primitive in scope - pid = 6 - INTEGER - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICrequestID->ricRequestorID
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricSubscriptionLoad_list.id_RICsubscriptionLoad_Item[0].ricRequestID.ricRequestorID = 32767; // change integer here
    	//end of hc-ricRequestorID -idx54- primitive
	
    	//end of hc-sequence-ELEM 1: -idx53 -roots10 RICrequestID->ricRequestorID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx55 -roots10 RICrequestID->ricInstanceID - alias = -1 -mandatory
    	//hc-ricInstanceID -idx56 - primitive in scope - pid = 6 - INTEGER - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICrequestID->ricInstanceID
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricSubscriptionLoad_list.id_RICsubscriptionLoad_Item[0].ricRequestID.ricInstanceID = 32767; // change integer here
    	//end of hc-ricInstanceID -idx56- primitive
	
    	//end of hc-sequence-ELEM 2: -idx55 -roots10 RICrequestID->ricInstanceID - alias = -1
	
    	/*=== END SEQUENCE -idx52 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICrequestID - RICrequestID -ROOTS10 ===*/
    	//end of hc-sequence-ELEM 1: -idx51 -roots9 RICsubscriptionLoad_ItemIE->ricRequestID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx57 -roots9 RICsubscriptionLoad_ItemIE->ricSubscriptionLoadInformation - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricSubscriptionLoad_list.id_RICsubscriptionLoad_Item[0].bitmask |= E2AP_RICSUBSCRIPTION_LOAD_ITEM_IE_e2ap_RIC_SUBSCRIPTION_LOAD_INFORMATION_PRESENT;
    	/*=== START SEQUENCE -idx58 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICloadInformation -ROOTS11 RICloadInformation ===*/
    	//hc-sequence-ELEM 1: -idx59 -roots11 RICloadInformation->loadStatus - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricSubscriptionLoad_list.id_RICsubscriptionLoad_Item[0].ricSubscriptionLoadInformation.bitmask |= E2AP_RICLOAD_INFORMATION_e2ap_LOAD_STATUS_PRESENT;
    	//hc-loadStatus -idx60- primitive in scope - pid = 13 ENUMURATE - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICloadInformation->loadStatus
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricSubscriptionLoad_list.id_RICsubscriptionLoad_Item[0].ricSubscriptionLoadInformation.loadStatus = E2AP_RICLOAD_INFORMATION_OVERLOAD; // change enum value here
    	//end of hc-loadStatus -idx60- primitive
    	//end of hc-sequence-ELEM 1: -idx59 -roots11 RICloadInformation->loadStatus - alias = -1
	
    	//hc-sequence-ELEM 2: -idx61 -roots11 RICloadInformation->loadEstimate - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricSubscriptionLoad_list.id_RICsubscriptionLoad_Item[0].ricSubscriptionLoadInformation.bitmask |= E2AP_RICLOAD_INFORMATION_e2ap_LOAD_ESTIMATE_PRESENT;
    	//hc-loadEstimate -idx62 - primitive in scope - pid = 6 - INTEGER - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICloadInformation->loadEstimate
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricSubscriptionLoad_list.id_RICsubscriptionLoad_Item[0].ricSubscriptionLoadInformation.loadEstimate = 50; // change integer here
    	//end of hc-loadEstimate -idx62- primitive
	
    	//end of hc-sequence-ELEM 2: -idx61 -roots11 RICloadInformation->loadEstimate - alias = -1
	
    	/*=== END SEQUENCE -idx58 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICloadInformation - RICloadInformation -ROOTS11 ===*/
    	//end of hc-sequence-ELEM 2: -idx57 -roots9 RICsubscriptionLoad_ItemIE->ricSubscriptionLoadInformation - alias = -1
	
    	//hc-sequence-ELEM 3: -idx63 -roots9 RICsubscriptionLoad_ItemIE->ricActionLoad_list - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricSubscriptionLoad_list.id_RICsubscriptionLoad_Item[0].bitmask |= E2AP_RICSUBSCRIPTION_LOAD_ITEM_IE_e2ap_RIC_ACTION_LOAD_LIST_PRESENT;
    	/*=== START LIST -idx64 - RICactionLoad_List===*/
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricSubscriptionLoad_list.id_RICsubscriptionLoad_Item[0].ricActionLoad_list.id_RICactionLoad_Item_count = 1;
    	/*=== START SEQUENCE -idx65 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICactionLoad-List->RICactionLoad-ItemIEs->RICactionLoad-Item -ROOTS12 RICactionLoad_Item ===*/
    	//hc-sequence-ELEM 1: -idx66 -roots12 RICactionLoad_Item->ricActionID - alias = 6 -mandatory
    	//hc-ricActionID -idx67- alias primitive - pid = 6 - INTEGER - min:0 - max:255  - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICactionLoad-List->RICactionLoad-ItemIEs->RICactionLoad-Item->RICactionID 
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricSubscriptionLoad_list.id_RICsubscriptionLoad_Item[0].ricActionLoad_list.id_RICactionLoad_Item[0].ricActionID = 127;// change integer here
    	//end of hc-ricActionID -idx67- alias primitive
    	//end of hc-sequence-ELEM 1: -idx66 -roots12 RICactionLoad_Item->ricActionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx68 -roots12 RICactionLoad_Item->ricActionLoadInformation - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx69 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICactionLoad-List->RICactionLoad-ItemIEs->RICactionLoad-Item->RICloadInformation -ROOTS13 RICloadInformation ===*/
    	//hc-sequence-ELEM 1: -idx70 -roots13 RICloadInformation->loadStatus - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricSubscriptionLoad_list.id_RICsubscriptionLoad_Item[0].ricActionLoad_list.id_RICactionLoad_Item[0].ricActionLoadInformation.bitmask |= E2AP_RICLOAD_INFORMATION_e2ap_LOAD_STATUS_PRESENT;
    	//hc-loadStatus -idx71- primitive in scope - pid = 13 ENUMURATE - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICactionLoad-List->RICactionLoad-ItemIEs->RICactionLoad-Item->RICloadInformation->loadStatus
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricSubscriptionLoad_list.id_RICsubscriptionLoad_Item[0].ricActionLoad_list.id_RICactionLoad_Item[0].ricActionLoadInformation.loadStatus = E2AP_RICLOAD_INFORMATION_OVERLOAD; // change enum value here
    	//end of hc-loadStatus -idx71- primitive
    	//end of hc-sequence-ELEM 1: -idx70 -roots13 RICloadInformation->loadStatus - alias = -1
	
    	//hc-sequence-ELEM 2: -idx72 -roots13 RICloadInformation->loadEstimate - alias = -1 -optional
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricSubscriptionLoad_list.id_RICsubscriptionLoad_Item[0].ricActionLoad_list.id_RICactionLoad_Item[0].ricActionLoadInformation.bitmask |= E2AP_RICLOAD_INFORMATION_e2ap_LOAD_ESTIMATE_PRESENT;
    	//hc-loadEstimate -idx73 - primitive in scope - pid = 6 - INTEGER - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICactionLoad-List->RICactionLoad-ItemIEs->RICactionLoad-Item->RICloadInformation->loadEstimate
    	p_RICserviceLoadUpdate->id_RANfunctionLoad_List.id_RANfunctionLoad_Item[0].ricSubscriptionLoad_list.id_RICsubscriptionLoad_Item[0].ricActionLoad_list.id_RICactionLoad_Item[0].ricActionLoadInformation.loadEstimate = 50; // change integer here
    	//end of hc-loadEstimate -idx73- primitive
	
    	//end of hc-sequence-ELEM 2: -idx72 -roots13 RICloadInformation->loadEstimate - alias = -1
	
    	/*=== END SEQUENCE -idx69 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICactionLoad-List->RICactionLoad-ItemIEs->RICactionLoad-Item->RICloadInformation - RICloadInformation -ROOTS13 ===*/
    	//end of hc-sequence-ELEM 2: -idx68 -roots12 RICactionLoad_Item->ricActionLoadInformation - alias = -1
	
    	/*=== END SEQUENCE -idx65 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICactionLoad-List->RICactionLoad-ItemIEs->RICactionLoad-Item - RICactionLoad_Item -ROOTS12 ===*/
    	/*=== END LIST  -idx64 - RICactionLoad_List ===*/
    	//end of hc-sequence-ELEM 3: -idx63 -roots9 RICsubscriptionLoad_ItemIE->ricActionLoad_list - alias = -1
	
    	/*=== END SEQUENCE -idx50 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE - RICsubscriptionLoad_ItemIE -ROOTS9 ===*/
    	/*=== END LIST  -idx49 - RICsubscriptionLoad_List ===*/
    	//end of hc-sequence-ELEM 4: -idx48 -roots1 RANfunctionLoad_Item->ricSubscriptionLoad_list - alias = -1
	
    	/*=== END SEQUENCE -idx7 - RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item - RANfunctionLoad_Item -ROOTS1 ===*/
    	/*=== END LIST  -idx6 - RANfunctionLoad_List ===*/
    }
    #endif/*======== End Hardcode IE -idx5: id_RANfunctionLoad_List - mandatory ========*/
    return XNAP_SUCCESS;
}
/*
RICserviceLoadUpdate : (RICserviceLoadUpdate) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICserviceLoadUpdate
    protocolIEs : (RICserviceLoadUpdate-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs
        LoadMeasurementID : (LoadMeasurementID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->LoadMeasurementID
        LoadMeasurementID : (LoadMeasurementID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->LoadMeasurementID
        RANfunctionLoad-List : (RANfunctionLoad-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [M] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List
            RANfunctionLoad-ItemIEs : (RANfunctionLoad-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs
                RANfunctionLoad-Item : (RANfunctionLoad-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RANfunctionID
                    ranFunctionLoadInformation : (RICloadInformation) 					---- (SEQUENCE) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICloadInformation
                        loadStatus : (loadStatus) 					---- (ENUMERATED) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICloadInformation->loadStatus
                        loadEstimate : (loadEstimate) 					---- (INTEGER) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICloadInformation->loadEstimate
                    ricServiceLoadInformation : (RICserviceLoadInformation) 					---- (SEQUENCE) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation
                        ricServiceReportLoadInformation : (RICloadInformation) 					---- (SEQUENCE) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation
                            loadStatus : (loadStatus) 					---- (ENUMERATED) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadStatus
                            loadEstimate : (loadEstimate) 					---- (INTEGER) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadEstimate
                        ricServiceInsertLoadInformation : (RICloadInformation) 					---- (SEQUENCE) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation
                            loadStatus : (loadStatus) 					---- (ENUMERATED) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadStatus
                            loadEstimate : (loadEstimate) 					---- (INTEGER) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadEstimate
                        ricServiceControlLoadInformation : (RICloadInformation) 					---- (SEQUENCE) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation
                            loadStatus : (loadStatus) 					---- (ENUMERATED) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadStatus
                            loadEstimate : (loadEstimate) 					---- (INTEGER) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadEstimate
                        ricServicePolicyLoadInformation : (RICloadInformation) 					---- (SEQUENCE) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation
                            loadStatus : (loadStatus) 					---- (ENUMERATED) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadStatus
                            loadEstimate : (loadEstimate) 					---- (INTEGER) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadEstimate
                        ricServiceQueryLoadInformation : (RICloadInformation) 					---- (SEQUENCE) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation
                            loadStatus : (loadStatus) 					---- (ENUMERATED) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadStatus
                            loadEstimate : (loadEstimate) 					---- (INTEGER) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICserviceLoadInformation->RICloadInformation->loadEstimate
                    ricSubscriptionLoad-list : (RICsubscriptionLoad-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List
                        RICsubscriptionLoad-ItemIEs : (RICsubscriptionLoad-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs
                            RICsubscriptionLoad-ItemIE : (RICsubscriptionLoad-ItemIE) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE
                                ricRequestID : (RICrequestID) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICrequestID
                                    ricRequestorID : (ricRequestorID) 					---- (INTEGER) ---- [M] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICrequestID->ricRequestorID
                                    ricInstanceID : (ricInstanceID) 					---- (INTEGER) ---- [M] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICrequestID->ricInstanceID
                                ricSubscriptionLoadInformation : (RICloadInformation) 					---- (SEQUENCE) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICloadInformation
                                    loadStatus : (loadStatus) 					---- (ENUMERATED) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICloadInformation->loadStatus
                                    loadEstimate : (loadEstimate) 					---- (INTEGER) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICloadInformation->loadEstimate
                                ricActionLoad-list : (RICactionLoad-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICactionLoad-List
                                    RICactionLoad-ItemIEs : (RICactionLoad-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICactionLoad-List->RICactionLoad-ItemIEs
                                        RICactionLoad-Item : (RICactionLoad-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICactionLoad-List->RICactionLoad-ItemIEs->RICactionLoad-Item
                                            ricActionID : (RICactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICactionLoad-List->RICactionLoad-ItemIEs->RICactionLoad-Item->RICactionID
                                            ricActionLoadInformation : (RICloadInformation) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICactionLoad-List->RICactionLoad-ItemIEs->RICactionLoad-Item->RICloadInformation
                                                loadStatus : (loadStatus) 					---- (ENUMERATED) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICactionLoad-List->RICactionLoad-ItemIEs->RICactionLoad-Item->RICloadInformation->loadStatus
                                                loadEstimate : (loadEstimate) 					---- (INTEGER) ---- [O] ----PATH: RICserviceLoadUpdate->RICserviceLoadUpdate-IEs->RANfunctionLoad-List->RANfunctionLoad-ItemIEs->RANfunctionLoad-Item->RICsubscriptionLoad-List->RICsubscriptionLoad-ItemIEs->RICsubscriptionLoad-ItemIE->RICactionLoad-List->RICactionLoad-ItemIEs->RICactionLoad-Item->RICloadInformation->loadEstimate
*/
#endif // ASSIGN_HARDCODE_RICSERVICE_LOAD_UPDATE_H

