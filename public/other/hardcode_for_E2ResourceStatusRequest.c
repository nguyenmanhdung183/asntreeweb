#ifndef ASSIGN_HARDCODE_E2RESOURCE_STATUS_REQUEST_H
#define ASSIGN_HARDCODE_E2RESOURCE_STATUS_REQUEST_H
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

xnap_return_et assign_hardcode_value_E2ResourceStatusRequest(e2ap_E2ResourceStatusRequest_t* p_E2ResourceStatusRequest)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_TransactionID - mandatory=======*/
    {
    	//hc-p_E2ResourceStatusRequest->id_TransactionID -idx2- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - E2ResourceStatusRequest->E2ResourceStatusRequestIEs->TransactionID 
    	p_E2ResourceStatusRequest->id_TransactionID = 127;// change integer here
    	//end of hc-p_E2ResourceStatusRequest->id_TransactionID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_TransactionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_RICloadMeasurementID - mandatory=======*/
    {
    	//hc-p_E2ResourceStatusRequest->id_RICloadMeasurementID -idx4- alias primitive - pid = 5 - INTEGER - min:1 - max:4095  - E2ResourceStatusRequest->E2ResourceStatusRequestIEs->LoadMeasurementID 
    	p_E2ResourceStatusRequest->id_RICloadMeasurementID = 2048;// change integer here
    	//end of hc-p_E2ResourceStatusRequest->id_RICloadMeasurementID -idx4- alias primitive
    }
    #endif/*======== End Hardcode IE -idx3: id_RICloadMeasurementID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx5: id_E2nodeLoadMeasurementID - mandatory=======*/
    {
    	//hc-p_E2ResourceStatusRequest->id_E2nodeLoadMeasurementID -idx6- alias primitive - pid = 5 - INTEGER - min:1 - max:4095  - E2ResourceStatusRequest->E2ResourceStatusRequestIEs->LoadMeasurementID 
    	p_E2ResourceStatusRequest->id_E2nodeLoadMeasurementID = 2048;// change integer here
    	//end of hc-p_E2ResourceStatusRequest->id_E2nodeLoadMeasurementID -idx6- alias primitive
    }
    #endif/*======== End Hardcode IE -idx5: id_E2nodeLoadMeasurementID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_RegistrationRequest_E2 - mandatory=======*/
    {
    	//hc-RegistrationRequest_E2 -idx8 - E2ResourceStatusRequest->E2ResourceStatusRequestIEs->RegistrationRequest-E2
    	p_E2ResourceStatusRequest->id_RegistrationRequest_E2 = E2AP_REGISTRATION_REQUEST_E2_START; // change enum value here
    	//end of hc-RegistrationRequest_E2 -idx8- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx7: id_RegistrationRequest_E2 - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx9: id_ReportCharacteristics - mandatory=======*/
    {
    	//hc-p_E2ResourceStatusRequest->id_ReportCharacteristics -idx10- alias primitive - pid = 3 - BIT STRING - E2ResourceStatusRequest->E2ResourceStatusRequestIEs->ReportCharacteristics
    	OSOCTET temp_buff_for_p_E2ResourceStatusRequest->id_ReportCharacteristics[] = {0x01}; // min =8 - max = 8 bits change bitstring data here
    	p_E2ResourceStatusRequest->id_ReportCharacteristics.numbits = 8;
    	XNAP_MEMCPY(p_E2ResourceStatusRequest->id_ReportCharacteristics.data, temp_buff_for_p_E2ResourceStatusRequest->id_ReportCharacteristics, 1); // change bitstring data here
    	//end of hc-p_E2ResourceStatusRequest->id_ReportCharacteristics -idx10- alias primitive
    }
    #endif/*======== End Hardcode IE -idx9: id_ReportCharacteristics - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx11: id_ReportingPeriodicity_E2 - optional=======*/
    {
    	 p_E2ResourceStatusRequest->bitmask |= E2AP_E2RESOURCE_STATUS_REQUEST_e2ap_ID_REPORTING_PERIODICITY_E2_PRESENT;
    	//hc-ReportingPeriodicity_E2 -idx12 - E2ResourceStatusRequest->E2ResourceStatusRequestIEs->ReportingPeriodicity-E2
    	p_E2ResourceStatusRequest->id_ReportingPeriodicity_E2 = E2AP_REPORTING_PERIODICITY_E2_MS500; // change enum value here
    	//end of hc-ReportingPeriodicity_E2 -idx12- alias primitive
	
    }
    #endif/*======== End Hardcode IE -idx11: id_ReportingPeriodicity_E2 - optional ========*/
    return XNAP_SUCCESS;
}
/*
E2ResourceStatusRequest : (E2ResourceStatusRequest) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2ResourceStatusRequest
    protocolIEs : (E2ResourceStatusRequestIEs) 					---- (IE-LIST) ---- [M] ----PATH: E2ResourceStatusRequest->E2ResourceStatusRequestIEs
        TransactionID : (TransactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2ResourceStatusRequest->E2ResourceStatusRequestIEs->TransactionID
        LoadMeasurementID : (LoadMeasurementID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2ResourceStatusRequest->E2ResourceStatusRequestIEs->LoadMeasurementID
        LoadMeasurementID : (LoadMeasurementID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2ResourceStatusRequest->E2ResourceStatusRequestIEs->LoadMeasurementID
        RegistrationRequest-E2 : (RegistrationRequest-E2) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2ResourceStatusRequest->E2ResourceStatusRequestIEs->RegistrationRequest-E2
        ReportCharacteristics : (ReportCharacteristics) 					---- (PRIMITIVE) ---- [M] ----PATH: E2ResourceStatusRequest->E2ResourceStatusRequestIEs->ReportCharacteristics
        ReportingPeriodicity-E2 : (ReportingPeriodicity-E2) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: E2ResourceStatusRequest->E2ResourceStatusRequestIEs->ReportingPeriodicity-E2
*/
#endif // ASSIGN_HARDCODE_E2RESOURCE_STATUS_REQUEST_H

