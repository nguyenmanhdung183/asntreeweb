#ifndef ASSIGN_HARDCODE_RICSERVICE_QUERY_H
#define ASSIGN_HARDCODE_RICSERVICE_QUERY_H
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

xnap_return_et assign_hardcode_value_RICserviceQuery(e2ap_RICserviceQuery_t* p_RICserviceQuery)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_TransactionID - mandatory=======*/
    {
    	//hc-p_RICserviceQuery->id_TransactionID -idx2- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - RICserviceQuery->RICserviceQuery-IEs->TransactionID 
    	p_RICserviceQuery->id_TransactionID = 127;// change integer here
    	//end of hc-p_RICserviceQuery->id_TransactionID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_TransactionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_RANfunctionsAccepted - optional=======*/
    {
    	 p_RICserviceQuery->bitmask |= E2AP_RICSERVICE_QUERY_e2ap_ID_RANFUNCTIONS_ACCEPTED_PRESENT;
    	/*=== START LIST -idx4 - RANfunctionsID_List===*/
    	p_RICserviceQuery->id_RANfunctionsAccepted.id_RANfunctionID_Item_count = 1;
    	/*=== START SEQUENCE -idx5 - RICserviceQuery->RICserviceQuery-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item -ROOTS1 RANfunctionID_Item ===*/
    	//hc-sequence-ELEM 1: -idx6 -roots1 RANfunctionID_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx7- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICserviceQuery->RICserviceQuery-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item->RANfunctionID 
    	p_RICserviceQuery->id_RANfunctionsAccepted.id_RANfunctionID_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx7- alias primitive
    	//end of hc-sequence-ELEM 1: -idx6 -roots1 RANfunctionID_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx8 -roots1 RANfunctionID_Item->ranFunctionRevision - alias = 6 -mandatory
    	//hc-ranFunctionRevision -idx9- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICserviceQuery->RICserviceQuery-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item->RANfunctionRevision 
    	p_RICserviceQuery->id_RANfunctionsAccepted.id_RANfunctionID_Item[0].ranFunctionRevision = 2047;// change integer here
    	//end of hc-ranFunctionRevision -idx9- alias primitive
    	//end of hc-sequence-ELEM 2: -idx8 -roots1 RANfunctionID_Item->ranFunctionRevision - alias = 6
	
    	/*=== END SEQUENCE -idx5 - RICserviceQuery->RICserviceQuery-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item - RANfunctionID_Item -ROOTS1 ===*/
    	/*=== END LIST  -idx4 - RANfunctionsID_List ===*/
    }
    #endif/*======== End Hardcode IE -idx3: id_RANfunctionsAccepted - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICserviceQuery : (RICserviceQuery) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICserviceQuery
    protocolIEs : (RICserviceQuery-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICserviceQuery->RICserviceQuery-IEs
        TransactionID : (TransactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceQuery->RICserviceQuery-IEs->TransactionID
        RANfunctionsID-List : (RANfunctionsID-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICserviceQuery->RICserviceQuery-IEs->RANfunctionsID-List
            RANfunctionID-ItemIEs : (RANfunctionID-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICserviceQuery->RICserviceQuery-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs
                RANfunctionID-Item : (RANfunctionID-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceQuery->RICserviceQuery-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceQuery->RICserviceQuery-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item->RANfunctionID
                    ranFunctionRevision : (RANfunctionRevision) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceQuery->RICserviceQuery-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item->RANfunctionRevision
*/
#endif // ASSIGN_HARDCODE_RICSERVICE_QUERY_H

