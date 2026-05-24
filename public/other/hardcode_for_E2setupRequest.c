#ifndef ASSIGN_HARDCODE_E2SETUP_REQUEST_H
#define ASSIGN_HARDCODE_E2SETUP_REQUEST_H
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

xnap_return_et assign_hardcode_value_E2setupRequest(e2ap_E2setupRequest_t* p_E2setupRequest)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_TransactionID - mandatory=======*/
    {
    	//hc-p_E2setupRequest->id_TransactionID -idx2- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - E2setupRequest->E2setupRequestIEs->TransactionID 
    	p_E2setupRequest->id_TransactionID = 127;// change integer here
    	//end of hc-p_E2setupRequest->id_TransactionID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_TransactionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_GlobalE2node_ID - mandatory=======*/
    {
    	/*=== START CHOICE -idx4 -ROOTC1 -GlobalE2node_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx5 -rootc1: GlobalE2node_ID->gNB - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.choice_type = E2AP_GLOBAL_E2NODE_ID_e2ap_G_NB;
    	/*=== START SEQUENCE -idx6 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID -ROOTS1 GlobalE2node_gNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx7 -roots1 GlobalE2node_gNB_ID->global_gNB_ID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx8 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalgNB-ID -ROOTS2 GlobalgNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx9 -roots2 GlobalgNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx10- alias primitive - pid = 8 - OCTET STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalgNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2setupRequest->id_GlobalE2node_ID.gNB.global_gNB_ID.plmn_id.numocts = sizeof(temp_buff_for_plmn_id);
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.gNB.global_gNB_ID.plmn_id.data, temp_buff_for_plmn_id, sizeof(temp_buff_for_plmn_id)); // change octetstring data here
    	//end of hc-plmn_id -idx10- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx9 -roots2 GlobalgNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx11 -roots2 GlobalgNB_ID->gnb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx12 -ROOTC2 -GNB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx13 -rootc2: GNB_ID_Choice->gnb_ID - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.gNB.global_gNB_ID.gnb_id.choice_type = E2AP_GNB_ID_CHOICE_e2ap_GNB_ID;
    	//hc-gnb_ID -idx14- primitive in scope - pid = 4 - BIT STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
    	OSOCTET temp_buff_for_gnb_ID[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2setupRequest->id_GlobalE2node_ID.gNB.global_gNB_ID.gnb_id.gnb_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.gNB.global_gNB_ID.gnb_id.gnb_ID.data, temp_buff_for_gnb_ID, 3);
    	//end of hc-gnb_ID -idx14- primitive
    	#endif /*choice-ELEM 1 -idx13 -rootc2*/
	
    	/*=== END CHOICE -idx12 -ROOTC2 -GNB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx11 -roots2 GlobalgNB_ID->gnb_id - alias = -1
	
    	/*=== END SEQUENCE -idx8 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalgNB-ID - GlobalgNB_ID -ROOTS2 ===*/
    	//end of hc-sequence-ELEM 1: -idx7 -roots1 GlobalE2node_gNB_ID->global_gNB_ID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx15 -roots1 GlobalE2node_gNB_ID->global_en_gNB_ID - alias = -1 -optional
    	p_E2setupRequest->id_GlobalE2node_ID.gNB.bitmask |= E2AP_GLOBAL_E2NODE_G_NB_ID_e2ap_GLOBAL_EN_G_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx16 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalenGNB-ID -ROOTS3 GlobalenGNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx17 -roots3 GlobalenGNB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx18- alias primitive - pid = 8 - OCTET STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalenGNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2setupRequest->id_GlobalE2node_ID.gNB.global_en_gNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity);
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.gNB.global_en_gNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity, sizeof(temp_buff_for_pLMN_Identity)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx18- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx17 -roots3 GlobalenGNB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx19 -roots3 GlobalenGNB_ID->gNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx20 -ROOTC3 -ENGNB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx21 -rootc3: ENGNB_ID->gNB_ID - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.gNB.global_en_gNB_ID.gNB_ID.choice_type = E2AP_ENGNB_ID_e2ap_G_NB_ID;
    	//hc-gNB_ID -idx22- primitive in scope - pid = 4 - BIT STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalenGNB-ID->ENGNB-ID->gNB-ID
    	OSOCTET temp_buff_for_gNB_ID[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2setupRequest->id_GlobalE2node_ID.gNB.global_en_gNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.gNB.global_en_gNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID, 3);
    	//end of hc-gNB_ID -idx22- primitive
    	#endif /*choice-ELEM 1 -idx21 -rootc3*/
	
    	/*=== END CHOICE -idx20 -ROOTC3 -ENGNB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx19 -roots3 GlobalenGNB_ID->gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx16 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalenGNB-ID - GlobalenGNB_ID -ROOTS3 ===*/
    	//end of hc-sequence-ELEM 2: -idx15 -roots1 GlobalE2node_gNB_ID->global_en_gNB_ID - alias = -1
	
    	//hc-sequence-ELEM 3: -idx23 -roots1 GlobalE2node_gNB_ID->gNB_CU_UP_ID - alias = 6 -optional
    	p_E2setupRequest->id_GlobalE2node_ID.gNB.bitmask |= E2AP_GLOBAL_E2NODE_G_NB_ID_e2ap_G_NB_CU_UP_ID_PRESENT;
    	//hc-gNB_CU_UP_ID -idx24- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GNB-CU-UP-ID 
    	p_E2setupRequest->id_GlobalE2node_ID.gNB.gNB_CU_UP_ID = 34359738367;// change integer here
    	//end of hc-gNB_CU_UP_ID -idx24- alias primitive
    	//end of hc-sequence-ELEM 3: -idx23 -roots1 GlobalE2node_gNB_ID->gNB_CU_UP_ID - alias = 6
	
    	//hc-sequence-ELEM 4: -idx25 -roots1 GlobalE2node_gNB_ID->gNB_DU_ID - alias = 6 -optional
    	p_E2setupRequest->id_GlobalE2node_ID.gNB.bitmask |= E2AP_GLOBAL_E2NODE_G_NB_ID_e2ap_G_NB_DU_ID_PRESENT;
    	//hc-gNB_DU_ID -idx26- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GNB-DU-ID 
    	p_E2setupRequest->id_GlobalE2node_ID.gNB.gNB_DU_ID = 34359738367;// change integer here
    	//end of hc-gNB_DU_ID -idx26- alias primitive
    	//end of hc-sequence-ELEM 4: -idx25 -roots1 GlobalE2node_gNB_ID->gNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx6 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID - GlobalE2node_gNB_ID -ROOTS1 ===*/
    	#endif /*choice-ELEM 1 -idx5 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 2 -idx27 -rootc1: GlobalE2node_ID->en_gNB - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.choice_type = E2AP_GLOBAL_E2NODE_ID_e2ap_EN_G_NB;
    	/*=== START SEQUENCE -idx28 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID -ROOTS4 GlobalE2node_en_gNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx29 -roots4 GlobalE2node_en_gNB_ID->global_en_gNB_ID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx30 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GlobalenGNB-ID -ROOTS5 GlobalenGNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx31 -roots5 GlobalenGNB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx32- alias primitive - pid = 8 - OCTET STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GlobalenGNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_1[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2setupRequest->id_GlobalE2node_ID.en_gNB.global_en_gNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_1);
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.en_gNB.global_en_gNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_1, sizeof(temp_buff_for_pLMN_Identity_1)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx32- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx31 -roots5 GlobalenGNB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx33 -roots5 GlobalenGNB_ID->gNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx34 -ROOTC4 -ENGNB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx35 -rootc4: ENGNB_ID->gNB_ID - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.en_gNB.global_en_gNB_ID.gNB_ID.choice_type = E2AP_ENGNB_ID_e2ap_G_NB_ID;
    	//hc-gNB_ID -idx36- primitive in scope - pid = 4 - BIT STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GlobalenGNB-ID->ENGNB-ID->gNB-ID
    	OSOCTET temp_buff_for_gNB_ID_1[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2setupRequest->id_GlobalE2node_ID.en_gNB.global_en_gNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.en_gNB.global_en_gNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_1, 3);
    	//end of hc-gNB_ID -idx36- primitive
    	#endif /*choice-ELEM 1 -idx35 -rootc4*/
	
    	/*=== END CHOICE -idx34 -ROOTC4 -ENGNB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx33 -roots5 GlobalenGNB_ID->gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx30 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GlobalenGNB-ID - GlobalenGNB_ID -ROOTS5 ===*/
    	//end of hc-sequence-ELEM 1: -idx29 -roots4 GlobalE2node_en_gNB_ID->global_en_gNB_ID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx37 -roots4 GlobalE2node_en_gNB_ID->en_gNB_CU_UP_ID - alias = 6 -optional
    	p_E2setupRequest->id_GlobalE2node_ID.en_gNB.bitmask |= E2AP_GLOBAL_E2NODE_EN_G_NB_ID_e2ap_EN_G_NB_CU_UP_ID_PRESENT;
    	//hc-en_gNB_CU_UP_ID -idx38- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GNB-CU-UP-ID 
    	p_E2setupRequest->id_GlobalE2node_ID.en_gNB.en_gNB_CU_UP_ID = 34359738367;// change integer here
    	//end of hc-en_gNB_CU_UP_ID -idx38- alias primitive
    	//end of hc-sequence-ELEM 2: -idx37 -roots4 GlobalE2node_en_gNB_ID->en_gNB_CU_UP_ID - alias = 6
	
    	//hc-sequence-ELEM 3: -idx39 -roots4 GlobalE2node_en_gNB_ID->en_gNB_DU_ID - alias = 6 -optional
    	p_E2setupRequest->id_GlobalE2node_ID.en_gNB.bitmask |= E2AP_GLOBAL_E2NODE_EN_G_NB_ID_e2ap_EN_G_NB_DU_ID_PRESENT;
    	//hc-en_gNB_DU_ID -idx40- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GNB-DU-ID 
    	p_E2setupRequest->id_GlobalE2node_ID.en_gNB.en_gNB_DU_ID = 34359738367;// change integer here
    	//end of hc-en_gNB_DU_ID -idx40- alias primitive
    	//end of hc-sequence-ELEM 3: -idx39 -roots4 GlobalE2node_en_gNB_ID->en_gNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx28 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID - GlobalE2node_en_gNB_ID -ROOTS4 ===*/
    	#endif /*hc-choice-ELEM 2 -idx27 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 3 -idx41 -rootc1: GlobalE2node_ID->ng_eNB - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.choice_type = E2AP_GLOBAL_E2NODE_ID_e2ap_NG_E_NB;
    	/*=== START SEQUENCE -idx42 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID -ROOTS6 GlobalE2node_ng_eNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx43 -roots6 GlobalE2node_ng_eNB_ID->global_ng_eNB_ID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx44 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID -ROOTS7 GlobalngeNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx45 -roots7 GlobalngeNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx46- alias primitive - pid = 8 - OCTET STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id_1[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.plmn_id.numocts = sizeof(temp_buff_for_plmn_id_1);
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.plmn_id.data, temp_buff_for_plmn_id_1, sizeof(temp_buff_for_plmn_id_1)); // change octetstring data here
    	//end of hc-plmn_id -idx46- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx45 -roots7 GlobalngeNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx47 -roots7 GlobalngeNB_ID->enb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx48 -ROOTC5 -ENB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx49 -rootc5: ENB_ID_Choice->enb_ID_macro - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO;
    	//hc-enb_ID_macro -idx50- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
    	OSOCTET temp_buff_for_enb_ID_macro[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.enb_ID_macro.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.enb_ID_macro.data, temp_buff_for_enb_ID_macro, 3);
    	//end of hc-enb_ID_macro -idx50- primitive
    	#endif /*choice-ELEM 1 -idx49 -rootc5*/
	
    	#if 0 //hc-choice-ELEM 2 -idx51 -rootc5: ENB_ID_Choice->enb_ID_shortmacro - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO;
    	//hc-enb_ID_shortmacro -idx52- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
    	OSOCTET temp_buff_for_enb_ID_shortmacro[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.enb_ID_shortmacro.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.enb_ID_shortmacro.data, temp_buff_for_enb_ID_shortmacro, 3);
    	//end of hc-enb_ID_shortmacro -idx52- primitive
    	#endif /*hc-choice-ELEM 2 -idx51 -rootc5*/
	
    	#if 0 //hc-choice-ELEM 3 -idx53 -rootc5: ENB_ID_Choice->enb_ID_longmacro - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO;
    	//hc-enb_ID_longmacro -idx54- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
    	OSOCTET temp_buff_for_enb_ID_longmacro[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.enb_ID_longmacro.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.enb_ID_longmacro.data, temp_buff_for_enb_ID_longmacro, 3);
    	//end of hc-enb_ID_longmacro -idx54- primitive
    	#endif /*hc-choice-ELEM 3 -idx53 -rootc5*/
	
    	/*=== END CHOICE -idx48 -ROOTC5 -ENB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx47 -roots7 GlobalngeNB_ID->enb_id - alias = -1
	
    	/*=== END SEQUENCE -idx44 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID - GlobalngeNB_ID -ROOTS7 ===*/
    	//end of hc-sequence-ELEM 1: -idx43 -roots6 GlobalE2node_ng_eNB_ID->global_ng_eNB_ID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx55 -roots6 GlobalE2node_ng_eNB_ID->global_eNB_ID - alias = -1 -optional
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.bitmask |= E2AP_GLOBAL_E2NODE_NG_E_NB_ID_e2ap_GLOBAL_E_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx56 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID -ROOTS8 GlobalENB_ID ===*/
    	//hc-sequence-ELEM 1: -idx57 -roots8 GlobalENB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx58- alias primitive - pid = 8 - OCTET STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_2[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_2);
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_2, sizeof(temp_buff_for_pLMN_Identity_2)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx58- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx57 -roots8 GlobalENB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx59 -roots8 GlobalENB_ID->eNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx60 -ROOTC6 -ENB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx61 -rootc6: ENB_ID->macro_eNB_ID - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    	//hc-macro_eNB_ID -idx62- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID->macro-eNB-ID
    	OSOCTET temp_buff_for_macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID, 3);
    	//end of hc-macro_eNB_ID -idx62- primitive
    	#endif /*choice-ELEM 1 -idx61 -rootc6*/
	
    	#if 0 //hc-choice-ELEM 2 -idx63 -rootc6: ENB_ID->home_eNB_ID - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    	//hc-home_eNB_ID -idx64- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID->home-eNB-ID
    	OSOCTET temp_buff_for_home_eNB_ID[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID, 4);
    	//end of hc-home_eNB_ID -idx64- primitive
    	#endif /*hc-choice-ELEM 2 -idx63 -rootc6*/
	
    	#if 0 //hc-choice-ELEM 3 -idx65 -rootc6: ENB_ID->short_Macro_eNB_ID - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    	//hc-short_Macro_eNB_ID -idx66- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    	OSOCTET temp_buff_for_short_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID, 3);
    	//end of hc-short_Macro_eNB_ID -idx66- primitive
    	#endif /*hc-choice-ELEM 3 -idx65 -rootc6*/
	
    	#if 0 //hc-choice-ELEM 4 -idx67 -rootc6: ENB_ID->long_Macro_eNB_ID - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    	//hc-long_Macro_eNB_ID -idx68- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    	OSOCTET temp_buff_for_long_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID, 3);
    	//end of hc-long_Macro_eNB_ID -idx68- primitive
    	#endif /*hc-choice-ELEM 4 -idx67 -rootc6*/
	
    	/*=== END CHOICE -idx60 -ROOTC6 -ENB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx59 -roots8 GlobalENB_ID->eNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx56 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID - GlobalENB_ID -ROOTS8 ===*/
    	//end of hc-sequence-ELEM 2: -idx55 -roots6 GlobalE2node_ng_eNB_ID->global_eNB_ID - alias = -1
	
    	//hc-sequence-ELEM 3: -idx69 -roots6 GlobalE2node_ng_eNB_ID->ngENB_DU_ID - alias = 6 -optional
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.bitmask |= E2AP_GLOBAL_E2NODE_NG_E_NB_ID_e2ap_NG_ENB_DU_ID_PRESENT;
    	//hc-ngENB_DU_ID -idx70- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->NGENB-DU-ID 
    	p_E2setupRequest->id_GlobalE2node_ID.ng_eNB.ngENB_DU_ID = 34359738367;// change integer here
    	//end of hc-ngENB_DU_ID -idx70- alias primitive
    	//end of hc-sequence-ELEM 3: -idx69 -roots6 GlobalE2node_ng_eNB_ID->ngENB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx42 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID - GlobalE2node_ng_eNB_ID -ROOTS6 ===*/
    	#endif /*hc-choice-ELEM 3 -idx41 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 4 -idx71 -rootc1: GlobalE2node_ID->eNB - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.choice_type = E2AP_GLOBAL_E2NODE_ID_e2ap_E_NB;
    	/*=== START SEQUENCE -idx72 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-eNB-ID -ROOTS9 GlobalE2node_eNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx73 -roots9 GlobalE2node_eNB_ID->global_eNB_ID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx74 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID -ROOTS10 GlobalENB_ID ===*/
    	//hc-sequence-ELEM 1: -idx75 -roots10 GlobalENB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx76- alias primitive - pid = 8 - OCTET STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_3[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2setupRequest->id_GlobalE2node_ID.eNB.global_eNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_3);
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.eNB.global_eNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_3, sizeof(temp_buff_for_pLMN_Identity_3)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx76- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx75 -roots10 GlobalENB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx77 -roots10 GlobalENB_ID->eNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx78 -ROOTC7 -ENB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx79 -rootc7: ENB_ID->macro_eNB_ID - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    	//hc-macro_eNB_ID -idx80- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID->macro-eNB-ID
    	OSOCTET temp_buff_for_macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2setupRequest->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_1, 3);
    	//end of hc-macro_eNB_ID -idx80- primitive
    	#endif /*choice-ELEM 1 -idx79 -rootc7*/
	
    	#if 0 //hc-choice-ELEM 2 -idx81 -rootc7: ENB_ID->home_eNB_ID - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    	//hc-home_eNB_ID -idx82- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID->home-eNB-ID
    	OSOCTET temp_buff_for_home_eNB_ID_1[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    	p_E2setupRequest->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_1, 4);
    	//end of hc-home_eNB_ID -idx82- primitive
    	#endif /*hc-choice-ELEM 2 -idx81 -rootc7*/
	
    	#if 0 //hc-choice-ELEM 3 -idx83 -rootc7: ENB_ID->short_Macro_eNB_ID - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    	//hc-short_Macro_eNB_ID -idx84- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    	OSOCTET temp_buff_for_short_Macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2setupRequest->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_1, 3);
    	//end of hc-short_Macro_eNB_ID -idx84- primitive
    	#endif /*hc-choice-ELEM 3 -idx83 -rootc7*/
	
    	#if 0 //hc-choice-ELEM 4 -idx85 -rootc7: ENB_ID->long_Macro_eNB_ID - alias = -1
    	p_E2setupRequest->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    	//hc-long_Macro_eNB_ID -idx86- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    	OSOCTET temp_buff_for_long_Macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2setupRequest->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_1, 3);
    	//end of hc-long_Macro_eNB_ID -idx86- primitive
    	#endif /*hc-choice-ELEM 4 -idx85 -rootc7*/
	
    	/*=== END CHOICE -idx78 -ROOTC7 -ENB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx77 -roots10 GlobalENB_ID->eNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx74 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID - GlobalENB_ID -ROOTS10 ===*/
    	//end of hc-sequence-ELEM 1: -idx73 -roots9 GlobalE2node_eNB_ID->global_eNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx72 - E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-eNB-ID - GlobalE2node_eNB_ID -ROOTS9 ===*/
    	#endif /*hc-choice-ELEM 4 -idx71 -rootc1*/
	
    	/*=== END CHOICE -idx4 -ROOTC1 -GlobalE2node_ID ===*/
    }
    #endif/*======== End Hardcode IE -idx3: id_GlobalE2node_ID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx87: id_RANfunctionsAdded - mandatory=======*/
    {
    	/*=== START LIST -idx88 - RANfunctions_List===*/
    	p_E2setupRequest->id_RANfunctionsAdded.id_RANfunction_Item_count = 1;
    	/*=== START SEQUENCE -idx89 - E2setupRequest->E2setupRequestIEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item -ROOTS11 RANfunction_Item ===*/
    	//hc-sequence-ELEM 1: -idx90 -roots11 RANfunction_Item->ranFunctionID - alias = 6 -mandatory
    	//hc-ranFunctionID -idx91- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2setupRequest->E2setupRequestIEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionID 
    	p_E2setupRequest->id_RANfunctionsAdded.id_RANfunction_Item[0].ranFunctionID = 2047;// change integer here
    	//end of hc-ranFunctionID -idx91- alias primitive
    	//end of hc-sequence-ELEM 1: -idx90 -roots11 RANfunction_Item->ranFunctionID - alias = 6
	
    	//hc-sequence-ELEM 2: -idx92 -roots11 RANfunction_Item->ranFunctionDefinition - alias = 9 -mandatory
    	//hc-ranFunctionDefinition -idx93- alias primitive - pid = 9 - OCTET STRING - E2setupRequest->E2setupRequestIEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionDefinition
    	OSOCTET temp_buff_for_ranFunctionDefinition[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_E2setupRequest->id_RANfunctionsAdded.id_RANfunction_Item[0].ranFunctionDefinition.numocts = sizeof(temp_buff_for_ranFunctionDefinition);
    	p_E2setupRequest->id_RANfunctionsAdded.id_RANfunction_Item[0].ranFunctionDefinition.data = xnap_mem_get(sizeof(temp_buff_for_ranFunctionDefinition));
    	XNAP_MEMCPY(p_E2setupRequest->id_RANfunctionsAdded.id_RANfunction_Item[0].ranFunctionDefinition.data, temp_buff_for_ranFunctionDefinition, sizeof(temp_buff_for_ranFunctionDefinition)); // change octetstring data here
    	//end of hc-ranFunctionDefinition -idx93- alias primitive
	
    	//end of hc-sequence-ELEM 2: -idx92 -roots11 RANfunction_Item->ranFunctionDefinition - alias = 9
	
    	//hc-sequence-ELEM 3: -idx94 -roots11 RANfunction_Item->ranFunctionRevision - alias = 6 -mandatory
    	//hc-ranFunctionRevision -idx95- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2setupRequest->E2setupRequestIEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionRevision 
    	p_E2setupRequest->id_RANfunctionsAdded.id_RANfunction_Item[0].ranFunctionRevision = 2047;// change integer here
    	//end of hc-ranFunctionRevision -idx95- alias primitive
    	//end of hc-sequence-ELEM 3: -idx94 -roots11 RANfunction_Item->ranFunctionRevision - alias = 6
	
    	//hc-sequence-ELEM 4: -idx96 -roots11 RANfunction_Item->ranFunctionOID - alias = 10 -mandatory
    	//hc-ranFunctionOID -idx97- alias primitive - pid = 10 Printable STRING - E2setupRequest->E2setupRequestIEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionOID
    	p_E2setupRequest->id_RANfunctionsAdded.id_RANfunction_Item[0].ranFunctionOID = "hardcoded string value"; // change printable string here
    	//end of hc-ranFunctionOID -idx97- alias primitive
	
    	//end of hc-sequence-ELEM 4: -idx96 -roots11 RANfunction_Item->ranFunctionOID - alias = 10
	
    	/*=== END SEQUENCE -idx89 - E2setupRequest->E2setupRequestIEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item - RANfunction_Item -ROOTS11 ===*/
    	/*=== END LIST  -idx88 - RANfunctions_List ===*/
    }
    #endif/*======== End Hardcode IE -idx87: id_RANfunctionsAdded - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx98: id_E2nodeComponentConfigAddition - mandatory=======*/
    {
    	/*=== START LIST -idx99 - E2nodeComponentConfigAddition_List===*/
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item_count = 1;
    	/*=== START SEQUENCE -idx100 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item -ROOTS12 E2nodeComponentConfigAddition_Item ===*/
    	//hc-sequence-ELEM 1: -idx101 -roots12 E2nodeComponentConfigAddition_Item->e2nodeComponentInterfaceType - alias = 13 -mandatory
    	//hc-E2nodeComponentInterfaceType -idx102 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentInterfaceType
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentInterfaceType = E2AP_E2NODE_COMPONENT_INTERFACE_TYPE_NG; // change enum value here
    	//end of hc-E2nodeComponentInterfaceType -idx102- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx101 -roots12 E2nodeComponentConfigAddition_Item->e2nodeComponentInterfaceType - alias = 13
	
    	//hc-sequence-ELEM 2: -idx103 -roots12 E2nodeComponentConfigAddition_Item->e2nodeComponentID - alias = -1 -mandatory
    	/*=== START CHOICE -idx104 -ROOTC8 -E2nodeComponentID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx105 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeNG - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_NG;
    	/*=== START SEQUENCE -idx106 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceNG -ROOTS13 E2nodeComponentInterfaceNG ===*/
    	//hc-sequence-ELEM 1: -idx107 -roots13 E2nodeComponentInterfaceNG->amf_name - alias = 10 -mandatory
    	//hc-amf_name -idx108- alias primitive - pid = 10 Printable STRING - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceNG->AMFName
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeNG.amf_name = "hardcoded string value"; // change printable string here
    	//end of hc-amf_name -idx108- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx107 -roots13 E2nodeComponentInterfaceNG->amf_name - alias = 10
	
    	/*=== END SEQUENCE -idx106 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceNG - E2nodeComponentInterfaceNG -ROOTS13 ===*/
    	#endif /*choice-ELEM 1 -idx105 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 2 -idx109 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeXn - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_XN;
    	/*=== START SEQUENCE -idx110 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn -ROOTS14 E2nodeComponentInterfaceXn ===*/
    	//hc-sequence-ELEM 1: -idx111 -roots14 E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx112 -ROOTC9 -GlobalNG_RANNode_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx113 -rootc9: GlobalNG_RANNode_ID->gNB - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_G_NB;
    	/*=== START SEQUENCE -idx114 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID -ROOTS15 GlobalgNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx115 -roots15 GlobalgNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx116- alias primitive - pid = 8 - OCTET STRING - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id_2[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id_2);
    	XNAP_MEMCPY(p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.data, temp_buff_for_plmn_id_2, sizeof(temp_buff_for_plmn_id_2)); // change octetstring data here
    	//end of hc-plmn_id -idx116- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx115 -roots15 GlobalgNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx117 -roots15 GlobalgNB_ID->gnb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx118 -ROOTC10 -GNB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx119 -rootc10: GNB_ID_Choice->gnb_ID - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.choice_type = E2AP_GNB_ID_CHOICE_e2ap_GNB_ID;
    	//hc-gnb_ID -idx120- primitive in scope - pid = 4 - BIT STRING - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
    	OSOCTET temp_buff_for_gnb_ID_1[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.data, temp_buff_for_gnb_ID_1, 3);
    	//end of hc-gnb_ID -idx120- primitive
    	#endif /*choice-ELEM 1 -idx119 -rootc10*/
	
    	/*=== END CHOICE -idx118 -ROOTC10 -GNB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx117 -roots15 GlobalgNB_ID->gnb_id - alias = -1
	
    	/*=== END SEQUENCE -idx114 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID - GlobalgNB_ID -ROOTS15 ===*/
    	#endif /*choice-ELEM 1 -idx113 -rootc9*/
	
    	#if 0 //hc-choice-ELEM 2 -idx121 -rootc9: GlobalNG_RANNode_ID->ng_eNB - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_NG_E_NB;
    	/*=== START SEQUENCE -idx122 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID -ROOTS16 GlobalngeNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx123 -roots16 GlobalngeNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx124- alias primitive - pid = 8 - OCTET STRING - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id_3[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id_3);
    	XNAP_MEMCPY(p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.data, temp_buff_for_plmn_id_3, sizeof(temp_buff_for_plmn_id_3)); // change octetstring data here
    	//end of hc-plmn_id -idx124- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx123 -roots16 GlobalngeNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx125 -roots16 GlobalngeNB_ID->enb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx126 -ROOTC11 -ENB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx127 -rootc11: ENB_ID_Choice->enb_ID_macro - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO;
    	//hc-enb_ID_macro -idx128- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
    	OSOCTET temp_buff_for_enb_ID_macro_1[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.data, temp_buff_for_enb_ID_macro_1, 3);
    	//end of hc-enb_ID_macro -idx128- primitive
    	#endif /*choice-ELEM 1 -idx127 -rootc11*/
	
    	#if 0 //hc-choice-ELEM 2 -idx129 -rootc11: ENB_ID_Choice->enb_ID_shortmacro - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO;
    	//hc-enb_ID_shortmacro -idx130- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
    	OSOCTET temp_buff_for_enb_ID_shortmacro_1[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.data, temp_buff_for_enb_ID_shortmacro_1, 3);
    	//end of hc-enb_ID_shortmacro -idx130- primitive
    	#endif /*hc-choice-ELEM 2 -idx129 -rootc11*/
	
    	#if 0 //hc-choice-ELEM 3 -idx131 -rootc11: ENB_ID_Choice->enb_ID_longmacro - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO;
    	//hc-enb_ID_longmacro -idx132- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
    	OSOCTET temp_buff_for_enb_ID_longmacro_1[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.data, temp_buff_for_enb_ID_longmacro_1, 3);
    	//end of hc-enb_ID_longmacro -idx132- primitive
    	#endif /*hc-choice-ELEM 3 -idx131 -rootc11*/
	
    	/*=== END CHOICE -idx126 -ROOTC11 -ENB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx125 -roots16 GlobalngeNB_ID->enb_id - alias = -1
	
    	/*=== END SEQUENCE -idx122 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID - GlobalngeNB_ID -ROOTS16 ===*/
    	#endif /*hc-choice-ELEM 2 -idx121 -rootc9*/
	
    	/*=== END CHOICE -idx112 -ROOTC9 -GlobalNG_RANNode_ID ===*/
    	//end of hc-sequence-ELEM 1: -idx111 -roots14 E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID - alias = -1
	
    	/*=== END SEQUENCE -idx110 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn - E2nodeComponentInterfaceXn -ROOTS14 ===*/
    	#endif /*hc-choice-ELEM 2 -idx109 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 3 -idx133 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeE1 - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_E1;
    	/*=== START SEQUENCE -idx134 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceE1 -ROOTS17 E2nodeComponentInterfaceE1 ===*/
    	//hc-sequence-ELEM 1: -idx135 -roots17 E2nodeComponentInterfaceE1->gNB_CU_UP_ID - alias = 6 -mandatory
    	//hc-gNB_CU_UP_ID -idx136- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceE1->GNB-CU-UP-ID 
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeE1.gNB_CU_UP_ID = 34359738367;// change integer here
    	//end of hc-gNB_CU_UP_ID -idx136- alias primitive
    	//end of hc-sequence-ELEM 1: -idx135 -roots17 E2nodeComponentInterfaceE1->gNB_CU_UP_ID - alias = 6
	
    	/*=== END SEQUENCE -idx134 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceE1 - E2nodeComponentInterfaceE1 -ROOTS17 ===*/
    	#endif /*hc-choice-ELEM 3 -idx133 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 4 -idx137 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeF1 - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_F1;
    	/*=== START SEQUENCE -idx138 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceF1 -ROOTS18 E2nodeComponentInterfaceF1 ===*/
    	//hc-sequence-ELEM 1: -idx139 -roots18 E2nodeComponentInterfaceF1->gNB_DU_ID - alias = 6 -mandatory
    	//hc-gNB_DU_ID -idx140- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceF1->GNB-DU-ID 
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeF1.gNB_DU_ID = 34359738367;// change integer here
    	//end of hc-gNB_DU_ID -idx140- alias primitive
    	//end of hc-sequence-ELEM 1: -idx139 -roots18 E2nodeComponentInterfaceF1->gNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx138 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceF1 - E2nodeComponentInterfaceF1 -ROOTS18 ===*/
    	#endif /*hc-choice-ELEM 4 -idx137 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 5 -idx141 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeW1 - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_W1;
    	/*=== START SEQUENCE -idx142 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceW1 -ROOTS19 E2nodeComponentInterfaceW1 ===*/
    	//hc-sequence-ELEM 1: -idx143 -roots19 E2nodeComponentInterfaceW1->ng_eNB_DU_ID - alias = 6 -mandatory
    	//hc-ng_eNB_DU_ID -idx144- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceW1->NGENB-DU-ID 
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeW1.ng_eNB_DU_ID = 34359738367;// change integer here
    	//end of hc-ng_eNB_DU_ID -idx144- alias primitive
    	//end of hc-sequence-ELEM 1: -idx143 -roots19 E2nodeComponentInterfaceW1->ng_eNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx142 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceW1 - E2nodeComponentInterfaceW1 -ROOTS19 ===*/
    	#endif /*hc-choice-ELEM 5 -idx141 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 6 -idx145 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeS1 - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_S1;
    	/*=== START SEQUENCE -idx146 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceS1 -ROOTS20 E2nodeComponentInterfaceS1 ===*/
    	//hc-sequence-ELEM 1: -idx147 -roots20 E2nodeComponentInterfaceS1->mme_name - alias = 10 -mandatory
    	//hc-mme_name -idx148- alias primitive - pid = 10 Printable STRING - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceS1->MMEname
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeS1.mme_name = "hardcoded string value"; // change printable string here
    	//end of hc-mme_name -idx148- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx147 -roots20 E2nodeComponentInterfaceS1->mme_name - alias = 10
	
    	/*=== END SEQUENCE -idx146 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceS1 - E2nodeComponentInterfaceS1 -ROOTS20 ===*/
    	#endif /*hc-choice-ELEM 6 -idx145 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 7 -idx149 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeX2 - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_X2;
    	/*=== START SEQUENCE -idx150 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2 -ROOTS21 E2nodeComponentInterfaceX2 ===*/
    	//hc-sequence-ELEM 1: -idx151 -roots21 E2nodeComponentInterfaceX2->global_eNB_ID - alias = -1 -optional
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_E_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx152 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID -ROOTS22 GlobalENB_ID ===*/
    	//hc-sequence-ELEM 1: -idx153 -roots22 GlobalENB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx154- alias primitive - pid = 8 - OCTET STRING - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_4[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_4);
    	XNAP_MEMCPY(p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_4, sizeof(temp_buff_for_pLMN_Identity_4)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx154- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx153 -roots22 GlobalENB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx155 -roots22 GlobalENB_ID->eNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx156 -ROOTC12 -ENB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx157 -rootc12: ENB_ID->macro_eNB_ID - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    	//hc-macro_eNB_ID -idx158- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->macro-eNB-ID
    	OSOCTET temp_buff_for_macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_2, 3);
    	//end of hc-macro_eNB_ID -idx158- primitive
    	#endif /*choice-ELEM 1 -idx157 -rootc12*/
	
    	#if 0 //hc-choice-ELEM 2 -idx159 -rootc12: ENB_ID->home_eNB_ID - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    	//hc-home_eNB_ID -idx160- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->home-eNB-ID
    	OSOCTET temp_buff_for_home_eNB_ID_2[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_2, 4);
    	//end of hc-home_eNB_ID -idx160- primitive
    	#endif /*hc-choice-ELEM 2 -idx159 -rootc12*/
	
    	#if 0 //hc-choice-ELEM 3 -idx161 -rootc12: ENB_ID->short_Macro_eNB_ID - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    	//hc-short_Macro_eNB_ID -idx162- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    	OSOCTET temp_buff_for_short_Macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_2, 3);
    	//end of hc-short_Macro_eNB_ID -idx162- primitive
    	#endif /*hc-choice-ELEM 3 -idx161 -rootc12*/
	
    	#if 0 //hc-choice-ELEM 4 -idx163 -rootc12: ENB_ID->long_Macro_eNB_ID - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    	//hc-long_Macro_eNB_ID -idx164- primitive in scope - pid = 3 - BIT STRING - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    	OSOCTET temp_buff_for_long_Macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_2, 3);
    	//end of hc-long_Macro_eNB_ID -idx164- primitive
    	#endif /*hc-choice-ELEM 4 -idx163 -rootc12*/
	
    	/*=== END CHOICE -idx156 -ROOTC12 -ENB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx155 -roots22 GlobalENB_ID->eNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx152 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID - GlobalENB_ID -ROOTS22 ===*/
    	//end of hc-sequence-ELEM 1: -idx151 -roots21 E2nodeComponentInterfaceX2->global_eNB_ID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx165 -roots21 E2nodeComponentInterfaceX2->global_en_gNB_ID - alias = -1 -optional
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_EN_G_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx166 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID -ROOTS23 GlobalenGNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx167 -roots23 GlobalenGNB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx168- alias primitive - pid = 8 - OCTET STRING - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_5[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_5);
    	XNAP_MEMCPY(p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_5, sizeof(temp_buff_for_pLMN_Identity_5)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx168- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx167 -roots23 GlobalenGNB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx169 -roots23 GlobalenGNB_ID->gNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx170 -ROOTC13 -ENGNB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx171 -rootc13: ENGNB_ID->gNB_ID - alias = -1
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.choice_type = E2AP_ENGNB_ID_e2ap_G_NB_ID;
    	//hc-gNB_ID -idx172- primitive in scope - pid = 4 - BIT STRING - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID->gNB-ID
    	OSOCTET temp_buff_for_gNB_ID_2[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_2, 3);
    	//end of hc-gNB_ID -idx172- primitive
    	#endif /*choice-ELEM 1 -idx171 -rootc13*/
	
    	/*=== END CHOICE -idx170 -ROOTC13 -ENGNB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx169 -roots23 GlobalenGNB_ID->gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx166 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID - GlobalenGNB_ID -ROOTS23 ===*/
    	//end of hc-sequence-ELEM 2: -idx165 -roots21 E2nodeComponentInterfaceX2->global_en_gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx150 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2 - E2nodeComponentInterfaceX2 -ROOTS21 ===*/
    	#endif /*hc-choice-ELEM 7 -idx149 -rootc8*/
	
    	/*=== END CHOICE -idx104 -ROOTC8 -E2nodeComponentID ===*/
    	//end of hc-sequence-ELEM 2: -idx103 -roots12 E2nodeComponentConfigAddition_Item->e2nodeComponentID - alias = -1
	
    	//hc-sequence-ELEM 3: -idx173 -roots12 E2nodeComponentConfigAddition_Item->e2nodeComponentConfiguration - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx174 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentConfiguration -ROOTS24 E2nodeComponentConfiguration ===*/
    	//hc-sequence-ELEM 1: -idx175 -roots24 E2nodeComponentConfiguration->e2nodeComponentRequestPart - alias = -1 -mandatory
    	//hc-e2nodeComponentRequestPart -idx176- primitive in scope - pid = 9 - OCTET STRING - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentConfiguration->e2nodeComponentRequestPart
    	OSOCTET temp_buff_for_e2nodeComponentRequestPart[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentConfiguration.e2nodeComponentRequestPart.numocts = sizeof(temp_buff_for_e2nodeComponentRequestPart); // change octetstring data here
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentConfiguration.e2nodeComponentRequestPart.data = xnap_mem_get(sizeof(temp_buff_for_e2nodeComponentRequestPart));
    	XNAP_MEMCPY(p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentConfiguration.e2nodeComponentRequestPart.data, temp_buff_for_e2nodeComponentRequestPart, sizeof(temp_buff_for_e2nodeComponentRequestPart));
    	//end of hc-e2nodeComponentRequestPart -idx176- primitive
    	//end of hc-sequence-ELEM 1: -idx175 -roots24 E2nodeComponentConfiguration->e2nodeComponentRequestPart - alias = -1
	
    	//hc-sequence-ELEM 2: -idx177 -roots24 E2nodeComponentConfiguration->e2nodeComponentResponsePart - alias = -1 -mandatory
    	//hc-e2nodeComponentResponsePart -idx178- primitive in scope - pid = 9 - OCTET STRING - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentConfiguration->e2nodeComponentResponsePart
    	OSOCTET temp_buff_for_e2nodeComponentResponsePart[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentConfiguration.e2nodeComponentResponsePart.numocts = sizeof(temp_buff_for_e2nodeComponentResponsePart); // change octetstring data here
    	p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentConfiguration.e2nodeComponentResponsePart.data = xnap_mem_get(sizeof(temp_buff_for_e2nodeComponentResponsePart));
    	XNAP_MEMCPY(p_E2setupRequest->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentConfiguration.e2nodeComponentResponsePart.data, temp_buff_for_e2nodeComponentResponsePart, sizeof(temp_buff_for_e2nodeComponentResponsePart));
    	//end of hc-e2nodeComponentResponsePart -idx178- primitive
    	//end of hc-sequence-ELEM 2: -idx177 -roots24 E2nodeComponentConfiguration->e2nodeComponentResponsePart - alias = -1
	
    	/*=== END SEQUENCE -idx174 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentConfiguration - E2nodeComponentConfiguration -ROOTS24 ===*/
    	//end of hc-sequence-ELEM 3: -idx173 -roots12 E2nodeComponentConfigAddition_Item->e2nodeComponentConfiguration - alias = -1
	
    	/*=== END SEQUENCE -idx100 - E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item - E2nodeComponentConfigAddition_Item -ROOTS12 ===*/
    	/*=== END LIST  -idx99 - E2nodeComponentConfigAddition_List ===*/
    }
    #endif/*======== End Hardcode IE -idx98: id_E2nodeComponentConfigAddition - mandatory ========*/
    return XNAP_SUCCESS;
}
/*
E2setupRequest : (E2setupRequest) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2setupRequest
    protocolIEs : (E2setupRequestIEs) 					---- (IE-LIST) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs
        TransactionID : (TransactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->TransactionID
        GlobalE2node-ID : (GlobalE2node-ID) 					---- (CHOICE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID
            gNB : (GlobalE2node-gNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID
                global-gNB-ID : (GlobalgNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalgNB-ID
                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalgNB-ID->PLMN-Identity
                    gnb-id : (GNB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalgNB-ID->GNB-ID-Choice
                        gnb-ID : (gnb-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
                global-en-gNB-ID : (GlobalenGNB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalenGNB-ID
                    pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalenGNB-ID->PLMN-Identity
                    gNB-ID : (ENGNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalenGNB-ID->ENGNB-ID
                        gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalenGNB-ID->ENGNB-ID->gNB-ID
                gNB-CU-UP-ID : (GNB-CU-UP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GNB-CU-UP-ID
                gNB-DU-ID : (GNB-DU-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GNB-DU-ID
            en-gNB : (GlobalE2node-en-gNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID
                global-en-gNB-ID : (GlobalenGNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GlobalenGNB-ID
                    pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GlobalenGNB-ID->PLMN-Identity
                    gNB-ID : (ENGNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GlobalenGNB-ID->ENGNB-ID
                        gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GlobalenGNB-ID->ENGNB-ID->gNB-ID
                en-gNB-CU-UP-ID : (GNB-CU-UP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GNB-CU-UP-ID
                en-gNB-DU-ID : (GNB-DU-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GNB-DU-ID
            ng-eNB : (GlobalE2node-ng-eNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID
                global-ng-eNB-ID : (GlobalngeNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID
                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->PLMN-Identity
                    enb-id : (ENB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->ENB-ID-Choice
                        enb-ID-macro : (enb-ID-macro) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
                        enb-ID-shortmacro : (enb-ID-shortmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
                        enb-ID-longmacro : (enb-ID-longmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
                global-eNB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID
                    pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->PLMN-Identity
                    eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID
                        macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID->macro-eNB-ID
                        home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID->home-eNB-ID
                        short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                        long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                ngENB-DU-ID : (NGENB-DU-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->NGENB-DU-ID
            eNB : (GlobalE2node-eNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-eNB-ID
                global-eNB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID
                    pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->PLMN-Identity
                    eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID
                        macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID->macro-eNB-ID
                        home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID->home-eNB-ID
                        short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                        long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
        RANfunctions-List : (RANfunctions-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->RANfunctions-List
            RANfunction-ItemIEs : (RANfunction-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2setupRequest->E2setupRequestIEs->RANfunctions-List->RANfunction-ItemIEs
                RANfunction-Item : (RANfunction-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item
                    ranFunctionID : (RANfunctionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionID
                    ranFunctionDefinition : (RANfunctionDefinition) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionDefinition
                    ranFunctionRevision : (RANfunctionRevision) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionRevision
                    ranFunctionOID : (RANfunctionOID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->RANfunctions-List->RANfunction-ItemIEs->RANfunction-Item->RANfunctionOID
        E2nodeComponentConfigAddition-List : (E2nodeComponentConfigAddition-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List
            E2nodeComponentConfigAddition-ItemIEs : (E2nodeComponentConfigAddition-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs
                E2nodeComponentConfigAddition-Item : (E2nodeComponentConfigAddition-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item
                    e2nodeComponentInterfaceType : (E2nodeComponentInterfaceType) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentInterfaceType
                    e2nodeComponentID : (E2nodeComponentID) 					---- (CHOICE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID
                        e2nodeComponentInterfaceTypeNG : (E2nodeComponentInterfaceNG) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceNG
                            amf-name : (AMFName) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceNG->AMFName
                        e2nodeComponentInterfaceTypeXn : (E2nodeComponentInterfaceXn) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn
                            global-NG-RAN-Node-ID : (GlobalNG-RANNode-ID) 					---- (CHOICE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID
                                gNB : (GlobalgNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID
                                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->PLMN-Identity
                                    gnb-id : (GNB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice
                                        gnb-ID : (gnb-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
                                ng-eNB : (GlobalngeNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID
                                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->PLMN-Identity
                                    enb-id : (ENB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice
                                        enb-ID-macro : (enb-ID-macro) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
                                        enb-ID-shortmacro : (enb-ID-shortmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
                                        enb-ID-longmacro : (enb-ID-longmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
                        e2nodeComponentInterfaceTypeE1 : (E2nodeComponentInterfaceE1) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceE1
                            gNB-CU-UP-ID : (GNB-CU-UP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceE1->GNB-CU-UP-ID
                        e2nodeComponentInterfaceTypeF1 : (E2nodeComponentInterfaceF1) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceF1
                            gNB-DU-ID : (GNB-DU-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceF1->GNB-DU-ID
                        e2nodeComponentInterfaceTypeW1 : (E2nodeComponentInterfaceW1) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceW1
                            ng-eNB-DU-ID : (NGENB-DU-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceW1->NGENB-DU-ID
                        e2nodeComponentInterfaceTypeS1 : (E2nodeComponentInterfaceS1) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceS1
                            mme-name : (MMEname) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceS1->MMEname
                        e2nodeComponentInterfaceTypeX2 : (E2nodeComponentInterfaceX2) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2
                            global-eNB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID
                                pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->PLMN-Identity
                                eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID
                                    macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->macro-eNB-ID
                                    home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->home-eNB-ID
                                    short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                                    long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                            global-en-gNB-ID : (GlobalenGNB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID
                                pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->PLMN-Identity
                                gNB-ID : (ENGNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID
                                    gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID->gNB-ID
                    e2nodeComponentConfiguration : (E2nodeComponentConfiguration) 					---- (SEQUENCE) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentConfiguration
                        e2nodeComponentRequestPart : (e2nodeComponentRequestPart) 					---- (OCTET STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentConfiguration->e2nodeComponentRequestPart
                        e2nodeComponentResponsePart : (e2nodeComponentResponsePart) 					---- (OCTET STRING) ---- [M] ----PATH: E2setupRequest->E2setupRequestIEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentConfiguration->e2nodeComponentResponsePart
*/
#endif // ASSIGN_HARDCODE_E2SETUP_REQUEST_H

