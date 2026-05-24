#ifndef ASSIGN_HARDCODE_E2SM_RC_CONTROL_HEADER_H
#define ASSIGN_HARDCODE_E2SM_RC_CONTROL_HEADER_H
#include<stdio.h>
#include"output_main.h"
#include "MAIN_STRUCT.h"

xnap_return_et assign_hardcode_value_E2SM_RC_ControlHeader(_e2ap_E2SM_RC_ControlHeader_t* p_E2SM_RC_ControlHeader)
{
    /*=== START SEQUENCE -idx1 -ROOTS1 E2SM-RC-ControlHeader ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader alias = -1 -mandatory
    /*=== START CHOICE -rootc1 - E2SM-RC-ControlHeader-ric-controlHeader-formats ===*/
    #if 1 //hc-choice-ELEM 1 -idx4 -rootc1: E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM_RC_ControlHeader_Format1 - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.choice_type = E2AP_E2SM_RC_CONTROL_HEADER_RIC_CONTROL_HEADER_FORMATS_e2ap_CONTROL_HEADER_FORMAT1;
    /*=== START SEQUENCE -idx5 -ROOTS2 E2SM-RC-ControlHeader-Format1 ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1 alias = -1 -mandatory
    /*=== START CHOICE -rootc2 - UEID ===*/
    #if 1 //hc-choice-ELEM 1 -idx8 -rootc2: UEID->UEID_GNB - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.choice_type = E2AP_UEID_e2ap_G_NB_UEID;
    /*=== START SEQUENCE -idx9 -ROOTS3 UEID-GNB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = 6 -mandatory
    //hc-amf_UE_NGAP_ID -idx11- alias primitive - pid = 6 - INTEGER - min:0 - max:1099511627775  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->AMF-UE-NGAP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.amf_UE_NGAP_ID = 549755813887;// change integer here
    //end of hc-amf_UE_NGAP_ID -idx11- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = -1 -mandatory
    /*=== START SEQUENCE -idx13 -ROOTS4 GUAMI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GUAMI alias = 8 -mandatory
    //hc-pLMNIdentity -idx15- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GUAMI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.guami.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.guami.pLMNIdentity.data, temp_buff_for_pLMNIdentity, sizeof(temp_buff_for_pLMNIdentity)); // change octetstring data here
    //end of hc-pLMNIdentity -idx15- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GUAMI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFRegionID -idx17- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GUAMI->AMFRegionID
    OSOCTET temp_buff_for_aMFRegionID[] = {0x01}; // min =8 - max = 8 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.guami.aMFRegionID.numbits = 8;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.guami.aMFRegionID.data, temp_buff_for_aMFRegionID, 1); // change bitstring data here
    //end of hc-aMFRegionID -idx17- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GUAMI alias = 3
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFSetID -idx19- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GUAMI->AMFSetID
    OSOCTET temp_buff_for_aMFSetID[] = {0x01, 0x02}; // min =10 - max = 10 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.guami.aMFSetID.numbits = 10;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.guami.aMFSetID.data, temp_buff_for_aMFSetID, 2); // change bitstring data here
    //end of hc-aMFSetID -idx19- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GUAMI alias = 3
    //hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFPointer -idx21- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GUAMI->AMFPointer
    OSOCTET temp_buff_for_aMFPointer[] = {0x01}; // min =6 - max = 6 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.guami.aMFPointer.numbits = 6;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.guami.aMFPointer.data, temp_buff_for_aMFPointer, 1); // change bitstring data here
    //end of hc-aMFPointer -idx21- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GUAMI alias = 3
    /*=== END SEQUENCE -idx13 GUAMI -ROOTS4 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_G_NB_CU_UE_F1AP_ID_LIST_PRESENT;
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.gNB_CU_UE_F1AP_ID_List.UEID_GNB_CU_CP_F1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx23 -ROOTS5 UEID-GNB-CU-CP-F1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_UE_F1AP_ID -idx25- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.gNB_CU_UE_F1AP_ID_List.UEID_GNB_CU_CP_F1AP_ID_Item[0].gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx25- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx23 UEID-GNB-CU-CP-F1AP-ID-Item -ROOTS5 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_G_NB_CU_CP_UE_E1AP_ID_LIST_PRESENT;
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx27 -ROOTS6 UEID-GNB-CU-CP-E1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx29- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item[0].gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx29- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx27 UEID-GNB-CU-CP-E1AP-ID-Item -ROOTS6 ===*/

    //end of hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = 8 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx31- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->RANUEID
    OSOCTET temp_buff_for_ran_UEID[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.ran_UEID.data, temp_buff_for_ran_UEID, sizeof(temp_buff_for_ran_UEID)); // change octetstring data here
    //end of hc-ran_UEID -idx31- alias primitive

    //end of hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = 8
    //hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = 6 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_M_NG_RAN_UE_XN_AP_ID_PRESENT;
    //hc-m_NG_RAN_UE_XnAP_ID -idx33- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->NG-RANnodeUEXnAPID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.m_NG_RAN_UE_XnAP_ID = 2147483647;// change integer here
    //end of hc-m_NG_RAN_UE_XnAP_ID -idx33- alias primitive
    //end of hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = 6
    //hc-sequence-ELEM 7: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_GLOBAL_GNB_ID_PRESENT;
    /*=== START SEQUENCE -idx35 -ROOTS7 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx37- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_1[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalGNB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_1);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalGNB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_1, sizeof(temp_buff_for_pLMNIdentity_1)); // change octetstring data here
    //end of hc-pLMNIdentity -idx37- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc3 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx40 -rootc3: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalGNB_ID.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx41- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalGNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalGNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID, 3);
    //end of hc-gNB_ID -idx41- primitive
    #endif /*choice-ELEM 1 -idx40 -rootc3 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc3 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx35 GlobalGNB-ID -ROOTS7 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 8: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_GLOBAL_NG_RANNODE_ID_PRESENT;
    /*=== START CHOICE -rootc4 - GlobalNGRANNodeID ===*/
    #if 1 //hc-choice-ELEM 1 -idx44 -rootc4: GlobalNGRANNodeID->GlobalGNB_ID - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_G_NB;
    /*=== START SEQUENCE -idx45 -ROOTS8 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx47- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_2[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_2);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_2, sizeof(temp_buff_for_pLMNIdentity_2)); // change octetstring data here
    //end of hc-pLMNIdentity -idx47- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc5 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx50 -rootc5: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx51- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_1[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_1, 3);
    //end of hc-gNB_ID -idx51- primitive
    #endif /*choice-ELEM 1 -idx50 -rootc5 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc5 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx45 GlobalGNB-ID -ROOTS8 ===*/

    #endif /*choice-ELEM 1 -idx44 -rootc4 - GlobalNGRANNodeID->GlobalGNB-ID */

    #if 0 //hc-choice-ELEM 2 -idx52 -rootc4: GlobalNGRANNodeID->GlobalNgENB-ID - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_NG_E_NB;
    /*=== START SEQUENCE -idx53 -ROOTS9 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx55- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_3[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_3);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_3, sizeof(temp_buff_for_pLMNIdentity_3)); // change octetstring data here
    //end of hc-pLMNIdentity -idx55- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc6 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx58 -rootc6: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx59- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID, 3);
    //end of hc-macroNgENB_ID -idx59- primitive
    #endif /*choice-ELEM 1 -idx58 -rootc6 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx60 -rootc6: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx61- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID, 3);
    //end of hc-shortMacroNgENB_ID -idx61- primitive
    #endif /*choice-ELEM 2 -idx60 -rootc6 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx62 -rootc6: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx63- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID, 3);
    //end of hc-longMacroNgENB_ID -idx63- primitive
    #endif /*choice-ELEM 3 -idx62 -rootc6 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc6 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx53 GlobalNgENB-ID -ROOTS9 ===*/

    #endif /*choice-ELEM 2 -idx52 -rootc4 - GlobalNGRANNodeID->GlobalNgENB-ID */

    /*=== END CHOICE -rootc4 - GlobalNGRANNodeID ===*/

    //end of hc-sequence-ELEM 8: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 9: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx65 -ROOTS10 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx67- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx67- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc7 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx70 -rootc7: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx71 -ROOTS11 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx73- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_4[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_4);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_4, sizeof(temp_buff_for_pLMNIdentity_4)); // change octetstring data here
    //end of hc-pLMNIdentity -idx73- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx75- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx75- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx71 NR-CGI -ROOTS11 ===*/

    #endif /*choice-ELEM 1 -idx70 -rootc7 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx76 -rootc7: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx77 -ROOTS12 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx79- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_5[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_5);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_5, sizeof(temp_buff_for_pLMNIdentity_5)); // change octetstring data here
    //end of hc-pLMNIdentity -idx79- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx81- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx81- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx77 EUTRA-CGI -ROOTS12 ===*/

    #endif /*choice-ELEM 2 -idx76 -rootc7 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc7 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx65 Cell-RNTI -ROOTS10 ===*/

    //end of hc-sequence-ELEM 9: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB alias = -1
    /*=== END SEQUENCE -idx9 UEID-GNB -ROOTS3 ===*/

    #endif /*choice-ELEM 1 -idx8 -rootc2 - UEID->UEID-GNB */

    #if 0 //hc-choice-ELEM 2 -idx82 -rootc2: UEID->UEID-GNB-DU - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.choice_type = E2AP_UEID_e2ap_G_NB_DU_UEID;
    /*=== START SEQUENCE -idx83 -ROOTS13 UEID-GNB-DU ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU alias = 6 -mandatory
    //hc-gNB_CU_UE_F1AP_ID -idx85- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_DU_UEID.gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx85- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU alias = 8 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_DU_UEID.bitmask |= E2AP_UEID_GNB_DU_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx87- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->RANUEID
    OSOCTET temp_buff_for_ran_UEID_1[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_DU_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_1);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_DU_UEID.ran_UEID.data, temp_buff_for_ran_UEID_1, sizeof(temp_buff_for_ran_UEID_1)); // change octetstring data here
    //end of hc-ran_UEID -idx87- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU alias = 8
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_DU_UEID.bitmask |= E2AP_UEID_GNB_DU_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx89 -ROOTS14 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx91- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_DU_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx91- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc8 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx94 -rootc8: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx95 -ROOTS15 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx97- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_6[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_6);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_6, sizeof(temp_buff_for_pLMNIdentity_6)); // change octetstring data here
    //end of hc-pLMNIdentity -idx97- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx99- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_1[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_1, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx99- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx95 NR-CGI -ROOTS15 ===*/

    #endif /*choice-ELEM 1 -idx94 -rootc8 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx100 -rootc8: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx101 -ROOTS16 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx103- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_7[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_7);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_7, sizeof(temp_buff_for_pLMNIdentity_7)); // change octetstring data here
    //end of hc-pLMNIdentity -idx103- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx105- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_1[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_1, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx105- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx101 EUTRA-CGI -ROOTS16 ===*/

    #endif /*choice-ELEM 2 -idx100 -rootc8 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc8 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx89 Cell-RNTI -ROOTS14 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU alias = -1
    /*=== END SEQUENCE -idx83 UEID-GNB-DU -ROOTS13 ===*/

    #endif /*choice-ELEM 2 -idx82 -rootc2 - UEID->UEID-GNB-DU */

    #if 0 //hc-choice-ELEM 3 -idx106 -rootc2: UEID->UEID-GNB-CU-UP - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.choice_type = E2AP_UEID_e2ap_G_NB_CU_UP_UEID;
    /*=== START SEQUENCE -idx107 -ROOTS17 UEID-GNB-CU-UP ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-CU-UP alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx109- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-CU-UP->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_CU_UP_UEID.gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx109- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-CU-UP alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-CU-UP alias = 8 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_CU_UP_UEID.bitmask |= E2AP_UEID_GNB_CU_UP_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx111- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-CU-UP->RANUEID
    OSOCTET temp_buff_for_ran_UEID_2[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_CU_UP_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_2);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.gNB_CU_UP_UEID.ran_UEID.data, temp_buff_for_ran_UEID_2, sizeof(temp_buff_for_ran_UEID_2)); // change octetstring data here
    //end of hc-ran_UEID -idx111- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-CU-UP alias = 8
    /*=== END SEQUENCE -idx107 UEID-GNB-CU-UP -ROOTS17 ===*/

    #endif /*choice-ELEM 3 -idx106 -rootc2 - UEID->UEID-GNB-CU-UP */

    #if 0 //hc-choice-ELEM 4 -idx112 -rootc2: UEID->UEID-NG-ENB - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.choice_type = E2AP_UEID_e2ap_NG_E_NB_UEID;
    /*=== START SEQUENCE -idx113 -ROOTS18 UEID-NG-ENB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB alias = 6 -mandatory
    //hc-amf_UE_NGAP_ID -idx115- alias primitive - pid = 6 - INTEGER - min:0 - max:1099511627775  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->AMF-UE-NGAP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.amf_UE_NGAP_ID = 549755813887;// change integer here
    //end of hc-amf_UE_NGAP_ID -idx115- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB alias = -1 -mandatory
    /*=== START SEQUENCE -idx117 -ROOTS19 GUAMI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GUAMI alias = 8 -mandatory
    //hc-pLMNIdentity -idx119- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GUAMI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_8[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.guami.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_8);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.guami.pLMNIdentity.data, temp_buff_for_pLMNIdentity_8, sizeof(temp_buff_for_pLMNIdentity_8)); // change octetstring data here
    //end of hc-pLMNIdentity -idx119- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GUAMI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFRegionID -idx121- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GUAMI->AMFRegionID
    OSOCTET temp_buff_for_aMFRegionID_1[] = {0x01}; // min =8 - max = 8 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.guami.aMFRegionID.numbits = 8;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.guami.aMFRegionID.data, temp_buff_for_aMFRegionID_1, 1); // change bitstring data here
    //end of hc-aMFRegionID -idx121- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GUAMI alias = 3
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFSetID -idx123- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GUAMI->AMFSetID
    OSOCTET temp_buff_for_aMFSetID_1[] = {0x01, 0x02}; // min =10 - max = 10 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.guami.aMFSetID.numbits = 10;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.guami.aMFSetID.data, temp_buff_for_aMFSetID_1, 2); // change bitstring data here
    //end of hc-aMFSetID -idx123- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GUAMI alias = 3
    //hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFPointer -idx125- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GUAMI->AMFPointer
    OSOCTET temp_buff_for_aMFPointer_1[] = {0x01}; // min =6 - max = 6 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.guami.aMFPointer.numbits = 6;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.guami.aMFPointer.data, temp_buff_for_aMFPointer_1, 1); // change bitstring data here
    //end of hc-aMFPointer -idx125- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GUAMI alias = 3
    /*=== END SEQUENCE -idx117 GUAMI -ROOTS19 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB alias = 6 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_NG_E_NB_CU_UE_W1AP_ID_PRESENT;
    //hc-ng_eNB_CU_UE_W1AP_ID -idx127- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->NGENB-CU-UE-W1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.ng_eNB_CU_UE_W1AP_ID = 2147483647;// change integer here
    //end of hc-ng_eNB_CU_UE_W1AP_ID -idx127- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB alias = 6 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_M_NG_RAN_UE_XN_AP_ID_PRESENT;
    //hc-m_NG_RAN_UE_XnAP_ID -idx129- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->NG-RANnodeUEXnAPID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.m_NG_RAN_UE_XnAP_ID = 2147483647;// change integer here
    //end of hc-m_NG_RAN_UE_XnAP_ID -idx129- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_GLOBAL_NG_ENB_ID_PRESENT;
    /*=== START SEQUENCE -idx131 -ROOTS20 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx133- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_9[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNgENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_9);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNgENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_9, sizeof(temp_buff_for_pLMNIdentity_9)); // change octetstring data here
    //end of hc-pLMNIdentity -idx133- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc9 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx136 -rootc9: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx137- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_1[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_1, 3);
    //end of hc-macroNgENB_ID -idx137- primitive
    #endif /*choice-ELEM 1 -idx136 -rootc9 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx138 -rootc9: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx139- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_1[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_1, 3);
    //end of hc-shortMacroNgENB_ID -idx139- primitive
    #endif /*choice-ELEM 2 -idx138 -rootc9 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx140 -rootc9: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx141- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_1[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_1, 3);
    //end of hc-longMacroNgENB_ID -idx141- primitive
    #endif /*choice-ELEM 3 -idx140 -rootc9 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc9 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx131 GlobalNgENB-ID -ROOTS20 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_GLOBAL_NG_RANNODE_ID_PRESENT;
    /*=== START CHOICE -rootc10 - GlobalNGRANNodeID ===*/
    #if 1 //hc-choice-ELEM 1 -idx144 -rootc10: GlobalNGRANNodeID->GlobalGNB_ID - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_G_NB;
    /*=== START SEQUENCE -idx145 -ROOTS21 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx147- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_10[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_10);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_10, sizeof(temp_buff_for_pLMNIdentity_10)); // change octetstring data here
    //end of hc-pLMNIdentity -idx147- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc11 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx150 -rootc11: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx151- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_2[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_2, 3);
    //end of hc-gNB_ID -idx151- primitive
    #endif /*choice-ELEM 1 -idx150 -rootc11 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc11 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx145 GlobalGNB-ID -ROOTS21 ===*/

    #endif /*choice-ELEM 1 -idx144 -rootc10 - GlobalNGRANNodeID->GlobalGNB-ID */

    #if 0 //hc-choice-ELEM 2 -idx152 -rootc10: GlobalNGRANNodeID->GlobalNgENB-ID - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_NG_E_NB;
    /*=== START SEQUENCE -idx153 -ROOTS22 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx155- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_11[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_11);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_11, sizeof(temp_buff_for_pLMNIdentity_11)); // change octetstring data here
    //end of hc-pLMNIdentity -idx155- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc12 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx158 -rootc12: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx159- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_2[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_2, 3);
    //end of hc-macroNgENB_ID -idx159- primitive
    #endif /*choice-ELEM 1 -idx158 -rootc12 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx160 -rootc12: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx161- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_2[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_2, 3);
    //end of hc-shortMacroNgENB_ID -idx161- primitive
    #endif /*choice-ELEM 2 -idx160 -rootc12 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx162 -rootc12: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx163- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_2[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_2, 3);
    //end of hc-longMacroNgENB_ID -idx163- primitive
    #endif /*choice-ELEM 3 -idx162 -rootc12 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc12 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx153 GlobalNgENB-ID -ROOTS22 ===*/

    #endif /*choice-ELEM 2 -idx152 -rootc10 - GlobalNGRANNodeID->GlobalNgENB-ID */

    /*=== END CHOICE -rootc10 - GlobalNGRANNodeID ===*/

    //end of hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 7: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx165 -ROOTS23 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx167- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx167- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc13 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx170 -rootc13: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx171 -ROOTS24 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx173- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_12[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_12);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_12, sizeof(temp_buff_for_pLMNIdentity_12)); // change octetstring data here
    //end of hc-pLMNIdentity -idx173- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx175- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_2[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_2, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx175- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx171 NR-CGI -ROOTS24 ===*/

    #endif /*choice-ELEM 1 -idx170 -rootc13 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx176 -rootc13: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx177 -ROOTS25 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx179- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_13[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_13);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_13, sizeof(temp_buff_for_pLMNIdentity_13)); // change octetstring data here
    //end of hc-pLMNIdentity -idx179- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx181- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_2[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_2, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx181- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx177 EUTRA-CGI -ROOTS25 ===*/

    #endif /*choice-ELEM 2 -idx176 -rootc13 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc13 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx165 Cell-RNTI -ROOTS23 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB alias = -1
    /*=== END SEQUENCE -idx113 UEID-NG-ENB -ROOTS18 ===*/

    #endif /*choice-ELEM 4 -idx112 -rootc2 - UEID->UEID-NG-ENB */

    #if 0 //hc-choice-ELEM 5 -idx182 -rootc2: UEID->UEID-NG-ENB-DU - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.choice_type = E2AP_UEID_e2ap_NG_E_NB_DU_UEID;
    /*=== START SEQUENCE -idx183 -ROOTS26 UEID-NG-ENB-DU ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU alias = 6 -mandatory
    //hc-ng_eNB_CU_UE_W1AP_ID -idx185- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->NGENB-CU-UE-W1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_DU_UEID.ng_eNB_CU_UE_W1AP_ID = 2147483647;// change integer here
    //end of hc-ng_eNB_CU_UE_W1AP_ID -idx185- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_DU_UEID.bitmask |= E2AP_UEID_NG_ENB_DU_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx187 -ROOTS27 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx189- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_DU_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx189- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc14 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx192 -rootc14: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx193 -ROOTS28 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx195- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_14[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_14);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_14, sizeof(temp_buff_for_pLMNIdentity_14)); // change octetstring data here
    //end of hc-pLMNIdentity -idx195- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx197- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_3[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_3, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx197- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx193 NR-CGI -ROOTS28 ===*/

    #endif /*choice-ELEM 1 -idx192 -rootc14 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx198 -rootc14: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx199 -ROOTS29 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx201- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_15[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_15);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_15, sizeof(temp_buff_for_pLMNIdentity_15)); // change octetstring data here
    //end of hc-pLMNIdentity -idx201- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx203- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_3[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_3, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx203- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx199 EUTRA-CGI -ROOTS29 ===*/

    #endif /*choice-ELEM 2 -idx198 -rootc14 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc14 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx187 Cell-RNTI -ROOTS27 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU alias = -1
    /*=== END SEQUENCE -idx183 UEID-NG-ENB-DU -ROOTS26 ===*/

    #endif /*choice-ELEM 5 -idx182 -rootc2 - UEID->UEID-NG-ENB-DU */

    #if 0 //hc-choice-ELEM 6 -idx204 -rootc2: UEID->UEID-EN-GNB - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.choice_type = E2AP_UEID_e2ap_EN_G_NB_UEID;
    /*=== START SEQUENCE -idx205 -ROOTS30 UEID-EN-GNB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB alias = 6 -mandatory
    //hc-m_eNB_UE_X2AP_ID -idx207- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.m_eNB_UE_X2AP_ID = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID -idx207- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB alias = 5 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_M_E_NB_UE_X2AP_ID_EXTENSION_PRESENT;
    //hc-m_eNB_UE_X2AP_ID_Extension -idx209- alias primitive - pid = 5 - INTEGER - min:0 - max:4095  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID-Extension
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.m_eNB_UE_X2AP_ID_Extension = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID_Extension -idx209- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB alias = 5
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB alias = -1 -mandatory
    /*=== START SEQUENCE -idx211 -ROOTS31 GlobalENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GlobalENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx213- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GlobalENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_16[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.globalENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_16);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.globalENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_16, sizeof(temp_buff_for_pLMNIdentity_16)); // change octetstring data here
    //end of hc-pLMNIdentity -idx213- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GlobalENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GlobalENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc15 - ENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx216 -rootc15: ENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    //hc-macro_eNB_ID -idx217- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->macro-eNB-ID
    OSOCTET temp_buff_for_macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID, 3);
    //end of hc-macro_eNB_ID -idx217- primitive
    #endif /*choice-ELEM 1 -idx216 -rootc15 - ENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx218 -rootc15: ENB-ID->BIT STRING (SIZE(28)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    //hc-home_eNB_ID -idx219- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->home-eNB-ID
    OSOCTET temp_buff_for_home_eNB_ID[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID, 4);
    //end of hc-home_eNB_ID -idx219- primitive
    #endif /*choice-ELEM 2 -idx218 -rootc15 - ENB-ID->BIT STRING (SIZE(28)) */

    #if 0 //hc-choice-ELEM 3 -idx220 -rootc15: ENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    //hc-short_Macro_eNB_ID -idx221- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    OSOCTET temp_buff_for_short_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID, 3);
    //end of hc-short_Macro_eNB_ID -idx221- primitive
    #endif /*choice-ELEM 3 -idx220 -rootc15 - ENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 4 -idx222 -rootc15: ENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    //hc-long_Macro_eNB_ID -idx223- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    OSOCTET temp_buff_for_long_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID, 3);
    //end of hc-long_Macro_eNB_ID -idx223- primitive
    #endif /*choice-ELEM 4 -idx222 -rootc15 - ENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc15 - ENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GlobalENB-ID alias = -1
    /*=== END SEQUENCE -idx211 GlobalENB-ID -ROOTS31 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB alias = -1
    //hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB alias = 6 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_G_NB_CU_UE_F1AP_ID_PRESENT;
    //hc-gNB_CU_UE_F1AP_ID -idx225- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx225- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB alias = 6
    //hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_G_NB_CU_CP_UE_E1AP_ID_LIST_PRESENT;
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx227 -ROOTS32 UEID-GNB-CU-CP-E1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx229- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item[0].gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx229- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx227 UEID-GNB-CU-CP-E1AP-ID-Item -ROOTS32 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB alias = 8 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx231- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->RANUEID
    OSOCTET temp_buff_for_ran_UEID_3[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_3);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.ran_UEID.data, temp_buff_for_ran_UEID_3, sizeof(temp_buff_for_ran_UEID_3)); // change octetstring data here
    //end of hc-ran_UEID -idx231- alias primitive

    //end of hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB alias = 8
    //hc-sequence-ELEM 7: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx233 -ROOTS33 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx235- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx235- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc16 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx238 -rootc16: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx239 -ROOTS34 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx241- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_17[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_17);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_17, sizeof(temp_buff_for_pLMNIdentity_17)); // change octetstring data here
    //end of hc-pLMNIdentity -idx241- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx243- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_4[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_4, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx243- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx239 NR-CGI -ROOTS34 ===*/

    #endif /*choice-ELEM 1 -idx238 -rootc16 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx244 -rootc16: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx245 -ROOTS35 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx247- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_18[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_18);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_18, sizeof(temp_buff_for_pLMNIdentity_18)); // change octetstring data here
    //end of hc-pLMNIdentity -idx247- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx249- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_4[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_4, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx249- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx245 EUTRA-CGI -ROOTS35 ===*/

    #endif /*choice-ELEM 2 -idx244 -rootc16 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc16 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx233 Cell-RNTI -ROOTS33 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB alias = -1
    /*=== END SEQUENCE -idx205 UEID-EN-GNB -ROOTS30 ===*/

    #endif /*choice-ELEM 6 -idx204 -rootc2 - UEID->UEID-EN-GNB */

    #if 0 //hc-choice-ELEM 7 -idx250 -rootc2: UEID->UEID-ENB - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.choice_type = E2AP_UEID_e2ap_E_NB_UEID;
    /*=== START SEQUENCE -idx251 -ROOTS36 UEID-ENB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB alias = 6 -mandatory
    //hc-mME_UE_S1AP_ID -idx253- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->MME-UE-S1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.mME_UE_S1AP_ID = 2147483647;// change integer here
    //end of hc-mME_UE_S1AP_ID -idx253- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB alias = -1 -mandatory
    /*=== START SEQUENCE -idx255 -ROOTS37 GUMMEI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-pLMN_Identity -idx257- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GUMMEI->PLMNIdentity
    OSOCTET temp_buff_for_pLMN_Identity[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.gUMMEI.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.gUMMEI.pLMN_Identity.data, temp_buff_for_pLMN_Identity, sizeof(temp_buff_for_pLMN_Identity)); // change octetstring data here
    //end of hc-pLMN_Identity -idx257- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GUMMEI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-mME_Group_ID -idx259- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GUMMEI->MME-Group-ID
    OSOCTET temp_buff_for_mME_Group_ID[] = {0x01, 0x02}; // min =2 - max = 2 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.gUMMEI.mME_Group_ID.numocts = sizeof(temp_buff_for_mME_Group_ID);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.gUMMEI.mME_Group_ID.data, temp_buff_for_mME_Group_ID, sizeof(temp_buff_for_mME_Group_ID)); // change octetstring data here
    //end of hc-mME_Group_ID -idx259- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GUMMEI alias = 8
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-mME_Code -idx261- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GUMMEI->MME-Code
    OSOCTET temp_buff_for_mME_Code[] = {0x01}; // min =1 - max = 1 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.gUMMEI.mME_Code.numocts = sizeof(temp_buff_for_mME_Code);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.gUMMEI.mME_Code.data, temp_buff_for_mME_Code, sizeof(temp_buff_for_mME_Code)); // change octetstring data here
    //end of hc-mME_Code -idx261- alias primitive

    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GUMMEI alias = 8
    /*=== END SEQUENCE -idx255 GUMMEI -ROOTS37 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB alias = 6 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_M_E_NB_UE_X2AP_ID_PRESENT;
    //hc-m_eNB_UE_X2AP_ID -idx263- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->ENB-UE-X2AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.m_eNB_UE_X2AP_ID = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID -idx263- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB alias = 6
    //hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB alias = 5 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_M_E_NB_UE_X2AP_ID_EXTENSION_PRESENT;
    //hc-m_eNB_UE_X2AP_ID_Extension -idx265- alias primitive - pid = 5 - INTEGER - min:0 - max:4095  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->ENB-UE-X2AP-ID-Extension
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.m_eNB_UE_X2AP_ID_Extension = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID_Extension -idx265- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB alias = 5
    //hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_GLOBAL_ENB_ID_PRESENT;
    /*=== START SEQUENCE -idx267 -ROOTS38 GlobalENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GlobalENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx269- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GlobalENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_19[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.globalENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_19);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.globalENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_19, sizeof(temp_buff_for_pLMNIdentity_19)); // change octetstring data here
    //end of hc-pLMNIdentity -idx269- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GlobalENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GlobalENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc17 - ENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx272 -rootc17: ENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    //hc-macro_eNB_ID -idx273- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->macro-eNB-ID
    OSOCTET temp_buff_for_macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_1, 3);
    //end of hc-macro_eNB_ID -idx273- primitive
    #endif /*choice-ELEM 1 -idx272 -rootc17 - ENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx274 -rootc17: ENB-ID->BIT STRING (SIZE(28)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    //hc-home_eNB_ID -idx275- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->home-eNB-ID
    OSOCTET temp_buff_for_home_eNB_ID_1[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_1, 4);
    //end of hc-home_eNB_ID -idx275- primitive
    #endif /*choice-ELEM 2 -idx274 -rootc17 - ENB-ID->BIT STRING (SIZE(28)) */

    #if 0 //hc-choice-ELEM 3 -idx276 -rootc17: ENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    //hc-short_Macro_eNB_ID -idx277- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    OSOCTET temp_buff_for_short_Macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_1, 3);
    //end of hc-short_Macro_eNB_ID -idx277- primitive
    #endif /*choice-ELEM 3 -idx276 -rootc17 - ENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 4 -idx278 -rootc17: ENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    //hc-long_Macro_eNB_ID -idx279- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    OSOCTET temp_buff_for_long_Macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_1, 3);
    //end of hc-long_Macro_eNB_ID -idx279- primitive
    #endif /*choice-ELEM 4 -idx278 -rootc17 - ENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc17 - ENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GlobalENB-ID alias = -1
    /*=== END SEQUENCE -idx267 GlobalENB-ID -ROOTS38 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx281 -ROOTS39 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx283- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx283- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc18 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx286 -rootc18: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx287 -ROOTS40 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx289- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_20[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_20);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_20, sizeof(temp_buff_for_pLMNIdentity_20)); // change octetstring data here
    //end of hc-pLMNIdentity -idx289- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx291- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_5[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_5, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx291- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx287 NR-CGI -ROOTS40 ===*/

    #endif /*choice-ELEM 1 -idx286 -rootc18 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx292 -rootc18: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx293 -ROOTS41 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx295- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_21[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_21);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_21, sizeof(temp_buff_for_pLMNIdentity_21)); // change octetstring data here
    //end of hc-pLMNIdentity -idx295- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx297- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_5[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_5, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx297- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx293 EUTRA-CGI -ROOTS41 ===*/

    #endif /*choice-ELEM 2 -idx292 -rootc18 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc18 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx281 Cell-RNTI -ROOTS39 ===*/

    //end of hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB alias = -1
    /*=== END SEQUENCE -idx251 UEID-ENB -ROOTS36 ===*/

    #endif /*choice-ELEM 7 -idx250 -rootc2 - UEID->UEID-ENB */

    /*=== END CHOICE -rootc2 - UEID ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1 alias = -1
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1 alias = 15 -mandatory
    //hc-ric_Style_Type -idx299- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->RIC-Style-Type
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ric_Style_Type = 875;// change integer here
    //end of hc-ric_Style_Type -idx299- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1 alias = 15
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1 alias = 5 -mandatory
    //hc-ric_ControlAction_ID -idx301- alias primitive - pid = 5 - INTEGER - min:1 - max:65535  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->RIC-ControlAction-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ric_ControlAction_ID = 32768;// change integer here
    //end of hc-ric_ControlAction_ID -idx301- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1 alias = 5
    //hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1 alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.bitmask |= E2AP_E2SM_RC_CONTROL_HEADER_FORMAT1_e2ap_RIC_CONTROL_DECISION_PRESENT;
    //hc-ric_ControlDecision -idx303- primitive in scope - pid = 13 ENUMURATE - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->ric-ControlDecision
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format1.ric_ControlDecision = E2AP_E2SM_RC_CONTROL_HEADER_FORMAT1_RIC_CONTROL_DECISION_ACCEPT; // change enum value here
    //end of hc-ric_ControlDecision -idx303- primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1 alias = -1
    /*=== END SEQUENCE -idx5 E2SM-RC-ControlHeader-Format1 -ROOTS2 ===*/

    #endif /*choice-ELEM 1 -idx4 -rootc1 - E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1 */

    #if 0 //hc-choice-ELEM 2 -idx304 -rootc1: E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2 - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.choice_type = E2AP_E2SM_RC_CONTROL_HEADER_RIC_CONTROL_HEADER_FORMATS_e2ap_CONTROL_HEADER_FORMAT2;
    /*=== START SEQUENCE -idx305 -ROOTS42 E2SM-RC-ControlHeader-Format2 ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2 alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.bitmask |= E2AP_E2SM_RC_CONTROL_HEADER_FORMAT2_e2ap_UE_ID_PRESENT;
    /*=== START CHOICE -rootc19 - UEID ===*/
    #if 1 //hc-choice-ELEM 1 -idx308 -rootc19: UEID->UEID_GNB - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.choice_type = E2AP_UEID_e2ap_G_NB_UEID;
    /*=== START SEQUENCE -idx309 -ROOTS43 UEID-GNB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = 6 -mandatory
    //hc-amf_UE_NGAP_ID -idx311- alias primitive - pid = 6 - INTEGER - min:0 - max:1099511627775  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->AMF-UE-NGAP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.amf_UE_NGAP_ID = 549755813887;// change integer here
    //end of hc-amf_UE_NGAP_ID -idx311- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = -1 -mandatory
    /*=== START SEQUENCE -idx313 -ROOTS44 GUAMI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GUAMI alias = 8 -mandatory
    //hc-pLMNIdentity -idx315- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GUAMI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_22[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.guami.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_22);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.guami.pLMNIdentity.data, temp_buff_for_pLMNIdentity_22, sizeof(temp_buff_for_pLMNIdentity_22)); // change octetstring data here
    //end of hc-pLMNIdentity -idx315- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GUAMI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFRegionID -idx317- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GUAMI->AMFRegionID
    OSOCTET temp_buff_for_aMFRegionID_2[] = {0x01}; // min =8 - max = 8 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.guami.aMFRegionID.numbits = 8;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.guami.aMFRegionID.data, temp_buff_for_aMFRegionID_2, 1); // change bitstring data here
    //end of hc-aMFRegionID -idx317- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GUAMI alias = 3
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFSetID -idx319- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GUAMI->AMFSetID
    OSOCTET temp_buff_for_aMFSetID_2[] = {0x01, 0x02}; // min =10 - max = 10 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.guami.aMFSetID.numbits = 10;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.guami.aMFSetID.data, temp_buff_for_aMFSetID_2, 2); // change bitstring data here
    //end of hc-aMFSetID -idx319- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GUAMI alias = 3
    //hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFPointer -idx321- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GUAMI->AMFPointer
    OSOCTET temp_buff_for_aMFPointer_2[] = {0x01}; // min =6 - max = 6 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.guami.aMFPointer.numbits = 6;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.guami.aMFPointer.data, temp_buff_for_aMFPointer_2, 1); // change bitstring data here
    //end of hc-aMFPointer -idx321- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GUAMI alias = 3
    /*=== END SEQUENCE -idx313 GUAMI -ROOTS44 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_G_NB_CU_UE_F1AP_ID_LIST_PRESENT;
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.gNB_CU_UE_F1AP_ID_List.UEID_GNB_CU_CP_F1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx323 -ROOTS45 UEID-GNB-CU-CP-F1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_UE_F1AP_ID -idx325- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.gNB_CU_UE_F1AP_ID_List.UEID_GNB_CU_CP_F1AP_ID_Item[0].gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx325- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx323 UEID-GNB-CU-CP-F1AP-ID-Item -ROOTS45 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_G_NB_CU_CP_UE_E1AP_ID_LIST_PRESENT;
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx327 -ROOTS46 UEID-GNB-CU-CP-E1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx329- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item[0].gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx329- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx327 UEID-GNB-CU-CP-E1AP-ID-Item -ROOTS46 ===*/

    //end of hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = 8 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx331- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->RANUEID
    OSOCTET temp_buff_for_ran_UEID_4[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_4);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.ran_UEID.data, temp_buff_for_ran_UEID_4, sizeof(temp_buff_for_ran_UEID_4)); // change octetstring data here
    //end of hc-ran_UEID -idx331- alias primitive

    //end of hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = 8
    //hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = 6 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_M_NG_RAN_UE_XN_AP_ID_PRESENT;
    //hc-m_NG_RAN_UE_XnAP_ID -idx333- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->NG-RANnodeUEXnAPID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.m_NG_RAN_UE_XnAP_ID = 2147483647;// change integer here
    //end of hc-m_NG_RAN_UE_XnAP_ID -idx333- alias primitive
    //end of hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = 6
    //hc-sequence-ELEM 7: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_GLOBAL_GNB_ID_PRESENT;
    /*=== START SEQUENCE -idx335 -ROOTS47 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx337- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_23[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalGNB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_23);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalGNB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_23, sizeof(temp_buff_for_pLMNIdentity_23)); // change octetstring data here
    //end of hc-pLMNIdentity -idx337- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc20 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx340 -rootc20: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalGNB_ID.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx341- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_3[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalGNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalGNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_3, 3);
    //end of hc-gNB_ID -idx341- primitive
    #endif /*choice-ELEM 1 -idx340 -rootc20 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc20 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx335 GlobalGNB-ID -ROOTS47 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 8: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_GLOBAL_NG_RANNODE_ID_PRESENT;
    /*=== START CHOICE -rootc21 - GlobalNGRANNodeID ===*/
    #if 1 //hc-choice-ELEM 1 -idx344 -rootc21: GlobalNGRANNodeID->GlobalGNB_ID - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_G_NB;
    /*=== START SEQUENCE -idx345 -ROOTS48 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx347- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_24[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_24);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_24, sizeof(temp_buff_for_pLMNIdentity_24)); // change octetstring data here
    //end of hc-pLMNIdentity -idx347- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc22 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx350 -rootc22: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx351- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_4[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_4, 3);
    //end of hc-gNB_ID -idx351- primitive
    #endif /*choice-ELEM 1 -idx350 -rootc22 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc22 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx345 GlobalGNB-ID -ROOTS48 ===*/

    #endif /*choice-ELEM 1 -idx344 -rootc21 - GlobalNGRANNodeID->GlobalGNB-ID */

    #if 0 //hc-choice-ELEM 2 -idx352 -rootc21: GlobalNGRANNodeID->GlobalNgENB-ID - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_NG_E_NB;
    /*=== START SEQUENCE -idx353 -ROOTS49 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx355- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_25[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_25);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_25, sizeof(temp_buff_for_pLMNIdentity_25)); // change octetstring data here
    //end of hc-pLMNIdentity -idx355- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc23 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx358 -rootc23: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx359- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_3[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_3, 3);
    //end of hc-macroNgENB_ID -idx359- primitive
    #endif /*choice-ELEM 1 -idx358 -rootc23 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx360 -rootc23: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx361- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_3[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_3, 3);
    //end of hc-shortMacroNgENB_ID -idx361- primitive
    #endif /*choice-ELEM 2 -idx360 -rootc23 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx362 -rootc23: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx363- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_3[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_3, 3);
    //end of hc-longMacroNgENB_ID -idx363- primitive
    #endif /*choice-ELEM 3 -idx362 -rootc23 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc23 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx353 GlobalNgENB-ID -ROOTS49 ===*/

    #endif /*choice-ELEM 2 -idx352 -rootc21 - GlobalNGRANNodeID->GlobalNgENB-ID */

    /*=== END CHOICE -rootc21 - GlobalNGRANNodeID ===*/

    //end of hc-sequence-ELEM 8: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 9: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx365 -ROOTS50 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx367- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx367- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc24 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx370 -rootc24: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx371 -ROOTS51 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx373- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_26[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_26);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_26, sizeof(temp_buff_for_pLMNIdentity_26)); // change octetstring data here
    //end of hc-pLMNIdentity -idx373- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx375- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_6[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_6, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx375- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx371 NR-CGI -ROOTS51 ===*/

    #endif /*choice-ELEM 1 -idx370 -rootc24 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx376 -rootc24: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx377 -ROOTS52 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx379- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_27[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_27);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_27, sizeof(temp_buff_for_pLMNIdentity_27)); // change octetstring data here
    //end of hc-pLMNIdentity -idx379- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx381- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_6[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_6, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx381- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx377 EUTRA-CGI -ROOTS52 ===*/

    #endif /*choice-ELEM 2 -idx376 -rootc24 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc24 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx365 Cell-RNTI -ROOTS50 ===*/

    //end of hc-sequence-ELEM 9: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB alias = -1
    /*=== END SEQUENCE -idx309 UEID-GNB -ROOTS43 ===*/

    #endif /*choice-ELEM 1 -idx308 -rootc19 - UEID->UEID-GNB */

    #if 0 //hc-choice-ELEM 2 -idx382 -rootc19: UEID->UEID-GNB-DU - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.choice_type = E2AP_UEID_e2ap_G_NB_DU_UEID;
    /*=== START SEQUENCE -idx383 -ROOTS53 UEID-GNB-DU ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU alias = 6 -mandatory
    //hc-gNB_CU_UE_F1AP_ID -idx385- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_DU_UEID.gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx385- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU alias = 8 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_DU_UEID.bitmask |= E2AP_UEID_GNB_DU_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx387- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->RANUEID
    OSOCTET temp_buff_for_ran_UEID_5[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_DU_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_5);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_DU_UEID.ran_UEID.data, temp_buff_for_ran_UEID_5, sizeof(temp_buff_for_ran_UEID_5)); // change octetstring data here
    //end of hc-ran_UEID -idx387- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU alias = 8
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_DU_UEID.bitmask |= E2AP_UEID_GNB_DU_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx389 -ROOTS54 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx391- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx391- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc25 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx394 -rootc25: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx395 -ROOTS55 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx397- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_28[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_28);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_28, sizeof(temp_buff_for_pLMNIdentity_28)); // change octetstring data here
    //end of hc-pLMNIdentity -idx397- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx399- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_7[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_7, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx399- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx395 NR-CGI -ROOTS55 ===*/

    #endif /*choice-ELEM 1 -idx394 -rootc25 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx400 -rootc25: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx401 -ROOTS56 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx403- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_29[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_29);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_29, sizeof(temp_buff_for_pLMNIdentity_29)); // change octetstring data here
    //end of hc-pLMNIdentity -idx403- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx405- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_7[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_7, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx405- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx401 EUTRA-CGI -ROOTS56 ===*/

    #endif /*choice-ELEM 2 -idx400 -rootc25 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc25 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx389 Cell-RNTI -ROOTS54 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU alias = -1
    /*=== END SEQUENCE -idx383 UEID-GNB-DU -ROOTS53 ===*/

    #endif /*choice-ELEM 2 -idx382 -rootc19 - UEID->UEID-GNB-DU */

    #if 0 //hc-choice-ELEM 3 -idx406 -rootc19: UEID->UEID-GNB-CU-UP - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.choice_type = E2AP_UEID_e2ap_G_NB_CU_UP_UEID;
    /*=== START SEQUENCE -idx407 -ROOTS57 UEID-GNB-CU-UP ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-CU-UP alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx409- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-CU-UP->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_CU_UP_UEID.gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx409- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-CU-UP alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-CU-UP alias = 8 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_CU_UP_UEID.bitmask |= E2AP_UEID_GNB_CU_UP_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx411- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-CU-UP->RANUEID
    OSOCTET temp_buff_for_ran_UEID_6[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_CU_UP_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_6);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.gNB_CU_UP_UEID.ran_UEID.data, temp_buff_for_ran_UEID_6, sizeof(temp_buff_for_ran_UEID_6)); // change octetstring data here
    //end of hc-ran_UEID -idx411- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-CU-UP alias = 8
    /*=== END SEQUENCE -idx407 UEID-GNB-CU-UP -ROOTS57 ===*/

    #endif /*choice-ELEM 3 -idx406 -rootc19 - UEID->UEID-GNB-CU-UP */

    #if 0 //hc-choice-ELEM 4 -idx412 -rootc19: UEID->UEID-NG-ENB - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.choice_type = E2AP_UEID_e2ap_NG_E_NB_UEID;
    /*=== START SEQUENCE -idx413 -ROOTS58 UEID-NG-ENB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB alias = 6 -mandatory
    //hc-amf_UE_NGAP_ID -idx415- alias primitive - pid = 6 - INTEGER - min:0 - max:1099511627775  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->AMF-UE-NGAP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.amf_UE_NGAP_ID = 549755813887;// change integer here
    //end of hc-amf_UE_NGAP_ID -idx415- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB alias = -1 -mandatory
    /*=== START SEQUENCE -idx417 -ROOTS59 GUAMI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GUAMI alias = 8 -mandatory
    //hc-pLMNIdentity -idx419- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GUAMI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_30[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.guami.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_30);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.guami.pLMNIdentity.data, temp_buff_for_pLMNIdentity_30, sizeof(temp_buff_for_pLMNIdentity_30)); // change octetstring data here
    //end of hc-pLMNIdentity -idx419- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GUAMI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFRegionID -idx421- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GUAMI->AMFRegionID
    OSOCTET temp_buff_for_aMFRegionID_3[] = {0x01}; // min =8 - max = 8 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.guami.aMFRegionID.numbits = 8;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.guami.aMFRegionID.data, temp_buff_for_aMFRegionID_3, 1); // change bitstring data here
    //end of hc-aMFRegionID -idx421- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GUAMI alias = 3
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFSetID -idx423- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GUAMI->AMFSetID
    OSOCTET temp_buff_for_aMFSetID_3[] = {0x01, 0x02}; // min =10 - max = 10 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.guami.aMFSetID.numbits = 10;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.guami.aMFSetID.data, temp_buff_for_aMFSetID_3, 2); // change bitstring data here
    //end of hc-aMFSetID -idx423- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GUAMI alias = 3
    //hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFPointer -idx425- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GUAMI->AMFPointer
    OSOCTET temp_buff_for_aMFPointer_3[] = {0x01}; // min =6 - max = 6 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.guami.aMFPointer.numbits = 6;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.guami.aMFPointer.data, temp_buff_for_aMFPointer_3, 1); // change bitstring data here
    //end of hc-aMFPointer -idx425- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GUAMI alias = 3
    /*=== END SEQUENCE -idx417 GUAMI -ROOTS59 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB alias = 6 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_NG_E_NB_CU_UE_W1AP_ID_PRESENT;
    //hc-ng_eNB_CU_UE_W1AP_ID -idx427- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->NGENB-CU-UE-W1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.ng_eNB_CU_UE_W1AP_ID = 2147483647;// change integer here
    //end of hc-ng_eNB_CU_UE_W1AP_ID -idx427- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB alias = 6 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_M_NG_RAN_UE_XN_AP_ID_PRESENT;
    //hc-m_NG_RAN_UE_XnAP_ID -idx429- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->NG-RANnodeUEXnAPID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.m_NG_RAN_UE_XnAP_ID = 2147483647;// change integer here
    //end of hc-m_NG_RAN_UE_XnAP_ID -idx429- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_GLOBAL_NG_ENB_ID_PRESENT;
    /*=== START SEQUENCE -idx431 -ROOTS60 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx433- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_31[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_31);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_31, sizeof(temp_buff_for_pLMNIdentity_31)); // change octetstring data here
    //end of hc-pLMNIdentity -idx433- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc26 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx436 -rootc26: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx437- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_4[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_4, 3);
    //end of hc-macroNgENB_ID -idx437- primitive
    #endif /*choice-ELEM 1 -idx436 -rootc26 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx438 -rootc26: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx439- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_4[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_4, 3);
    //end of hc-shortMacroNgENB_ID -idx439- primitive
    #endif /*choice-ELEM 2 -idx438 -rootc26 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx440 -rootc26: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx441- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_4[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_4, 3);
    //end of hc-longMacroNgENB_ID -idx441- primitive
    #endif /*choice-ELEM 3 -idx440 -rootc26 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc26 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx431 GlobalNgENB-ID -ROOTS60 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_GLOBAL_NG_RANNODE_ID_PRESENT;
    /*=== START CHOICE -rootc27 - GlobalNGRANNodeID ===*/
    #if 1 //hc-choice-ELEM 1 -idx444 -rootc27: GlobalNGRANNodeID->GlobalGNB_ID - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_G_NB;
    /*=== START SEQUENCE -idx445 -ROOTS61 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx447- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_32[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_32);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_32, sizeof(temp_buff_for_pLMNIdentity_32)); // change octetstring data here
    //end of hc-pLMNIdentity -idx447- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc28 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx450 -rootc28: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx451- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_5[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_5, 3);
    //end of hc-gNB_ID -idx451- primitive
    #endif /*choice-ELEM 1 -idx450 -rootc28 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc28 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx445 GlobalGNB-ID -ROOTS61 ===*/

    #endif /*choice-ELEM 1 -idx444 -rootc27 - GlobalNGRANNodeID->GlobalGNB-ID */

    #if 0 //hc-choice-ELEM 2 -idx452 -rootc27: GlobalNGRANNodeID->GlobalNgENB-ID - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_NG_E_NB;
    /*=== START SEQUENCE -idx453 -ROOTS62 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx455- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_33[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_33);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_33, sizeof(temp_buff_for_pLMNIdentity_33)); // change octetstring data here
    //end of hc-pLMNIdentity -idx455- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc29 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx458 -rootc29: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx459- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_5[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_5, 3);
    //end of hc-macroNgENB_ID -idx459- primitive
    #endif /*choice-ELEM 1 -idx458 -rootc29 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx460 -rootc29: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx461- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_5[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_5, 3);
    //end of hc-shortMacroNgENB_ID -idx461- primitive
    #endif /*choice-ELEM 2 -idx460 -rootc29 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx462 -rootc29: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx463- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_5[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_5, 3);
    //end of hc-longMacroNgENB_ID -idx463- primitive
    #endif /*choice-ELEM 3 -idx462 -rootc29 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc29 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx453 GlobalNgENB-ID -ROOTS62 ===*/

    #endif /*choice-ELEM 2 -idx452 -rootc27 - GlobalNGRANNodeID->GlobalNgENB-ID */

    /*=== END CHOICE -rootc27 - GlobalNGRANNodeID ===*/

    //end of hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 7: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx465 -ROOTS63 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx467- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx467- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc30 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx470 -rootc30: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx471 -ROOTS64 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx473- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_34[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_34);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_34, sizeof(temp_buff_for_pLMNIdentity_34)); // change octetstring data here
    //end of hc-pLMNIdentity -idx473- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx475- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_8[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_8, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx475- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx471 NR-CGI -ROOTS64 ===*/

    #endif /*choice-ELEM 1 -idx470 -rootc30 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx476 -rootc30: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx477 -ROOTS65 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx479- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_35[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_35);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_35, sizeof(temp_buff_for_pLMNIdentity_35)); // change octetstring data here
    //end of hc-pLMNIdentity -idx479- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx481- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_8[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_8, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx481- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx477 EUTRA-CGI -ROOTS65 ===*/

    #endif /*choice-ELEM 2 -idx476 -rootc30 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc30 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx465 Cell-RNTI -ROOTS63 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB alias = -1
    /*=== END SEQUENCE -idx413 UEID-NG-ENB -ROOTS58 ===*/

    #endif /*choice-ELEM 4 -idx412 -rootc19 - UEID->UEID-NG-ENB */

    #if 0 //hc-choice-ELEM 5 -idx482 -rootc19: UEID->UEID-NG-ENB-DU - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.choice_type = E2AP_UEID_e2ap_NG_E_NB_DU_UEID;
    /*=== START SEQUENCE -idx483 -ROOTS66 UEID-NG-ENB-DU ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU alias = 6 -mandatory
    //hc-ng_eNB_CU_UE_W1AP_ID -idx485- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->NGENB-CU-UE-W1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_DU_UEID.ng_eNB_CU_UE_W1AP_ID = 2147483647;// change integer here
    //end of hc-ng_eNB_CU_UE_W1AP_ID -idx485- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_DU_UEID.bitmask |= E2AP_UEID_NG_ENB_DU_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx487 -ROOTS67 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx489- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx489- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc31 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx492 -rootc31: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx493 -ROOTS68 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx495- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_36[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_36);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_36, sizeof(temp_buff_for_pLMNIdentity_36)); // change octetstring data here
    //end of hc-pLMNIdentity -idx495- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx497- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_9[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_9, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx497- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx493 NR-CGI -ROOTS68 ===*/

    #endif /*choice-ELEM 1 -idx492 -rootc31 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx498 -rootc31: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx499 -ROOTS69 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx501- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_37[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_37);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_37, sizeof(temp_buff_for_pLMNIdentity_37)); // change octetstring data here
    //end of hc-pLMNIdentity -idx501- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx503- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_9[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_9, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx503- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx499 EUTRA-CGI -ROOTS69 ===*/

    #endif /*choice-ELEM 2 -idx498 -rootc31 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc31 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx487 Cell-RNTI -ROOTS67 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU alias = -1
    /*=== END SEQUENCE -idx483 UEID-NG-ENB-DU -ROOTS66 ===*/

    #endif /*choice-ELEM 5 -idx482 -rootc19 - UEID->UEID-NG-ENB-DU */

    #if 0 //hc-choice-ELEM 6 -idx504 -rootc19: UEID->UEID-EN-GNB - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.choice_type = E2AP_UEID_e2ap_EN_G_NB_UEID;
    /*=== START SEQUENCE -idx505 -ROOTS70 UEID-EN-GNB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB alias = 6 -mandatory
    //hc-m_eNB_UE_X2AP_ID -idx507- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.m_eNB_UE_X2AP_ID = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID -idx507- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB alias = 5 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_M_E_NB_UE_X2AP_ID_EXTENSION_PRESENT;
    //hc-m_eNB_UE_X2AP_ID_Extension -idx509- alias primitive - pid = 5 - INTEGER - min:0 - max:4095  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID-Extension
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.m_eNB_UE_X2AP_ID_Extension = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID_Extension -idx509- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB alias = 5
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB alias = -1 -mandatory
    /*=== START SEQUENCE -idx511 -ROOTS71 GlobalENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx513- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_38[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_38);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_38, sizeof(temp_buff_for_pLMNIdentity_38)); // change octetstring data here
    //end of hc-pLMNIdentity -idx513- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc32 - ENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx516 -rootc32: ENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    //hc-macro_eNB_ID -idx517- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->macro-eNB-ID
    OSOCTET temp_buff_for_macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_2, 3);
    //end of hc-macro_eNB_ID -idx517- primitive
    #endif /*choice-ELEM 1 -idx516 -rootc32 - ENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx518 -rootc32: ENB-ID->BIT STRING (SIZE(28)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    //hc-home_eNB_ID -idx519- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->home-eNB-ID
    OSOCTET temp_buff_for_home_eNB_ID_2[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_2, 4);
    //end of hc-home_eNB_ID -idx519- primitive
    #endif /*choice-ELEM 2 -idx518 -rootc32 - ENB-ID->BIT STRING (SIZE(28)) */

    #if 0 //hc-choice-ELEM 3 -idx520 -rootc32: ENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    //hc-short_Macro_eNB_ID -idx521- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    OSOCTET temp_buff_for_short_Macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_2, 3);
    //end of hc-short_Macro_eNB_ID -idx521- primitive
    #endif /*choice-ELEM 3 -idx520 -rootc32 - ENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 4 -idx522 -rootc32: ENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    //hc-long_Macro_eNB_ID -idx523- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    OSOCTET temp_buff_for_long_Macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_2, 3);
    //end of hc-long_Macro_eNB_ID -idx523- primitive
    #endif /*choice-ELEM 4 -idx522 -rootc32 - ENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc32 - ENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID alias = -1
    /*=== END SEQUENCE -idx511 GlobalENB-ID -ROOTS71 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB alias = -1
    //hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB alias = 6 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_G_NB_CU_UE_F1AP_ID_PRESENT;
    //hc-gNB_CU_UE_F1AP_ID -idx525- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx525- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB alias = 6
    //hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_G_NB_CU_CP_UE_E1AP_ID_LIST_PRESENT;
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx527 -ROOTS72 UEID-GNB-CU-CP-E1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx529- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item[0].gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx529- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx527 UEID-GNB-CU-CP-E1AP-ID-Item -ROOTS72 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB alias = 8 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx531- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->RANUEID
    OSOCTET temp_buff_for_ran_UEID_7[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_7);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.ran_UEID.data, temp_buff_for_ran_UEID_7, sizeof(temp_buff_for_ran_UEID_7)); // change octetstring data here
    //end of hc-ran_UEID -idx531- alias primitive

    //end of hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB alias = 8
    //hc-sequence-ELEM 7: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx533 -ROOTS73 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx535- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx535- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc33 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx538 -rootc33: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx539 -ROOTS74 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx541- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_39[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_39);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_39, sizeof(temp_buff_for_pLMNIdentity_39)); // change octetstring data here
    //end of hc-pLMNIdentity -idx541- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx543- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_10[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_10, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx543- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx539 NR-CGI -ROOTS74 ===*/

    #endif /*choice-ELEM 1 -idx538 -rootc33 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx544 -rootc33: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx545 -ROOTS75 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx547- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_40[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_40);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_40, sizeof(temp_buff_for_pLMNIdentity_40)); // change octetstring data here
    //end of hc-pLMNIdentity -idx547- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx549- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_10[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_10, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx549- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx545 EUTRA-CGI -ROOTS75 ===*/

    #endif /*choice-ELEM 2 -idx544 -rootc33 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc33 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx533 Cell-RNTI -ROOTS73 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB alias = -1
    /*=== END SEQUENCE -idx505 UEID-EN-GNB -ROOTS70 ===*/

    #endif /*choice-ELEM 6 -idx504 -rootc19 - UEID->UEID-EN-GNB */

    #if 0 //hc-choice-ELEM 7 -idx550 -rootc19: UEID->UEID-ENB - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.choice_type = E2AP_UEID_e2ap_E_NB_UEID;
    /*=== START SEQUENCE -idx551 -ROOTS76 UEID-ENB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB alias = 6 -mandatory
    //hc-mME_UE_S1AP_ID -idx553- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->MME-UE-S1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.mME_UE_S1AP_ID = 2147483647;// change integer here
    //end of hc-mME_UE_S1AP_ID -idx553- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB alias = -1 -mandatory
    /*=== START SEQUENCE -idx555 -ROOTS77 GUMMEI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-pLMN_Identity -idx557- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GUMMEI->PLMNIdentity
    OSOCTET temp_buff_for_pLMN_Identity_1[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.gUMMEI.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_1);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.gUMMEI.pLMN_Identity.data, temp_buff_for_pLMN_Identity_1, sizeof(temp_buff_for_pLMN_Identity_1)); // change octetstring data here
    //end of hc-pLMN_Identity -idx557- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GUMMEI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-mME_Group_ID -idx559- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GUMMEI->MME-Group-ID
    OSOCTET temp_buff_for_mME_Group_ID_1[] = {0x01, 0x02}; // min =2 - max = 2 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.gUMMEI.mME_Group_ID.numocts = sizeof(temp_buff_for_mME_Group_ID_1);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.gUMMEI.mME_Group_ID.data, temp_buff_for_mME_Group_ID_1, sizeof(temp_buff_for_mME_Group_ID_1)); // change octetstring data here
    //end of hc-mME_Group_ID -idx559- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GUMMEI alias = 8
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-mME_Code -idx561- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GUMMEI->MME-Code
    OSOCTET temp_buff_for_mME_Code_1[] = {0x01}; // min =1 - max = 1 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.gUMMEI.mME_Code.numocts = sizeof(temp_buff_for_mME_Code_1);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.gUMMEI.mME_Code.data, temp_buff_for_mME_Code_1, sizeof(temp_buff_for_mME_Code_1)); // change octetstring data here
    //end of hc-mME_Code -idx561- alias primitive

    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GUMMEI alias = 8
    /*=== END SEQUENCE -idx555 GUMMEI -ROOTS77 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB alias = 6 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_M_E_NB_UE_X2AP_ID_PRESENT;
    //hc-m_eNB_UE_X2AP_ID -idx563- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->ENB-UE-X2AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.m_eNB_UE_X2AP_ID = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID -idx563- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB alias = 6
    //hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB alias = 5 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_M_E_NB_UE_X2AP_ID_EXTENSION_PRESENT;
    //hc-m_eNB_UE_X2AP_ID_Extension -idx565- alias primitive - pid = 5 - INTEGER - min:0 - max:4095  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->ENB-UE-X2AP-ID-Extension
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.m_eNB_UE_X2AP_ID_Extension = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID_Extension -idx565- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB alias = 5
    //hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_GLOBAL_ENB_ID_PRESENT;
    /*=== START SEQUENCE -idx567 -ROOTS78 GlobalENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GlobalENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx569- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_41[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.globalENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_41);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.globalENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_41, sizeof(temp_buff_for_pLMNIdentity_41)); // change octetstring data here
    //end of hc-pLMNIdentity -idx569- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GlobalENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GlobalENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc34 - ENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx572 -rootc34: ENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    //hc-macro_eNB_ID -idx573- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->macro-eNB-ID
    OSOCTET temp_buff_for_macro_eNB_ID_3[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_3, 3);
    //end of hc-macro_eNB_ID -idx573- primitive
    #endif /*choice-ELEM 1 -idx572 -rootc34 - ENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx574 -rootc34: ENB-ID->BIT STRING (SIZE(28)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    //hc-home_eNB_ID -idx575- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->home-eNB-ID
    OSOCTET temp_buff_for_home_eNB_ID_3[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_3, 4);
    //end of hc-home_eNB_ID -idx575- primitive
    #endif /*choice-ELEM 2 -idx574 -rootc34 - ENB-ID->BIT STRING (SIZE(28)) */

    #if 0 //hc-choice-ELEM 3 -idx576 -rootc34: ENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    //hc-short_Macro_eNB_ID -idx577- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    OSOCTET temp_buff_for_short_Macro_eNB_ID_3[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_3, 3);
    //end of hc-short_Macro_eNB_ID -idx577- primitive
    #endif /*choice-ELEM 3 -idx576 -rootc34 - ENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 4 -idx578 -rootc34: ENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    //hc-long_Macro_eNB_ID -idx579- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    OSOCTET temp_buff_for_long_Macro_eNB_ID_3[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_3, 3);
    //end of hc-long_Macro_eNB_ID -idx579- primitive
    #endif /*choice-ELEM 4 -idx578 -rootc34 - ENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc34 - ENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GlobalENB-ID alias = -1
    /*=== END SEQUENCE -idx567 GlobalENB-ID -ROOTS78 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx581 -ROOTS79 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx583- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx583- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc35 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx586 -rootc35: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx587 -ROOTS80 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx589- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_42[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_42);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_42, sizeof(temp_buff_for_pLMNIdentity_42)); // change octetstring data here
    //end of hc-pLMNIdentity -idx589- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx591- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_11[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_11, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx591- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx587 NR-CGI -ROOTS80 ===*/

    #endif /*choice-ELEM 1 -idx586 -rootc35 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx592 -rootc35: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx593 -ROOTS81 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx595- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_43[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_43);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_43, sizeof(temp_buff_for_pLMNIdentity_43)); // change octetstring data here
    //end of hc-pLMNIdentity -idx595- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx597- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_11[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_11, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx597- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx593 EUTRA-CGI -ROOTS81 ===*/

    #endif /*choice-ELEM 2 -idx592 -rootc35 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc35 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx581 Cell-RNTI -ROOTS79 ===*/

    //end of hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB alias = -1
    /*=== END SEQUENCE -idx551 UEID-ENB -ROOTS76 ===*/

    #endif /*choice-ELEM 7 -idx550 -rootc19 - UEID->UEID-ENB */

    /*=== END CHOICE -rootc19 - UEID ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2 alias = -1
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2 alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.bitmask |= E2AP_E2SM_RC_CONTROL_HEADER_FORMAT2_e2ap_RIC_CONTROL_DECISION_PRESENT;
    //hc-ric_ControlDecision -idx599- primitive in scope - pid = 13 ENUMURATE - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->ric-ControlDecision
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format2.ric_ControlDecision = E2AP_E2SM_RC_CONTROL_HEADER_FORMAT2_RIC_CONTROL_DECISION_ACCEPT; // change enum value here
    //end of hc-ric_ControlDecision -idx599- primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2 alias = -1
    /*=== END SEQUENCE -idx305 E2SM-RC-ControlHeader-Format2 -ROOTS42 ===*/

    #endif /*choice-ELEM 2 -idx304 -rootc1 - E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2 */

    #if 0 //hc-choice-ELEM 3 -idx600 -rootc1: E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3 - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.choice_type = E2AP_E2SM_RC_CONTROL_HEADER_RIC_CONTROL_HEADER_FORMATS_e2ap_CONTROL_HEADER_FORMAT3;
    /*=== START SEQUENCE -idx601 -ROOTS82 E2SM-RC-ControlHeader-Format3 ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3 alias = 5 -mandatory
    //hc-ue_Group_ID -idx603- alias primitive - pid = 5 - INTEGER - min:1 - max:65535  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_ID = 32768;// change integer here
    //end of hc-ue_Group_ID -idx603- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3 alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3 alias = -1 -mandatory
    /*=== START SEQUENCE -idx605 -ROOTS83 UE-Group-Definition ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition alias = -1 -mandatory
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item_count = 1;
    /*=== START SEQUENCE -idx607 -ROOTS84 UEGroupDefinitionIdentifier-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx609- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx609- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item alias = -1 -mandatory
    /*=== START CHOICE -rootc36 - RANParameter-ValueType ===*/
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType = xnap_mem_get(sizeof(_e2ap_RANParameter_ValueType_t)); //memgetforrecu
    #if 1 //hc-choice-ELEM 1 -idx612 -rootc36: RANParameter-ValueType->RANParameter_ValueType_Choice_ElementTrue - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_ELEMENT_TRUE;
    /*=== START SEQUENCE -idx613 -ROOTS85 RANParameter-ValueType-Choice-ElementTrue ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue alias = -1 -mandatory
    /*=== START CHOICE -rootc37 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx616 -rootc37: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx617- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBoolean
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx617- primitive

    #endif /*choice-ELEM 1 -idx616 -rootc37 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx618 -rootc37: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx619 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueInt
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx619- primitive

    #endif /*choice-ELEM 2 -idx618 -rootc37 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx620 -rootc37: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx621- primitive in scope - pid = 17 REAL - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueReal
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx621- primitive

    #endif /*choice-ELEM 3 -idx620 -rootc37 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx622 -rootc37: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx623- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueBitS.data, temp_buff_for_valueBitS, 0);
    //end of hc-valueBitS -idx623- primitive
    #endif /*choice-ELEM 4 -idx622 -rootc37 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx624 -rootc37: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx625- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS); // change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS));
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueOctS.data, temp_buff_for_valueOctS, sizeof(temp_buff_for_valueOctS));
    //end of hc-valueOctS -idx625- primitive
    #endif /*choice-ELEM 5 -idx624 -rootc37 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx626 -rootc37: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx627- primitive in scope - pid = 14 Printable STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valuePrintableString
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx627- primitive

    #endif /*choice-ELEM 6 -idx626 -rootc37 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc37 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue alias = -1
    /*=== END SEQUENCE -idx613 RANParameter-ValueType-Choice-ElementTrue -ROOTS85 ===*/

    #endif /*choice-ELEM 1 -idx612 -rootc36 - RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue */

    #if 0 //hc-choice-ELEM 2 -idx628 -rootc36: RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_ELEMENT_FALSE;
    /*=== START SEQUENCE -idx629 -ROOTS86 RANParameter-ValueType-Choice-ElementFalse ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.bitmask |= E2AP_RANPARAMETER_VALUE_TYPE_CHOICE_ELEMENT_FALSE_e2ap_RAN_PARAMETER_VALUE_PRESENT;
    /*=== START CHOICE -rootc38 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx632 -rootc38: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx633- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBoolean
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx633- primitive

    #endif /*choice-ELEM 1 -idx632 -rootc38 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx634 -rootc38: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx635 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueInt
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx635- primitive

    #endif /*choice-ELEM 2 -idx634 -rootc38 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx636 -rootc38: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx637- primitive in scope - pid = 17 REAL - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueReal
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx637- primitive

    #endif /*choice-ELEM 3 -idx636 -rootc38 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx638 -rootc38: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx639- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS_1[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueBitS.data, temp_buff_for_valueBitS_1, 0);
    //end of hc-valueBitS -idx639- primitive
    #endif /*choice-ELEM 4 -idx638 -rootc38 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx640 -rootc38: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx641- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS_1[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS_1); // change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS_1));
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueOctS.data, temp_buff_for_valueOctS_1, sizeof(temp_buff_for_valueOctS_1));
    //end of hc-valueOctS -idx641- primitive
    #endif /*choice-ELEM 5 -idx640 -rootc38 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx642 -rootc38: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx643- primitive in scope - pid = 14 Printable STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valuePrintableString
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx643- primitive

    #endif /*choice-ELEM 6 -idx642 -rootc38 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc38 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse alias = -1
    /*=== END SEQUENCE -idx629 RANParameter-ValueType-Choice-ElementFalse -ROOTS86 ===*/

    #endif /*choice-ELEM 2 -idx628 -rootc36 - RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse */

    #if 0 //hc-choice-ELEM 3 -idx644 -rootc36: RANParameter-ValueType->RANParameter-ValueType-Choice-Structure - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_STRUCTURE;
    /*=== START SEQUENCE -idx645 -ROOTS87 RANParameter-ValueType-Choice-Structure ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure alias = -1 -mandatory
    /*=== START SEQUENCE -idx647 -ROOTS88 RANParameter-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_Structure.ranParameter_Structure.sequence_of_ranParameters.RANParameter_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx649 -ROOTS89 RANParameter-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx651- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_Structure.ranParameter_Structure.sequence_of_ranParameters.RANParameter_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx651- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1 -mandatory
    // [STOP] recursive CHOICE RANParameter_ValueType in stack
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx649 RANParameter-STRUCTURE-Item -ROOTS89 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx647 RANParameter-STRUCTURE -ROOTS88 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure alias = -1
    /*=== END SEQUENCE -idx645 RANParameter-ValueType-Choice-Structure -ROOTS87 ===*/

    #endif /*choice-ELEM 3 -idx644 -rootc36 - RANParameter-ValueType->RANParameter-ValueType-Choice-Structure */

    #if 0 //hc-choice-ELEM 4 -idx653 -rootc36: RANParameter-ValueType->RANParameter-ValueType-Choice-List - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_LIST;
    /*=== START SEQUENCE -idx654 -ROOTS90 RANParameter-ValueType-Choice-List ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List alias = -1 -mandatory
    /*=== START SEQUENCE -idx656 -ROOTS91 RANParameter-LIST ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST alias = -1 -mandatory
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_List.ranParameter_List.list_of_ranParameter.RANParameter_STRUCTURE_count = 1;
    /*=== START SEQUENCE -idx658 -ROOTS92 RANParameter-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_List.ranParameter_List.list_of_ranParameter.RANParameter_STRUCTURE[0].sequence_of_ranParameters.RANParameter_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx660 -ROOTS93 RANParameter-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx662- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].ranParameter_valueType->ranP_Choice_List.ranParameter_List.list_of_ranParameter.RANParameter_STRUCTURE[0].sequence_of_ranParameters.RANParameter_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx662- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1 -mandatory
    // [STOP] recursive CHOICE RANParameter_ValueType in stack
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx660 RANParameter-STRUCTURE-Item -ROOTS93 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx658 RANParameter-STRUCTURE -ROOTS92 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST alias = -1
    /*=== END SEQUENCE -idx656 RANParameter-LIST -ROOTS91 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List alias = -1
    /*=== END SEQUENCE -idx654 RANParameter-ValueType-Choice-List -ROOTS90 ===*/

    #endif /*choice-ELEM 4 -idx653 -rootc36 - RANParameter-ValueType->RANParameter-ValueType-Choice-List */

    /*=== END CHOICE -rootc36 - RANParameter-ValueType ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item alias = 13 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].bitmask |= E2AP_UEGROUP_DEFINITION_IDENTIFIER_ITEM_e2ap_LOGICAL_OR_PRESENT;
    //hc-LogicalOR -idx665 - alias primitive - pid = 13 ENUMURATE - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->LogicalOR
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ue_Group_Definition.ueGroupDefinitionIdentifier_LIST.UEGroupDefinitionIdentifier_Item[0].logicalOR = E2AP_LOGICAL_OR_TRUE; // change enum value here
    //end of hc-LogicalOR -idx665- alias primitive

    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item alias = 13
    /*=== END SEQUENCE -idx607 UEGroupDefinitionIdentifier-Item -ROOTS84 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition alias = -1
    /*=== END SEQUENCE -idx605 UE-Group-Definition -ROOTS83 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3 alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3 alias = 15 -mandatory
    //hc-ric_Style_Type -idx667- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->RIC-Style-Type
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ric_Style_Type = 875;// change integer here
    //end of hc-ric_Style_Type -idx667- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3 alias = 15
    //hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3 alias = 5 -mandatory
    //hc-ric_ControlAction_ID -idx669- alias primitive - pid = 5 - INTEGER - min:1 - max:65535  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->RIC-ControlAction-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format3.ric_ControlAction_ID = 32768;// change integer here
    //end of hc-ric_ControlAction_ID -idx669- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3 alias = 5
    /*=== END SEQUENCE -idx601 E2SM-RC-ControlHeader-Format3 -ROOTS82 ===*/

    #endif /*choice-ELEM 3 -idx600 -rootc1 - E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3 */

    #if 0 //hc-choice-ELEM 4 -idx670 -rootc1: E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4 - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.choice_type = E2AP_E2SM_RC_CONTROL_HEADER_RIC_CONTROL_HEADER_FORMATS_e2ap_CONTROL_HEADER_FORMAT4;
    /*=== START SEQUENCE -idx671 -ROOTS94 E2SM-RC-ControlHeader-Format4 ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4 alias = -1 -mandatory
    /*=== START SEQUENCE -idx673 -ROOTS95 PartialUEID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 6 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.bitmask |= E2AP_PARTIAL_UEID_e2ap_AMF_UE_NGAP_ID_PRESENT;
    //hc-amf_UE_NGAP_ID -idx675- alias primitive - pid = 6 - INTEGER - min:0 - max:1099511627775  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->AMF-UE-NGAP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.amf_UE_NGAP_ID = 549755813887;// change integer here
    //end of hc-amf_UE_NGAP_ID -idx675- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.bitmask |= E2AP_PARTIAL_UEID_e2ap_GUAMI_PRESENT;
    /*=== START SEQUENCE -idx677 -ROOTS96 GUAMI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUAMI alias = 8 -mandatory
    //hc-pLMNIdentity -idx679- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUAMI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_44[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.guami.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_44);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.guami.pLMNIdentity.data, temp_buff_for_pLMNIdentity_44, sizeof(temp_buff_for_pLMNIdentity_44)); // change octetstring data here
    //end of hc-pLMNIdentity -idx679- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUAMI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUAMI alias = 3 -mandatory
    //hc-aMFRegionID -idx681- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUAMI->AMFRegionID
    OSOCTET temp_buff_for_aMFRegionID_4[] = {0x01}; // min =8 - max = 8 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.guami.aMFRegionID.numbits = 8;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.guami.aMFRegionID.data, temp_buff_for_aMFRegionID_4, 1); // change bitstring data here
    //end of hc-aMFRegionID -idx681- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUAMI alias = 3
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUAMI alias = 3 -mandatory
    //hc-aMFSetID -idx683- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUAMI->AMFSetID
    OSOCTET temp_buff_for_aMFSetID_4[] = {0x01, 0x02}; // min =10 - max = 10 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.guami.aMFSetID.numbits = 10;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.guami.aMFSetID.data, temp_buff_for_aMFSetID_4, 2); // change bitstring data here
    //end of hc-aMFSetID -idx683- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUAMI alias = 3
    //hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUAMI alias = 3 -mandatory
    //hc-aMFPointer -idx685- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUAMI->AMFPointer
    OSOCTET temp_buff_for_aMFPointer_4[] = {0x01}; // min =6 - max = 6 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.guami.aMFPointer.numbits = 6;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.guami.aMFPointer.data, temp_buff_for_aMFPointer_4, 1); // change bitstring data here
    //end of hc-aMFPointer -idx685- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUAMI alias = 3
    /*=== END SEQUENCE -idx677 GUAMI -ROOTS96 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 6 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.bitmask |= E2AP_PARTIAL_UEID_e2ap_G_NB_CU_UE_F1AP_ID_PRESENT;
    //hc-gNB_CU_UE_F1AP_ID -idx687- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx687- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 6
    //hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 6 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.bitmask |= E2AP_PARTIAL_UEID_e2ap_G_NB_CU_CP_UE_E1AP_ID_PRESENT;
    //hc-gNB_CU_CP_UE_E1AP_ID -idx689- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx689- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 6
    //hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 8 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.bitmask |= E2AP_PARTIAL_UEID_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx691- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->RANUEID
    OSOCTET temp_buff_for_ran_UEID_8[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_8);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.ran_UEID.data, temp_buff_for_ran_UEID_8, sizeof(temp_buff_for_ran_UEID_8)); // change octetstring data here
    //end of hc-ran_UEID -idx691- alias primitive

    //end of hc-sequence-ELEM 5: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 8
    //hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 6 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.bitmask |= E2AP_PARTIAL_UEID_e2ap_M_NG_RAN_UE_XN_AP_ID_PRESENT;
    //hc-m_NG_RAN_UE_XnAP_ID -idx693- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->NG-RANnodeUEXnAPID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.m_NG_RAN_UE_XnAP_ID = 2147483647;// change integer here
    //end of hc-m_NG_RAN_UE_XnAP_ID -idx693- alias primitive
    //end of hc-sequence-ELEM 6: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 6
    //hc-sequence-ELEM 7: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.bitmask |= E2AP_PARTIAL_UEID_e2ap_GLOBAL_NG_RANNODE_ID_PRESENT;
    /*=== START CHOICE -rootc39 - GlobalNGRANNodeID ===*/
    #if 1 //hc-choice-ELEM 1 -idx696 -rootc39: GlobalNGRANNodeID->GlobalGNB_ID - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_G_NB;
    /*=== START SEQUENCE -idx697 -ROOTS97 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx699- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_45[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.gNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_45);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.gNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_45, sizeof(temp_buff_for_pLMNIdentity_45)); // change octetstring data here
    //end of hc-pLMNIdentity -idx699- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc40 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx702 -rootc40: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.gNB.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx703- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_6[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_6, 3);
    //end of hc-gNB_ID -idx703- primitive
    #endif /*choice-ELEM 1 -idx702 -rootc40 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc40 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx697 GlobalGNB-ID -ROOTS97 ===*/

    #endif /*choice-ELEM 1 -idx696 -rootc39 - GlobalNGRANNodeID->GlobalGNB-ID */

    #if 0 //hc-choice-ELEM 2 -idx704 -rootc39: GlobalNGRANNodeID->GlobalNgENB-ID - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_NG_E_NB;
    /*=== START SEQUENCE -idx705 -ROOTS98 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx707- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_46[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_46);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_46, sizeof(temp_buff_for_pLMNIdentity_46)); // change octetstring data here
    //end of hc-pLMNIdentity -idx707- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc41 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx710 -rootc41: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx711- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_6[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_6, 3);
    //end of hc-macroNgENB_ID -idx711- primitive
    #endif /*choice-ELEM 1 -idx710 -rootc41 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx712 -rootc41: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx713- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_6[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_6, 3);
    //end of hc-shortMacroNgENB_ID -idx713- primitive
    #endif /*choice-ELEM 2 -idx712 -rootc41 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx714 -rootc41: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx715- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_6[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_6, 3);
    //end of hc-longMacroNgENB_ID -idx715- primitive
    #endif /*choice-ELEM 3 -idx714 -rootc41 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc41 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx705 GlobalNgENB-ID -ROOTS98 ===*/

    #endif /*choice-ELEM 2 -idx704 -rootc39 - GlobalNGRANNodeID->GlobalNgENB-ID */

    /*=== END CHOICE -rootc39 - GlobalNGRANNodeID ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = -1
    //hc-sequence-ELEM 8: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.bitmask |= E2AP_PARTIAL_UEID_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx717 -ROOTS99 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx719- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx719- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc42 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx722 -rootc42: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx723 -ROOTS100 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx725- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_47[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_47);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_47, sizeof(temp_buff_for_pLMNIdentity_47)); // change octetstring data here
    //end of hc-pLMNIdentity -idx725- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx727- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_12[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_12, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx727- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx723 NR-CGI -ROOTS100 ===*/

    #endif /*choice-ELEM 1 -idx722 -rootc42 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx728 -rootc42: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx729 -ROOTS101 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx731- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_48[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_48);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_48, sizeof(temp_buff_for_pLMNIdentity_48)); // change octetstring data here
    //end of hc-pLMNIdentity -idx731- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx733- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_12[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_12, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx733- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx729 EUTRA-CGI -ROOTS101 ===*/

    #endif /*choice-ELEM 2 -idx728 -rootc42 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc42 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx717 Cell-RNTI -ROOTS99 ===*/

    //end of hc-sequence-ELEM 8: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = -1
    //hc-sequence-ELEM 9: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 6 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.bitmask |= E2AP_PARTIAL_UEID_e2ap_NG_E_NB_CU_UE_W1AP_ID_PRESENT;
    //hc-ng_eNB_CU_UE_W1AP_ID -idx735- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->NGENB-CU-UE-W1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.ng_eNB_CU_UE_W1AP_ID = 2147483647;// change integer here
    //end of hc-ng_eNB_CU_UE_W1AP_ID -idx735- alias primitive
    //end of hc-sequence-ELEM 9: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 6
    //hc-sequence-ELEM 10: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 6 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.bitmask |= E2AP_PARTIAL_UEID_e2ap_M_E_NB_UE_X2AP_ID_PRESENT;
    //hc-m_eNB_UE_X2AP_ID -idx737- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->ENB-UE-X2AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.m_eNB_UE_X2AP_ID = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID -idx737- alias primitive
    //end of hc-sequence-ELEM 10: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 6
    //hc-sequence-ELEM 11: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 5 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.bitmask |= E2AP_PARTIAL_UEID_e2ap_M_E_NB_UE_X2AP_ID_EXTENSION_PRESENT;
    //hc-m_eNB_UE_X2AP_ID_Extension -idx739- alias primitive - pid = 5 - INTEGER - min:0 - max:4095  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->ENB-UE-X2AP-ID-Extension
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.m_eNB_UE_X2AP_ID_Extension = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID_Extension -idx739- alias primitive
    //end of hc-sequence-ELEM 11: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 5
    //hc-sequence-ELEM 12: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.bitmask |= E2AP_PARTIAL_UEID_e2ap_GLOBAL_ENB_ID_PRESENT;
    /*=== START SEQUENCE -idx741 -ROOTS102 GlobalENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx743- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_49[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_49);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_49, sizeof(temp_buff_for_pLMNIdentity_49)); // change octetstring data here
    //end of hc-pLMNIdentity -idx743- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc43 - ENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx746 -rootc43: ENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    //hc-macro_eNB_ID -idx747- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalENB-ID->ENB-ID->macro-eNB-ID
    OSOCTET temp_buff_for_macro_eNB_ID_4[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalENB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalENB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_4, 3);
    //end of hc-macro_eNB_ID -idx747- primitive
    #endif /*choice-ELEM 1 -idx746 -rootc43 - ENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx748 -rootc43: ENB-ID->BIT STRING (SIZE(28)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    //hc-home_eNB_ID -idx749- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalENB-ID->ENB-ID->home-eNB-ID
    OSOCTET temp_buff_for_home_eNB_ID_4[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalENB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalENB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_4, 4);
    //end of hc-home_eNB_ID -idx749- primitive
    #endif /*choice-ELEM 2 -idx748 -rootc43 - ENB-ID->BIT STRING (SIZE(28)) */

    #if 0 //hc-choice-ELEM 3 -idx750 -rootc43: ENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    //hc-short_Macro_eNB_ID -idx751- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    OSOCTET temp_buff_for_short_Macro_eNB_ID_4[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_4, 3);
    //end of hc-short_Macro_eNB_ID -idx751- primitive
    #endif /*choice-ELEM 3 -idx750 -rootc43 - ENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 4 -idx752 -rootc43: ENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    //hc-long_Macro_eNB_ID -idx753- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    OSOCTET temp_buff_for_long_Macro_eNB_ID_4[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_4, 3);
    //end of hc-long_Macro_eNB_ID -idx753- primitive
    #endif /*choice-ELEM 4 -idx752 -rootc43 - ENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc43 - ENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalENB-ID alias = -1
    /*=== END SEQUENCE -idx741 GlobalENB-ID -ROOTS102 ===*/

    //end of hc-sequence-ELEM 12: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = -1
    //hc-sequence-ELEM 13: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 6 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.bitmask |= E2AP_PARTIAL_UEID_e2ap_M_ME_UE_S1AP_ID_PRESENT;
    //hc-mME_UE_S1AP_ID -idx755- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->MME-UE-S1AP-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.mME_UE_S1AP_ID = 2147483647;// change integer here
    //end of hc-mME_UE_S1AP_ID -idx755- alias primitive
    //end of hc-sequence-ELEM 13: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = 6
    //hc-sequence-ELEM 14: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.bitmask |= E2AP_PARTIAL_UEID_e2ap_G_UMMEI_PRESENT;
    /*=== START SEQUENCE -idx757 -ROOTS103 GUMMEI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUMMEI alias = 8 -mandatory
    //hc-pLMN_Identity -idx759- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUMMEI->PLMNIdentity
    OSOCTET temp_buff_for_pLMN_Identity_2[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.gUMMEI.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_2);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.gUMMEI.pLMN_Identity.data, temp_buff_for_pLMN_Identity_2, sizeof(temp_buff_for_pLMN_Identity_2)); // change octetstring data here
    //end of hc-pLMN_Identity -idx759- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUMMEI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUMMEI alias = 8 -mandatory
    //hc-mME_Group_ID -idx761- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUMMEI->MME-Group-ID
    OSOCTET temp_buff_for_mME_Group_ID_2[] = {0x01, 0x02}; // min =2 - max = 2 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.gUMMEI.mME_Group_ID.numocts = sizeof(temp_buff_for_mME_Group_ID_2);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.gUMMEI.mME_Group_ID.data, temp_buff_for_mME_Group_ID_2, sizeof(temp_buff_for_mME_Group_ID_2)); // change octetstring data here
    //end of hc-mME_Group_ID -idx761- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUMMEI alias = 8
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUMMEI alias = 8 -mandatory
    //hc-mME_Code -idx763- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUMMEI->MME-Code
    OSOCTET temp_buff_for_mME_Code_2[] = {0x01}; // min =1 - max = 1 bytes change octetstring data here
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.gUMMEI.mME_Code.numocts = sizeof(temp_buff_for_mME_Code_2);
    XNAP_MEMCPY(p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.partial_ueID.gUMMEI.mME_Code.data, temp_buff_for_mME_Code_2, sizeof(temp_buff_for_mME_Code_2)); // change octetstring data here
    //end of hc-mME_Code -idx763- alias primitive

    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUMMEI alias = 8
    /*=== END SEQUENCE -idx757 GUMMEI -ROOTS103 ===*/

    //end of hc-sequence-ELEM 14: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID alias = -1
    /*=== END SEQUENCE -idx673 PartialUEID -ROOTS95 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4 alias = -1
    //hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4 alias = 15 -mandatory
    //hc-ric_Style_Type -idx765- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->RIC-Style-Type
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.ric_Style_Type = 875;// change integer here
    //end of hc-ric_Style_Type -idx765- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4 alias = 15
    //hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4 alias = 5 -mandatory
    //hc-ric_ControlAction_ID -idx767- alias primitive - pid = 5 - INTEGER - min:1 - max:65535  - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->RIC-ControlAction-ID
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.ric_ControlAction_ID = 32768;// change integer here
    //end of hc-ric_ControlAction_ID -idx767- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4 alias = 5
    //hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4 alias = -1 -optional
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.bitmask |= E2AP_E2SM_RC_CONTROL_HEADER_FORMAT4_e2ap_RIC_CONTROL_DECISION_PRESENT;
    //hc-ric_ControlDecision -idx769- primitive in scope - pid = 13 ENUMURATE - E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->ric-ControlDecision
    p_E2SM_RC_ControlHeader->ric_controlHeader_formats.controlHeader_Format4.ric_ControlDecision = E2AP_E2SM_RC_CONTROL_HEADER_FORMAT4_RIC_CONTROL_DECISION_ACCEPT; // change enum value here
    //end of hc-ric_ControlDecision -idx769- primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4 alias = -1
    /*=== END SEQUENCE -idx671 E2SM-RC-ControlHeader-Format4 -ROOTS94 ===*/

    #endif /*choice-ELEM 4 -idx670 -rootc1 - E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4 */

    /*=== END CHOICE -rootc1 - E2SM-RC-ControlHeader-ric-controlHeader-formats ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlHeader alias = -1
    /*=== END SEQUENCE -idx1 E2SM-RC-ControlHeader -ROOTS1 ===*/

    return XNAP_SUCCESS;
}
/*
E2SM-RC-ControlHeader : (E2SM-RC-ControlHeader) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlHeader
    ric-controlHeader-formats : (E2SM-RC-ControlHeader-ric-controlHeader-formats) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats
        controlHeader-Format1 : (E2SM-RC-ControlHeader-Format1) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1
            ueID : (UEID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID
                gNB-UEID : (UEID-GNB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB
                    amf-UE-NGAP-ID : (AMF-UE-NGAP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->AMF-UE-NGAP-ID
                    guami : (GUAMI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GUAMI
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GUAMI->PLMNIdentity
                        aMFRegionID : (AMFRegionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GUAMI->AMFRegionID
                        aMFSetID : (AMFSetID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GUAMI->AMFSetID
                        aMFPointer : (AMFPointer) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GUAMI->AMFPointer
                    gNB-CU-UE-F1AP-ID-List : (UEID-GNB-CU-F1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List
                        UEID-GNB-CU-CP-F1AP-ID-Item : (UEID-GNB-CU-CP-F1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item
                            gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item->GNB-CU-UE-F1AP-ID
                    gNB-CU-CP-UE-E1AP-ID-List : (UEID-GNB-CU-CP-E1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List
                        UEID-GNB-CU-CP-E1AP-ID-Item : (UEID-GNB-CU-CP-E1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item
                            gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->RANUEID
                    m-NG-RAN-UE-XnAP-ID : (NG-RANnodeUEXnAPID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->NG-RANnodeUEXnAPID
                    globalGNB-ID : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalGNB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalGNB-ID->PLMNIdentity
                        gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID
                            gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID->gNB-ID
                    globalNG-RANNode-ID : (GlobalNGRANNodeID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID
                        gNB : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
                            gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID
                                gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
                        ng-eNB : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
                            ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID
                                macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                                shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                                longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                gNB-DU-UEID : (UEID-GNB-DU) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU
                    gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->GNB-CU-UE-F1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->RANUEID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                gNB-CU-UP-UEID : (UEID-GNB-CU-UP) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-CU-UP
                    gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-CU-UP->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-GNB-CU-UP->RANUEID
                ng-eNB-UEID : (UEID-NG-ENB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB
                    amf-UE-NGAP-ID : (AMF-UE-NGAP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->AMF-UE-NGAP-ID
                    guami : (GUAMI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GUAMI
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GUAMI->PLMNIdentity
                        aMFRegionID : (AMFRegionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GUAMI->AMFRegionID
                        aMFSetID : (AMFSetID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GUAMI->AMFSetID
                        aMFPointer : (AMFPointer) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GUAMI->AMFPointer
                    ng-eNB-CU-UE-W1AP-ID : (NGENB-CU-UE-W1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->NGENB-CU-UE-W1AP-ID
                    m-NG-RAN-UE-XnAP-ID : (NG-RANnodeUEXnAPID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->NG-RANnodeUEXnAPID
                    globalNgENB-ID : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNgENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNgENB-ID->PLMNIdentity
                        ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID
                            macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                            shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                            longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    globalNG-RANNode-ID : (GlobalNGRANNodeID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID
                        gNB : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
                            gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID
                                gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
                        ng-eNB : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
                            ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID
                                macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                                shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                                longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                ng-eNB-DU-UEID : (UEID-NG-ENB-DU) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU
                    ng-eNB-CU-UE-W1AP-ID : (NGENB-CU-UE-W1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->NGENB-CU-UE-W1AP-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                en-gNB-UEID : (UEID-EN-GNB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB
                    m-eNB-UE-X2AP-ID : (ENB-UE-X2AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID
                    m-eNB-UE-X2AP-ID-Extension : (ENB-UE-X2AP-ID-Extension) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID-Extension
                    globalENB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GlobalENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GlobalENB-ID->PLMNIdentity
                        eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID
                            macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->macro-eNB-ID
                            home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->home-eNB-ID
                            short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                            long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                    gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->GNB-CU-UE-F1AP-ID
                    gNB-CU-CP-UE-E1AP-ID-List : (UEID-GNB-CU-CP-E1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List
                        UEID-GNB-CU-CP-E1AP-ID-Item : (UEID-GNB-CU-CP-E1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item
                            gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->RANUEID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                eNB-UEID : (UEID-ENB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB
                    mME-UE-S1AP-ID : (MME-UE-S1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->MME-UE-S1AP-ID
                    gUMMEI : (GUMMEI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GUMMEI
                        pLMN-Identity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GUMMEI->PLMNIdentity
                        mME-Group-ID : (MME-Group-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GUMMEI->MME-Group-ID
                        mME-Code : (MME-Code) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GUMMEI->MME-Code
                    m-eNB-UE-X2AP-ID : (ENB-UE-X2AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->ENB-UE-X2AP-ID
                    m-eNB-UE-X2AP-ID-Extension : (ENB-UE-X2AP-ID-Extension) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->ENB-UE-X2AP-ID-Extension
                    globalENB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GlobalENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GlobalENB-ID->PLMNIdentity
                        eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GlobalENB-ID->ENB-ID
                            macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->macro-eNB-ID
                            home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->home-eNB-ID
                            short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                            long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
            ric-Style-Type : (RIC-Style-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->RIC-Style-Type
            ric-ControlAction-ID : (RIC-ControlAction-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->RIC-ControlAction-ID
            ric-ControlDecision : (ric-ControlDecision) 					---- (ENUMERATED) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format1->ric-ControlDecision
        controlHeader-Format2 : (E2SM-RC-ControlHeader-Format2) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2
            ueID : (UEID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID
                gNB-UEID : (UEID-GNB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB
                    amf-UE-NGAP-ID : (AMF-UE-NGAP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->AMF-UE-NGAP-ID
                    guami : (GUAMI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GUAMI
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GUAMI->PLMNIdentity
                        aMFRegionID : (AMFRegionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GUAMI->AMFRegionID
                        aMFSetID : (AMFSetID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GUAMI->AMFSetID
                        aMFPointer : (AMFPointer) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GUAMI->AMFPointer
                    gNB-CU-UE-F1AP-ID-List : (UEID-GNB-CU-F1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List
                        UEID-GNB-CU-CP-F1AP-ID-Item : (UEID-GNB-CU-CP-F1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item
                            gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item->GNB-CU-UE-F1AP-ID
                    gNB-CU-CP-UE-E1AP-ID-List : (UEID-GNB-CU-CP-E1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List
                        UEID-GNB-CU-CP-E1AP-ID-Item : (UEID-GNB-CU-CP-E1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item
                            gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->RANUEID
                    m-NG-RAN-UE-XnAP-ID : (NG-RANnodeUEXnAPID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->NG-RANnodeUEXnAPID
                    globalGNB-ID : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID->PLMNIdentity
                        gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID
                            gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID->gNB-ID
                    globalNG-RANNode-ID : (GlobalNGRANNodeID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID
                        gNB : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
                            gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID
                                gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
                        ng-eNB : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
                            ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID
                                macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                                shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                                longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                gNB-DU-UEID : (UEID-GNB-DU) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU
                    gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->GNB-CU-UE-F1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->RANUEID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                gNB-CU-UP-UEID : (UEID-GNB-CU-UP) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-CU-UP
                    gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-CU-UP->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-GNB-CU-UP->RANUEID
                ng-eNB-UEID : (UEID-NG-ENB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB
                    amf-UE-NGAP-ID : (AMF-UE-NGAP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->AMF-UE-NGAP-ID
                    guami : (GUAMI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GUAMI
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GUAMI->PLMNIdentity
                        aMFRegionID : (AMFRegionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GUAMI->AMFRegionID
                        aMFSetID : (AMFSetID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GUAMI->AMFSetID
                        aMFPointer : (AMFPointer) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GUAMI->AMFPointer
                    ng-eNB-CU-UE-W1AP-ID : (NGENB-CU-UE-W1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->NGENB-CU-UE-W1AP-ID
                    m-NG-RAN-UE-XnAP-ID : (NG-RANnodeUEXnAPID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->NG-RANnodeUEXnAPID
                    globalNgENB-ID : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->PLMNIdentity
                        ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID
                            macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                            shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                            longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    globalNG-RANNode-ID : (GlobalNGRANNodeID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID
                        gNB : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
                            gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID
                                gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
                        ng-eNB : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
                            ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID
                                macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                                shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                                longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                ng-eNB-DU-UEID : (UEID-NG-ENB-DU) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU
                    ng-eNB-CU-UE-W1AP-ID : (NGENB-CU-UE-W1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->NGENB-CU-UE-W1AP-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                en-gNB-UEID : (UEID-EN-GNB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB
                    m-eNB-UE-X2AP-ID : (ENB-UE-X2AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID
                    m-eNB-UE-X2AP-ID-Extension : (ENB-UE-X2AP-ID-Extension) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID-Extension
                    globalENB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->PLMNIdentity
                        eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID
                            macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->macro-eNB-ID
                            home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->home-eNB-ID
                            short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                            long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                    gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->GNB-CU-UE-F1AP-ID
                    gNB-CU-CP-UE-E1AP-ID-List : (UEID-GNB-CU-CP-E1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List
                        UEID-GNB-CU-CP-E1AP-ID-Item : (UEID-GNB-CU-CP-E1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item
                            gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->RANUEID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                eNB-UEID : (UEID-ENB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB
                    mME-UE-S1AP-ID : (MME-UE-S1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->MME-UE-S1AP-ID
                    gUMMEI : (GUMMEI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GUMMEI
                        pLMN-Identity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GUMMEI->PLMNIdentity
                        mME-Group-ID : (MME-Group-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GUMMEI->MME-Group-ID
                        mME-Code : (MME-Code) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GUMMEI->MME-Code
                    m-eNB-UE-X2AP-ID : (ENB-UE-X2AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->ENB-UE-X2AP-ID
                    m-eNB-UE-X2AP-ID-Extension : (ENB-UE-X2AP-ID-Extension) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->ENB-UE-X2AP-ID-Extension
                    globalENB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GlobalENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->PLMNIdentity
                        eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID
                            macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->macro-eNB-ID
                            home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->home-eNB-ID
                            short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                            long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
            ric-ControlDecision : (ric-ControlDecision) 					---- (ENUMERATED) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format2->ric-ControlDecision
        controlHeader-Format3 : (E2SM-RC-ControlHeader-Format3) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3
            ue-Group-ID : (UE-Group-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-ID
            ue-Group-Definition : (UE-Group-Definition) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition
                ueGroupDefinitionIdentifier-LIST : (UE-Group-Definition-ueGroupDefinitionIdentifier-LIST) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST
                    UEGroupDefinitionIdentifier-Item : (UEGroupDefinitionIdentifier-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item
                        ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ID
                        ranParameter-valueType : (RANParameter-ValueType) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType
                            ranP-Choice-ElementTrue : (RANParameter-ValueType-Choice-ElementTrue) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue
                                ranParameter-value : (RANParameter-Value) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value
                                    valueBoolean : (valueBoolean) 					---- (BOOLEAN) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBoolean
                                    valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueInt
                                    valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueReal
                                    valueBitS : (valueBitS) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBitS
                                    valueOctS : (valueOctS) 					---- (OCTET STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueOctS
                                    valuePrintableString : (valuePrintableString) 					---- (PrintableString) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valuePrintableString
                            ranP-Choice-ElementFalse : (RANParameter-ValueType-Choice-ElementFalse) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse
                                ranParameter-value : (RANParameter-Value) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value
                                    valueBoolean : (valueBoolean) 					---- (BOOLEAN) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBoolean
                                    valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueInt
                                    valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueReal
                                    valueBitS : (valueBitS) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBitS
                                    valueOctS : (valueOctS) 					---- (OCTET STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueOctS
                                    valuePrintableString : (valuePrintableString) 					---- (PrintableString) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valuePrintableString
                            ranP-Choice-Structure : (RANParameter-ValueType-Choice-Structure) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure
                                ranParameter-Structure : (RANParameter-STRUCTURE) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE
                                    sequence-of-ranParameters : (RANParameter-STRUCTURE-sequence-of-ranParameters) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters
                                        RANParameter-STRUCTURE-Item : (RANParameter-STRUCTURE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item
                                            ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
                                            ranParameter-valueType : (RANParameter-ValueType) 					---- (RECURSIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ValueType
                            ranP-Choice-List : (RANParameter-ValueType-Choice-List) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List
                                ranParameter-List : (RANParameter-LIST) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST
                                    list-of-ranParameter : (RANParameter-LIST-list-of-ranParameter) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter
                                        RANParameter-STRUCTURE : (RANParameter-STRUCTURE) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE
                                            sequence-of-ranParameters : (RANParameter-STRUCTURE-sequence-of-ranParameters) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters
                                                RANParameter-STRUCTURE-Item : (RANParameter-STRUCTURE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item
                                                    ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
                                                    ranParameter-valueType : (RANParameter-ValueType) 					---- (RECURSIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ValueType
                        logicalOR : (LogicalOR) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->UE-Group-Definition->UE-Group-Definition-ueGroupDefinitionIdentifier-LIST->UEGroupDefinitionIdentifier-Item->LogicalOR
            ric-Style-Type : (RIC-Style-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->RIC-Style-Type
            ric-ControlAction-ID : (RIC-ControlAction-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format3->RIC-ControlAction-ID
        controlHeader-Format4 : (E2SM-RC-ControlHeader-Format4) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4
            partial-ueID : (PartialUEID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID
                amf-UE-NGAP-ID : (AMF-UE-NGAP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->AMF-UE-NGAP-ID
                guami : (GUAMI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUAMI
                    pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUAMI->PLMNIdentity
                    aMFRegionID : (AMFRegionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUAMI->AMFRegionID
                    aMFSetID : (AMFSetID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUAMI->AMFSetID
                    aMFPointer : (AMFPointer) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUAMI->AMFPointer
                gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GNB-CU-UE-F1AP-ID
                gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GNB-CU-CP-UE-E1AP-ID
                ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->RANUEID
                m-NG-RAN-UE-XnAP-ID : (NG-RANnodeUEXnAPID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->NG-RANnodeUEXnAPID
                globalNG-RANNode-ID : (GlobalNGRANNodeID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID
                    gNB : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalGNB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
                        gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID
                            gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
                    ng-eNB : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalNgENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
                        ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID
                            macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                            shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                            longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI
                    c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->RNTI-Value
                    cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI
                        nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->NR-CGI
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                            nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                        eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->EUTRA-CGI
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                            eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                ng-eNB-CU-UE-W1AP-ID : (NGENB-CU-UE-W1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->NGENB-CU-UE-W1AP-ID
                m-eNB-UE-X2AP-ID : (ENB-UE-X2AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->ENB-UE-X2AP-ID
                m-eNB-UE-X2AP-ID-Extension : (ENB-UE-X2AP-ID-Extension) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->ENB-UE-X2AP-ID-Extension
                globalENB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalENB-ID
                    pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalENB-ID->PLMNIdentity
                    eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalENB-ID->ENB-ID
                        macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalENB-ID->ENB-ID->macro-eNB-ID
                        home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalENB-ID->ENB-ID->home-eNB-ID
                        short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                        long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                mME-UE-S1AP-ID : (MME-UE-S1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->MME-UE-S1AP-ID
                gUMMEI : (GUMMEI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUMMEI
                    pLMN-Identity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUMMEI->PLMNIdentity
                    mME-Group-ID : (MME-Group-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUMMEI->MME-Group-ID
                    mME-Code : (MME-Code) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->PartialUEID->GUMMEI->MME-Code
            ric-Style-Type : (RIC-Style-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->RIC-Style-Type
            ric-ControlAction-ID : (RIC-ControlAction-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->RIC-ControlAction-ID
            ric-ControlDecision : (ric-ControlDecision) 					---- (ENUMERATED) ---- [O] ----PATH: E2SM-RC-ControlHeader->E2SM-RC-ControlHeader-ric-controlHeader-formats->E2SM-RC-ControlHeader-Format4->ric-ControlDecision

RECURSION LIST:[]
RECURSION MARK LIST:{'RANParameter-ValueType'}
*/
#endif // ASSIGN_HARDCODE_E2SM_RC_CONTROL_HEADER_H

