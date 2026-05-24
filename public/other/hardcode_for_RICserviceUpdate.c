#ifndef ASSIGN_HARDCODE_RICSERVICE_UPDATE_H
#define ASSIGN_HARDCODE_RICSERVICE_UPDATE_H
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

xnap_return_et assign_hardcode_value_RICserviceUpdate(e2ap_RICserviceUpdate_t* p_RICserviceUpdate)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_TransactionID - mandatory=======*/
    {
    	//hc-p_RICserviceUpdate->id_TransactionID -idx2- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - RICserviceUpdate->RICserviceUpdate-IEs->TransactionID 
    	p_RICserviceUpdate->id_TransactionID = 127;// change integer here
    	//end of hc-p_RICserviceUpdate->id_TransactionID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_TransactionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_RANfunctionsAdded - optional=======*/
    {
    	 p_RICserviceUpdate->bitmask |= E2AP_RICSERVICE_UPDATE_e2ap_ID_RANFUNCTIONS_ADDED_PRESENT;
    	/*=== START LIST -idx4 - RANfunctions_List===*/
    	p_RICserviceUpdate->id_RANfunctionsAdded.id_RANfunction_Item_count = 1;
    	/*=== START SEQUENCE -idx5 - RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item -ROOTS1 RANfunction_Item ===*/
    	//hc-sequence-ELEM 1: -idx6 -roots1 RANfunction_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx7- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionID 
    	p_RICserviceUpdate->id_RANfunctionsAdded.id_RANfunction_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx7- alias primitive
    	//end of hc-sequence-ELEM 1: -idx6 -roots1 RANfunction_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx8 -roots1 RANfunction_Item->ranFunctionDefinition - alias = 9 -mandatory
    	//hc-ranFunctionDefinition -idx9- alias primitive - pid = 9 - OCTET STRING - RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionDefinition
    	OSOCTET temp_buff_for_ranFunctionDefinition[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICserviceUpdate->id_RANfunctionsAdded.id_RANfunction_Item[0].ranFunctionDefinition.numocts = sizeof(temp_buff_for_ranFunctionDefinition);
    	p_RICserviceUpdate->id_RANfunctionsAdded.id_RANfunction_Item[0].ranFunctionDefinition.data = xnap_mem_get(sizeof(temp_buff_for_ranFunctionDefinition));
    	XNAP_MEMCPY(p_RICserviceUpdate->id_RANfunctionsAdded.id_RANfunction_Item[0].ranFunctionDefinition.data, temp_buff_for_ranFunctionDefinition, sizeof(temp_buff_for_ranFunctionDefinition)); // change octetstring data here
    	//end of hc-ranFunctionDefinition -idx9- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx8 -roots1 RANfunction_Item->ranFunctionDefinition - alias = 9
	
    	//hc-sequence-ELEM 3: -idx10 -roots1 RANfunction_Item->ranFunctionRevision - alias = 6 -mandatory
    	//hc-ranFunctionRevision -idx11- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionRevision 
    	p_RICserviceUpdate->id_RANfunctionsAdded.id_RANfunction_Item[0].ranFunctionRevision = 2047;// change integer here
    	//end of hc-ranFunctionRevision -idx11- alias primitive
    	//end of hc-sequence-ELEM 3: -idx10 -roots1 RANfunction_Item->ranFunctionRevision - alias = 6
	
    	//hc-sequence-ELEM 4: -idx12 -roots1 RANfunction_Item->ranFunctionOID - alias = 10 -mandatory
    	//hc-ranFunctionOID -idx13- alias primitive - pid = 10 Printable STRING - RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionOID
    	p_RICserviceUpdate->id_RANfunctionsAdded.id_RANfunction_Item[0].ranFunctionOID = "hardcoded string value"; // change printable string here
    	//end of hc-ranFunctionOID -idx13- alias primitive
	
    	//end of hc-sequence-ELEM 4: -idx12 -roots1 RANfunction_Item->ranFunctionOID - alias = 10
	
    	/*=== END SEQUENCE -idx5 - RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item - RANfunction_Item -ROOTS1 ===*/
    	/*=== END LIST  -idx4 - RANfunctions_List ===*/
    }
    #endif/*======== End Hardcode IE -idx3: id_RANfunctionsAdded - optional ========*/

    #if 1/*======== Start Hardcode IE -idx14: id_RANfunctionsModified - optional=======*/
    {
    	 p_RICserviceUpdate->bitmask |= E2AP_RICSERVICE_UPDATE_e2ap_ID_RANFUNCTIONS_MODIFIED_PRESENT;
    	/*=== START LIST -idx15 - RANfunctions_List===*/
    	p_RICserviceUpdate->id_RANfunctionsModified.id_RANfunction_Item_count = 1;
    	/*=== START SEQUENCE -idx16 - RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item -ROOTS2 RANfunction_Item ===*/
    	//hc-sequence-ELEM 1: -idx17 -roots2 RANfunction_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx18- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionID 
    	p_RICserviceUpdate->id_RANfunctionsModified.id_RANfunction_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx18- alias primitive
    	//end of hc-sequence-ELEM 1: -idx17 -roots2 RANfunction_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx19 -roots2 RANfunction_Item->ranFunctionDefinition - alias = 9 -mandatory
    	//hc-ranFunctionDefinition -idx20- alias primitive - pid = 9 - OCTET STRING - RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionDefinition
    	OSOCTET temp_buff_for_ranFunctionDefinition_1[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_RICserviceUpdate->id_RANfunctionsModified.id_RANfunction_Item[0].ranFunctionDefinition.numocts = sizeof(temp_buff_for_ranFunctionDefinition_1);
    	p_RICserviceUpdate->id_RANfunctionsModified.id_RANfunction_Item[0].ranFunctionDefinition.data = xnap_mem_get(sizeof(temp_buff_for_ranFunctionDefinition_1));
    	XNAP_MEMCPY(p_RICserviceUpdate->id_RANfunctionsModified.id_RANfunction_Item[0].ranFunctionDefinition.data, temp_buff_for_ranFunctionDefinition_1, sizeof(temp_buff_for_ranFunctionDefinition_1)); // change octetstring data here
    	//end of hc-ranFunctionDefinition -idx20- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx19 -roots2 RANfunction_Item->ranFunctionDefinition - alias = 9
	
    	//hc-sequence-ELEM 3: -idx21 -roots2 RANfunction_Item->ranFunctionRevision - alias = 6 -mandatory
    	//hc-ranFunctionRevision -idx22- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionRevision 
    	p_RICserviceUpdate->id_RANfunctionsModified.id_RANfunction_Item[0].ranFunctionRevision = 2047;// change integer here
    	//end of hc-ranFunctionRevision -idx22- alias primitive
    	//end of hc-sequence-ELEM 3: -idx21 -roots2 RANfunction_Item->ranFunctionRevision - alias = 6
	
    	//hc-sequence-ELEM 4: -idx23 -roots2 RANfunction_Item->ranFunctionOID - alias = 10 -mandatory
    	//hc-ranFunctionOID -idx24- alias primitive - pid = 10 Printable STRING - RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionOID
    	p_RICserviceUpdate->id_RANfunctionsModified.id_RANfunction_Item[0].ranFunctionOID = "hardcoded string value"; // change printable string here
    	//end of hc-ranFunctionOID -idx24- alias primitive
	
    	//end of hc-sequence-ELEM 4: -idx23 -roots2 RANfunction_Item->ranFunctionOID - alias = 10
	
    	/*=== END SEQUENCE -idx16 - RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item - RANfunction_Item -ROOTS2 ===*/
    	/*=== END LIST  -idx15 - RANfunctions_List ===*/
    }
    #endif/*======== End Hardcode IE -idx14: id_RANfunctionsModified - optional ========*/

    #if 1/*======== Start Hardcode IE -idx25: id_RANfunctionsDeleted - optional=======*/
    {
    	 p_RICserviceUpdate->bitmask |= E2AP_RICSERVICE_UPDATE_e2ap_ID_RANFUNCTIONS_DELETED_PRESENT;
    	/*=== START LIST -idx26 - RANfunctionsID_List===*/
    	p_RICserviceUpdate->id_RANfunctionsDeleted.id_RANfunctionID_Item_count = 1;
    	/*=== START SEQUENCE -idx27 - RICserviceUpdate->RICserviceUpdate-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item -ROOTS3 RANfunctionID_Item ===*/
    	//hc-sequence-ELEM 1: -idx28 -roots3 RANfunctionID_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx29- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICserviceUpdate->RICserviceUpdate-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item->RANfunctionID 
    	p_RICserviceUpdate->id_RANfunctionsDeleted.id_RANfunctionID_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx29- alias primitive
    	//end of hc-sequence-ELEM 1: -idx28 -roots3 RANfunctionID_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx30 -roots3 RANfunctionID_Item->ranFunctionRevision - alias = 6 -mandatory
    	//hc-ranFunctionRevision -idx31- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - RICserviceUpdate->RICserviceUpdate-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item->RANfunctionRevision 
    	p_RICserviceUpdate->id_RANfunctionsDeleted.id_RANfunctionID_Item[0].ranFunctionRevision = 2047;// change integer here
    	//end of hc-ranFunctionRevision -idx31- alias primitive
    	//end of hc-sequence-ELEM 2: -idx30 -roots3 RANfunctionID_Item->ranFunctionRevision - alias = 6
	
    	/*=== END SEQUENCE -idx27 - RICserviceUpdate->RICserviceUpdate-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item - RANfunctionID_Item -ROOTS3 ===*/
    	/*=== END LIST  -idx26 - RANfunctionsID_List ===*/
    }
    #endif/*======== End Hardcode IE -idx25: id_RANfunctionsDeleted - optional ========*/
    return XNAP_SUCCESS;
}
/*
RICserviceUpdate : (RICserviceUpdate) 					---- (SEQUENCE) ---- [UNK] ----PATH: RICserviceUpdate
    protocolIEs : (RICserviceUpdate-IEs) 					---- (IE-LIST) ---- [M] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs
        TransactionID : (TransactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->TransactionID
        RANfunctions-List : (RANfunctions-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List
            RANfunction-ItemIEs : (RANfunction-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs
                RANfunction-Item : (RANfunction-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionID
                    ranFunctionDefinition : (RANfunctionDefinition) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionDefinition
                    ranFunctionRevision : (RANfunctionRevision) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionRevision
                    ranFunctionOID : (RANfunctionOID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionOID
        RANfunctions-List : (RANfunctions-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List
            RANfunction-ItemIEs : (RANfunction-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs
                RANfunction-Item : (RANfunction-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionID
                    ranFunctionDefinition : (RANfunctionDefinition) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionDefinition
                    ranFunctionRevision : (RANfunctionRevision) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionRevision
                    ranFunctionOID : (RANfunctionOID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionOID
        RANfunctionsID-List : (RANfunctionsID-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctionsID-List
            RANfunctionID-ItemIEs : (RANfunctionID-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs
                RANfunctionID-Item : (RANfunctionID-Item) 					---- (SEQUENCE) ---- [M] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item->RANfunctionID
                    ranFunctionRevision : (RANfunctionRevision) 					---- (PRIMITIVE) ---- [M] ----PATH: RICserviceUpdate->RICserviceUpdate-IEs->RANfunctionsID-List->RANfunctionID-ItemIEs->RANfunctionID-Item->RANfunctionRevision
*/
#endif // ASSIGN_HARDCODE_RICSERVICE_UPDATE_H

