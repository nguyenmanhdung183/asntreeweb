#ifndef ASSIGN_HARDCODE_E2NODE_CONFIGURATION_UPDATE_ACKNOWLEDGE_H
#define ASSIGN_HARDCODE_E2NODE_CONFIGURATION_UPDATE_ACKNOWLEDGE_H
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

xnap_return_et assign_hardcode_value_E2nodeConfigurationUpdateAcknowledge(e2ap_E2nodeConfigurationUpdateAcknowledge_t* p_E2nodeConfigurationUpdateAcknowledge)
{    
    #if 1/*======== Start Hardcode IE -idx1: id_TransactionID - mandatory=======*/
    {
    	//hc-p_E2nodeConfigurationUpdateAcknowledge->id_TransactionID -idx2- alias primitive - pid = 5 - INTEGER - min:0 - max:255  - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->TransactionID 
    	p_E2nodeConfigurationUpdateAcknowledge->id_TransactionID = 127;// change integer here
    	//end of hc-p_E2nodeConfigurationUpdateAcknowledge->id_TransactionID -idx2- alias primitive
    }
    #endif/*======== End Hardcode IE -idx1: id_TransactionID - mandatory ========*/

    #if 1/*======== Start Hardcode IE -idx3: id_E2nodeComponentConfigAdditionAck - optional=======*/
    {
    	 p_E2nodeConfigurationUpdateAcknowledge->bitmask |= E2AP_E2NODE_CONFIGURATION_UPDATE_ACKNOWLEDGE_e2ap_ID_E2NODE_COMPONENT_CONFIG_ADDITION_ACK_PRESENT;
    	/*=== START LIST -idx4 - E2nodeComponentConfigAdditionAck_List===*/
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item_count = 1;
    	/*=== START SEQUENCE -idx5 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item -ROOTS1 E2nodeComponentConfigAdditionAck_Item ===*/
    	//hc-sequence-ELEM 1: -idx6 -roots1 E2nodeComponentConfigAdditionAck_Item->e2nodeComponentInterfaceType - alias = 13 -mandatory
    	//hc-E2nodeComponentInterfaceType -idx7 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentInterfaceType
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentInterfaceType = E2AP_E2NODE_COMPONENT_INTERFACE_TYPE_NG; // change enum value here
    	//end of hc-E2nodeComponentInterfaceType -idx7- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx6 -roots1 E2nodeComponentConfigAdditionAck_Item->e2nodeComponentInterfaceType - alias = 13
	
    	//hc-sequence-ELEM 2: -idx8 -roots1 E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID - alias = -1 -mandatory
    	/*=== START CHOICE -idx9 -ROOTC1 -E2nodeComponentID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx10 -rootc1: E2nodeComponentID->e2nodeComponentInterfaceTypeNG - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_NG;
    	/*=== START SEQUENCE -idx11 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG -ROOTS2 E2nodeComponentInterfaceNG ===*/
    	//hc-sequence-ELEM 1: -idx12 -roots2 E2nodeComponentInterfaceNG->amf_name - alias = 10 -mandatory
    	//hc-amf_name -idx13- alias primitive - pid = 10 Printable STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG->AMFName
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeNG.amf_name = "hardcoded string value"; // change printable string here
    	//end of hc-amf_name -idx13- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx12 -roots2 E2nodeComponentInterfaceNG->amf_name - alias = 10
	
    	/*=== END SEQUENCE -idx11 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG - E2nodeComponentInterfaceNG -ROOTS2 ===*/
    	#endif /*choice-ELEM 1 -idx10 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 2 -idx14 -rootc1: E2nodeComponentID->e2nodeComponentInterfaceTypeXn - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_XN;
    	/*=== START SEQUENCE -idx15 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn -ROOTS3 E2nodeComponentInterfaceXn ===*/
    	//hc-sequence-ELEM 1: -idx16 -roots3 E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx17 -ROOTC2 -GlobalNG_RANNode_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx18 -rootc2: GlobalNG_RANNode_ID->gNB - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_G_NB;
    	/*=== START SEQUENCE -idx19 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID -ROOTS4 GlobalgNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx20 -roots4 GlobalgNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx21- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.data, temp_buff_for_plmn_id, sizeof(temp_buff_for_plmn_id)); // change octetstring data here
    	//end of hc-plmn_id -idx21- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx20 -roots4 GlobalgNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx22 -roots4 GlobalgNB_ID->gnb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx23 -ROOTC3 -GNB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx24 -rootc3: GNB_ID_Choice->gnb_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.choice_type = E2AP_GNB_ID_CHOICE_e2ap_GNB_ID;
    	//hc-gnb_ID -idx25- primitive in scope - pid = 4 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
    	OSOCTET temp_buff_for_gnb_ID[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.data, temp_buff_for_gnb_ID, 3);
    	//end of hc-gnb_ID -idx25- primitive
    	#endif /*choice-ELEM 1 -idx24 -rootc3*/
	
    	/*=== END CHOICE -idx23 -ROOTC3 -GNB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx22 -roots4 GlobalgNB_ID->gnb_id - alias = -1
	
    	/*=== END SEQUENCE -idx19 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID - GlobalgNB_ID -ROOTS4 ===*/
    	#endif /*choice-ELEM 1 -idx18 -rootc2*/
	
    	#if 0 //hc-choice-ELEM 2 -idx26 -rootc2: GlobalNG_RANNode_ID->ng_eNB - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_NG_E_NB;
    	/*=== START SEQUENCE -idx27 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID -ROOTS5 GlobalngeNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx28 -roots5 GlobalngeNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx29- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id_1[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id_1);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.data, temp_buff_for_plmn_id_1, sizeof(temp_buff_for_plmn_id_1)); // change octetstring data here
    	//end of hc-plmn_id -idx29- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx28 -roots5 GlobalngeNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx30 -roots5 GlobalngeNB_ID->enb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx31 -ROOTC4 -ENB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx32 -rootc4: ENB_ID_Choice->enb_ID_macro - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO;
    	//hc-enb_ID_macro -idx33- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
    	OSOCTET temp_buff_for_enb_ID_macro[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.data, temp_buff_for_enb_ID_macro, 3);
    	//end of hc-enb_ID_macro -idx33- primitive
    	#endif /*choice-ELEM 1 -idx32 -rootc4*/
	
    	#if 0 //hc-choice-ELEM 2 -idx34 -rootc4: ENB_ID_Choice->enb_ID_shortmacro - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO;
    	//hc-enb_ID_shortmacro -idx35- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
    	OSOCTET temp_buff_for_enb_ID_shortmacro[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.data, temp_buff_for_enb_ID_shortmacro, 3);
    	//end of hc-enb_ID_shortmacro -idx35- primitive
    	#endif /*hc-choice-ELEM 2 -idx34 -rootc4*/
	
    	#if 0 //hc-choice-ELEM 3 -idx36 -rootc4: ENB_ID_Choice->enb_ID_longmacro - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO;
    	//hc-enb_ID_longmacro -idx37- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
    	OSOCTET temp_buff_for_enb_ID_longmacro[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.data, temp_buff_for_enb_ID_longmacro, 3);
    	//end of hc-enb_ID_longmacro -idx37- primitive
    	#endif /*hc-choice-ELEM 3 -idx36 -rootc4*/
	
    	/*=== END CHOICE -idx31 -ROOTC4 -ENB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx30 -roots5 GlobalngeNB_ID->enb_id - alias = -1
	
    	/*=== END SEQUENCE -idx27 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID - GlobalngeNB_ID -ROOTS5 ===*/
    	#endif /*hc-choice-ELEM 2 -idx26 -rootc2*/
	
    	/*=== END CHOICE -idx17 -ROOTC2 -GlobalNG_RANNode_ID ===*/
    	//end of hc-sequence-ELEM 1: -idx16 -roots3 E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID - alias = -1
	
    	/*=== END SEQUENCE -idx15 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn - E2nodeComponentInterfaceXn -ROOTS3 ===*/
    	#endif /*hc-choice-ELEM 2 -idx14 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 3 -idx38 -rootc1: E2nodeComponentID->e2nodeComponentInterfaceTypeE1 - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_E1;
    	/*=== START SEQUENCE -idx39 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1 -ROOTS6 E2nodeComponentInterfaceE1 ===*/
    	//hc-sequence-ELEM 1: -idx40 -roots6 E2nodeComponentInterfaceE1->gNB_CU_UP_ID - alias = 6 -mandatory
    	//hc-gNB_CU_UP_ID -idx41- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1->GNB-CU-UP-ID 
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeE1.gNB_CU_UP_ID = 34359738367;// change integer here
    	//end of hc-gNB_CU_UP_ID -idx41- alias primitive
    	//end of hc-sequence-ELEM 1: -idx40 -roots6 E2nodeComponentInterfaceE1->gNB_CU_UP_ID - alias = 6
	
    	/*=== END SEQUENCE -idx39 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1 - E2nodeComponentInterfaceE1 -ROOTS6 ===*/
    	#endif /*hc-choice-ELEM 3 -idx38 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 4 -idx42 -rootc1: E2nodeComponentID->e2nodeComponentInterfaceTypeF1 - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_F1;
    	/*=== START SEQUENCE -idx43 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1 -ROOTS7 E2nodeComponentInterfaceF1 ===*/
    	//hc-sequence-ELEM 1: -idx44 -roots7 E2nodeComponentInterfaceF1->gNB_DU_ID - alias = 6 -mandatory
    	//hc-gNB_DU_ID -idx45- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1->GNB-DU-ID 
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeF1.gNB_DU_ID = 34359738367;// change integer here
    	//end of hc-gNB_DU_ID -idx45- alias primitive
    	//end of hc-sequence-ELEM 1: -idx44 -roots7 E2nodeComponentInterfaceF1->gNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx43 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1 - E2nodeComponentInterfaceF1 -ROOTS7 ===*/
    	#endif /*hc-choice-ELEM 4 -idx42 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 5 -idx46 -rootc1: E2nodeComponentID->e2nodeComponentInterfaceTypeW1 - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_W1;
    	/*=== START SEQUENCE -idx47 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1 -ROOTS8 E2nodeComponentInterfaceW1 ===*/
    	//hc-sequence-ELEM 1: -idx48 -roots8 E2nodeComponentInterfaceW1->ng_eNB_DU_ID - alias = 6 -mandatory
    	//hc-ng_eNB_DU_ID -idx49- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1->NGENB-DU-ID 
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeW1.ng_eNB_DU_ID = 34359738367;// change integer here
    	//end of hc-ng_eNB_DU_ID -idx49- alias primitive
    	//end of hc-sequence-ELEM 1: -idx48 -roots8 E2nodeComponentInterfaceW1->ng_eNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx47 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1 - E2nodeComponentInterfaceW1 -ROOTS8 ===*/
    	#endif /*hc-choice-ELEM 5 -idx46 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 6 -idx50 -rootc1: E2nodeComponentID->e2nodeComponentInterfaceTypeS1 - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_S1;
    	/*=== START SEQUENCE -idx51 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1 -ROOTS9 E2nodeComponentInterfaceS1 ===*/
    	//hc-sequence-ELEM 1: -idx52 -roots9 E2nodeComponentInterfaceS1->mme_name - alias = 10 -mandatory
    	//hc-mme_name -idx53- alias primitive - pid = 10 Printable STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1->MMEname
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeS1.mme_name = "hardcoded string value"; // change printable string here
    	//end of hc-mme_name -idx53- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx52 -roots9 E2nodeComponentInterfaceS1->mme_name - alias = 10
	
    	/*=== END SEQUENCE -idx51 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1 - E2nodeComponentInterfaceS1 -ROOTS9 ===*/
    	#endif /*hc-choice-ELEM 6 -idx50 -rootc1*/
	
    	#if 0 //hc-choice-ELEM 7 -idx54 -rootc1: E2nodeComponentID->e2nodeComponentInterfaceTypeX2 - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_X2;
    	/*=== START SEQUENCE -idx55 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2 -ROOTS10 E2nodeComponentInterfaceX2 ===*/
    	//hc-sequence-ELEM 1: -idx56 -roots10 E2nodeComponentInterfaceX2->global_eNB_ID - alias = -1 -optional
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_E_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx57 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID -ROOTS11 GlobalENB_ID ===*/
    	//hc-sequence-ELEM 1: -idx58 -roots11 GlobalENB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx59- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity, sizeof(temp_buff_for_pLMN_Identity)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx59- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx58 -roots11 GlobalENB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx60 -roots11 GlobalENB_ID->eNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx61 -ROOTC5 -ENB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx62 -rootc5: ENB_ID->macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    	//hc-macro_eNB_ID -idx63- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->macro-eNB-ID
    	OSOCTET temp_buff_for_macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID, 3);
    	//end of hc-macro_eNB_ID -idx63- primitive
    	#endif /*choice-ELEM 1 -idx62 -rootc5*/
	
    	#if 0 //hc-choice-ELEM 2 -idx64 -rootc5: ENB_ID->home_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    	//hc-home_eNB_ID -idx65- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->home-eNB-ID
    	OSOCTET temp_buff_for_home_eNB_ID[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID, 4);
    	//end of hc-home_eNB_ID -idx65- primitive
    	#endif /*hc-choice-ELEM 2 -idx64 -rootc5*/
	
    	#if 0 //hc-choice-ELEM 3 -idx66 -rootc5: ENB_ID->short_Macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    	//hc-short_Macro_eNB_ID -idx67- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    	OSOCTET temp_buff_for_short_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID, 3);
    	//end of hc-short_Macro_eNB_ID -idx67- primitive
    	#endif /*hc-choice-ELEM 3 -idx66 -rootc5*/
	
    	#if 0 //hc-choice-ELEM 4 -idx68 -rootc5: ENB_ID->long_Macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    	//hc-long_Macro_eNB_ID -idx69- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    	OSOCTET temp_buff_for_long_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID, 3);
    	//end of hc-long_Macro_eNB_ID -idx69- primitive
    	#endif /*hc-choice-ELEM 4 -idx68 -rootc5*/
	
    	/*=== END CHOICE -idx61 -ROOTC5 -ENB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx60 -roots11 GlobalENB_ID->eNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx57 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID - GlobalENB_ID -ROOTS11 ===*/
    	//end of hc-sequence-ELEM 1: -idx56 -roots10 E2nodeComponentInterfaceX2->global_eNB_ID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx70 -roots10 E2nodeComponentInterfaceX2->global_en_gNB_ID - alias = -1 -optional
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_EN_G_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx71 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID -ROOTS12 GlobalenGNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx72 -roots12 GlobalenGNB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx73- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_1[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_1);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_1, sizeof(temp_buff_for_pLMN_Identity_1)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx73- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx72 -roots12 GlobalenGNB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx74 -roots12 GlobalenGNB_ID->gNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx75 -ROOTC6 -ENGNB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx76 -rootc6: ENGNB_ID->gNB_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.choice_type = E2AP_ENGNB_ID_e2ap_G_NB_ID;
    	//hc-gNB_ID -idx77- primitive in scope - pid = 4 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID->gNB-ID
    	OSOCTET temp_buff_for_gNB_ID[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID, 3);
    	//end of hc-gNB_ID -idx77- primitive
    	#endif /*choice-ELEM 1 -idx76 -rootc6*/
	
    	/*=== END CHOICE -idx75 -ROOTC6 -ENGNB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx74 -roots12 GlobalenGNB_ID->gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx71 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID - GlobalenGNB_ID -ROOTS12 ===*/
    	//end of hc-sequence-ELEM 2: -idx70 -roots10 E2nodeComponentInterfaceX2->global_en_gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx55 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2 - E2nodeComponentInterfaceX2 -ROOTS10 ===*/
    	#endif /*hc-choice-ELEM 7 -idx54 -rootc1*/
	
    	/*=== END CHOICE -idx9 -ROOTC1 -E2nodeComponentID ===*/
    	//end of hc-sequence-ELEM 2: -idx8 -roots1 E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID - alias = -1
	
    	//hc-sequence-ELEM 3: -idx78 -roots1 E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx79 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck -ROOTS13 E2nodeComponentConfigurationAck ===*/
    	//hc-sequence-ELEM 1: -idx80 -roots13 E2nodeComponentConfigurationAck->updateOutcome - alias = -1 -mandatory
    	//hc-updateOutcome -idx81- primitive in scope - pid = 13 ENUMURATE - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->updateOutcome
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.updateOutcome = E2AP_E2NODE_COMPONENT_CONFIGURATION_ACK_SUCCESS; // change enum value here
    	//end of hc-updateOutcome -idx81- primitive
    	//end of hc-sequence-ELEM 1: -idx80 -roots13 E2nodeComponentConfigurationAck->updateOutcome - alias = -1
	
    	//hc-sequence-ELEM 2: -idx82 -roots13 E2nodeComponentConfigurationAck->failureCause - alias = -1 -optional
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.bitmask |= E2AP_E2NODE_COMPONENT_CONFIGURATION_ACK_e2ap_FAILURE_CAUSE_PRESENT;
    	/*=== START CHOICE -idx83 -ROOTC7 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx84 -rootc7: Cause->ricRequest - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx85 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseRICrequest
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx85- alias primitive
	
    	#endif /*choice-ELEM 1 -idx84 -rootc7*/
	
    	#if 0 //hc-choice-ELEM 2 -idx86 -rootc7: Cause->ricService - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx87 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseRICservice
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx87- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx86 -rootc7*/
	
    	#if 0 //hc-choice-ELEM 3 -idx88 -rootc7: Cause->e2Node - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx89 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseE2node
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx89- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx88 -rootc7*/
	
    	#if 0 //hc-choice-ELEM 4 -idx90 -rootc7: Cause->transport - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx91 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseTransport
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx91- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx90 -rootc7*/
	
    	#if 0 //hc-choice-ELEM 5 -idx92 -rootc7: Cause->protocol - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx93 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseProtocol
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx93- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx92 -rootc7*/
	
    	#if 0 //hc-choice-ELEM 6 -idx94 -rootc7: Cause->misc - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx95 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseMisc
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx95- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx94 -rootc7*/
	
    	#if 0 //hc-choice-ELEM 7 -idx96 -rootc7: Cause->serviceLayer - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx97 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer -ROOTS14 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx98 -roots14 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx99- alias primitive - pid = 9 - OCTET STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause);
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause));
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause, sizeof(temp_buff_for_serviceLayerCause)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx99- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx98 -roots14 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx97 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS14 ===*/
    	#endif /*hc-choice-ELEM 7 -idx96 -rootc7*/
	
    	/*=== END CHOICE -idx83 -ROOTC7 -Cause ===*/
    	//end of hc-sequence-ELEM 2: -idx82 -roots13 E2nodeComponentConfigurationAck->failureCause - alias = -1
	
    	/*=== END SEQUENCE -idx79 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck - E2nodeComponentConfigurationAck -ROOTS13 ===*/
    	//end of hc-sequence-ELEM 3: -idx78 -roots1 E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck - alias = -1
	
    	/*=== END SEQUENCE -idx5 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item - E2nodeComponentConfigAdditionAck_Item -ROOTS1 ===*/
    	/*=== END LIST  -idx4 - E2nodeComponentConfigAdditionAck_List ===*/
    }
    #endif/*======== End Hardcode IE -idx3: id_E2nodeComponentConfigAdditionAck - optional ========*/

    #if 1/*======== Start Hardcode IE -idx100: id_E2nodeComponentConfigUpdateAck - optional=======*/
    {
    	 p_E2nodeConfigurationUpdateAcknowledge->bitmask |= E2AP_E2NODE_CONFIGURATION_UPDATE_ACKNOWLEDGE_e2ap_ID_E2NODE_COMPONENT_CONFIG_UPDATE_ACK_PRESENT;
    	/*=== START LIST -idx101 - E2nodeComponentConfigUpdateAck_List===*/
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item_count = 1;
    	/*=== START SEQUENCE -idx102 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item -ROOTS15 E2nodeComponentConfigUpdateAck_Item ===*/
    	//hc-sequence-ELEM 1: -idx103 -roots15 E2nodeComponentConfigUpdateAck_Item->e2nodeComponentInterfaceType - alias = 13 -mandatory
    	//hc-E2nodeComponentInterfaceType -idx104 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentInterfaceType
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentInterfaceType = E2AP_E2NODE_COMPONENT_INTERFACE_TYPE_NG; // change enum value here
    	//end of hc-E2nodeComponentInterfaceType -idx104- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx103 -roots15 E2nodeComponentConfigUpdateAck_Item->e2nodeComponentInterfaceType - alias = 13
	
    	//hc-sequence-ELEM 2: -idx105 -roots15 E2nodeComponentConfigUpdateAck_Item->e2nodeComponentID - alias = -1 -mandatory
    	/*=== START CHOICE -idx106 -ROOTC8 -E2nodeComponentID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx107 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeNG - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_NG;
    	/*=== START SEQUENCE -idx108 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG -ROOTS16 E2nodeComponentInterfaceNG ===*/
    	//hc-sequence-ELEM 1: -idx109 -roots16 E2nodeComponentInterfaceNG->amf_name - alias = 10 -mandatory
    	//hc-amf_name -idx110- alias primitive - pid = 10 Printable STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG->AMFName
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeNG.amf_name = "hardcoded string value"; // change printable string here
    	//end of hc-amf_name -idx110- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx109 -roots16 E2nodeComponentInterfaceNG->amf_name - alias = 10
	
    	/*=== END SEQUENCE -idx108 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG - E2nodeComponentInterfaceNG -ROOTS16 ===*/
    	#endif /*choice-ELEM 1 -idx107 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 2 -idx111 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeXn - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_XN;
    	/*=== START SEQUENCE -idx112 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn -ROOTS17 E2nodeComponentInterfaceXn ===*/
    	//hc-sequence-ELEM 1: -idx113 -roots17 E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx114 -ROOTC9 -GlobalNG_RANNode_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx115 -rootc9: GlobalNG_RANNode_ID->gNB - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_G_NB;
    	/*=== START SEQUENCE -idx116 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID -ROOTS18 GlobalgNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx117 -roots18 GlobalgNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx118- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id_2[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id_2);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.data, temp_buff_for_plmn_id_2, sizeof(temp_buff_for_plmn_id_2)); // change octetstring data here
    	//end of hc-plmn_id -idx118- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx117 -roots18 GlobalgNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx119 -roots18 GlobalgNB_ID->gnb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx120 -ROOTC10 -GNB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx121 -rootc10: GNB_ID_Choice->gnb_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.choice_type = E2AP_GNB_ID_CHOICE_e2ap_GNB_ID;
    	//hc-gnb_ID -idx122- primitive in scope - pid = 4 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
    	OSOCTET temp_buff_for_gnb_ID_1[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.data, temp_buff_for_gnb_ID_1, 3);
    	//end of hc-gnb_ID -idx122- primitive
    	#endif /*choice-ELEM 1 -idx121 -rootc10*/
	
    	/*=== END CHOICE -idx120 -ROOTC10 -GNB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx119 -roots18 GlobalgNB_ID->gnb_id - alias = -1
	
    	/*=== END SEQUENCE -idx116 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID - GlobalgNB_ID -ROOTS18 ===*/
    	#endif /*choice-ELEM 1 -idx115 -rootc9*/
	
    	#if 0 //hc-choice-ELEM 2 -idx123 -rootc9: GlobalNG_RANNode_ID->ng_eNB - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_NG_E_NB;
    	/*=== START SEQUENCE -idx124 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID -ROOTS19 GlobalngeNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx125 -roots19 GlobalngeNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx126- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id_3[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id_3);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.data, temp_buff_for_plmn_id_3, sizeof(temp_buff_for_plmn_id_3)); // change octetstring data here
    	//end of hc-plmn_id -idx126- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx125 -roots19 GlobalngeNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx127 -roots19 GlobalngeNB_ID->enb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx128 -ROOTC11 -ENB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx129 -rootc11: ENB_ID_Choice->enb_ID_macro - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO;
    	//hc-enb_ID_macro -idx130- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
    	OSOCTET temp_buff_for_enb_ID_macro_1[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.data, temp_buff_for_enb_ID_macro_1, 3);
    	//end of hc-enb_ID_macro -idx130- primitive
    	#endif /*choice-ELEM 1 -idx129 -rootc11*/
	
    	#if 0 //hc-choice-ELEM 2 -idx131 -rootc11: ENB_ID_Choice->enb_ID_shortmacro - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO;
    	//hc-enb_ID_shortmacro -idx132- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
    	OSOCTET temp_buff_for_enb_ID_shortmacro_1[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.data, temp_buff_for_enb_ID_shortmacro_1, 3);
    	//end of hc-enb_ID_shortmacro -idx132- primitive
    	#endif /*hc-choice-ELEM 2 -idx131 -rootc11*/
	
    	#if 0 //hc-choice-ELEM 3 -idx133 -rootc11: ENB_ID_Choice->enb_ID_longmacro - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO;
    	//hc-enb_ID_longmacro -idx134- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
    	OSOCTET temp_buff_for_enb_ID_longmacro_1[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.data, temp_buff_for_enb_ID_longmacro_1, 3);
    	//end of hc-enb_ID_longmacro -idx134- primitive
    	#endif /*hc-choice-ELEM 3 -idx133 -rootc11*/
	
    	/*=== END CHOICE -idx128 -ROOTC11 -ENB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx127 -roots19 GlobalngeNB_ID->enb_id - alias = -1
	
    	/*=== END SEQUENCE -idx124 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID - GlobalngeNB_ID -ROOTS19 ===*/
    	#endif /*hc-choice-ELEM 2 -idx123 -rootc9*/
	
    	/*=== END CHOICE -idx114 -ROOTC9 -GlobalNG_RANNode_ID ===*/
    	//end of hc-sequence-ELEM 1: -idx113 -roots17 E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID - alias = -1
	
    	/*=== END SEQUENCE -idx112 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn - E2nodeComponentInterfaceXn -ROOTS17 ===*/
    	#endif /*hc-choice-ELEM 2 -idx111 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 3 -idx135 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeE1 - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_E1;
    	/*=== START SEQUENCE -idx136 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1 -ROOTS20 E2nodeComponentInterfaceE1 ===*/
    	//hc-sequence-ELEM 1: -idx137 -roots20 E2nodeComponentInterfaceE1->gNB_CU_UP_ID - alias = 6 -mandatory
    	//hc-gNB_CU_UP_ID -idx138- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1->GNB-CU-UP-ID 
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeE1.gNB_CU_UP_ID = 34359738367;// change integer here
    	//end of hc-gNB_CU_UP_ID -idx138- alias primitive
    	//end of hc-sequence-ELEM 1: -idx137 -roots20 E2nodeComponentInterfaceE1->gNB_CU_UP_ID - alias = 6
	
    	/*=== END SEQUENCE -idx136 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1 - E2nodeComponentInterfaceE1 -ROOTS20 ===*/
    	#endif /*hc-choice-ELEM 3 -idx135 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 4 -idx139 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeF1 - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_F1;
    	/*=== START SEQUENCE -idx140 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1 -ROOTS21 E2nodeComponentInterfaceF1 ===*/
    	//hc-sequence-ELEM 1: -idx141 -roots21 E2nodeComponentInterfaceF1->gNB_DU_ID - alias = 6 -mandatory
    	//hc-gNB_DU_ID -idx142- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1->GNB-DU-ID 
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeF1.gNB_DU_ID = 34359738367;// change integer here
    	//end of hc-gNB_DU_ID -idx142- alias primitive
    	//end of hc-sequence-ELEM 1: -idx141 -roots21 E2nodeComponentInterfaceF1->gNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx140 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1 - E2nodeComponentInterfaceF1 -ROOTS21 ===*/
    	#endif /*hc-choice-ELEM 4 -idx139 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 5 -idx143 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeW1 - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_W1;
    	/*=== START SEQUENCE -idx144 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1 -ROOTS22 E2nodeComponentInterfaceW1 ===*/
    	//hc-sequence-ELEM 1: -idx145 -roots22 E2nodeComponentInterfaceW1->ng_eNB_DU_ID - alias = 6 -mandatory
    	//hc-ng_eNB_DU_ID -idx146- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1->NGENB-DU-ID 
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeW1.ng_eNB_DU_ID = 34359738367;// change integer here
    	//end of hc-ng_eNB_DU_ID -idx146- alias primitive
    	//end of hc-sequence-ELEM 1: -idx145 -roots22 E2nodeComponentInterfaceW1->ng_eNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx144 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1 - E2nodeComponentInterfaceW1 -ROOTS22 ===*/
    	#endif /*hc-choice-ELEM 5 -idx143 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 6 -idx147 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeS1 - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_S1;
    	/*=== START SEQUENCE -idx148 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1 -ROOTS23 E2nodeComponentInterfaceS1 ===*/
    	//hc-sequence-ELEM 1: -idx149 -roots23 E2nodeComponentInterfaceS1->mme_name - alias = 10 -mandatory
    	//hc-mme_name -idx150- alias primitive - pid = 10 Printable STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1->MMEname
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeS1.mme_name = "hardcoded string value"; // change printable string here
    	//end of hc-mme_name -idx150- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx149 -roots23 E2nodeComponentInterfaceS1->mme_name - alias = 10
	
    	/*=== END SEQUENCE -idx148 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1 - E2nodeComponentInterfaceS1 -ROOTS23 ===*/
    	#endif /*hc-choice-ELEM 6 -idx147 -rootc8*/
	
    	#if 0 //hc-choice-ELEM 7 -idx151 -rootc8: E2nodeComponentID->e2nodeComponentInterfaceTypeX2 - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_X2;
    	/*=== START SEQUENCE -idx152 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2 -ROOTS24 E2nodeComponentInterfaceX2 ===*/
    	//hc-sequence-ELEM 1: -idx153 -roots24 E2nodeComponentInterfaceX2->global_eNB_ID - alias = -1 -optional
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_E_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx154 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID -ROOTS25 GlobalENB_ID ===*/
    	//hc-sequence-ELEM 1: -idx155 -roots25 GlobalENB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx156- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_2[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_2);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_2, sizeof(temp_buff_for_pLMN_Identity_2)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx156- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx155 -roots25 GlobalENB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx157 -roots25 GlobalENB_ID->eNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx158 -ROOTC12 -ENB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx159 -rootc12: ENB_ID->macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    	//hc-macro_eNB_ID -idx160- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->macro-eNB-ID
    	OSOCTET temp_buff_for_macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_1, 3);
    	//end of hc-macro_eNB_ID -idx160- primitive
    	#endif /*choice-ELEM 1 -idx159 -rootc12*/
	
    	#if 0 //hc-choice-ELEM 2 -idx161 -rootc12: ENB_ID->home_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    	//hc-home_eNB_ID -idx162- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->home-eNB-ID
    	OSOCTET temp_buff_for_home_eNB_ID_1[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_1, 4);
    	//end of hc-home_eNB_ID -idx162- primitive
    	#endif /*hc-choice-ELEM 2 -idx161 -rootc12*/
	
    	#if 0 //hc-choice-ELEM 3 -idx163 -rootc12: ENB_ID->short_Macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    	//hc-short_Macro_eNB_ID -idx164- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    	OSOCTET temp_buff_for_short_Macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_1, 3);
    	//end of hc-short_Macro_eNB_ID -idx164- primitive
    	#endif /*hc-choice-ELEM 3 -idx163 -rootc12*/
	
    	#if 0 //hc-choice-ELEM 4 -idx165 -rootc12: ENB_ID->long_Macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    	//hc-long_Macro_eNB_ID -idx166- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    	OSOCTET temp_buff_for_long_Macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_1, 3);
    	//end of hc-long_Macro_eNB_ID -idx166- primitive
    	#endif /*hc-choice-ELEM 4 -idx165 -rootc12*/
	
    	/*=== END CHOICE -idx158 -ROOTC12 -ENB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx157 -roots25 GlobalENB_ID->eNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx154 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID - GlobalENB_ID -ROOTS25 ===*/
    	//end of hc-sequence-ELEM 1: -idx153 -roots24 E2nodeComponentInterfaceX2->global_eNB_ID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx167 -roots24 E2nodeComponentInterfaceX2->global_en_gNB_ID - alias = -1 -optional
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_EN_G_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx168 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID -ROOTS26 GlobalenGNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx169 -roots26 GlobalenGNB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx170- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_3[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_3);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_3, sizeof(temp_buff_for_pLMN_Identity_3)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx170- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx169 -roots26 GlobalenGNB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx171 -roots26 GlobalenGNB_ID->gNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx172 -ROOTC13 -ENGNB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx173 -rootc13: ENGNB_ID->gNB_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.choice_type = E2AP_ENGNB_ID_e2ap_G_NB_ID;
    	//hc-gNB_ID -idx174- primitive in scope - pid = 4 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID->gNB-ID
    	OSOCTET temp_buff_for_gNB_ID_1[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_1, 3);
    	//end of hc-gNB_ID -idx174- primitive
    	#endif /*choice-ELEM 1 -idx173 -rootc13*/
	
    	/*=== END CHOICE -idx172 -ROOTC13 -ENGNB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx171 -roots26 GlobalenGNB_ID->gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx168 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID - GlobalenGNB_ID -ROOTS26 ===*/
    	//end of hc-sequence-ELEM 2: -idx167 -roots24 E2nodeComponentInterfaceX2->global_en_gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx152 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2 - E2nodeComponentInterfaceX2 -ROOTS24 ===*/
    	#endif /*hc-choice-ELEM 7 -idx151 -rootc8*/
	
    	/*=== END CHOICE -idx106 -ROOTC8 -E2nodeComponentID ===*/
    	//end of hc-sequence-ELEM 2: -idx105 -roots15 E2nodeComponentConfigUpdateAck_Item->e2nodeComponentID - alias = -1
	
    	//hc-sequence-ELEM 3: -idx175 -roots15 E2nodeComponentConfigUpdateAck_Item->e2nodeComponentConfigurationAck - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx176 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck -ROOTS27 E2nodeComponentConfigurationAck ===*/
    	//hc-sequence-ELEM 1: -idx177 -roots27 E2nodeComponentConfigurationAck->updateOutcome - alias = -1 -mandatory
    	//hc-updateOutcome -idx178- primitive in scope - pid = 13 ENUMURATE - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->updateOutcome
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.updateOutcome = E2AP_E2NODE_COMPONENT_CONFIGURATION_ACK_SUCCESS; // change enum value here
    	//end of hc-updateOutcome -idx178- primitive
    	//end of hc-sequence-ELEM 1: -idx177 -roots27 E2nodeComponentConfigurationAck->updateOutcome - alias = -1
	
    	//hc-sequence-ELEM 2: -idx179 -roots27 E2nodeComponentConfigurationAck->failureCause - alias = -1 -optional
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.bitmask |= E2AP_E2NODE_COMPONENT_CONFIGURATION_ACK_e2ap_FAILURE_CAUSE_PRESENT;
    	/*=== START CHOICE -idx180 -ROOTC14 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx181 -rootc14: Cause->ricRequest - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx182 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause->CauseRICrequest
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.failureCause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx182- alias primitive
	
    	#endif /*choice-ELEM 1 -idx181 -rootc14*/
	
    	#if 0 //hc-choice-ELEM 2 -idx183 -rootc14: Cause->ricService - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx184 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause->CauseRICservice
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.failureCause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx184- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx183 -rootc14*/
	
    	#if 0 //hc-choice-ELEM 3 -idx185 -rootc14: Cause->e2Node - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx186 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause->CauseE2node
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.failureCause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx186- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx185 -rootc14*/
	
    	#if 0 //hc-choice-ELEM 4 -idx187 -rootc14: Cause->transport - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx188 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause->CauseTransport
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.failureCause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx188- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx187 -rootc14*/
	
    	#if 0 //hc-choice-ELEM 5 -idx189 -rootc14: Cause->protocol - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx190 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause->CauseProtocol
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.failureCause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx190- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx189 -rootc14*/
	
    	#if 0 //hc-choice-ELEM 6 -idx191 -rootc14: Cause->misc - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx192 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause->CauseMisc
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.failureCause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx192- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx191 -rootc14*/
	
    	#if 0 //hc-choice-ELEM 7 -idx193 -rootc14: Cause->serviceLayer - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx194 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer -ROOTS28 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx195 -roots28 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx196- alias primitive - pid = 9 - OCTET STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause_1[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.failureCause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause_1);
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.failureCause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause_1));
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigUpdateAck.id_E2nodeComponentConfigUpdateAck_Item[0].e2nodeComponentConfigurationAck.failureCause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause_1, sizeof(temp_buff_for_serviceLayerCause_1)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx196- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx195 -roots28 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx194 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS28 ===*/
    	#endif /*hc-choice-ELEM 7 -idx193 -rootc14*/
	
    	/*=== END CHOICE -idx180 -ROOTC14 -Cause ===*/
    	//end of hc-sequence-ELEM 2: -idx179 -roots27 E2nodeComponentConfigurationAck->failureCause - alias = -1
	
    	/*=== END SEQUENCE -idx176 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck - E2nodeComponentConfigurationAck -ROOTS27 ===*/
    	//end of hc-sequence-ELEM 3: -idx175 -roots15 E2nodeComponentConfigUpdateAck_Item->e2nodeComponentConfigurationAck - alias = -1
	
    	/*=== END SEQUENCE -idx102 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item - E2nodeComponentConfigUpdateAck_Item -ROOTS15 ===*/
    	/*=== END LIST  -idx101 - E2nodeComponentConfigUpdateAck_List ===*/
    }
    #endif/*======== End Hardcode IE -idx100: id_E2nodeComponentConfigUpdateAck - optional ========*/

    #if 1/*======== Start Hardcode IE -idx197: id_E2nodeComponentConfigRemovalAck - optional=======*/
    {
    	 p_E2nodeConfigurationUpdateAcknowledge->bitmask |= E2AP_E2NODE_CONFIGURATION_UPDATE_ACKNOWLEDGE_e2ap_ID_E2NODE_COMPONENT_CONFIG_REMOVAL_ACK_PRESENT;
    	/*=== START LIST -idx198 - E2nodeComponentConfigRemovalAck_List===*/
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item_count = 1;
    	/*=== START SEQUENCE -idx199 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item -ROOTS29 E2nodeComponentConfigRemovalAck_Item ===*/
    	//hc-sequence-ELEM 1: -idx200 -roots29 E2nodeComponentConfigRemovalAck_Item->e2nodeComponentInterfaceType - alias = 13 -mandatory
    	//hc-E2nodeComponentInterfaceType -idx201 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentInterfaceType
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentInterfaceType = E2AP_E2NODE_COMPONENT_INTERFACE_TYPE_NG; // change enum value here
    	//end of hc-E2nodeComponentInterfaceType -idx201- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx200 -roots29 E2nodeComponentConfigRemovalAck_Item->e2nodeComponentInterfaceType - alias = 13
	
    	//hc-sequence-ELEM 2: -idx202 -roots29 E2nodeComponentConfigRemovalAck_Item->e2nodeComponentID - alias = -1 -mandatory
    	/*=== START CHOICE -idx203 -ROOTC15 -E2nodeComponentID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx204 -rootc15: E2nodeComponentID->e2nodeComponentInterfaceTypeNG - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_NG;
    	/*=== START SEQUENCE -idx205 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG -ROOTS30 E2nodeComponentInterfaceNG ===*/
    	//hc-sequence-ELEM 1: -idx206 -roots30 E2nodeComponentInterfaceNG->amf_name - alias = 10 -mandatory
    	//hc-amf_name -idx207- alias primitive - pid = 10 Printable STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG->AMFName
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeNG.amf_name = "hardcoded string value"; // change printable string here
    	//end of hc-amf_name -idx207- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx206 -roots30 E2nodeComponentInterfaceNG->amf_name - alias = 10
	
    	/*=== END SEQUENCE -idx205 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG - E2nodeComponentInterfaceNG -ROOTS30 ===*/
    	#endif /*choice-ELEM 1 -idx204 -rootc15*/
	
    	#if 0 //hc-choice-ELEM 2 -idx208 -rootc15: E2nodeComponentID->e2nodeComponentInterfaceTypeXn - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_XN;
    	/*=== START SEQUENCE -idx209 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn -ROOTS31 E2nodeComponentInterfaceXn ===*/
    	//hc-sequence-ELEM 1: -idx210 -roots31 E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx211 -ROOTC16 -GlobalNG_RANNode_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx212 -rootc16: GlobalNG_RANNode_ID->gNB - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_G_NB;
    	/*=== START SEQUENCE -idx213 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID -ROOTS32 GlobalgNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx214 -roots32 GlobalgNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx215- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id_4[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id_4);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.data, temp_buff_for_plmn_id_4, sizeof(temp_buff_for_plmn_id_4)); // change octetstring data here
    	//end of hc-plmn_id -idx215- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx214 -roots32 GlobalgNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx216 -roots32 GlobalgNB_ID->gnb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx217 -ROOTC17 -GNB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx218 -rootc17: GNB_ID_Choice->gnb_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.choice_type = E2AP_GNB_ID_CHOICE_e2ap_GNB_ID;
    	//hc-gnb_ID -idx219- primitive in scope - pid = 4 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
    	OSOCTET temp_buff_for_gnb_ID_2[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.data, temp_buff_for_gnb_ID_2, 3);
    	//end of hc-gnb_ID -idx219- primitive
    	#endif /*choice-ELEM 1 -idx218 -rootc17*/
	
    	/*=== END CHOICE -idx217 -ROOTC17 -GNB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx216 -roots32 GlobalgNB_ID->gnb_id - alias = -1
	
    	/*=== END SEQUENCE -idx213 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID - GlobalgNB_ID -ROOTS32 ===*/
    	#endif /*choice-ELEM 1 -idx212 -rootc16*/
	
    	#if 0 //hc-choice-ELEM 2 -idx220 -rootc16: GlobalNG_RANNode_ID->ng_eNB - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_NG_E_NB;
    	/*=== START SEQUENCE -idx221 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID -ROOTS33 GlobalngeNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx222 -roots33 GlobalngeNB_ID->plmn_id - alias = 8 -mandatory
    	//hc-plmn_id -idx223- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_plmn_id_5[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id_5);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.data, temp_buff_for_plmn_id_5, sizeof(temp_buff_for_plmn_id_5)); // change octetstring data here
    	//end of hc-plmn_id -idx223- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx222 -roots33 GlobalngeNB_ID->plmn_id - alias = 8
	
    	//hc-sequence-ELEM 2: -idx224 -roots33 GlobalngeNB_ID->enb_id - alias = -1 -mandatory
    	/*=== START CHOICE -idx225 -ROOTC18 -ENB_ID_Choice ===*/
    	#if 1 //hc-choice-ELEM 1 -idx226 -rootc18: ENB_ID_Choice->enb_ID_macro - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO;
    	//hc-enb_ID_macro -idx227- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
    	OSOCTET temp_buff_for_enb_ID_macro_2[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.data, temp_buff_for_enb_ID_macro_2, 3);
    	//end of hc-enb_ID_macro -idx227- primitive
    	#endif /*choice-ELEM 1 -idx226 -rootc18*/
	
    	#if 0 //hc-choice-ELEM 2 -idx228 -rootc18: ENB_ID_Choice->enb_ID_shortmacro - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO;
    	//hc-enb_ID_shortmacro -idx229- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
    	OSOCTET temp_buff_for_enb_ID_shortmacro_2[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.data, temp_buff_for_enb_ID_shortmacro_2, 3);
    	//end of hc-enb_ID_shortmacro -idx229- primitive
    	#endif /*hc-choice-ELEM 2 -idx228 -rootc18*/
	
    	#if 0 //hc-choice-ELEM 3 -idx230 -rootc18: ENB_ID_Choice->enb_ID_longmacro - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO;
    	//hc-enb_ID_longmacro -idx231- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
    	OSOCTET temp_buff_for_enb_ID_longmacro_2[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.data, temp_buff_for_enb_ID_longmacro_2, 3);
    	//end of hc-enb_ID_longmacro -idx231- primitive
    	#endif /*hc-choice-ELEM 3 -idx230 -rootc18*/
	
    	/*=== END CHOICE -idx225 -ROOTC18 -ENB_ID_Choice ===*/
    	//end of hc-sequence-ELEM 2: -idx224 -roots33 GlobalngeNB_ID->enb_id - alias = -1
	
    	/*=== END SEQUENCE -idx221 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID - GlobalngeNB_ID -ROOTS33 ===*/
    	#endif /*hc-choice-ELEM 2 -idx220 -rootc16*/
	
    	/*=== END CHOICE -idx211 -ROOTC16 -GlobalNG_RANNode_ID ===*/
    	//end of hc-sequence-ELEM 1: -idx210 -roots31 E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID - alias = -1
	
    	/*=== END SEQUENCE -idx209 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn - E2nodeComponentInterfaceXn -ROOTS31 ===*/
    	#endif /*hc-choice-ELEM 2 -idx208 -rootc15*/
	
    	#if 0 //hc-choice-ELEM 3 -idx232 -rootc15: E2nodeComponentID->e2nodeComponentInterfaceTypeE1 - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_E1;
    	/*=== START SEQUENCE -idx233 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1 -ROOTS34 E2nodeComponentInterfaceE1 ===*/
    	//hc-sequence-ELEM 1: -idx234 -roots34 E2nodeComponentInterfaceE1->gNB_CU_UP_ID - alias = 6 -mandatory
    	//hc-gNB_CU_UP_ID -idx235- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1->GNB-CU-UP-ID 
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeE1.gNB_CU_UP_ID = 34359738367;// change integer here
    	//end of hc-gNB_CU_UP_ID -idx235- alias primitive
    	//end of hc-sequence-ELEM 1: -idx234 -roots34 E2nodeComponentInterfaceE1->gNB_CU_UP_ID - alias = 6
	
    	/*=== END SEQUENCE -idx233 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1 - E2nodeComponentInterfaceE1 -ROOTS34 ===*/
    	#endif /*hc-choice-ELEM 3 -idx232 -rootc15*/
	
    	#if 0 //hc-choice-ELEM 4 -idx236 -rootc15: E2nodeComponentID->e2nodeComponentInterfaceTypeF1 - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_F1;
    	/*=== START SEQUENCE -idx237 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1 -ROOTS35 E2nodeComponentInterfaceF1 ===*/
    	//hc-sequence-ELEM 1: -idx238 -roots35 E2nodeComponentInterfaceF1->gNB_DU_ID - alias = 6 -mandatory
    	//hc-gNB_DU_ID -idx239- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1->GNB-DU-ID 
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeF1.gNB_DU_ID = 34359738367;// change integer here
    	//end of hc-gNB_DU_ID -idx239- alias primitive
    	//end of hc-sequence-ELEM 1: -idx238 -roots35 E2nodeComponentInterfaceF1->gNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx237 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1 - E2nodeComponentInterfaceF1 -ROOTS35 ===*/
    	#endif /*hc-choice-ELEM 4 -idx236 -rootc15*/
	
    	#if 0 //hc-choice-ELEM 5 -idx240 -rootc15: E2nodeComponentID->e2nodeComponentInterfaceTypeW1 - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_W1;
    	/*=== START SEQUENCE -idx241 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1 -ROOTS36 E2nodeComponentInterfaceW1 ===*/
    	//hc-sequence-ELEM 1: -idx242 -roots36 E2nodeComponentInterfaceW1->ng_eNB_DU_ID - alias = 6 -mandatory
    	//hc-ng_eNB_DU_ID -idx243- alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735  - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1->NGENB-DU-ID 
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeW1.ng_eNB_DU_ID = 34359738367;// change integer here
    	//end of hc-ng_eNB_DU_ID -idx243- alias primitive
    	//end of hc-sequence-ELEM 1: -idx242 -roots36 E2nodeComponentInterfaceW1->ng_eNB_DU_ID - alias = 6
	
    	/*=== END SEQUENCE -idx241 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1 - E2nodeComponentInterfaceW1 -ROOTS36 ===*/
    	#endif /*hc-choice-ELEM 5 -idx240 -rootc15*/
	
    	#if 0 //hc-choice-ELEM 6 -idx244 -rootc15: E2nodeComponentID->e2nodeComponentInterfaceTypeS1 - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_S1;
    	/*=== START SEQUENCE -idx245 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1 -ROOTS37 E2nodeComponentInterfaceS1 ===*/
    	//hc-sequence-ELEM 1: -idx246 -roots37 E2nodeComponentInterfaceS1->mme_name - alias = 10 -mandatory
    	//hc-mme_name -idx247- alias primitive - pid = 10 Printable STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1->MMEname
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeS1.mme_name = "hardcoded string value"; // change printable string here
    	//end of hc-mme_name -idx247- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx246 -roots37 E2nodeComponentInterfaceS1->mme_name - alias = 10
	
    	/*=== END SEQUENCE -idx245 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1 - E2nodeComponentInterfaceS1 -ROOTS37 ===*/
    	#endif /*hc-choice-ELEM 6 -idx244 -rootc15*/
	
    	#if 0 //hc-choice-ELEM 7 -idx248 -rootc15: E2nodeComponentID->e2nodeComponentInterfaceTypeX2 - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_X2;
    	/*=== START SEQUENCE -idx249 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2 -ROOTS38 E2nodeComponentInterfaceX2 ===*/
    	//hc-sequence-ELEM 1: -idx250 -roots38 E2nodeComponentInterfaceX2->global_eNB_ID - alias = -1 -optional
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_E_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx251 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID -ROOTS39 GlobalENB_ID ===*/
    	//hc-sequence-ELEM 1: -idx252 -roots39 GlobalENB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx253- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_4[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_4);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_4, sizeof(temp_buff_for_pLMN_Identity_4)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx253- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx252 -roots39 GlobalENB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx254 -roots39 GlobalENB_ID->eNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx255 -ROOTC19 -ENB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx256 -rootc19: ENB_ID->macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    	//hc-macro_eNB_ID -idx257- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->macro-eNB-ID
    	OSOCTET temp_buff_for_macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_2, 3);
    	//end of hc-macro_eNB_ID -idx257- primitive
    	#endif /*choice-ELEM 1 -idx256 -rootc19*/
	
    	#if 0 //hc-choice-ELEM 2 -idx258 -rootc19: ENB_ID->home_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    	//hc-home_eNB_ID -idx259- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->home-eNB-ID
    	OSOCTET temp_buff_for_home_eNB_ID_2[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_2, 4);
    	//end of hc-home_eNB_ID -idx259- primitive
    	#endif /*hc-choice-ELEM 2 -idx258 -rootc19*/
	
    	#if 0 //hc-choice-ELEM 3 -idx260 -rootc19: ENB_ID->short_Macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    	//hc-short_Macro_eNB_ID -idx261- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    	OSOCTET temp_buff_for_short_Macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_2, 3);
    	//end of hc-short_Macro_eNB_ID -idx261- primitive
    	#endif /*hc-choice-ELEM 3 -idx260 -rootc19*/
	
    	#if 0 //hc-choice-ELEM 4 -idx262 -rootc19: ENB_ID->long_Macro_eNB_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    	//hc-long_Macro_eNB_ID -idx263- primitive in scope - pid = 3 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    	OSOCTET temp_buff_for_long_Macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_2, 3);
    	//end of hc-long_Macro_eNB_ID -idx263- primitive
    	#endif /*hc-choice-ELEM 4 -idx262 -rootc19*/
	
    	/*=== END CHOICE -idx255 -ROOTC19 -ENB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx254 -roots39 GlobalENB_ID->eNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx251 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID - GlobalENB_ID -ROOTS39 ===*/
    	//end of hc-sequence-ELEM 1: -idx250 -roots38 E2nodeComponentInterfaceX2->global_eNB_ID - alias = -1
	
    	//hc-sequence-ELEM 2: -idx264 -roots38 E2nodeComponentInterfaceX2->global_en_gNB_ID - alias = -1 -optional
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_EN_G_NB_ID_PRESENT;
    	/*=== START SEQUENCE -idx265 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID -ROOTS40 GlobalenGNB_ID ===*/
    	//hc-sequence-ELEM 1: -idx266 -roots40 GlobalenGNB_ID->pLMN_Identity - alias = 8 -mandatory
    	//hc-pLMN_Identity -idx267- alias primitive - pid = 8 - OCTET STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->PLMN-Identity
    	OSOCTET temp_buff_for_pLMN_Identity_5[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_5);
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity_5, sizeof(temp_buff_for_pLMN_Identity_5)); // change octetstring data here
    	//end of hc-pLMN_Identity -idx267- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx266 -roots40 GlobalenGNB_ID->pLMN_Identity - alias = 8
	
    	//hc-sequence-ELEM 2: -idx268 -roots40 GlobalenGNB_ID->gNB_ID - alias = -1 -mandatory
    	/*=== START CHOICE -idx269 -ROOTC20 -ENGNB_ID ===*/
    	#if 1 //hc-choice-ELEM 1 -idx270 -rootc20: ENGNB_ID->gNB_ID - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.choice_type = E2AP_ENGNB_ID_e2ap_G_NB_ID;
    	//hc-gNB_ID -idx271- primitive in scope - pid = 4 - BIT STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID->gNB-ID
    	OSOCTET temp_buff_for_gNB_ID_2[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_2, 3);
    	//end of hc-gNB_ID -idx271- primitive
    	#endif /*choice-ELEM 1 -idx270 -rootc20*/
	
    	/*=== END CHOICE -idx269 -ROOTC20 -ENGNB_ID ===*/
    	//end of hc-sequence-ELEM 2: -idx268 -roots40 GlobalenGNB_ID->gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx265 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID - GlobalenGNB_ID -ROOTS40 ===*/
    	//end of hc-sequence-ELEM 2: -idx264 -roots38 E2nodeComponentInterfaceX2->global_en_gNB_ID - alias = -1
	
    	/*=== END SEQUENCE -idx249 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2 - E2nodeComponentInterfaceX2 -ROOTS38 ===*/
    	#endif /*hc-choice-ELEM 7 -idx248 -rootc15*/
	
    	/*=== END CHOICE -idx203 -ROOTC15 -E2nodeComponentID ===*/
    	//end of hc-sequence-ELEM 2: -idx202 -roots29 E2nodeComponentConfigRemovalAck_Item->e2nodeComponentID - alias = -1
	
    	//hc-sequence-ELEM 3: -idx272 -roots29 E2nodeComponentConfigRemovalAck_Item->e2nodeComponentConfigurationAck - alias = -1 -mandatory
    	/*=== START SEQUENCE -idx273 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck -ROOTS41 E2nodeComponentConfigurationAck ===*/
    	//hc-sequence-ELEM 1: -idx274 -roots41 E2nodeComponentConfigurationAck->updateOutcome - alias = -1 -mandatory
    	//hc-updateOutcome -idx275- primitive in scope - pid = 13 ENUMURATE - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->updateOutcome
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.updateOutcome = E2AP_E2NODE_COMPONENT_CONFIGURATION_ACK_SUCCESS; // change enum value here
    	//end of hc-updateOutcome -idx275- primitive
    	//end of hc-sequence-ELEM 1: -idx274 -roots41 E2nodeComponentConfigurationAck->updateOutcome - alias = -1
	
    	//hc-sequence-ELEM 2: -idx276 -roots41 E2nodeComponentConfigurationAck->failureCause - alias = -1 -optional
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.bitmask |= E2AP_E2NODE_COMPONENT_CONFIGURATION_ACK_e2ap_FAILURE_CAUSE_PRESENT;
    	/*=== START CHOICE -idx277 -ROOTC21 -Cause ===*/
    	#if 1 //hc-choice-ELEM 1 -idx278 -rootc21: Cause->ricRequest - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    	//hc-CauseRICrequest -idx279 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause->CauseRICrequest
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.failureCause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    	//end of hc-CauseRICrequest -idx279- alias primitive
	
    	#endif /*choice-ELEM 1 -idx278 -rootc21*/
	
    	#if 0 //hc-choice-ELEM 2 -idx280 -rootc21: Cause->ricService - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    	//hc-CauseRICservice -idx281 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause->CauseRICservice
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.failureCause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    	//end of hc-CauseRICservice -idx281- alias primitive
	
    	#endif /*hc-choice-ELEM 2 -idx280 -rootc21*/
	
    	#if 0 //hc-choice-ELEM 3 -idx282 -rootc21: Cause->e2Node - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    	//hc-CauseE2node -idx283 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause->CauseE2node
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.failureCause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    	//end of hc-CauseE2node -idx283- alias primitive
	
    	#endif /*hc-choice-ELEM 3 -idx282 -rootc21*/
	
    	#if 0 //hc-choice-ELEM 4 -idx284 -rootc21: Cause->transport - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    	//hc-CauseTransport -idx285 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause->CauseTransport
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.failureCause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    	//end of hc-CauseTransport -idx285- alias primitive
	
    	#endif /*hc-choice-ELEM 4 -idx284 -rootc21*/
	
    	#if 0 //hc-choice-ELEM 5 -idx286 -rootc21: Cause->protocol - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    	//hc-CauseProtocol -idx287 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause->CauseProtocol
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.failureCause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    	//end of hc-CauseProtocol -idx287- alias primitive
	
    	#endif /*hc-choice-ELEM 5 -idx286 -rootc21*/
	
    	#if 0 //hc-choice-ELEM 6 -idx288 -rootc21: Cause->misc - alias = 13
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_MISC;
    	//hc-CauseMisc -idx289 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause->CauseMisc
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.failureCause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    	//end of hc-CauseMisc -idx289- alias primitive
	
    	#endif /*hc-choice-ELEM 6 -idx288 -rootc21*/
	
    	#if 0 //hc-choice-ELEM 7 -idx290 -rootc21: Cause->serviceLayer - alias = -1
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    	/*=== START SEQUENCE -idx291 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer -ROOTS42 CauseServiceLayer ===*/
    	//hc-sequence-ELEM 1: -idx292 -roots42 CauseServiceLayer->serviceLayerCause - alias = 9 -mandatory
    	//hc-serviceLayerCause -idx293- alias primitive - pid = 9 - OCTET STRING - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer->ServiceLayerCause
    	OSOCTET temp_buff_for_serviceLayerCause_2[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.failureCause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause_2);
    	p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.failureCause.serviceLayer.serviceLayerCause.data = xnap_mem_get(sizeof(temp_buff_for_serviceLayerCause_2));
    	XNAP_MEMCPY(p_E2nodeConfigurationUpdateAcknowledge->id_E2nodeComponentConfigRemovalAck.id_E2nodeComponentConfigRemovalAck_Item[0].e2nodeComponentConfigurationAck.failureCause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause_2, sizeof(temp_buff_for_serviceLayerCause_2)); // change octetstring data here
    	//end of hc-serviceLayerCause -idx293- alias primitive
	
    	//end of hc-sequence-ELEM 1: -idx292 -roots42 CauseServiceLayer->serviceLayerCause - alias = 9
	
    	/*=== END SEQUENCE -idx291 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer - CauseServiceLayer -ROOTS42 ===*/
    	#endif /*hc-choice-ELEM 7 -idx290 -rootc21*/
	
    	/*=== END CHOICE -idx277 -ROOTC21 -Cause ===*/
    	//end of hc-sequence-ELEM 2: -idx276 -roots41 E2nodeComponentConfigurationAck->failureCause - alias = -1
	
    	/*=== END SEQUENCE -idx273 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck - E2nodeComponentConfigurationAck -ROOTS41 ===*/
    	//end of hc-sequence-ELEM 3: -idx272 -roots29 E2nodeComponentConfigRemovalAck_Item->e2nodeComponentConfigurationAck - alias = -1
	
    	/*=== END SEQUENCE -idx199 - E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item - E2nodeComponentConfigRemovalAck_Item -ROOTS29 ===*/
    	/*=== END LIST  -idx198 - E2nodeComponentConfigRemovalAck_List ===*/
    }
    #endif/*======== End Hardcode IE -idx197: id_E2nodeComponentConfigRemovalAck - optional ========*/
    return XNAP_SUCCESS;
}
/*
E2nodeConfigurationUpdateAcknowledge : (E2nodeConfigurationUpdateAcknowledge) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2nodeConfigurationUpdateAcknowledge
    protocolIEs : (E2nodeConfigurationUpdateAcknowledge-IEs) 					---- (IE-LIST) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs
        TransactionID : (TransactionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->TransactionID
        E2nodeComponentConfigAdditionAck-List : (E2nodeComponentConfigAdditionAck-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List
            E2nodeComponentConfigAdditionAck-ItemIEs : (E2nodeComponentConfigAdditionAck-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs
                E2nodeComponentConfigAdditionAck-Item : (E2nodeComponentConfigAdditionAck-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item
                    e2nodeComponentInterfaceType : (E2nodeComponentInterfaceType) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentInterfaceType
                    e2nodeComponentID : (E2nodeComponentID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID
                        e2nodeComponentInterfaceTypeNG : (E2nodeComponentInterfaceNG) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG
                            amf-name : (AMFName) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG->AMFName
                        e2nodeComponentInterfaceTypeXn : (E2nodeComponentInterfaceXn) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn
                            global-NG-RAN-Node-ID : (GlobalNG-RANNode-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID
                                gNB : (GlobalgNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID
                                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->PLMN-Identity
                                    gnb-id : (GNB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice
                                        gnb-ID : (gnb-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
                                ng-eNB : (GlobalngeNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID
                                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->PLMN-Identity
                                    enb-id : (ENB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice
                                        enb-ID-macro : (enb-ID-macro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
                                        enb-ID-shortmacro : (enb-ID-shortmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
                                        enb-ID-longmacro : (enb-ID-longmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
                        e2nodeComponentInterfaceTypeE1 : (E2nodeComponentInterfaceE1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1
                            gNB-CU-UP-ID : (GNB-CU-UP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1->GNB-CU-UP-ID
                        e2nodeComponentInterfaceTypeF1 : (E2nodeComponentInterfaceF1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1
                            gNB-DU-ID : (GNB-DU-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1->GNB-DU-ID
                        e2nodeComponentInterfaceTypeW1 : (E2nodeComponentInterfaceW1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1
                            ng-eNB-DU-ID : (NGENB-DU-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1->NGENB-DU-ID
                        e2nodeComponentInterfaceTypeS1 : (E2nodeComponentInterfaceS1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1
                            mme-name : (MMEname) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1->MMEname
                        e2nodeComponentInterfaceTypeX2 : (E2nodeComponentInterfaceX2) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2
                            global-eNB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID
                                pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->PLMN-Identity
                                eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID
                                    macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->macro-eNB-ID
                                    home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->home-eNB-ID
                                    short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                                    long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                            global-en-gNB-ID : (GlobalenGNB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID
                                pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->PLMN-Identity
                                gNB-ID : (ENGNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID
                                    gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID->gNB-ID
                    e2nodeComponentConfigurationAck : (E2nodeComponentConfigurationAck) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck
                        updateOutcome : (updateOutcome) 					---- (ENUMERATED) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->updateOutcome
                        failureCause : (Cause) 					---- (CHOICE) ---- [O] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause
                            ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseRICrequest
                            ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseRICservice
                            e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseE2node
                            transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseTransport
                            protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseProtocol
                            misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseMisc
                            serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer
                                serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigAdditionAck-List->E2nodeComponentConfigAdditionAck-ItemIEs->E2nodeComponentConfigAdditionAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer->ServiceLayerCause
        E2nodeComponentConfigUpdateAck-List : (E2nodeComponentConfigUpdateAck-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List
            E2nodeComponentConfigUpdateAck-ItemIEs : (E2nodeComponentConfigUpdateAck-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs
                E2nodeComponentConfigUpdateAck-Item : (E2nodeComponentConfigUpdateAck-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item
                    e2nodeComponentInterfaceType : (E2nodeComponentInterfaceType) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentInterfaceType
                    e2nodeComponentID : (E2nodeComponentID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID
                        e2nodeComponentInterfaceTypeNG : (E2nodeComponentInterfaceNG) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG
                            amf-name : (AMFName) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG->AMFName
                        e2nodeComponentInterfaceTypeXn : (E2nodeComponentInterfaceXn) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn
                            global-NG-RAN-Node-ID : (GlobalNG-RANNode-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID
                                gNB : (GlobalgNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID
                                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->PLMN-Identity
                                    gnb-id : (GNB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice
                                        gnb-ID : (gnb-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
                                ng-eNB : (GlobalngeNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID
                                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->PLMN-Identity
                                    enb-id : (ENB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice
                                        enb-ID-macro : (enb-ID-macro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
                                        enb-ID-shortmacro : (enb-ID-shortmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
                                        enb-ID-longmacro : (enb-ID-longmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
                        e2nodeComponentInterfaceTypeE1 : (E2nodeComponentInterfaceE1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1
                            gNB-CU-UP-ID : (GNB-CU-UP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1->GNB-CU-UP-ID
                        e2nodeComponentInterfaceTypeF1 : (E2nodeComponentInterfaceF1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1
                            gNB-DU-ID : (GNB-DU-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1->GNB-DU-ID
                        e2nodeComponentInterfaceTypeW1 : (E2nodeComponentInterfaceW1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1
                            ng-eNB-DU-ID : (NGENB-DU-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1->NGENB-DU-ID
                        e2nodeComponentInterfaceTypeS1 : (E2nodeComponentInterfaceS1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1
                            mme-name : (MMEname) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1->MMEname
                        e2nodeComponentInterfaceTypeX2 : (E2nodeComponentInterfaceX2) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2
                            global-eNB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID
                                pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->PLMN-Identity
                                eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID
                                    macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->macro-eNB-ID
                                    home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->home-eNB-ID
                                    short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                                    long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                            global-en-gNB-ID : (GlobalenGNB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID
                                pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->PLMN-Identity
                                gNB-ID : (ENGNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID
                                    gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID->gNB-ID
                    e2nodeComponentConfigurationAck : (E2nodeComponentConfigurationAck) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck
                        updateOutcome : (updateOutcome) 					---- (ENUMERATED) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->updateOutcome
                        failureCause : (Cause) 					---- (CHOICE) ---- [O] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause
                            ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause->CauseRICrequest
                            ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause->CauseRICservice
                            e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause->CauseE2node
                            transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause->CauseTransport
                            protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause->CauseProtocol
                            misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause->CauseMisc
                            serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer
                                serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigUpdateAck-List->E2nodeComponentConfigUpdateAck-ItemIEs->E2nodeComponentConfigUpdateAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer->ServiceLayerCause
        E2nodeComponentConfigRemovalAck-List : (E2nodeComponentConfigRemovalAck-List) 					---- (SEQUENCE-OF-SINGLECONTAINER) ---- [O] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List
            E2nodeComponentConfigRemovalAck-ItemIEs : (E2nodeComponentConfigRemovalAck-ItemIEs) 					---- (IE-LIST) ---- [UNK] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs
                E2nodeComponentConfigRemovalAck-Item : (E2nodeComponentConfigRemovalAck-Item) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item
                    e2nodeComponentInterfaceType : (E2nodeComponentInterfaceType) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentInterfaceType
                    e2nodeComponentID : (E2nodeComponentID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID
                        e2nodeComponentInterfaceTypeNG : (E2nodeComponentInterfaceNG) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG
                            amf-name : (AMFName) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceNG->AMFName
                        e2nodeComponentInterfaceTypeXn : (E2nodeComponentInterfaceXn) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn
                            global-NG-RAN-Node-ID : (GlobalNG-RANNode-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID
                                gNB : (GlobalgNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID
                                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->PLMN-Identity
                                    gnb-id : (GNB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice
                                        gnb-ID : (gnb-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalgNB-ID->GNB-ID-Choice->gnb-ID
                                ng-eNB : (GlobalngeNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID
                                    plmn-id : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->PLMN-Identity
                                    enb-id : (ENB-ID-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice
                                        enb-ID-macro : (enb-ID-macro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-macro
                                        enb-ID-shortmacro : (enb-ID-shortmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-shortmacro
                                        enb-ID-longmacro : (enb-ID-longmacro) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceXn->GlobalNG-RANNode-ID->GlobalngeNB-ID->ENB-ID-Choice->enb-ID-longmacro
                        e2nodeComponentInterfaceTypeE1 : (E2nodeComponentInterfaceE1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1
                            gNB-CU-UP-ID : (GNB-CU-UP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceE1->GNB-CU-UP-ID
                        e2nodeComponentInterfaceTypeF1 : (E2nodeComponentInterfaceF1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1
                            gNB-DU-ID : (GNB-DU-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceF1->GNB-DU-ID
                        e2nodeComponentInterfaceTypeW1 : (E2nodeComponentInterfaceW1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1
                            ng-eNB-DU-ID : (NGENB-DU-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceW1->NGENB-DU-ID
                        e2nodeComponentInterfaceTypeS1 : (E2nodeComponentInterfaceS1) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1
                            mme-name : (MMEname) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceS1->MMEname
                        e2nodeComponentInterfaceTypeX2 : (E2nodeComponentInterfaceX2) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2
                            global-eNB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID
                                pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->PLMN-Identity
                                eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID
                                    macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->macro-eNB-ID
                                    home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->home-eNB-ID
                                    short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                                    long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                            global-en-gNB-ID : (GlobalenGNB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID
                                pLMN-Identity : (PLMN-Identity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->PLMN-Identity
                                gNB-ID : (ENGNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID
                                    gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentID->E2nodeComponentInterfaceX2->GlobalenGNB-ID->ENGNB-ID->gNB-ID
                    e2nodeComponentConfigurationAck : (E2nodeComponentConfigurationAck) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck
                        updateOutcome : (updateOutcome) 					---- (ENUMERATED) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->updateOutcome
                        failureCause : (Cause) 					---- (CHOICE) ---- [O] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause
                            ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause->CauseRICrequest
                            ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause->CauseRICservice
                            e2Node : (CauseE2node) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause->CauseE2node
                            transport : (CauseTransport) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause->CauseTransport
                            protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause->CauseProtocol
                            misc : (CauseMisc) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause->CauseMisc
                            serviceLayer : (CauseServiceLayer) 					---- (SEQUENCE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer
                                serviceLayerCause : (ServiceLayerCause) 					---- (PRIMITIVE) ---- [M] ----PATH: E2nodeConfigurationUpdateAcknowledge->E2nodeConfigurationUpdateAcknowledge-IEs->E2nodeComponentConfigRemovalAck-List->E2nodeComponentConfigRemovalAck-ItemIEs->E2nodeComponentConfigRemovalAck-Item->E2nodeComponentConfigurationAck->Cause->CauseServiceLayer->ServiceLayerCause
*/
#endif // ASSIGN_HARDCODE_E2NODE_CONFIGURATION_UPDATE_ACKNOWLEDGE_H

