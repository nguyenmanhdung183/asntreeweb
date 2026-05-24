#ifndef ASSIGN_HARDCODE_E2RESOURCE_STATUS_UPDATE_H
#define ASSIGN_HARDCODE_E2RESOURCE_STATUS_UPDATE_H
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

xnap_return_et assign_hardcode_value_E2ResourceStatusUpdate(e2ap_E2ResourceStatusUpdate_t* p_E2ResourceStatusUpdate)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_TransactionID - mandatory=======*/
    {
    	//hc-p_E2ResourceStatusUpdate->id_TransactionID -idx2- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - E2ResourceStatusUpdate->E2ResourceStatusUpdateIEs->TransactionID 
    	p_E2ResourceStatusUpdate->id_TransactionID = 127;// change integer here
    	//end of hc-p_E2ResourceStatusUpdate->id_TransactionID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_TransactionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_RICloadMeasurementID - mandatory=======*/
    {
    	//hc-p_E2ResourceStatusUpdate->id_RICloadMeasurementID -idx4- alias primitive - pid = 5 - INTEGER - min:1 - max:4095  - E2ResourceStatusUpdate->E2ResourceStatusUpdateIEs->LoadMeasurementID 
    	p_E2ResourceStatusUpdate->id_RICloadMeasurementID = 2048;// change integer here
    	//end of hc-p_E2ResourceStatusUpdate->id_RICloadMeasurementID -idx4- alias primitive
    }
    #endif/*======== End Hardcode IE -idx3: id_RICloadMeasurementID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx5: id_E2nodeLoadMeasurementID - mandatory=======*/
    {
    	//hc-p_E2ResourceStatusUpdate->id_E2nodeLoadMeasurementID -idx6- alias primitive - pid = 5 - INTEGER - min:1 - max:4095  - E2ResourceStatusUpdate->E2ResourceStatusUpdateIEs->LoadMeasurementID 
    	p_E2ResourceStatusUpdate->id_E2nodeLoadMeasurementID = 2048;// change integer here
    	//end of hc-p_E2ResourceStatusUpdate->id_E2nodeLoadMeasurementID -idx6- alias primitive
    }
    #endif/*======== End Hardcode IE -idx5: id_E2nodeLoadMeasurementID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx7: id_TNLCapacityIndicator - optional=======*/
    {
    	// [WARN] root IE not handled: TNLCapacityIndicator
    }
    #endif/*======== End Hardcode IE -idx7: id_TNLCapacityIndicator - optional ========*/

    #if 1/*======== Start Hardcode IE -idx8: id_HardwareLoadIndicator - optional=======*/
    {
    	// [WARN] root IE not handled: HardwareLoadIndicator
    }
    #endif/*======== End Hardcode IE -idx8: id_HardwareLoadIndicator - optional ========*/
    return XNAP_SUCCESS;
}
/*
E2ResourceStatusUpdate : (E2ResourceStatusUpdate) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2ResourceStatusUpdate
    protocolIEs : (E2ResourceStatusUpdateIEs) 					---- (IE-LIST) ---- [M] ----PATH: E2ResourceStatusUpdate->E2ResourceStatusUpdateIEs
        TransactionID : (TransactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2ResourceStatusUpdate->E2ResourceStatusUpdateIEs->TransactionID
        LoadMeasurementID : (LoadMeasurementID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2ResourceStatusUpdate->E2ResourceStatusUpdateIEs->LoadMeasurementID
        LoadMeasurementID : (LoadMeasurementID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2ResourceStatusUpdate->E2ResourceStatusUpdateIEs->LoadMeasurementID
        TNLCapacityIndicator : (TNLCapacityIndicator) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: E2ResourceStatusUpdate->E2ResourceStatusUpdateIEs->TNLCapacityIndicator
        HardwareLoadIndicator : (HardwareLoadIndicator) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: E2ResourceStatusUpdate->E2ResourceStatusUpdateIEs->HardwareLoadIndicator
*/
#endif // ASSIGN_HARDCODE_E2RESOURCE_STATUS_UPDATE_H

