#ifndef ASSIGN_HARDCODE_E2CONNECTION_UPDATE_H
#define ASSIGN_HARDCODE_E2CONNECTION_UPDATE_H
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

xnap_return_et assign_hardcode_value_E2connectionUpdate(e2ap_E2connectionUpdate_t* p_E2connectionUpdate)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_TransactionID - mandatory=======*/
    {
    	//hc-p_E2connectionUpdate->id_TransactionID -idx2- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - E2connectionUpdate->E2connectionUpdate-IEs->TransactionID 
    	p_E2connectionUpdate->id_TransactionID = 127;// change integer here
    	//end of hc-p_E2connectionUpdate->id_TransactionID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_TransactionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_E2connectionUpdateAdd - optional=======*/
    {
    	 p_E2connectionUpdate->bitmask |= E2AP_E2CONNECTION_UPDATE_e2ap_ID_E2CONNECTION_UPDATE_ADD_PRESENT;
    	/*=== START LIST -idx4 - E2connectionUpdate_List===*/
    	p_E2connectionUpdate->id_E2connectionUpdateAdd.id_E2connectionUpdate_Item_count = 1;
    	/*=== START SEQUENCE -idx5 - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item -ROOTS1 E2connectionUpdate_Item ===*/
    	//hc-sequence-ELEM 1: -idx6 -roots1 E2connectionUpdate_Item->tnlInformation - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx7 - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation -ROOTS2 TNLinformation ===*/
    	//hc-sequence-ELEM 1: -idx8 -roots2 TNLinformation->tnlAddress - alias = -1 -mandatory
    	//hc-tnlAddress -idx9- primitive in scope - pid = 2 - BIT STRING - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation->tnlAddress
    	OSOCTET temp_buff_for_tnlAddress[] = {0x99}; // min =1 - max = 160 bits
    	p_E2connectionUpdate->id_E2connectionUpdateAdd.id_E2connectionUpdate_Item[0].tnlInformation.tnlAddress.numbits = 1; // change bitstring data here
    	XNAP_MEMCPY(p_E2connectionUpdate->id_E2connectionUpdateAdd.id_E2connectionUpdate_Item[0].tnlInformation.tnlAddress.data, temp_buff_for_tnlAddress, 1);
    	//end of hc-tnlAddress -idx9- primitive
    	//end of hc-sequence-ELEM 1: -idx8 -roots2 TNLinformation->tnlAddress - alias = -1
	
    	//hc-sequence-ELEM 2: -idx10 -roots2 TNLinformation->tnlPort - alias = -1 -optional
    	p_E2connectionUpdate->id_E2connectionUpdateAdd.id_E2connectionUpdate_Item[0].tnlInformation.bitmask |= E2AP_TNLINFORMATION_e2ap_TNL_PORT_PRESENT;
    	//hc-tnlPort -idx11- primitive in scope - pid = 3 - BIT STRING - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation->tnlPort
    	OSOCTET temp_buff_for_tnlPort[] = {0x01, 0x02}; // min =16 - max = 16 bits
    	p_E2connectionUpdate->id_E2connectionUpdateAdd.id_E2connectionUpdate_Item[0].tnlInformation.tnlPort.numbits = 16; // change bitstring data here
    	XNAP_MEMCPY(p_E2connectionUpdate->id_E2connectionUpdateAdd.id_E2connectionUpdate_Item[0].tnlInformation.tnlPort.data, temp_buff_for_tnlPort, 2);
    	//end of hc-tnlPort -idx11- primitive
    	//end of hc-sequence-ELEM 2: -idx10 -roots2 TNLinformation->tnlPort - alias = -1
	
    	/*=== END SEQUENCE -idx7 - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation - TNLinformation -ROOTS2 ===*/
    	//end of hc-sequence-ELEM 1: -idx6 -roots1 E2connectionUpdate_Item->tnlInformation - alias = -1
	
    	//hc-sequence-ELEM 2: -idx12 -roots1 E2connectionUpdate_Item->tnlUsage - alias = 13 -mandatory
    	//hc-TNLusage -idx13 - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLusage
    	p_E2connectionUpdate->id_E2connectionUpdateAdd.id_E2connectionUpdate_Item[0].tnlUsage = E2AP_TNLUSAGE_RIC_SERVICE; // change enum value here
    	//end of hc-TNLusage -idx13- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx12 -roots1 E2connectionUpdate_Item->tnlUsage - alias = 13
	
    	/*=== END SEQUENCE -idx5 - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item - E2connectionUpdate_Item -ROOTS1 ===*/
    	/*=== END LIST  -idx4 - E2connectionUpdate_List ===*/
    }
    #endif/*======== End Hardcode IE -idx3: id_E2connectionUpdateAdd - optional ========*/

    #if 1/*======== Start Hardcode IE -idx14: id_E2connectionUpdateRemove - optional=======*/
    {
    	 p_E2connectionUpdate->bitmask |= E2AP_E2CONNECTION_UPDATE_e2ap_ID_E2CONNECTION_UPDATE_REMOVE_PRESENT;
    	/*=== START LIST -idx15 - E2connectionUpdateRemove_List===*/
    	p_E2connectionUpdate->id_E2connectionUpdateRemove.id_E2connectionUpdateRemove_Item_count = 1;
    	/*=== START SEQUENCE -idx16 - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdateRemove-List->E2connectionUpdateRemove-ItemIEs->E2connectionUpdateRemove-Item -ROOTS3 E2connectionUpdateRemove_Item ===*/
    	//hc-sequence-ELEM 1: -idx17 -roots3 E2connectionUpdateRemove_Item->tnlInformation - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx18 - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdateRemove-List->E2connectionUpdateRemove-ItemIEs->E2connectionUpdateRemove-Item->TNLinformation -ROOTS4 TNLinformation ===*/
    	//hc-sequence-ELEM 1: -idx19 -roots4 TNLinformation->tnlAddress - alias = -1 -mandatory
    	//hc-tnlAddress -idx20- primitive in scope - pid = 2 - BIT STRING - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdateRemove-List->E2connectionUpdateRemove-ItemIEs->E2connectionUpdateRemove-Item->TNLinformation->tnlAddress
    	OSOCTET temp_buff_for_tnlAddress_1[] = {0x99}; // min =1 - max = 160 bits
    	p_E2connectionUpdate->id_E2connectionUpdateRemove.id_E2connectionUpdateRemove_Item[0].tnlInformation.tnlAddress.numbits = 1; // change bitstring data here
    	XNAP_MEMCPY(p_E2connectionUpdate->id_E2connectionUpdateRemove.id_E2connectionUpdateRemove_Item[0].tnlInformation.tnlAddress.data, temp_buff_for_tnlAddress_1, 1);
    	//end of hc-tnlAddress -idx20- primitive
    	//end of hc-sequence-ELEM 1: -idx19 -roots4 TNLinformation->tnlAddress - alias = -1
	
    	//hc-sequence-ELEM 2: -idx21 -roots4 TNLinformation->tnlPort - alias = -1 -optional
    	p_E2connectionUpdate->id_E2connectionUpdateRemove.id_E2connectionUpdateRemove_Item[0].tnlInformation.bitmask |= E2AP_TNLINFORMATION_e2ap_TNL_PORT_PRESENT;
    	//hc-tnlPort -idx22- primitive in scope - pid = 3 - BIT STRING - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdateRemove-List->E2connectionUpdateRemove-ItemIEs->E2connectionUpdateRemove-Item->TNLinformation->tnlPort
    	OSOCTET temp_buff_for_tnlPort_1[] = {0x01, 0x02}; // min =16 - max = 16 bits
    	p_E2connectionUpdate->id_E2connectionUpdateRemove.id_E2connectionUpdateRemove_Item[0].tnlInformation.tnlPort.numbits = 16; // change bitstring data here
    	XNAP_MEMCPY(p_E2connectionUpdate->id_E2connectionUpdateRemove.id_E2connectionUpdateRemove_Item[0].tnlInformation.tnlPort.data, temp_buff_for_tnlPort_1, 2);
    	//end of hc-tnlPort -idx22- primitive
    	//end of hc-sequence-ELEM 2: -idx21 -roots4 TNLinformation->tnlPort - alias = -1
	
    	/*=== END SEQUENCE -idx18 - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdateRemove-List->E2connectionUpdateRemove-ItemIEs->E2connectionUpdateRemove-Item->TNLinformation - TNLinformation -ROOTS4 ===*/
    	//end of hc-sequence-ELEM 1: -idx17 -roots3 E2connectionUpdateRemove_Item->tnlInformation - alias = -1
	
    	/*=== END SEQUENCE -idx16 - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdateRemove-List->E2connectionUpdateRemove-ItemIEs->E2connectionUpdateRemove-Item - E2connectionUpdateRemove_Item -ROOTS3 ===*/
    	/*=== END LIST  -idx15 - E2connectionUpdateRemove_List ===*/
    }
    #endif/*======== End Hardcode IE -idx14: id_E2connectionUpdateRemove - optional ========*/

    #if 1/*======== Start Hardcode IE -idx23: id_E2connectionUpdateModify - optional=======*/
    {
    	 p_E2connectionUpdate->bitmask |= E2AP_E2CONNECTION_UPDATE_e2ap_ID_E2CONNECTION_UPDATE_MODIFY_PRESENT;
    	/*=== START LIST -idx24 - E2connectionUpdate_List===*/
    	p_E2connectionUpdate->id_E2connectionUpdateModify.id_E2connectionUpdate_Item_count = 1;
    	/*=== START SEQUENCE -idx25 - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item -ROOTS5 E2connectionUpdate_Item ===*/
    	//hc-sequence-ELEM 1: -idx26 -roots5 E2connectionUpdate_Item->tnlInformation - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx27 - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation -ROOTS6 TNLinformation ===*/
    	//hc-sequence-ELEM 1: -idx28 -roots6 TNLinformation->tnlAddress - alias = -1 -mandatory
    	//hc-tnlAddress -idx29- primitive in scope - pid = 2 - BIT STRING - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation->tnlAddress
    	OSOCTET temp_buff_for_tnlAddress_2[] = {0x99}; // min =1 - max = 160 bits
    	p_E2connectionUpdate->id_E2connectionUpdateModify.id_E2connectionUpdate_Item[0].tnlInformation.tnlAddress.numbits = 1; // change bitstring data here
    	XNAP_MEMCPY(p_E2connectionUpdate->id_E2connectionUpdateModify.id_E2connectionUpdate_Item[0].tnlInformation.tnlAddress.data, temp_buff_for_tnlAddress_2, 1);
    	//end of hc-tnlAddress -idx29- primitive
    	//end of hc-sequence-ELEM 1: -idx28 -roots6 TNLinformation->tnlAddress - alias = -1
	
    	//hc-sequence-ELEM 2: -idx30 -roots6 TNLinformation->tnlPort - alias = -1 -optional
    	p_E2connectionUpdate->id_E2connectionUpdateModify.id_E2connectionUpdate_Item[0].tnlInformation.bitmask |= E2AP_TNLINFORMATION_e2ap_TNL_PORT_PRESENT;
    	//hc-tnlPort -idx31- primitive in scope - pid = 3 - BIT STRING - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation->tnlPort
    	OSOCTET temp_buff_for_tnlPort_2[] = {0x01, 0x02}; // min =16 - max = 16 bits
    	p_E2connectionUpdate->id_E2connectionUpdateModify.id_E2connectionUpdate_Item[0].tnlInformation.tnlPort.numbits = 16; // change bitstring data here
    	XNAP_MEMCPY(p_E2connectionUpdate->id_E2connectionUpdateModify.id_E2connectionUpdate_Item[0].tnlInformation.tnlPort.data, temp_buff_for_tnlPort_2, 2);
    	//end of hc-tnlPort -idx31- primitive
    	//end of hc-sequence-ELEM 2: -idx30 -roots6 TNLinformation->tnlPort - alias = -1
	
    	/*=== END SEQUENCE -idx27 - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation - TNLinformation -ROOTS6 ===*/
    	//end of hc-sequence-ELEM 1: -idx26 -roots5 E2connectionUpdate_Item->tnlInformation - alias = -1
	
    	//hc-sequence-ELEM 2: -idx32 -roots5 E2connectionUpdate_Item->tnlUsage - alias = 13 -mandatory
    	//hc-TNLusage -idx33 - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLusage
    	p_E2connectionUpdate->id_E2connectionUpdateModify.id_E2connectionUpdate_Item[0].tnlUsage = E2AP_TNLUSAGE_RIC_SERVICE; // change enum value here
    	//end of hc-TNLusage -idx33- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx32 -roots5 E2connectionUpdate_Item->tnlUsage - alias = 13
	
    	/*=== END SEQUENCE -idx25 - E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item - E2connectionUpdate_Item -ROOTS5 ===*/
    	/*=== END LIST  -idx24 - E2connectionUpdate_List ===*/
    }
    #endif/*======== End Hardcode IE -idx23: id_E2connectionUpdateModify - optional ========*/
    return XNAP_SUCCESS;
}
/*
E2connectionUpdate : (E2connectionUpdate) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2connectionUpdate
    protocolIEs : (E2connectionUpdate-IEs) 					---- (IE-LIST) ---- [M] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs
        TransactionID : (TransactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->TransactionID
        E2connectionUpdate-List : (E2connectionUpdate-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List
            E2connectionUpdate-ItemIEs : (E2connectionUpdate-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs
                E2connectionUpdate-Item : (E2connectionUpdate-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item
                    tnlInformation : (TNLinformation) 					---- (SEQUENCE) ---- [M] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation
                        tnlAddress : (tnlAddress) 					---- (BIT STRING) ---- [M] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation->tnlAddress
                        tnlPort : (tnlPort) 					---- (BIT STRING) ---- [O] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation->tnlPort
                    tnlUsage : (TNLusage) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLusage
        E2connectionUpdateRemove-List : (E2connectionUpdateRemove-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdateRemove-List
            E2connectionUpdateRemove-ItemIEs : (E2connectionUpdateRemove-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdateRemove-List->E2connectionUpdateRemove-ItemIEs
                E2connectionUpdateRemove-Item : (E2connectionUpdateRemove-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdateRemove-List->E2connectionUpdateRemove-ItemIEs->E2connectionUpdateRemove-Item
                    tnlInformation : (TNLinformation) 					---- (SEQUENCE) ---- [M] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdateRemove-List->E2connectionUpdateRemove-ItemIEs->E2connectionUpdateRemove-Item->TNLinformation
                        tnlAddress : (tnlAddress) 					---- (BIT STRING) ---- [M] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdateRemove-List->E2connectionUpdateRemove-ItemIEs->E2connectionUpdateRemove-Item->TNLinformation->tnlAddress
                        tnlPort : (tnlPort) 					---- (BIT STRING) ---- [O] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdateRemove-List->E2connectionUpdateRemove-ItemIEs->E2connectionUpdateRemove-Item->TNLinformation->tnlPort
        E2connectionUpdate-List : (E2connectionUpdate-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List
            E2connectionUpdate-ItemIEs : (E2connectionUpdate-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs
                E2connectionUpdate-Item : (E2connectionUpdate-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item
                    tnlInformation : (TNLinformation) 					---- (SEQUENCE) ---- [M] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation
                        tnlAddress : (tnlAddress) 					---- (BIT STRING) ---- [M] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation->tnlAddress
                        tnlPort : (tnlPort) 					---- (BIT STRING) ---- [O] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLinformation->tnlPort
                    tnlUsage : (TNLusage) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2connectionUpdate->E2connectionUpdate-IEs->E2connectionUpdate-List->E2connectionUpdate-ItemIEs->E2connectionUpdate-Item->TNLusage
*/
#endif // ASSIGN_HARDCODE_E2CONNECTION_UPDATE_H

