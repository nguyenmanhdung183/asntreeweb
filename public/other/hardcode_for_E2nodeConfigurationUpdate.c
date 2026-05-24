#ifndef ASSIGN_HARDCODE_E2NODE_CONFIGURATION_UPDATE_H
#define ASSIGN_HARDCODE_E2NODE_CONFIGURATION_UPDATE_H
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

xnap_return_et assign_hardcode_value_E2nodeConfigurationUpdate(e2ap_E2nodeConfigurationUpdate_t* p_E2nodeConfigurationUpdate)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_TransactionID - mandatory=======*/
    {
    	//hc-p_E2nodeConfigurationUpdate->id_TransactionID -idx2- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->TransactionID 
    	p_E2nodeConfigurationUpdate->id_TransactionID = 127;// change integer here
    	//end of hc-p_E2nodeConfigurationUpdate->id_TransactionID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_TransactionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_GlobalE2node_ID - optional=======*/
    {
    	 p_E2nodeConfigurationUpdate->bitmask |= E2AP_E2NODE_CONFIGURATION_UPDATE_e2ap_ID_GLOBAL_E2NODE_ID_PRESENT;
    	/*=== START CHOICE -idx4 -ROOTC1 -GlobalE2node_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx5 -rootc1: GlobalE2node_ID->gNB - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.choice_type = E2AP_GLOBAL_E2NODE_ID_e2ap_G_NB;
    	/*=== START SEQUENCE -idx6 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID -ROOTS1 GlobalE2node_gNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx7 -roots1 GlobalE2node_gNB_ID->global_gNB_ID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx8 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalgNB-ID -ROOTS2 GlobalgNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx9 -roots2 GlobalgNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx10- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalgNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.gNB.global_gNB_ID.plmn_id.numocts = sizeof(temp_buff_for_plmn_id);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.gNB.global_gNB_ID.plmn_id.data, temp_buff_for_plmn_id, sizeof(temp_buff_for_plmn_id)); // change octetstring data here
    	//end of hc-plmn_id -idx10- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx9 -roots2 GlobalgNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx11 -roots2 GlobalgNB_ID->gnb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx12 -ROOTC2 -GNB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx13 -rootc2: GNB_ID_Choice->gnb_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.gNB.global_gNB_ID.gnb_id.choice_type = E2AP_GNB_ID_CHOICE_e2ap_GNB_ID;
    	//hc-gnb_ID -idx14- primitive in scope - pid = 4 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
    	OSOCTET temp_buff_for_gnb_ID[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.gNB.global_gNB_ID.gnb_id.gnb_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.gNB.global_gNB_ID.gnb_id.gnb_ID.data, temp_buff_for_gnb_ID, 3);
    	//end of hc-gnb_ID -idx14- primitive
    	#endif /*choice-ELEM 1 -idx13 -rootc2*/
	
    	/*=== END CHOICE -idx12 -ROOTC2 -GNB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx11 -roots2 GlobalgNB_ID->gnb_id - alias = -1
	
    	/*=== END SEQUENCE -idx8 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalgNB-ID - GlobalgNB_ID -ROOTS2 ===*/
    	//end of hc-sequence-ELEM 1: -idx7 -roots1 GlobalE2node_gNB_ID->global_gNB_ID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx15 -roots1 GlobalE2node_gNB_ID->global_en_gNB_ID - alias = -1 -optional
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.gNB.bitmask |= E2AP_GLOBAL_E2NODE_G_NB_ID_e2ap_GLOBAL_EN_G_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx16 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalenGNB-ID -ROOTS3 GlobalenGNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx17 -roots3 GlobalenGNB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx18- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalenGNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.gNB.global_en_gNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.gNB.global_en_gNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity, sizeof(temp_buff_for_pLMN_Identity)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx18- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx17 -roots3 GlobalenGNB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx19 -roots3 GlobalenGNB_ID->gNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx20 -ROOTC3 -ENGNB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx21 -rootc3: ENGNB_ID->gNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.gNB.global_en_gNB_ID.gNB_ID.choice_type = E2AP_ENGNB_ID_e2ap_G_NB_ID;
    	//hc-gNB_ID -idx22- primitive in scope - pid = 4 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalenGNB-ID->ENGNB-ID->gNB-ID
    	OSOCTET temp_buff_for_gNB_ID[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.gNB.global_en_gNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.gNB.global_en_gNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID, 3);
    	//end of hc-gNB_ID -idx22- primitive
    	#endif /*choice-ELEM 1 -idx21 -rootc3*/
	
    	/*=== END CHOICE -idx20 -ROOTC3 -ENGNB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx19 -roots3 GlobalenGNB_ID->gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx16 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalenGNB-ID - GlobalenGNB_ID -ROOTS3 ===*/
    	//end of hc-sequence-ELEM 2: -idx15 -roots1 GlobalE2node_gNB_ID->global_en_gNB_ID - alias = -1
	
    	//hc-sequence-ELEM 3: -idx23 -roots1 GlobalE2node_gNB_ID->gNB_CU_UP_ID - alias = 6 -optional
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.gNB.bitmask |= E2AP_GLOBAL_E2NODE_G_NB_ID_e2ap_G_NB_CU_UP_ID_PRESENT;
    	//hc-gNB_CU_UP_ID -idx24- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GNB-CU-UP-ID 
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.gNB.gNB_CU_UP_ID = 34359738367;// change integer here
    	//end of hc-gNB_CU_UP_ID -idx24- alias primitive
    	//end of hc-sequence-ELEM 3: -idx23 -roots1 GlobalE2node_gNB_ID->gNB_CU_UP_ID - alias = 6
	
    	//hc-sequence-ELEM 4: -idx25 -roots1 GlobalE2node_gNB_ID->gNB_DU_ID - alias = 6 -optional
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.gNB.bitmask |= E2AP_GLOBAL_E2NODE_G_NB_ID_e2ap_G_NB_DU_ID_PRESENT;
    	//hc-gNB_DU_ID -idx26- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GNB-DU-ID 
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.gNB.gNB_DU_ID = 34359738367;// change integer here
    	//end of hc-gNB_DU_ID -idx26- alias primitive
    	//end of hc-sequence-ELEM 4: -idx25 -roots1 GlobalE2node_gNB_ID->gNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx6 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID - GlobalE2node_gNB_ID -ROOTS1 ===*/
    	#endif /*choice-ELEM 1 -idx5 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 2 -idx27 -rootc1: GlobalE2node_ID->en_gNB - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.choice_type = E2AP_GLOBAL_E2NODE_ID_e2ap_EN_G_NB;
    	/*=== START SEQUENCE -idx28 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID -ROOTS4 GlobalE2node_en_gNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx29 -roots4 GlobalE2node_en_gNB_ID->global_en_gNB_ID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx30 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GlobalenGNB-ID -ROOTS5 GlobalenGNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx31 -roots5 GlobalenGNB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx32- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GlobalenGNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_1[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.en_gNB.global_en_gNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_1);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.en_gNB.global_en_gNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_1, sizeof(temp_buff_for_pLMN_Identity_1)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx32- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx31 -roots5 GlobalenGNB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx33 -roots5 GlobalenGNB_ID->gNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx34 -ROOTC4 -ENGNB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx35 -rootc4: ENGNB_ID->gNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.en_gNB.global_en_gNB_ID.gNB_ID.choice_type = E2AP_ENGNB_ID_e2ap_G_NB_ID;
    	//hc-gNB_ID -idx36- primitive in scope - pid = 4 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GlobalenGNB-ID->ENGNB-ID->gNB-ID
    	OSOCTET temp_buff_for_gNB_ID_1[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.en_gNB.global_en_gNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.en_gNB.global_en_gNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_1, 3);
    	//end of hc-gNB_ID -idx36- primitive
    	#endif /*choice-ELEM 1 -idx35 -rootc4*/
	
    	/*=== END CHOICE -idx34 -ROOTC4 -ENGNB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx33 -roots5 GlobalenGNB_ID->gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx30 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GlobalenGNB-ID - GlobalenGNB_ID -ROOTS5 ===*/
    	//end of hc-sequence-ELEM 1: -idx29 -roots4 GlobalE2node_en_gNB_ID->global_en_gNB_ID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx37 -roots4 GlobalE2node_en_gNB_ID->en_gNB_CU_UP_ID - alias = 6 -optional
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.en_gNB.bitmask |= E2AP_GLOBAL_E2NODE_EN_G_NB_ID_e2ap_EN_G_NB_CU_UP_ID_PRESENT;
    	//hc-en_gNB_CU_UP_ID -idx38- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GNB-CU-UP-ID 
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.en_gNB.en_gNB_CU_UP_ID = 34359738367;// change integer here
    	//end of hc-en_gNB_CU_UP_ID -idx38- alias primitive
    	//end of hc-sequence-ELEM 2: -idx37 -roots4 GlobalE2node_en_gNB_ID->en_gNB_CU_UP_ID - alias = 6
	
    	//hc-sequence-ELEM 3: -idx39 -roots4 GlobalE2node_en_gNB_ID->en_gNB_DU_ID - alias = 6 -optional
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.en_gNB.bitmask |= E2AP_GLOBAL_E2NODE_EN_G_NB_ID_e2ap_EN_G_NB_DU_ID_PRESENT;
    	//hc-en_gNB_DU_ID -idx40- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GNB-DU-ID 
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.en_gNB.en_gNB_DU_ID = 34359738367;// change integer here
    	//end of hc-en_gNB_DU_ID -idx40- alias primitive
    	//end of hc-sequence-ELEM 3: -idx39 -roots4 GlobalE2node_en_gNB_ID->en_gNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx28 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID - GlobalE2node_en_gNB_ID -ROOTS4 ===*/
    	#endif /*hc-choice-ELEM 2 -idx27 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 3 -idx41 -rootc1: GlobalE2node_ID->ng_eNB - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.choice_type = E2AP_GLOBAL_E2NODE_ID_e2ap_NG_E_NB;
    	/*=== START SEQUENCE -idx42 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID -ROOTS6 GlobalE2node_ng_eNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx43 -roots6 GlobalE2node_ng_eNB_ID->global_ng_eNB_ID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx44 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID -ROOTS7 GlobalngeNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx45 -roots7 GlobalngeNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx46- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id_1[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.plmn_id.numocts = sizeof(temp_buff_for_plmn_id_1);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.plmn_id.data, temp_buff_for_plmn_id_1, sizeof(temp_buff_for_plmn_id_1)); // change octetstring data here
    	//end of hc-plmn_id -idx46- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx45 -roots7 GlobalngeNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx47 -roots7 GlobalngeNB_ID->enb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx48 -ROOTC5 -ENB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx49 -rootc5: ENB_ID_Choice->enb_ID_macro - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO;
    	//hc-enb_ID_macro -idx50- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
    	OSOCTET temp_buff_for_enb_ID_macro[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.enb_ID_macro.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.enb_ID_macro.data, temp_buff_for_enb_ID_macro, 3);
    	//end of hc-enb_ID_macro -idx50- primitive
    	#endif /*choice-ELEM 1 -idx49 -rootc5*/
	
    	#if 0 //hc-choice-ELEM 2 -idx51 -rootc5: ENB_ID_Choice->enb_ID_shortmacro - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO;
    	//hc-enb_ID_shortmacro -idx52- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
    	OSOCTET temp_buff_for_enb_ID_shortmacro[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.enb_ID_shortmacro.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.enb_ID_shortmacro.data, temp_buff_for_enb_ID_shortmacro, 3);
    	//end of hc-enb_ID_shortmacro -idx52- primitive
    	#endif /*hc-choice-ELEM 2 -idx51 -rootc5*/
	
    	#if 0 //hc-choice-ELEM 3 -idx53 -rootc5: ENB_ID_Choice->enb_ID_longmacro - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO;
    	//hc-enb_ID_longmacro -idx54- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
    	OSOCTET temp_buff_for_enb_ID_longmacro[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.enb_ID_longmacro.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_ng_eNB_ID.enb_id.enb_ID_longmacro.data, temp_buff_for_enb_ID_longmacro, 3);
    	//end of hc-enb_ID_longmacro -idx54- primitive
    	#endif /*hc-choice-ELEM 3 -idx53 -rootc5*/
	
    	/*=== END CHOICE -idx48 -ROOTC5 -ENB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx47 -roots7 GlobalngeNB_ID->enb_id - alias = -1
	
    	/*=== END SEQUENCE -idx44 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID - GlobalngeNB_ID -ROOTS7 ===*/
    	//end of hc-sequence-ELEM 1: -idx43 -roots6 GlobalE2node_ng_eNB_ID->global_ng_eNB_ID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx55 -roots6 GlobalE2node_ng_eNB_ID->global_eNB_ID - alias = -1 -optional
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.bitmask |= E2AP_GLOBAL_E2NODE_NG_E_NB_ID_e2ap_GLOBAL_E_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx56 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID -ROOTS8 GlobalENB_ID ===*/
    	//hc-sequence-ELEM 1: -idx57 -roots8 GlobalENB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx58- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_2[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_2);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_2, sizeof(temp_buff_for_pLMN_Identity_2)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx58- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx57 -roots8 GlobalENB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx59 -roots8 GlobalENB_ID->eNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx60 -ROOTC6 -ENB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx61 -rootc6: ENB_ID->macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    	//hc-macro_eNB_ID -idx62- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID->macro-eNB-ID
    	OSOCTET temp_buff_for_macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID, 3);
    	//end of hc-macro_eNB_ID -idx62- primitive
    	#endif /*choice-ELEM 1 -idx61 -rootc6*/
	
    	#if 0 //hc-choice-ELEM 2 -idx63 -rootc6: ENB_ID->home_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    	//hc-home_eNB_ID -idx64- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID->home-eNB-ID
    	OSOCTET temp_buff_for_home_eNB_ID[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID, 4);
    	//end of hc-home_eNB_ID -idx64- primitive
    	#endif /*hc-choice-ELEM 2 -idx63 -rootc6*/
	
    	#if 0 //hc-choice-ELEM 3 -idx65 -rootc6: ENB_ID->short_Macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    	//hc-short_Macro_eNB_ID -idx66- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    	OSOCTET temp_buff_for_short_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID, 3);
    	//end of hc-short_Macro_eNB_ID -idx66- primitive
    	#endif /*hc-choice-ELEM 3 -idx65 -rootc6*/
	
    	#if 0 //hc-choice-ELEM 4 -idx67 -rootc6: ENB_ID->long_Macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    	//hc-long_Macro_eNB_ID -idx68- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    	OSOCTET temp_buff_for_long_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID, 3);
    	//end of hc-long_Macro_eNB_ID -idx68- primitive
    	#endif /*hc-choice-ELEM 4 -idx67 -rootc6*/
	
    	/*=== END CHOICE -idx60 -ROOTC6 -ENB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx59 -roots8 GlobalENB_ID->eNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx56 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID - GlobalENB_ID -ROOTS8 ===*/
    	//end of hc-sequence-ELEM 2: -idx55 -roots6 GlobalE2node_ng_eNB_ID->global_eNB_ID - alias = -1
	
    	//hc-sequence-ELEM 3: -idx69 -roots6 GlobalE2node_ng_eNB_ID->ngENB_DU_ID - alias = 6 -optional
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.bitmask |= E2AP_GLOBAL_E2NODE_NG_E_NB_ID_e2ap_NG_ENB_DU_ID_PRESENT;
    	//hc-ngENB_DU_ID -idx70- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->NGENB-DU-ID 
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.ng_eNB.ngENB_DU_ID = 34359738367;// change integer here
    	//end of hc-ngENB_DU_ID -idx70- alias primitive
    	//end of hc-sequence-ELEM 3: -idx69 -roots6 GlobalE2node_ng_eNB_ID->ngENB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx42 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID - GlobalE2node_ng_eNB_ID -ROOTS6 ===*/
    	#endif /*hc-choice-ELEM 3 -idx41 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 4 -idx71 -rootc1: GlobalE2node_ID->eNB - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.choice_type = E2AP_GLOBAL_E2NODE_ID_e2ap_E_NB;
    	/*=== START SEQUENCE -idx72 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-eNB-ID -ROOTS9 GlobalE2node_eNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx73 -roots9 GlobalE2node_eNB_ID->global_eNB_ID - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx74 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID -ROOTS10 GlobalENB_ID ===*/
    	//hc-sequence-ELEM 1: -idx75 -roots10 GlobalENB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx76- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_3[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.eNB.global_eNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_3);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.eNB.global_eNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_3, sizeof(temp_buff_for_pLMN_Identity_3)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx76- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx75 -roots10 GlobalENB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx77 -roots10 GlobalENB_ID->eNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx78 -ROOTC7 -ENB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx79 -rootc7: ENB_ID->macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    	//hc-macro_eNB_ID -idx80- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID->macro-eNB-ID
    	OSOCTET temp_buff_for_macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_1, 3);
    	//end of hc-macro_eNB_ID -idx80- primitive
    	#endif /*choice-ELEM 1 -idx79 -rootc7*/
	
    	#if 0 //hc-choice-ELEM 2 -idx81 -rootc7: ENB_ID->home_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    	//hc-home_eNB_ID -idx82- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID->home-eNB-ID
    	OSOCTET temp_buff_for_home_eNB_ID_1[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_1, 4);
    	//end of hc-home_eNB_ID -idx82- primitive
    	#endif /*hc-choice-ELEM 2 -idx81 -rootc7*/
	
    	#if 0 //hc-choice-ELEM 3 -idx83 -rootc7: ENB_ID->short_Macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    	//hc-short_Macro_eNB_ID -idx84- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    	OSOCTET temp_buff_for_short_Macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_1, 3);
    	//end of hc-short_Macro_eNB_ID -idx84- primitive
    	#endif /*hc-choice-ELEM 3 -idx83 -rootc7*/
	
    	#if 0 //hc-choice-ELEM 4 -idx85 -rootc7: ENB_ID->long_Macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    	//hc-long_Macro_eNB_ID -idx86- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    	OSOCTET temp_buff_for_long_Macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_GlobalE2node_ID.eNB.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_1, 3);
    	//end of hc-long_Macro_eNB_ID -idx86- primitive
    	#endif /*hc-choice-ELEM 4 -idx85 -rootc7*/
	
    	/*=== END CHOICE -idx78 -ROOTC7 -ENB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx77 -roots10 GlobalENB_ID->eNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx74 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID - GlobalENB_ID -ROOTS10 ===*/
    	//end of hc-sequence-ELEM 1: -idx73 -roots9 GlobalE2node_eNB_ID->global_eNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx72 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-eNB-ID - GlobalE2node_eNB_ID -ROOTS9 ===*/
    	#endif /*hc-choice-ELEM 4 -idx71 -rootc1*/
	
    	/*=== END CHOICE -idx4 -ROOTC1 -GlobalE2node_ID ===*/
    }
    #endif/*======== End Hardcode IE -idx3: id_GlobalE2node_ID - optional ========*/

    #if 1/*======== Start Hardcode IE -idx87: id_E2nodeComponentConfigAddition - optional=======*/
    {
    	 p_E2nodeConfigurationUpdate->bitmask |= E2AP_E2NODE_CONFIGURATION_UPDATE_e2ap_ID_E2NODE_COMPONENT_CONFIG_ADDITION_PRESENT;
    	/*=== START LIST -idx88 - E2nodeComponentConfigAddition_List===*/
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item_count = 1;
    	/*=== START SEQUENCE -idx89 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item -ROOTS11 E2nodeComponentConfigAddition_Item ===*/
    	//hc-sequence-ELEM 1: -idx90 -roots11 E2nodeComponentConfigAddition_Item->e2nodeComponentInterfaceType - alias = 13 -mandatory
    	//hc-E2nodeComponentInterfaceType -idx91 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentInterfaceType
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentInterfaceType = E2AP_E2NODE_COMPONENT_INTERFACE_TYPE_NG; // change enum value here
    	//end of hc-E2nodeComponentInterfaceType -idx91- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx90 -roots11 E2nodeComponentConfigAddition_Item->e2nodeComponentInterfaceType - alias = 13
	
    	//hc-sequence-ELEM 2: -idx92 -roots11 E2nodeComponentConfigAddition_Item->e2nodeComponentID - alias = -1 -mandatory
    	/*=== START CHOICE -idx93 -ROOTC8 -E2nodeComponentID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx94 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeNG - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_NG;
    	/*=== START SEQUENCE -idx95 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceNG -ROOTS12 E2nodeComponentInterfaceNG ===*/
    	//hc-sequence-ELEM 1: -idx96 -roots12 E2nodeComponentInterfaceNG->amf_name - alias = 10 -mandatory
    	//hc-amf_name -idx97- alias primitive - pid = 10 Printable STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceNG->AMFName
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeNG.amf_name = "hardcoded string value"; // change printable string here
    	//end of hc-amf_name -idx97- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx96 -roots12 E2nodeComponentInterfaceNG->amf_name - alias = 10
	
    	/*=== END SEQUENCE -idx95 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceNG - E2nodeComponentInterfaceNG -ROOTS12 ===*/
    	#endif /*choice-ELEM 1 -idx94 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 2 -idx98 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeXn - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_XN;
    	/*=== START SEQUENCE -idx99 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn -ROOTS13 E2nodeComponentInterfaceXn ===*/
    	//hc-sequence-ELEM 1: -idx100 -roots13 E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx101 -ROOTC9 -GlobalNG_RANNode_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx102 -rootc9: GlobalNG_RANNode_ID->gNB - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_G_NB;
    	/*=== START SEQUENCE -idx103 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID -ROOTS14 GlobalgNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx104 -roots14 GlobalgNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx105- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id_2[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id_2);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.data, temp_buff_for_plmn_id_2, sizeof(temp_buff_for_plmn_id_2)); // change octetstring data here
    	//end of hc-plmn_id -idx105- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx104 -roots14 GlobalgNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx106 -roots14 GlobalgNB_ID->gnb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx107 -ROOTC10 -GNB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx108 -rootc10: GNB_ID_Choice->gnb_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.choice_type = E2AP_GNB_ID_CHOICE_e2ap_GNB_ID;
    	//hc-gnb_ID -idx109- primitive in scope - pid = 4 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
    	OSOCTET temp_buff_for_gnb_ID_1[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.data, temp_buff_for_gnb_ID_1, 3);
    	//end of hc-gnb_ID -idx109- primitive
    	#endif /*choice-ELEM 1 -idx108 -rootc10*/
	
    	/*=== END CHOICE -idx107 -ROOTC10 -GNB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx106 -roots14 GlobalgNB_ID->gnb_id - alias = -1
	
    	/*=== END SEQUENCE -idx103 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID - GlobalgNB_ID -ROOTS14 ===*/
    	#endif /*choice-ELEM 1 -idx102 -rootc9*/
	
    	#if 0 //hc-choice-ELEM 2 -idx110 -rootc9: GlobalNG_RANNode_ID->ng_eNB - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_NG_E_NB;
    	/*=== START SEQUENCE -idx111 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID -ROOTS15 GlobalngeNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx112 -roots15 GlobalngeNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx113- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id_3[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id_3);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.data, temp_buff_for_plmn_id_3, sizeof(temp_buff_for_plmn_id_3)); // change octetstring data here
    	//end of hc-plmn_id -idx113- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx112 -roots15 GlobalngeNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx114 -roots15 GlobalngeNB_ID->enb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx115 -ROOTC11 -ENB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx116 -rootc11: ENB_ID_Choice->enb_ID_macro - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO;
    	//hc-enb_ID_macro -idx117- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
    	OSOCTET temp_buff_for_enb_ID_macro_1[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.data, temp_buff_for_enb_ID_macro_1, 3);
    	//end of hc-enb_ID_macro -idx117- primitive
    	#endif /*choice-ELEM 1 -idx116 -rootc11*/
	
    	#if 0 //hc-choice-ELEM 2 -idx118 -rootc11: ENB_ID_Choice->enb_ID_shortmacro - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO;
    	//hc-enb_ID_shortmacro -idx119- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
    	OSOCTET temp_buff_for_enb_ID_shortmacro_1[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.data, temp_buff_for_enb_ID_shortmacro_1, 3);
    	//end of hc-enb_ID_shortmacro -idx119- primitive
    	#endif /*hc-choice-ELEM 2 -idx118 -rootc11*/
	
    	#if 0 //hc-choice-ELEM 3 -idx120 -rootc11: ENB_ID_Choice->enb_ID_longmacro - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO;
    	//hc-enb_ID_longmacro -idx121- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
    	OSOCTET temp_buff_for_enb_ID_longmacro_1[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.data, temp_buff_for_enb_ID_longmacro_1, 3);
    	//end of hc-enb_ID_longmacro -idx121- primitive
    	#endif /*hc-choice-ELEM 3 -idx120 -rootc11*/
	
    	/*=== END CHOICE -idx115 -ROOTC11 -ENB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx114 -roots15 GlobalngeNB_ID->enb_id - alias = -1
	
    	/*=== END SEQUENCE -idx111 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID - GlobalngeNB_ID -ROOTS15 ===*/
    	#endif /*hc-choice-ELEM 2 -idx110 -rootc9*/
	
    	/*=== END CHOICE -idx101 -ROOTC9 -GlobalNG_RANNode_ID ===*/
    	//end of hc-sequence-ELEM 1: -idx100 -roots13 E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID - alias = -1
	
    	/*=== END SEQUENCE -idx99 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn - E2nodeComponentInterfaceXn -ROOTS13 ===*/
    	#endif /*hc-choice-ELEM 2 -idx98 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 3 -idx122 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeE1 - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_E1;
    	/*=== START SEQUENCE -idx123 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceE1 -ROOTS16 E2nodeComponentInterfaceE1 ===*/
    	//hc-sequence-ELEM 1: -idx124 -roots16 E2nodeComponentInterfaceE1->gNB_CU_UP_ID - alias = 6 -mandatory
    	//hc-gNB_CU_UP_ID -idx125- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceE1->GNB-CU-UP-ID 
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeE1.gNB_CU_UP_ID = 34359738367;// change integer here
    	//end of hc-gNB_CU_UP_ID -idx125- alias primitive
    	//end of hc-sequence-ELEM 1: -idx124 -roots16 E2nodeComponentInterfaceE1->gNB_CU_UP_ID - alias = 6
	
    	/*=== END SEQUENCE -idx123 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceE1 - E2nodeComponentInterfaceE1 -ROOTS16 ===*/
    	#endif /*hc-choice-ELEM 3 -idx122 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 4 -idx126 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeF1 - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_F1;
    	/*=== START SEQUENCE -idx127 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceF1 -ROOTS17 E2nodeComponentInterfaceF1 ===*/
    	//hc-sequence-ELEM 1: -idx128 -roots17 E2nodeComponentInterfaceF1->gNB_DU_ID - alias = 6 -mandatory
    	//hc-gNB_DU_ID -idx129- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceF1->GNB-DU-ID 
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeF1.gNB_DU_ID = 34359738367;// change integer here
    	//end of hc-gNB_DU_ID -idx129- alias primitive
    	//end of hc-sequence-ELEM 1: -idx128 -roots17 E2nodeComponentInterfaceF1->gNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx127 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceF1 - E2nodeComponentInterfaceF1 -ROOTS17 ===*/
    	#endif /*hc-choice-ELEM 4 -idx126 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 5 -idx130 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeW1 - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_W1;
    	/*=== START SEQUENCE -idx131 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceW1 -ROOTS18 E2nodeComponentInterfaceW1 ===*/
    	//hc-sequence-ELEM 1: -idx132 -roots18 E2nodeComponentInterfaceW1->ng_eNB_DU_ID - alias = 6 -mandatory
    	//hc-ng_eNB_DU_ID -idx133- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceW1->NGENB-DU-ID 
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeW1.ng_eNB_DU_ID = 34359738367;// change integer here
    	//end of hc-ng_eNB_DU_ID -idx133- alias primitive
    	//end of hc-sequence-ELEM 1: -idx132 -roots18 E2nodeComponentInterfaceW1->ng_eNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx131 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceW1 - E2nodeComponentInterfaceW1 -ROOTS18 ===*/
    	#endif /*hc-choice-ELEM 5 -idx130 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 6 -idx134 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeS1 - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_S1;
    	/*=== START SEQUENCE -idx135 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceS1 -ROOTS19 E2nodeComponentInterfaceS1 ===*/
    	//hc-sequence-ELEM 1: -idx136 -roots19 E2nodeComponentInterfaceS1->mme_name - alias = 10 -mandatory
    	//hc-mme_name -idx137- alias primitive - pid = 10 Printable STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceS1->MMEname
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeS1.mme_name = "hardcoded string value"; // change printable string here
    	//end of hc-mme_name -idx137- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx136 -roots19 E2nodeComponentInterfaceS1->mme_name - alias = 10
	
    	/*=== END SEQUENCE -idx135 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceS1 - E2nodeComponentInterfaceS1 -ROOTS19 ===*/
    	#endif /*hc-choice-ELEM 6 -idx134 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 7 -idx138 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeX2 - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_X2;
    	/*=== START SEQUENCE -idx139 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2 -ROOTS20 E2nodeComponentInterfaceX2 ===*/
    	//hc-sequence-ELEM 1: -idx140 -roots20 E2nodeComponentInterfaceX2->global_eNB_ID - alias = -1 -optional
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_E_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx141 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID -ROOTS21 GlobalENB_ID ===*/
    	//hc-sequence-ELEM 1: -idx142 -roots21 GlobalENB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx143- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_4[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_4);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_4, sizeof(temp_buff_for_pLMN_Identity_4)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx143- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx142 -roots21 GlobalENB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx144 -roots21 GlobalENB_ID->eNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx145 -ROOTC12 -ENB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx146 -rootc12: ENB_ID->macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    	//hc-macro_eNB_ID -idx147- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->macro-eNB-ID
    	OSOCTET temp_buff_for_macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_2, 3);
    	//end of hc-macro_eNB_ID -idx147- primitive
    	#endif /*choice-ELEM 1 -idx146 -rootc12*/
	
    	#if 0 //hc-choice-ELEM 2 -idx148 -rootc12: ENB_ID->home_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    	//hc-home_eNB_ID -idx149- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->home-eNB-ID
    	OSOCTET temp_buff_for_home_eNB_ID_2[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_2, 4);
    	//end of hc-home_eNB_ID -idx149- primitive
    	#endif /*hc-choice-ELEM 2 -idx148 -rootc12*/
	
    	#if 0 //hc-choice-ELEM 3 -idx150 -rootc12: ENB_ID->short_Macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    	//hc-short_Macro_eNB_ID -idx151- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    	OSOCTET temp_buff_for_short_Macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_2, 3);
    	//end of hc-short_Macro_eNB_ID -idx151- primitive
    	#endif /*hc-choice-ELEM 3 -idx150 -rootc12*/
	
    	#if 0 //hc-choice-ELEM 4 -idx152 -rootc12: ENB_ID->long_Macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    	//hc-long_Macro_eNB_ID -idx153- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    	OSOCTET temp_buff_for_long_Macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_2, 3);
    	//end of hc-long_Macro_eNB_ID -idx153- primitive
    	#endif /*hc-choice-ELEM 4 -idx152 -rootc12*/
	
    	/*=== END CHOICE -idx145 -ROOTC12 -ENB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx144 -roots21 GlobalENB_ID->eNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx141 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID - GlobalENB_ID -ROOTS21 ===*/
    	//end of hc-sequence-ELEM 1: -idx140 -roots20 E2nodeComponentInterfaceX2->global_eNB_ID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx154 -roots20 E2nodeComponentInterfaceX2->global_en_gNB_ID - alias = -1 -optional
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_EN_G_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx155 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID -ROOTS22 GlobalenGNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx156 -roots22 GlobalenGNB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx157- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_5[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_5);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_5, sizeof(temp_buff_for_pLMN_Identity_5)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx157- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx156 -roots22 GlobalenGNB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx158 -roots22 GlobalenGNB_ID->gNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx159 -ROOTC13 -ENGNB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx160 -rootc13: ENGNB_ID->gNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.choice_type = E2AP_ENGNB_ID_e2ap_G_NB_ID;
    	//hc-gNB_ID -idx161- primitive in scope - pid = 4 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID->gNB-ID
    	OSOCTET temp_buff_for_gNB_ID_2[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_2, 3);
    	//end of hc-gNB_ID -idx161- primitive
    	#endif /*choice-ELEM 1 -idx160 -rootc13*/
	
    	/*=== END CHOICE -idx159 -ROOTC13 -ENGNB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx158 -roots22 GlobalenGNB_ID->gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx155 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID - GlobalenGNB_ID -ROOTS22 ===*/
    	//end of hc-sequence-ELEM 2: -idx154 -roots20 E2nodeComponentInterfaceX2->global_en_gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx139 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2 - E2nodeComponentInterfaceX2 -ROOTS20 ===*/
    	#endif /*hc-choice-ELEM 7 -idx138 -rootc8*/
	
    	/*=== END CHOICE -idx93 -ROOTC8 -E2nodeComponentID ===*/
    	//end of hc-sequence-ELEM 2: -idx92 -roots11 E2nodeComponentConfigAddition_Item->e2nodeComponentID - alias = -1
	
    	//hc-sequence-ELEM 3: -idx162 -roots11 E2nodeComponentConfigAddition_Item->e2nodeComponentConfiguration - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx163 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentConfiguration -ROOTS23 E2nodeComponentConfiguration ===*/
    	//hc-sequence-ELEM 1: -idx164 -roots23 E2nodeComponentConfiguration->e2nodeComponentRequestPart - alias = -1 -mandatory
    	//hc-e2nodeComponentRequestPart -idx165- primitive in scope - pid = 9 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentConfiguration->e2nodeComponentRequestPart
    	OSOCTET temp_buff_for_e2nodeComponentRequestPart[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentConfiguration.e2nodeComponentRequestPart.numocts = sizeof(temp_buff_for_e2nodeComponentRequestPart); // change octetstring data here
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentConfiguration.e2nodeComponentRequestPart.data = xnap_mem_get(sizeof(temp_buff_for_e2nodeComponentRequestPart));
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentConfiguration.e2nodeComponentRequestPart.data, temp_buff_for_e2nodeComponentRequestPart, sizeof(temp_buff_for_e2nodeComponentRequestPart));
    	//end of hc-e2nodeComponentRequestPart -idx165- primitive
    	//end of hc-sequence-ELEM 1: -idx164 -roots23 E2nodeComponentConfiguration->e2nodeComponentRequestPart - alias = -1
	
    	//hc-sequence-ELEM 2: -idx166 -roots23 E2nodeComponentConfiguration->e2nodeComponentResponsePart - alias = -1 -mandatory
    	//hc-e2nodeComponentResponsePart -idx167- primitive in scope - pid = 9 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentConfiguration->e2nodeComponentResponsePart
    	OSOCTET temp_buff_for_e2nodeComponentResponsePart[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentConfiguration.e2nodeComponentResponsePart.numocts = sizeof(temp_buff_for_e2nodeComponentResponsePart); // change octetstring data here
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentConfiguration.e2nodeComponentResponsePart.data = xnap_mem_get(sizeof(temp_buff_for_e2nodeComponentResponsePart));
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigAddition.id_E2nodeComponentConfigAddition_Item[0].e2nodeComponentConfiguration.e2nodeComponentResponsePart.data, temp_buff_for_e2nodeComponentResponsePart, sizeof(temp_buff_for_e2nodeComponentResponsePart));
    	//end of hc-e2nodeComponentResponsePart -idx167- primitive
    	//end of hc-sequence-ELEM 2: -idx166 -roots23 E2nodeComponentConfiguration->e2nodeComponentResponsePart - alias = -1
	
    	/*=== END SEQUENCE -idx163 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentConfiguration - E2nodeComponentConfiguration -ROOTS23 ===*/
    	//end of hc-sequence-ELEM 3: -idx162 -roots11 E2nodeComponentConfigAddition_Item->e2nodeComponentConfiguration - alias = -1
	
    	/*=== END SEQUENCE -idx89 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item - E2nodeComponentConfigAddition_Item -ROOTS11 ===*/
    	/*=== END LIST  -idx88 - E2nodeComponentConfigAddition_List ===*/
    }
    #endif/*======== End Hardcode IE -idx87: id_E2nodeComponentConfigAddition - optional ========*/

    #if 1/*======== Start Hardcode IE -idx168: id_E2nodeComponentConfigUpdate - optional=======*/
    {
    	 p_E2nodeConfigurationUpdate->bitmask |= E2AP_E2NODE_CONFIGURATION_UPDATE_e2ap_ID_E2NODE_COMPONENT_CONFIG_UPDATE_PRESENT;
    	/*=== START LIST -idx169 - E2nodeComponentConfigUpdate_List===*/
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item_count = 1;
    	/*=== START SEQUENCE -idx170 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item -ROOTS24 E2nodeComponentConfigUpdate_Item ===*/
    	//hc-sequence-ELEM 1: -idx171 -roots24 E2nodeComponentConfigUpdate_Item->e2nodeComponentInterfaceType - alias = 13 -mandatory
    	//hc-E2nodeComponentInterfaceType -idx172 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentInterfaceType
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentInterfaceType = E2AP_E2NODE_COMPONENT_INTERFACE_TYPE_NG; // change enum value here
    	//end of hc-E2nodeComponentInterfaceType -idx172- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx171 -roots24 E2nodeComponentConfigUpdate_Item->e2nodeComponentInterfaceType - alias = 13
	
    	//hc-sequence-ELEM 2: -idx173 -roots24 E2nodeComponentConfigUpdate_Item->e2nodeComponentID - alias = -1 -mandatory
    	/*=== START CHOICE -idx174 -ROOTC14 -E2nodeComponentID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx175 -rootc14: E2nodeComponentID->e2nodeComponentInterfaceTypeNG - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_NG;
    	/*=== START SEQUENCE -idx176 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceNG -ROOTS25 E2nodeComponentInterfaceNG ===*/
    	//hc-sequence-ELEM 1: -idx177 -roots25 E2nodeComponentInterfaceNG->amf_name - alias = 10 -mandatory
    	//hc-amf_name -idx178- alias primitive - pid = 10 Printable STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceNG->AMFName
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeNG.amf_name = "hardcoded string value"; // change printable string here
    	//end of hc-amf_name -idx178- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx177 -roots25 E2nodeComponentInterfaceNG->amf_name - alias = 10
	
    	/*=== END SEQUENCE -idx176 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceNG - E2nodeComponentInterfaceNG -ROOTS25 ===*/
    	#endif /*choice-ELEM 1 -idx175 -rootc14*/
	
    	#if 0 //hc-choice-ELEM 2 -idx179 -rootc14: E2nodeComponentID->e2nodeComponentInterfaceTypeXn - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_XN;
    	/*=== START SEQUENCE -idx180 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn -ROOTS26 E2nodeComponentInterfaceXn ===*/
    	//hc-sequence-ELEM 1: -idx181 -roots26 E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx182 -ROOTC15 -GlobalNG_RANNode_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx183 -rootc15: GlobalNG_RANNode_ID->gNB - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_G_NB;
    	/*=== START SEQUENCE -idx184 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID -ROOTS27 GlobalgNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx185 -roots27 GlobalgNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx186- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id_4[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id_4);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.data, temp_buff_for_plmn_id_4, sizeof(temp_buff_for_plmn_id_4)); // change octetstring data here
    	//end of hc-plmn_id -idx186- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx185 -roots27 GlobalgNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx187 -roots27 GlobalgNB_ID->gnb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx188 -ROOTC16 -GNB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx189 -rootc16: GNB_ID_Choice->gnb_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.choice_type = E2AP_GNB_ID_CHOICE_e2ap_GNB_ID;
    	//hc-gnb_ID -idx190- primitive in scope - pid = 4 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
    	OSOCTET temp_buff_for_gnb_ID_2[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.data, temp_buff_for_gnb_ID_2, 3);
    	//end of hc-gnb_ID -idx190- primitive
    	#endif /*choice-ELEM 1 -idx189 -rootc16*/
	
    	/*=== END CHOICE -idx188 -ROOTC16 -GNB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx187 -roots27 GlobalgNB_ID->gnb_id - alias = -1
	
    	/*=== END SEQUENCE -idx184 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID - GlobalgNB_ID -ROOTS27 ===*/
    	#endif /*choice-ELEM 1 -idx183 -rootc15*/
	
    	#if 0 //hc-choice-ELEM 2 -idx191 -rootc15: GlobalNG_RANNode_ID->ng_eNB - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_NG_E_NB;
    	/*=== START SEQUENCE -idx192 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID -ROOTS28 GlobalngeNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx193 -roots28 GlobalngeNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx194- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id_5[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id_5);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.data, temp_buff_for_plmn_id_5, sizeof(temp_buff_for_plmn_id_5)); // change octetstring data here
    	//end of hc-plmn_id -idx194- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx193 -roots28 GlobalngeNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx195 -roots28 GlobalngeNB_ID->enb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx196 -ROOTC17 -ENB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx197 -rootc17: ENB_ID_Choice->enb_ID_macro - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO;
    	//hc-enb_ID_macro -idx198- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
    	OSOCTET temp_buff_for_enb_ID_macro_2[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.data, temp_buff_for_enb_ID_macro_2, 3);
    	//end of hc-enb_ID_macro -idx198- primitive
    	#endif /*choice-ELEM 1 -idx197 -rootc17*/
	
    	#if 0 //hc-choice-ELEM 2 -idx199 -rootc17: ENB_ID_Choice->enb_ID_shortmacro - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO;
    	//hc-enb_ID_shortmacro -idx200- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
    	OSOCTET temp_buff_for_enb_ID_shortmacro_2[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.data, temp_buff_for_enb_ID_shortmacro_2, 3);
    	//end of hc-enb_ID_shortmacro -idx200- primitive
    	#endif /*hc-choice-ELEM 2 -idx199 -rootc17*/
	
    	#if 0 //hc-choice-ELEM 3 -idx201 -rootc17: ENB_ID_Choice->enb_ID_longmacro - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO;
    	//hc-enb_ID_longmacro -idx202- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
    	OSOCTET temp_buff_for_enb_ID_longmacro_2[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.data, temp_buff_for_enb_ID_longmacro_2, 3);
    	//end of hc-enb_ID_longmacro -idx202- primitive
    	#endif /*hc-choice-ELEM 3 -idx201 -rootc17*/
	
    	/*=== END CHOICE -idx196 -ROOTC17 -ENB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx195 -roots28 GlobalngeNB_ID->enb_id - alias = -1
	
    	/*=== END SEQUENCE -idx192 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID - GlobalngeNB_ID -ROOTS28 ===*/
    	#endif /*hc-choice-ELEM 2 -idx191 -rootc15*/
	
    	/*=== END CHOICE -idx182 -ROOTC15 -GlobalNG_RANNode_ID ===*/
    	//end of hc-sequence-ELEM 1: -idx181 -roots26 E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID - alias = -1
	
    	/*=== END SEQUENCE -idx180 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn - E2nodeComponentInterfaceXn -ROOTS26 ===*/
    	#endif /*hc-choice-ELEM 2 -idx179 -rootc14*/
	
    	#if 0 //hc-choice-ELEM 3 -idx203 -rootc14: E2nodeComponentID->e2nodeComponentInterfaceTypeE1 - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_E1;
    	/*=== START SEQUENCE -idx204 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceE1 -ROOTS29 E2nodeComponentInterfaceE1 ===*/
    	//hc-sequence-ELEM 1: -idx205 -roots29 E2nodeComponentInterfaceE1->gNB_CU_UP_ID - alias = 6 -mandatory
    	//hc-gNB_CU_UP_ID -idx206- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceE1->GNB-CU-UP-ID 
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeE1.gNB_CU_UP_ID = 34359738367;// change integer here
    	//end of hc-gNB_CU_UP_ID -idx206- alias primitive
    	//end of hc-sequence-ELEM 1: -idx205 -roots29 E2nodeComponentInterfaceE1->gNB_CU_UP_ID - alias = 6
	
    	/*=== END SEQUENCE -idx204 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceE1 - E2nodeComponentInterfaceE1 -ROOTS29 ===*/
    	#endif /*hc-choice-ELEM 3 -idx203 -rootc14*/
	
    	#if 0 //hc-choice-ELEM 4 -idx207 -rootc14: E2nodeComponentID->e2nodeComponentInterfaceTypeF1 - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_F1;
    	/*=== START SEQUENCE -idx208 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceF1 -ROOTS30 E2nodeComponentInterfaceF1 ===*/
    	//hc-sequence-ELEM 1: -idx209 -roots30 E2nodeComponentInterfaceF1->gNB_DU_ID - alias = 6 -mandatory
    	//hc-gNB_DU_ID -idx210- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceF1->GNB-DU-ID 
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeF1.gNB_DU_ID = 34359738367;// change integer here
    	//end of hc-gNB_DU_ID -idx210- alias primitive
    	//end of hc-sequence-ELEM 1: -idx209 -roots30 E2nodeComponentInterfaceF1->gNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx208 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceF1 - E2nodeComponentInterfaceF1 -ROOTS30 ===*/
    	#endif /*hc-choice-ELEM 4 -idx207 -rootc14*/
	
    	#if 0 //hc-choice-ELEM 5 -idx211 -rootc14: E2nodeComponentID->e2nodeComponentInterfaceTypeW1 - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_W1;
    	/*=== START SEQUENCE -idx212 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceW1 -ROOTS31 E2nodeComponentInterfaceW1 ===*/
    	//hc-sequence-ELEM 1: -idx213 -roots31 E2nodeComponentInterfaceW1->ng_eNB_DU_ID - alias = 6 -mandatory
    	//hc-ng_eNB_DU_ID -idx214- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceW1->NGENB-DU-ID 
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeW1.ng_eNB_DU_ID = 34359738367;// change integer here
    	//end of hc-ng_eNB_DU_ID -idx214- alias primitive
    	//end of hc-sequence-ELEM 1: -idx213 -roots31 E2nodeComponentInterfaceW1->ng_eNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx212 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceW1 - E2nodeComponentInterfaceW1 -ROOTS31 ===*/
    	#endif /*hc-choice-ELEM 5 -idx211 -rootc14*/
	
    	#if 0 //hc-choice-ELEM 6 -idx215 -rootc14: E2nodeComponentID->e2nodeComponentInterfaceTypeS1 - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_S1;
    	/*=== START SEQUENCE -idx216 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceS1 -ROOTS32 E2nodeComponentInterfaceS1 ===*/
    	//hc-sequence-ELEM 1: -idx217 -roots32 E2nodeComponentInterfaceS1->mme_name - alias = 10 -mandatory
    	//hc-mme_name -idx218- alias primitive - pid = 10 Printable STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceS1->MMEname
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeS1.mme_name = "hardcoded string value"; // change printable string here
    	//end of hc-mme_name -idx218- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx217 -roots32 E2nodeComponentInterfaceS1->mme_name - alias = 10
	
    	/*=== END SEQUENCE -idx216 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceS1 - E2nodeComponentInterfaceS1 -ROOTS32 ===*/
    	#endif /*hc-choice-ELEM 6 -idx215 -rootc14*/
	
    	#if 0 //hc-choice-ELEM 7 -idx219 -rootc14: E2nodeComponentID->e2nodeComponentInterfaceTypeX2 - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_X2;
    	/*=== START SEQUENCE -idx220 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2 -ROOTS33 E2nodeComponentInterfaceX2 ===*/
    	//hc-sequence-ELEM 1: -idx221 -roots33 E2nodeComponentInterfaceX2->global_eNB_ID - alias = -1 -optional
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_E_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx222 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID -ROOTS34 GlobalENB_ID ===*/
    	//hc-sequence-ELEM 1: -idx223 -roots34 GlobalENB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx224- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_6[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_6);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_6, sizeof(temp_buff_for_pLMN_Identity_6)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx224- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx223 -roots34 GlobalENB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx225 -roots34 GlobalENB_ID->eNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx226 -ROOTC18 -ENB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx227 -rootc18: ENB_ID->macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    	//hc-macro_eNB_ID -idx228- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->macro-eNB-ID
    	OSOCTET temp_buff_for_macro_eNB_ID_3[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_3, 3);
    	//end of hc-macro_eNB_ID -idx228- primitive
    	#endif /*choice-ELEM 1 -idx227 -rootc18*/
	
    	#if 0 //hc-choice-ELEM 2 -idx229 -rootc18: ENB_ID->home_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    	//hc-home_eNB_ID -idx230- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->home-eNB-ID
    	OSOCTET temp_buff_for_home_eNB_ID_3[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_3, 4);
    	//end of hc-home_eNB_ID -idx230- primitive
    	#endif /*hc-choice-ELEM 2 -idx229 -rootc18*/
	
    	#if 0 //hc-choice-ELEM 3 -idx231 -rootc18: ENB_ID->short_Macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    	//hc-short_Macro_eNB_ID -idx232- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    	OSOCTET temp_buff_for_short_Macro_eNB_ID_3[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_3, 3);
    	//end of hc-short_Macro_eNB_ID -idx232- primitive
    	#endif /*hc-choice-ELEM 3 -idx231 -rootc18*/
	
    	#if 0 //hc-choice-ELEM 4 -idx233 -rootc18: ENB_ID->long_Macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    	//hc-long_Macro_eNB_ID -idx234- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    	OSOCTET temp_buff_for_long_Macro_eNB_ID_3[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_3, 3);
    	//end of hc-long_Macro_eNB_ID -idx234- primitive
    	#endif /*hc-choice-ELEM 4 -idx233 -rootc18*/
	
    	/*=== END CHOICE -idx226 -ROOTC18 -ENB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx225 -roots34 GlobalENB_ID->eNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx222 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID - GlobalENB_ID -ROOTS34 ===*/
    	//end of hc-sequence-ELEM 1: -idx221 -roots33 E2nodeComponentInterfaceX2->global_eNB_ID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx235 -roots33 E2nodeComponentInterfaceX2->global_en_gNB_ID - alias = -1 -optional
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_EN_G_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx236 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID -ROOTS35 GlobalenGNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx237 -roots35 GlobalenGNB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx238- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_7[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_7);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_7, sizeof(temp_buff_for_pLMN_Identity_7)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx238- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx237 -roots35 GlobalenGNB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx239 -roots35 GlobalenGNB_ID->gNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx240 -ROOTC19 -ENGNB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx241 -rootc19: ENGNB_ID->gNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.choice_type = E2AP_ENGNB_ID_e2ap_G_NB_ID;
    	//hc-gNB_ID -idx242- primitive in scope - pid = 4 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID->gNB-ID
    	OSOCTET temp_buff_for_gNB_ID_3[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_3, 3);
    	//end of hc-gNB_ID -idx242- primitive
    	#endif /*choice-ELEM 1 -idx241 -rootc19*/
	
    	/*=== END CHOICE -idx240 -ROOTC19 -ENGNB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx239 -roots35 GlobalenGNB_ID->gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx236 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID - GlobalenGNB_ID -ROOTS35 ===*/
    	//end of hc-sequence-ELEM 2: -idx235 -roots33 E2nodeComponentInterfaceX2->global_en_gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx220 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2 - E2nodeComponentInterfaceX2 -ROOTS33 ===*/
    	#endif /*hc-choice-ELEM 7 -idx219 -rootc14*/
	
    	/*=== END CHOICE -idx174 -ROOTC14 -E2nodeComponentID ===*/
    	//end of hc-sequence-ELEM 2: -idx173 -roots24 E2nodeComponentConfigUpdate_Item->e2nodeComponentID - alias = -1
	
    	//hc-sequence-ELEM 3: -idx243 -roots24 E2nodeComponentConfigUpdate_Item->e2nodeComponentConfiguration - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx244 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentConfiguration -ROOTS36 E2nodeComponentConfiguration ===*/
    	//hc-sequence-ELEM 1: -idx245 -roots36 E2nodeComponentConfiguration->e2nodeComponentRequestPart - alias = -1 -mandatory
    	//hc-e2nodeComponentRequestPart -idx246- primitive in scope - pid = 9 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentConfiguration->e2nodeComponentRequestPart
    	OSOCTET temp_buff_for_e2nodeComponentRequestPart_1[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentConfiguration.e2nodeComponentRequestPart.numocts = sizeof(temp_buff_for_e2nodeComponentRequestPart_1); // change octetstring data here
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentConfiguration.e2nodeComponentRequestPart.data = xnap_mem_get(sizeof(temp_buff_for_e2nodeComponentRequestPart_1));
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentConfiguration.e2nodeComponentRequestPart.data, temp_buff_for_e2nodeComponentRequestPart_1, sizeof(temp_buff_for_e2nodeComponentRequestPart_1));
    	//end of hc-e2nodeComponentRequestPart -idx246- primitive
    	//end of hc-sequence-ELEM 1: -idx245 -roots36 E2nodeComponentConfiguration->e2nodeComponentRequestPart - alias = -1
	
    	//hc-sequence-ELEM 2: -idx247 -roots36 E2nodeComponentConfiguration->e2nodeComponentResponsePart - alias = -1 -mandatory
    	//hc-e2nodeComponentResponsePart -idx248- primitive in scope - pid = 9 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentConfiguration->e2nodeComponentResponsePart
    	OSOCTET temp_buff_for_e2nodeComponentResponsePart_1[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentConfiguration.e2nodeComponentResponsePart.numocts = sizeof(temp_buff_for_e2nodeComponentResponsePart_1); // change octetstring data here
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentConfiguration.e2nodeComponentResponsePart.data = xnap_mem_get(sizeof(temp_buff_for_e2nodeComponentResponsePart_1));
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigUpdate.id_E2nodeComponentConfigUpdate_Item[0].e2nodeComponentConfiguration.e2nodeComponentResponsePart.data, temp_buff_for_e2nodeComponentResponsePart_1, sizeof(temp_buff_for_e2nodeComponentResponsePart_1));
    	//end of hc-e2nodeComponentResponsePart -idx248- primitive
    	//end of hc-sequence-ELEM 2: -idx247 -roots36 E2nodeComponentConfiguration->e2nodeComponentResponsePart - alias = -1
	
    	/*=== END SEQUENCE -idx244 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentConfiguration - E2nodeComponentConfiguration -ROOTS36 ===*/
    	//end of hc-sequence-ELEM 3: -idx243 -roots24 E2nodeComponentConfigUpdate_Item->e2nodeComponentConfiguration - alias = -1
	
    	/*=== END SEQUENCE -idx170 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item - E2nodeComponentConfigUpdate_Item -ROOTS24 ===*/
    	/*=== END LIST  -idx169 - E2nodeComponentConfigUpdate_List ===*/
    }
    #endif/*======== End Hardcode IE -idx168: id_E2nodeComponentConfigUpdate - optional ========*/

    #if 1/*======== Start Hardcode IE -idx249: id_E2nodeComponentConfigRemoval - optional=======*/
    {
    	 p_E2nodeConfigurationUpdate->bitmask |= E2AP_E2NODE_CONFIGURATION_UPDATE_e2ap_ID_E2NODE_COMPONENT_CONFIG_REMOVAL_PRESENT;
    	/*=== START LIST -idx250 - E2nodeComponentConfigRemoval_List===*/
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item_count = 1;
    	/*=== START SEQUENCE -idx251 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item -ROOTS37 E2nodeComponentConfigRemoval_Item ===*/
    	//hc-sequence-ELEM 1: -idx252 -roots37 E2nodeComponentConfigRemoval_Item->e2nodeComponentInterfaceType - alias = 13 -mandatory
    	//hc-E2nodeComponentInterfaceType -idx253 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentInterfaceType
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentInterfaceType = E2AP_E2NODE_COMPONENT_INTERFACE_TYPE_NG; // change enum value here
    	//end of hc-E2nodeComponentInterfaceType -idx253- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx252 -roots37 E2nodeComponentConfigRemoval_Item->e2nodeComponentInterfaceType - alias = 13
	
    	//hc-sequence-ELEM 2: -idx254 -roots37 E2nodeComponentConfigRemoval_Item->e2nodeComponentID - alias = -1 -mandatory
    	/*=== START CHOICE -idx255 -ROOTC20 -E2nodeComponentID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx256 -rootc20: E2nodeComponentID->e2nodeComponentInterfaceTypeNG - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_NG;
    	/*=== START SEQUENCE -idx257 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceNG -ROOTS38 E2nodeComponentInterfaceNG ===*/
    	//hc-sequence-ELEM 1: -idx258 -roots38 E2nodeComponentInterfaceNG->amf_name - alias = 10 -mandatory
    	//hc-amf_name -idx259- alias primitive - pid = 10 Printable STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceNG->AMFName
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeNG.amf_name = "hardcoded string value"; // change printable string here
    	//end of hc-amf_name -idx259- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx258 -roots38 E2nodeComponentInterfaceNG->amf_name - alias = 10
	
    	/*=== END SEQUENCE -idx257 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceNG - E2nodeComponentInterfaceNG -ROOTS38 ===*/
    	#endif /*choice-ELEM 1 -idx256 -rootc20*/
	
    	#if 0 //hc-choice-ELEM 2 -idx260 -rootc20: E2nodeComponentID->e2nodeComponentInterfaceTypeXn - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_XN;
    	/*=== START SEQUENCE -idx261 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn -ROOTS39 E2nodeComponentInterfaceXn ===*/
    	//hc-sequence-ELEM 1: -idx262 -roots39 E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx263 -ROOTC21 -GlobalNG_RANNode_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx264 -rootc21: GlobalNG_RANNode_ID->gNB - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_G_NB;
    	/*=== START SEQUENCE -idx265 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID -ROOTS40 GlobalgNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx266 -roots40 GlobalgNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx267- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id_6[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id_6);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.data, temp_buff_for_plmn_id_6, sizeof(temp_buff_for_plmn_id_6)); // change octetstring data here
    	//end of hc-plmn_id -idx267- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx266 -roots40 GlobalgNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx268 -roots40 GlobalgNB_ID->gnb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx269 -ROOTC22 -GNB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx270 -rootc22: GNB_ID_Choice->gnb_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.choice_type = E2AP_GNB_ID_CHOICE_e2ap_GNB_ID;
    	//hc-gnb_ID -idx271- primitive in scope - pid = 4 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
    	OSOCTET temp_buff_for_gnb_ID_3[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.data, temp_buff_for_gnb_ID_3, 3);
    	//end of hc-gnb_ID -idx271- primitive
    	#endif /*choice-ELEM 1 -idx270 -rootc22*/
	
    	/*=== END CHOICE -idx269 -ROOTC22 -GNB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx268 -roots40 GlobalgNB_ID->gnb_id - alias = -1
	
    	/*=== END SEQUENCE -idx265 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID - GlobalgNB_ID -ROOTS40 ===*/
    	#endif /*choice-ELEM 1 -idx264 -rootc21*/
	
    	#if 0 //hc-choice-ELEM 2 -idx272 -rootc21: GlobalNG_RANNode_ID->ng_eNB - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_NG_E_NB;
    	/*=== START SEQUENCE -idx273 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID -ROOTS41 GlobalngeNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx274 -roots41 GlobalngeNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx275- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id_7[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id_7);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.data, temp_buff_for_plmn_id_7, sizeof(temp_buff_for_plmn_id_7)); // change octetstring data here
    	//end of hc-plmn_id -idx275- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx274 -roots41 GlobalngeNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx276 -roots41 GlobalngeNB_ID->enb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx277 -ROOTC23 -ENB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx278 -rootc23: ENB_ID_Choice->enb_ID_macro - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO;
    	//hc-enb_ID_macro -idx279- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
    	OSOCTET temp_buff_for_enb_ID_macro_3[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.data, temp_buff_for_enb_ID_macro_3, 3);
    	//end of hc-enb_ID_macro -idx279- primitive
    	#endif /*choice-ELEM 1 -idx278 -rootc23*/
	
    	#if 0 //hc-choice-ELEM 2 -idx280 -rootc23: ENB_ID_Choice->enb_ID_shortmacro - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO;
    	//hc-enb_ID_shortmacro -idx281- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
    	OSOCTET temp_buff_for_enb_ID_shortmacro_3[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.data, temp_buff_for_enb_ID_shortmacro_3, 3);
    	//end of hc-enb_ID_shortmacro -idx281- primitive
    	#endif /*hc-choice-ELEM 2 -idx280 -rootc23*/
	
    	#if 0 //hc-choice-ELEM 3 -idx282 -rootc23: ENB_ID_Choice->enb_ID_longmacro - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO;
    	//hc-enb_ID_longmacro -idx283- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
    	OSOCTET temp_buff_for_enb_ID_longmacro_3[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.data, temp_buff_for_enb_ID_longmacro_3, 3);
    	//end of hc-enb_ID_longmacro -idx283- primitive
    	#endif /*hc-choice-ELEM 3 -idx282 -rootc23*/
	
    	/*=== END CHOICE -idx277 -ROOTC23 -ENB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx276 -roots41 GlobalngeNB_ID->enb_id - alias = -1
	
    	/*=== END SEQUENCE -idx273 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID - GlobalngeNB_ID -ROOTS41 ===*/
    	#endif /*hc-choice-ELEM 2 -idx272 -rootc21*/
	
    	/*=== END CHOICE -idx263 -ROOTC21 -GlobalNG_RANNode_ID ===*/
    	//end of hc-sequence-ELEM 1: -idx262 -roots39 E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID - alias = -1
	
    	/*=== END SEQUENCE -idx261 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn - E2nodeComponentInterfaceXn -ROOTS39 ===*/
    	#endif /*hc-choice-ELEM 2 -idx260 -rootc20*/
	
    	#if 0 //hc-choice-ELEM 3 -idx284 -rootc20: E2nodeComponentID->e2nodeComponentInterfaceTypeE1 - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_E1;
    	/*=== START SEQUENCE -idx285 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceE1 -ROOTS42 E2nodeComponentInterfaceE1 ===*/
    	//hc-sequence-ELEM 1: -idx286 -roots42 E2nodeComponentInterfaceE1->gNB_CU_UP_ID - alias = 6 -mandatory
    	//hc-gNB_CU_UP_ID -idx287- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceE1->GNB-CU-UP-ID 
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeE1.gNB_CU_UP_ID = 34359738367;// change integer here
    	//end of hc-gNB_CU_UP_ID -idx287- alias primitive
    	//end of hc-sequence-ELEM 1: -idx286 -roots42 E2nodeComponentInterfaceE1->gNB_CU_UP_ID - alias = 6
	
    	/*=== END SEQUENCE -idx285 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceE1 - E2nodeComponentInterfaceE1 -ROOTS42 ===*/
    	#endif /*hc-choice-ELEM 3 -idx284 -rootc20*/
	
    	#if 0 //hc-choice-ELEM 4 -idx288 -rootc20: E2nodeComponentID->e2nodeComponentInterfaceTypeF1 - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_F1;
    	/*=== START SEQUENCE -idx289 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceF1 -ROOTS43 E2nodeComponentInterfaceF1 ===*/
    	//hc-sequence-ELEM 1: -idx290 -roots43 E2nodeComponentInterfaceF1->gNB_DU_ID - alias = 6 -mandatory
    	//hc-gNB_DU_ID -idx291- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceF1->GNB-DU-ID 
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeF1.gNB_DU_ID = 34359738367;// change integer here
    	//end of hc-gNB_DU_ID -idx291- alias primitive
    	//end of hc-sequence-ELEM 1: -idx290 -roots43 E2nodeComponentInterfaceF1->gNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx289 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceF1 - E2nodeComponentInterfaceF1 -ROOTS43 ===*/
    	#endif /*hc-choice-ELEM 4 -idx288 -rootc20*/
	
    	#if 0 //hc-choice-ELEM 5 -idx292 -rootc20: E2nodeComponentID->e2nodeComponentInterfaceTypeW1 - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_W1;
    	/*=== START SEQUENCE -idx293 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceW1 -ROOTS44 E2nodeComponentInterfaceW1 ===*/
    	//hc-sequence-ELEM 1: -idx294 -roots44 E2nodeComponentInterfaceW1->ng_eNB_DU_ID - alias = 6 -mandatory
    	//hc-ng_eNB_DU_ID -idx295- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceW1->NGENB-DU-ID 
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeW1.ng_eNB_DU_ID = 34359738367;// change integer here
    	//end of hc-ng_eNB_DU_ID -idx295- alias primitive
    	//end of hc-sequence-ELEM 1: -idx294 -roots44 E2nodeComponentInterfaceW1->ng_eNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx293 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceW1 - E2nodeComponentInterfaceW1 -ROOTS44 ===*/
    	#endif /*hc-choice-ELEM 5 -idx292 -rootc20*/
	
    	#if 0 //hc-choice-ELEM 6 -idx296 -rootc20: E2nodeComponentID->e2nodeComponentInterfaceTypeS1 - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_S1;
    	/*=== START SEQUENCE -idx297 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceS1 -ROOTS45 E2nodeComponentInterfaceS1 ===*/
    	//hc-sequence-ELEM 1: -idx298 -roots45 E2nodeComponentInterfaceS1->mme_name - alias = 10 -mandatory
    	//hc-mme_name -idx299- alias primitive - pid = 10 Printable STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceS1->MMEname
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeS1.mme_name = "hardcoded string value"; // change printable string here
    	//end of hc-mme_name -idx299- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx298 -roots45 E2nodeComponentInterfaceS1->mme_name - alias = 10
	
    	/*=== END SEQUENCE -idx297 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceS1 - E2nodeComponentInterfaceS1 -ROOTS45 ===*/
    	#endif /*hc-choice-ELEM 6 -idx296 -rootc20*/
	
    	#if 0 //hc-choice-ELEM 7 -idx300 -rootc20: E2nodeComponentID->e2nodeComponentInterfaceTypeX2 - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_X2;
    	/*=== START SEQUENCE -idx301 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2 -ROOTS46 E2nodeComponentInterfaceX2 ===*/
    	//hc-sequence-ELEM 1: -idx302 -roots46 E2nodeComponentInterfaceX2->global_eNB_ID - alias = -1 -optional
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_E_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx303 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID -ROOTS47 GlobalENB_ID ===*/
    	//hc-sequence-ELEM 1: -idx304 -roots47 GlobalENB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx305- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_8[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_8);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_8, sizeof(temp_buff_for_pLMN_Identity_8)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx305- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx304 -roots47 GlobalENB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx306 -roots47 GlobalENB_ID->eNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx307 -ROOTC24 -ENB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx308 -rootc24: ENB_ID->macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    	//hc-macro_eNB_ID -idx309- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->macro-eNB-ID
    	OSOCTET temp_buff_for_macro_eNB_ID_4[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_4, 3);
    	//end of hc-macro_eNB_ID -idx309- primitive
    	#endif /*choice-ELEM 1 -idx308 -rootc24*/
	
    	#if 0 //hc-choice-ELEM 2 -idx310 -rootc24: ENB_ID->home_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    	//hc-home_eNB_ID -idx311- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->home-eNB-ID
    	OSOCTET temp_buff_for_home_eNB_ID_4[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_4, 4);
    	//end of hc-home_eNB_ID -idx311- primitive
    	#endif /*hc-choice-ELEM 2 -idx310 -rootc24*/
	
    	#if 0 //hc-choice-ELEM 3 -idx312 -rootc24: ENB_ID->short_Macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    	//hc-short_Macro_eNB_ID -idx313- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    	OSOCTET temp_buff_for_short_Macro_eNB_ID_4[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_4, 3);
    	//end of hc-short_Macro_eNB_ID -idx313- primitive
    	#endif /*hc-choice-ELEM 3 -idx312 -rootc24*/
	
    	#if 0 //hc-choice-ELEM 4 -idx314 -rootc24: ENB_ID->long_Macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    	//hc-long_Macro_eNB_ID -idx315- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    	OSOCTET temp_buff_for_long_Macro_eNB_ID_4[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_4, 3);
    	//end of hc-long_Macro_eNB_ID -idx315- primitive
    	#endif /*hc-choice-ELEM 4 -idx314 -rootc24*/
	
    	/*=== END CHOICE -idx307 -ROOTC24 -ENB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx306 -roots47 GlobalENB_ID->eNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx303 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID - GlobalENB_ID -ROOTS47 ===*/
    	//end of hc-sequence-ELEM 1: -idx302 -roots46 E2nodeComponentInterfaceX2->global_eNB_ID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx316 -roots46 E2nodeComponentInterfaceX2->global_en_gNB_ID - alias = -1 -optional
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_EN_G_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx317 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID -ROOTS48 GlobalenGNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx318 -roots48 GlobalenGNB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx319- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_9[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_9);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_9, sizeof(temp_buff_for_pLMN_Identity_9)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx319- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx318 -roots48 GlobalenGNB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx320 -roots48 GlobalenGNB_ID->gNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx321 -ROOTC25 -ENGNB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx322 -rootc25: ENGNB_ID->gNB_ID - alias = -1
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.choice_type = E2AP_ENGNB_ID_e2ap_G_NB_ID;
    	//hc-gNB_ID -idx323- primitive in scope - pid = 4 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID->gNB-ID
    	OSOCTET temp_buff_for_gNB_ID_4[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeComponentConfigRemoval.id_E2nodeComponentConfigRemoval_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_4, 3);
    	//end of hc-gNB_ID -idx323- primitive
    	#endif /*choice-ELEM 1 -idx322 -rootc25*/
	
    	/*=== END CHOICE -idx321 -ROOTC25 -ENGNB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx320 -roots48 GlobalenGNB_ID->gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx317 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID - GlobalenGNB_ID -ROOTS48 ===*/
    	//end of hc-sequence-ELEM 2: -idx316 -roots46 E2nodeComponentInterfaceX2->global_en_gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx301 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2 - E2nodeComponentInterfaceX2 -ROOTS46 ===*/
    	#endif /*hc-choice-ELEM 7 -idx300 -rootc20*/
	
    	/*=== END CHOICE -idx255 -ROOTC20 -E2nodeComponentID ===*/
    	//end of hc-sequence-ELEM 2: -idx254 -roots37 E2nodeComponentConfigRemoval_Item->e2nodeComponentID - alias = -1
	
    	/*=== END SEQUENCE -idx251 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item - E2nodeComponentConfigRemoval_Item -ROOTS37 ===*/
    	/*=== END LIST  -idx250 - E2nodeComponentConfigRemoval_List ===*/
    }
    #endif/*======== End Hardcode IE -idx249: id_E2nodeComponentConfigRemoval - optional ========*/

    #if 1/*======== Start Hardcode IE -idx324: id_E2nodeTNLassociationRemoval - optional=======*/
    {
    	 p_E2nodeConfigurationUpdate->bitmask |= E2AP_E2NODE_CONFIGURATION_UPDATE_e2ap_ID_E2NODE_TNLASSOCIATION_REMOVAL_PRESENT;
    	/*=== START LIST -idx325 - E2nodeTNLassociationRemoval_List===*/
    	p_E2nodeConfigurationUpdate->id_E2nodeTNLassociationRemoval.id_E2nodeTNLassociationRemoval_Item_count = 1;
    	/*=== START SEQUENCE -idx326 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs->E2nodeTNLassociationRemoval-Item -ROOTS49 E2nodeTNLassociationRemoval_Item ===*/
    	//hc-sequence-ELEM 1: -idx327 -roots49 E2nodeTNLassociationRemoval_Item->tnlInformation - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx328 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs->E2nodeTNLassociationRemoval-Item->TNLinformation -ROOTS50 TNLinformation ===*/
    	//hc-sequence-ELEM 1: -idx329 -roots50 TNLinformation->tnlAddress - alias = -1 -mandatory
    	//hc-tnlAddress -idx330- primitive in scope - pid = 2 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs->E2nodeTNLassociationRemoval-Item->TNLinformation->tnlAddress
    	OSOCTET temp_buff_for_tnlAddress[] = {0x99}; // min =1 - max = 160 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeTNLassociationRemoval.id_E2nodeTNLassociationRemoval_Item[0].tnlInformation.tnlAddress.numbits = 1; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeTNLassociationRemoval.id_E2nodeTNLassociationRemoval_Item[0].tnlInformation.tnlAddress.data, temp_buff_for_tnlAddress, 1);
    	//end of hc-tnlAddress -idx330- primitive
    	//end of hc-sequence-ELEM 1: -idx329 -roots50 TNLinformation->tnlAddress - alias = -1
	
    	//hc-sequence-ELEM 2: -idx331 -roots50 TNLinformation->tnlPort - alias = -1 -optional
    	p_E2nodeConfigurationUpdate->id_E2nodeTNLassociationRemoval.id_E2nodeTNLassociationRemoval_Item[0].tnlInformation.bitmask |= E2AP_TNLINFORMATION_e2ap_TNL_PORT_PRESENT;
    	//hc-tnlPort -idx332- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs->E2nodeTNLassociationRemoval-Item->TNLinformation->tnlPort
    	OSOCTET temp_buff_for_tnlPort[] = {0x01, 0x02}; // min =16 - max = 16 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeTNLassociationRemoval.id_E2nodeTNLassociationRemoval_Item[0].tnlInformation.tnlPort.numbits = 16; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeTNLassociationRemoval.id_E2nodeTNLassociationRemoval_Item[0].tnlInformation.tnlPort.data, temp_buff_for_tnlPort, 2);
    	//end of hc-tnlPort -idx332- primitive
    	//end of hc-sequence-ELEM 2: -idx331 -roots50 TNLinformation->tnlPort - alias = -1
	
    	/*=== END SEQUENCE -idx328 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs->E2nodeTNLassociationRemoval-Item->TNLinformation - TNLinformation -ROOTS50 ===*/
    	//end of hc-sequence-ELEM 1: -idx327 -roots49 E2nodeTNLassociationRemoval_Item->tnlInformation - alias = -1
	
    	//hc-sequence-ELEM 2: -idx333 -roots49 E2nodeTNLassociationRemoval_Item->tnlInformationRIC - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx334 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs->E2nodeTNLassociationRemoval-Item->TNLinformation -ROOTS51 TNLinformation ===*/
    	//hc-sequence-ELEM 1: -idx335 -roots51 TNLinformation->tnlAddress - alias = -1 -mandatory
    	//hc-tnlAddress -idx336- primitive in scope - pid = 2 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs->E2nodeTNLassociationRemoval-Item->TNLinformation->tnlAddress
    	OSOCTET temp_buff_for_tnlAddress_1[] = {0x99}; // min =1 - max = 160 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeTNLassociationRemoval.id_E2nodeTNLassociationRemoval_Item[0].tnlInformationRIC.tnlAddress.numbits = 1; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeTNLassociationRemoval.id_E2nodeTNLassociationRemoval_Item[0].tnlInformationRIC.tnlAddress.data, temp_buff_for_tnlAddress_1, 1);
    	//end of hc-tnlAddress -idx336- primitive
    	//end of hc-sequence-ELEM 1: -idx335 -roots51 TNLinformation->tnlAddress - alias = -1
	
    	//hc-sequence-ELEM 2: -idx337 -roots51 TNLinformation->tnlPort - alias = -1 -optional
    	p_E2nodeConfigurationUpdate->id_E2nodeTNLassociationRemoval.id_E2nodeTNLassociationRemoval_Item[0].tnlInformationRIC.bitmask |= E2AP_TNLINFORMATION_e2ap_TNL_PORT_PRESENT;
    	//hc-tnlPort -idx338- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs->E2nodeTNLassociationRemoval-Item->TNLinformation->tnlPort
    	OSOCTET temp_buff_for_tnlPort_1[] = {0x01, 0x02}; // min =16 - max = 16 bits
    	p_E2nodeConfigurationUpdate->id_E2nodeTNLassociationRemoval.id_E2nodeTNLassociationRemoval_Item[0].tnlInformationRIC.tnlPort.numbits = 16; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdate->id_E2nodeTNLassociationRemoval.id_E2nodeTNLassociationRemoval_Item[0].tnlInformationRIC.tnlPort.data, temp_buff_for_tnlPort_1, 2);
    	//end of hc-tnlPort -idx338- primitive
    	//end of hc-sequence-ELEM 2: -idx337 -roots51 TNLinformation->tnlPort - alias = -1
	
    	/*=== END SEQUENCE -idx334 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs->E2nodeTNLassociationRemoval-Item->TNLinformation - TNLinformation -ROOTS51 ===*/
    	//end of hc-sequence-ELEM 2: -idx333 -roots49 E2nodeTNLassociationRemoval_Item->tnlInformationRIC - alias = -1
	
    	/*=== END SEQUENCE -idx326 - E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs->E2nodeTNLassociationRemoval-Item - E2nodeTNLassociationRemoval_Item -ROOTS49 ===*/
    	/*=== END LIST  -idx325 - E2nodeTNLassociationRemoval_List ===*/
    }
    #endif/*======== End Hardcode IE -idx324: id_E2nodeTNLassociationRemoval - optional ========*/
    return XNAP_SUCCESS;
}
/*
E2nodeConfigurationUpdate : (E2nodeConfigurationUpdate) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2nodeConfigurationUpdate
    protocolIEs : (E2nodeConfigurationUpdate-IEs) 					---- (IE-LIST) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs
        TransactionID : (TransactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->TransactionID
        GlobalE2node-ID : (GlobalE2node-ID) 					---- (CHOICE) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID
            gNB : (GlobalE2node-gNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID
                global-gNB-ID : (GlobalgNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalgNB-ID
                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalgNB-ID->PLMN-Identity
                    gnb-id : (GNB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalgNB-ID->GNB-ID-Choice
                        gnb-ID : (gnb-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
                global-en-gNB-ID : (GlobalenGNB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalenGNB-ID
                    pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalenGNB-ID->PLMN-Identity
                    gNB-ID : (ENGNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalenGNB-ID->ENGNB-ID
                        gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GlobalenGNB-ID->ENGNB-ID->gNB-ID
                gNB-CU-UP-ID : (GNB-CU-UP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GNB-CU-UP-ID
                gNB-DU-ID : (GNB-DU-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-gNB-ID->GNB-DU-ID
            en-gNB : (GlobalE2node-en-gNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID
                global-en-gNB-ID : (GlobalenGNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GlobalenGNB-ID
                    pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GlobalenGNB-ID->PLMN-Identity
                    gNB-ID : (ENGNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GlobalenGNB-ID->ENGNB-ID
                        gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GlobalenGNB-ID->ENGNB-ID->gNB-ID
                en-gNB-CU-UP-ID : (GNB-CU-UP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GNB-CU-UP-ID
                en-gNB-DU-ID : (GNB-DU-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-en-gNB-ID->GNB-DU-ID
            ng-eNB : (GlobalE2node-ng-eNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID
                global-ng-eNB-ID : (GlobalngeNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID
                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->PLMN-Identity
                    enb-id : (ENB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->ENB-ID-Choice
                        enb-ID-macro : (enb-ID-macro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
                        enb-ID-shortmacro : (enb-ID-shortmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
                        enb-ID-longmacro : (enb-ID-longmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
                global-eNB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID
                    pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->PLMN-Identity
                    eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID
                        macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID->macro-eNB-ID
                        home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID->home-eNB-ID
                        short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                        long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                ngENB-DU-ID : (NGENB-DU-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-ng-eNB-ID->NGENB-DU-ID
            eNB : (GlobalE2node-eNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-eNB-ID
                global-eNB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID
                    pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->PLMN-Identity
                    eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID
                        macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID->macro-eNB-ID
                        home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID->home-eNB-ID
                        short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                        long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->GlobalE2node-ID->GlobalE2node-eNB-ID->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
        E2nodeComponentConfigAddition-List : (E2nodeComponentConfigAddition-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List
            E2nodeComponentConfigAddition-ItemIEs : (E2nodeComponentConfigAddition-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs
                E2nodeComponentConfigAddition-Item : (E2nodeComponentConfigAddition-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item
                    e2nodeComponentInterfaceType : (E2nodeComponentInterfaceType) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentInterfaceType
                    e2nodeComponentID : (E2nodeComponentID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID
                        e2nodeComponentInterfaceTypeNG : (E2nodeComponentInterfaceNG) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceNG
                            amf-name : (AMFName) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceNG->AMFName
                        e2nodeComponentInterfaceTypeXn : (E2nodeComponentInterfaceXn) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn
                            global-NG-RAN-Node-ID : (GlobalNG-RANNode-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID
                                gNB : (GlobalgNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID
                                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->PLMN-Identity
                                    gnb-id : (GNB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice
                                        gnb-ID : (gnb-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
                                ng-eNB : (GlobalngeNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID
                                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->PLMN-Identity
                                    enb-id : (ENB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice
                                        enb-ID-macro : (enb-ID-macro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
                                        enb-ID-shortmacro : (enb-ID-shortmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
                                        enb-ID-longmacro : (enb-ID-longmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
                        e2nodeComponentInterfaceTypeE1 : (E2nodeComponentInterfaceE1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceE1
                            gNB-CU-UP-ID : (GNB-CU-UP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceE1->GNB-CU-UP-ID
                        e2nodeComponentInterfaceTypeF1 : (E2nodeComponentInterfaceF1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceF1
                            gNB-DU-ID : (GNB-DU-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceF1->GNB-DU-ID
                        e2nodeComponentInterfaceTypeW1 : (E2nodeComponentInterfaceW1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceW1
                            ng-eNB-DU-ID : (NGENB-DU-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceW1->NGENB-DU-ID
                        e2nodeComponentInterfaceTypeS1 : (E2nodeComponentInterfaceS1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceS1
                            mme-name : (MMEname) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceS1->MMEname
                        e2nodeComponentInterfaceTypeX2 : (E2nodeComponentInterfaceX2) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2
                            global-eNB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID
                                pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->PLMN-Identity
                                eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID
                                    macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->macro-eNB-ID
                                    home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->home-eNB-ID
                                    short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                                    long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                            global-en-gNB-ID : (GlobalenGNB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID
                                pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->PLMN-Identity
                                gNB-ID : (ENGNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID
                                    gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID->gNB-ID
                    e2nodeComponentConfiguration : (E2nodeComponentConfiguration) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentConfiguration
                        e2nodeComponentRequestPart : (e2nodeComponentRequestPart) 					---- (OCTET STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentConfiguration->e2nodeComponentRequestPart
                        e2nodeComponentResponsePart : (e2nodeComponentResponsePart) 					---- (OCTET STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigAddition-List->E2nodeComponentConfigAddition-ItemIEs->E2nodeComponentConfigAddition-Item->E2nodeComponentConfiguration->e2nodeComponentResponsePart
        E2nodeComponentConfigUpdate-List : (E2nodeComponentConfigUpdate-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List
            E2nodeComponentConfigUpdate-ItemIEs : (E2nodeComponentConfigUpdate-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs
                E2nodeComponentConfigUpdate-Item : (E2nodeComponentConfigUpdate-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item
                    e2nodeComponentInterfaceType : (E2nodeComponentInterfaceType) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentInterfaceType
                    e2nodeComponentID : (E2nodeComponentID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID
                        e2nodeComponentInterfaceTypeNG : (E2nodeComponentInterfaceNG) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceNG
                            amf-name : (AMFName) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceNG->AMFName
                        e2nodeComponentInterfaceTypeXn : (E2nodeComponentInterfaceXn) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn
                            global-NG-RAN-Node-ID : (GlobalNG-RANNode-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID
                                gNB : (GlobalgNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID
                                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->PLMN-Identity
                                    gnb-id : (GNB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice
                                        gnb-ID : (gnb-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
                                ng-eNB : (GlobalngeNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID
                                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->PLMN-Identity
                                    enb-id : (ENB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice
                                        enb-ID-macro : (enb-ID-macro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
                                        enb-ID-shortmacro : (enb-ID-shortmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
                                        enb-ID-longmacro : (enb-ID-longmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
                        e2nodeComponentInterfaceTypeE1 : (E2nodeComponentInterfaceE1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceE1
                            gNB-CU-UP-ID : (GNB-CU-UP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceE1->GNB-CU-UP-ID
                        e2nodeComponentInterfaceTypeF1 : (E2nodeComponentInterfaceF1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceF1
                            gNB-DU-ID : (GNB-DU-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceF1->GNB-DU-ID
                        e2nodeComponentInterfaceTypeW1 : (E2nodeComponentInterfaceW1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceW1
                            ng-eNB-DU-ID : (NGENB-DU-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceW1->NGENB-DU-ID
                        e2nodeComponentInterfaceTypeS1 : (E2nodeComponentInterfaceS1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceS1
                            mme-name : (MMEname) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceS1->MMEname
                        e2nodeComponentInterfaceTypeX2 : (E2nodeComponentInterfaceX2) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2
                            global-eNB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID
                                pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->PLMN-Identity
                                eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID
                                    macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->macro-eNB-ID
                                    home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->home-eNB-ID
                                    short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                                    long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                            global-en-gNB-ID : (GlobalenGNB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID
                                pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->PLMN-Identity
                                gNB-ID : (ENGNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID
                                    gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID->gNB-ID
                    e2nodeComponentConfiguration : (E2nodeComponentConfiguration) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentConfiguration
                        e2nodeComponentRequestPart : (e2nodeComponentRequestPart) 					---- (OCTET STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentConfiguration->e2nodeComponentRequestPart
                        e2nodeComponentResponsePart : (e2nodeComponentResponsePart) 					---- (OCTET STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigUpdate-List->E2nodeComponentConfigUpdate-ItemIEs->E2nodeComponentConfigUpdate-Item->E2nodeComponentConfiguration->e2nodeComponentResponsePart
        E2nodeComponentConfigRemoval-List : (E2nodeComponentConfigRemoval-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List
            E2nodeComponentConfigRemoval-ItemIEs : (E2nodeComponentConfigRemoval-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs
                E2nodeComponentConfigRemoval-Item : (E2nodeComponentConfigRemoval-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item
                    e2nodeComponentInterfaceType : (E2nodeComponentInterfaceType) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentInterfaceType
                    e2nodeComponentID : (E2nodeComponentID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID
                        e2nodeComponentInterfaceTypeNG : (E2nodeComponentInterfaceNG) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceNG
                            amf-name : (AMFName) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceNG->AMFName
                        e2nodeComponentInterfaceTypeXn : (E2nodeComponentInterfaceXn) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn
                            global-NG-RAN-Node-ID : (GlobalNG-RANNode-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID
                                gNB : (GlobalgNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID
                                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->PLMN-Identity
                                    gnb-id : (GNB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice
                                        gnb-ID : (gnb-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
                                ng-eNB : (GlobalngeNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID
                                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->PLMN-Identity
                                    enb-id : (ENB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice
                                        enb-ID-macro : (enb-ID-macro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
                                        enb-ID-shortmacro : (enb-ID-shortmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
                                        enb-ID-longmacro : (enb-ID-longmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
                        e2nodeComponentInterfaceTypeE1 : (E2nodeComponentInterfaceE1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceE1
                            gNB-CU-UP-ID : (GNB-CU-UP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceE1->GNB-CU-UP-ID
                        e2nodeComponentInterfaceTypeF1 : (E2nodeComponentInterfaceF1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceF1
                            gNB-DU-ID : (GNB-DU-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceF1->GNB-DU-ID
                        e2nodeComponentInterfaceTypeW1 : (E2nodeComponentInterfaceW1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceW1
                            ng-eNB-DU-ID : (NGENB-DU-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceW1->NGENB-DU-ID
                        e2nodeComponentInterfaceTypeS1 : (E2nodeComponentInterfaceS1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceS1
                            mme-name : (MMEname) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceS1->MMEname
                        e2nodeComponentInterfaceTypeX2 : (E2nodeComponentInterfaceX2) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2
                            global-eNB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID
                                pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->PLMN-Identity
                                eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID
                                    macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->macro-eNB-ID
                                    home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->home-eNB-ID
                                    short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                                    long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                            global-en-gNB-ID : (GlobalenGNB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID
                                pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->PLMN-Identity
                                gNB-ID : (ENGNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID
                                    gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeComponentConfigRemoval-List->E2nodeComponentConfigRemoval-ItemIEs->E2nodeComponentConfigRemoval-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID->gNB-ID
        E2nodeTNLassociationRemoval-List : (E2nodeTNLassociationRemoval-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List
            E2nodeTNLassociationRemoval-ItemIEs : (E2nodeTNLassociationRemoval-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs
                E2nodeTNLassociationRemoval-Item : (E2nodeTNLassociationRemoval-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs->E2nodeTNLassociationRemoval-Item
                    tnlInformation : (TNLinformation) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs->E2nodeTNLassociationRemoval-Item->TNLinformation
                        tnlAddress : (tnlAddress) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs->E2nodeTNLassociationRemoval-Item->TNLinformation->tnlAddress
                        tnlPort : (tnlPort) 					---- (BIT STRING) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs->E2nodeTNLassociationRemoval-Item->TNLinformation->tnlPort
                    tnlInformationRIC : (TNLinformation) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs->E2nodeTNLassociationRemoval-Item->TNLinformation
                        tnlAddress : (tnlAddress) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs->E2nodeTNLassociationRemoval-Item->TNLinformation->tnlAddress
                        tnlPort : (tnlPort) 					---- (BIT STRING) ---- [O] ----PATH: E2nodeConfigurationUpdate->E2nodeConfigurationUpdate-IEs->E2nodeTNLassociationRemoval-List->E2nodeTNLassociationRemoval-ItemIEs->E2nodeTNLassociationRemoval-Item->TNLinformation->tnlPort
*/
#endif // ASSIGN_HARDCODE_E2NODE_CONFIGURATION_UPDATE_H

