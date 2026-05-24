#ifndef ASSIGN_HARDCODE_E2REMOVAL_REQUEST_H
#define ASSIGN_HARDCODE_E2REMOVAL_REQUEST_H
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

xnap_return_et assign_hardcode_value_E2RemovalRequest(e2ap_E2RemovalRequest_t* p_E2RemovalRequest)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_TransactionID - mandatory=======*/
    {
    	//hc-p_E2RemovalRequest->id_TransactionID -idx2- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - E2RemovalRequest->E2RemovalRequestIEs->TransactionID 
    	p_E2RemovalRequest->id_TransactionID = 127;// change integer here
    	//end of hc-p_E2RemovalRequest->id_TransactionID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_TransactionID - mandatory ========*/
    return XNAP_SUCCESS;
}
/*
E2RemovalRequest : (E2RemovalRequest) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2RemovalRequest
    protocolIEs : (E2RemovalRequestIEs) 					---- (IE-LIST) ---- [M] ----PATH: E2RemovalRequest->E2RemovalRequestIEs
        TransactionID : (TransactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2RemovalRequest->E2RemovalRequestIEs->TransactionID
*/
#endif // ASSIGN_HARDCODE_E2REMOVAL_REQUEST_H

