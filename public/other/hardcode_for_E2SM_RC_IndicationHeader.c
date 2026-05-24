#ifndef ASSIGN_HARDCODE_E2SM_RC_INDICATION_HEADER_H
#define ASSIGN_HARDCODE_E2SM_RC_INDICATION_HEADER_H
#include<stdio.h>
#include"output_main.h"
#include "MAIN_STRUCT.h"

xnap_return_et assign_hardcode_value_E2SM_RC_IndicationHeader(_e2ap_E2SM_RC_IndicationHeader_t* p_E2SM_RC_IndicationHeader)
{
    /*=== START SEQUENCE -idx1 -ROOTS1 E2SM-RC-IndicationHeader ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader alias = -1 -mandatory
    /*=== START CHOICE -rootc1 - E2SM-RC-IndicationHeader-ric-indicationHeader-formats ===*/
    #if 1 //hc-choice-ELEM 1 -idx4 -rootc1: E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM_RC_IndicationHeader_Format1 - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.choice_type = E2AP_E2SM_RC_INDICATION_HEADER_RIC_INDICATION_HEADER_FORMATS_e2ap_INDICATION_HEADER_FORMAT1;
    /*=== START SEQUENCE -idx5 -ROOTS2 E2SM-RC-IndicationHeader-Format1 ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format1 alias = 5 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format1.bitmask |= E2AP_E2SM_RC_INDICATION_HEADER_FORMAT1_e2ap_RIC_EVENT_TRIGGER_CONDITION_ID_PRESENT;
    //hc-ric_eventTriggerCondition_ID -idx7- alias primitive - pid = 5 - INTEGER - min:1 - max:65535  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format1->RIC-EventTriggerCondition-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format1.ric_eventTriggerCondition_ID = 32768;// change integer here
    //end of hc-ric_eventTriggerCondition_ID -idx7- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format1 alias = 5
    /*=== END SEQUENCE -idx5 E2SM-RC-IndicationHeader-Format1 -ROOTS2 ===*/

    #endif /*choice-ELEM 1 -idx4 -rootc1 - E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format1 */

    #if 0 //hc-choice-ELEM 2 -idx8 -rootc1: E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2 - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.choice_type = E2AP_E2SM_RC_INDICATION_HEADER_RIC_INDICATION_HEADER_FORMATS_e2ap_INDICATION_HEADER_FORMAT2;
    /*=== START SEQUENCE -idx9 -ROOTS3 E2SM-RC-IndicationHeader-Format2 ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2 alias = -1 -mandatory
    /*=== START CHOICE -rootc2 - UEID ===*/
    #if 1 //hc-choice-ELEM 1 -idx12 -rootc2: UEID->UEID_GNB - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.choice_type = E2AP_UEID_e2ap_G_NB_UEID;
    /*=== START SEQUENCE -idx13 -ROOTS4 UEID-GNB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = 6 -mandatory
    //hc-amf_UE_NGAP_ID -idx15- alias primitive - pid = 6 - INTEGER - min:0 - max:1099511627775  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->AMF-UE-NGAP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.amf_UE_NGAP_ID = 549755813887;// change integer here
    //end of hc-amf_UE_NGAP_ID -idx15- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = -1 -mandatory
    /*=== START SEQUENCE -idx17 -ROOTS5 GUAMI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GUAMI alias = 8 -mandatory
    //hc-pLMNIdentity -idx19- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GUAMI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.guami.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.guami.pLMNIdentity.data, temp_buff_for_pLMNIdentity, sizeof(temp_buff_for_pLMNIdentity)); // change octetstring data here
    //end of hc-pLMNIdentity -idx19- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GUAMI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFRegionID -idx21- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GUAMI->AMFRegionID
    OSOCTET temp_buff_for_aMFRegionID[] = {0x01}; // min =8 - max = 8 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.guami.aMFRegionID.numbits = 8;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.guami.aMFRegionID.data, temp_buff_for_aMFRegionID, 1); // change bitstring data here
    //end of hc-aMFRegionID -idx21- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GUAMI alias = 3
    //hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFSetID -idx23- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GUAMI->AMFSetID
    OSOCTET temp_buff_for_aMFSetID[] = {0x01, 0x02}; // min =10 - max = 10 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.guami.aMFSetID.numbits = 10;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.guami.aMFSetID.data, temp_buff_for_aMFSetID, 2); // change bitstring data here
    //end of hc-aMFSetID -idx23- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GUAMI alias = 3
    //hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFPointer -idx25- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GUAMI->AMFPointer
    OSOCTET temp_buff_for_aMFPointer[] = {0x01}; // min =6 - max = 6 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.guami.aMFPointer.numbits = 6;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.guami.aMFPointer.data, temp_buff_for_aMFPointer, 1); // change bitstring data here
    //end of hc-aMFPointer -idx25- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GUAMI alias = 3
    /*=== END SEQUENCE -idx17 GUAMI -ROOTS5 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_G_NB_CU_UE_F1AP_ID_LIST_PRESENT;
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.gNB_CU_UE_F1AP_ID_List.UEID_GNB_CU_CP_F1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx27 -ROOTS6 UEID-GNB-CU-CP-F1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_UE_F1AP_ID -idx29- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.gNB_CU_UE_F1AP_ID_List.UEID_GNB_CU_CP_F1AP_ID_Item[0].gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx29- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx27 UEID-GNB-CU-CP-F1AP-ID-Item -ROOTS6 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_G_NB_CU_CP_UE_E1AP_ID_LIST_PRESENT;
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx31 -ROOTS7 UEID-GNB-CU-CP-E1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx33- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item[0].gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx33- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx31 UEID-GNB-CU-CP-E1AP-ID-Item -ROOTS7 ===*/

    //end of hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 5: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = 8 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx35- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->RANUEID
    OSOCTET temp_buff_for_ran_UEID[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.ran_UEID.data, temp_buff_for_ran_UEID, sizeof(temp_buff_for_ran_UEID)); // change octetstring data here
    //end of hc-ran_UEID -idx35- alias primitive

    //end of hc-sequence-ELEM 5: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = 8
    //hc-sequence-ELEM 6: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = 6 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_M_NG_RAN_UE_XN_AP_ID_PRESENT;
    //hc-m_NG_RAN_UE_XnAP_ID -idx37- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->NG-RANnodeUEXnAPID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.m_NG_RAN_UE_XnAP_ID = 2147483647;// change integer here
    //end of hc-m_NG_RAN_UE_XnAP_ID -idx37- alias primitive
    //end of hc-sequence-ELEM 6: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = 6
    //hc-sequence-ELEM 7: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_GLOBAL_GNB_ID_PRESENT;
    /*=== START SEQUENCE -idx39 -ROOTS8 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx41- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_1[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalGNB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_1);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalGNB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_1, sizeof(temp_buff_for_pLMNIdentity_1)); // change octetstring data here
    //end of hc-pLMNIdentity -idx41- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc3 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx44 -rootc3: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalGNB_ID.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx45- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalGNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalGNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID, 3);
    //end of hc-gNB_ID -idx45- primitive
    #endif /*choice-ELEM 1 -idx44 -rootc3 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc3 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx39 GlobalGNB-ID -ROOTS8 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 8: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_GLOBAL_NG_RANNODE_ID_PRESENT;
    /*=== START CHOICE -rootc4 - GlobalNGRANNodeID ===*/
    #if 1 //hc-choice-ELEM 1 -idx48 -rootc4: GlobalNGRANNodeID->GlobalGNB_ID - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_G_NB;
    /*=== START SEQUENCE -idx49 -ROOTS9 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx51- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_2[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_2);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_2, sizeof(temp_buff_for_pLMNIdentity_2)); // change octetstring data here
    //end of hc-pLMNIdentity -idx51- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc5 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx54 -rootc5: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx55- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_1[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_1, 3);
    //end of hc-gNB_ID -idx55- primitive
    #endif /*choice-ELEM 1 -idx54 -rootc5 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc5 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx49 GlobalGNB-ID -ROOTS9 ===*/

    #endif /*choice-ELEM 1 -idx48 -rootc4 - GlobalNGRANNodeID->GlobalGNB-ID */

    #if 0 //hc-choice-ELEM 2 -idx56 -rootc4: GlobalNGRANNodeID->GlobalNgENB-ID - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_NG_E_NB;
    /*=== START SEQUENCE -idx57 -ROOTS10 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx59- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_3[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_3);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_3, sizeof(temp_buff_for_pLMNIdentity_3)); // change octetstring data here
    //end of hc-pLMNIdentity -idx59- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc6 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx62 -rootc6: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx63- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID, 3);
    //end of hc-macroNgENB_ID -idx63- primitive
    #endif /*choice-ELEM 1 -idx62 -rootc6 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx64 -rootc6: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx65- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID, 3);
    //end of hc-shortMacroNgENB_ID -idx65- primitive
    #endif /*choice-ELEM 2 -idx64 -rootc6 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx66 -rootc6: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx67- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID, 3);
    //end of hc-longMacroNgENB_ID -idx67- primitive
    #endif /*choice-ELEM 3 -idx66 -rootc6 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc6 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx57 GlobalNgENB-ID -ROOTS10 ===*/

    #endif /*choice-ELEM 2 -idx56 -rootc4 - GlobalNGRANNodeID->GlobalNgENB-ID */

    /*=== END CHOICE -rootc4 - GlobalNGRANNodeID ===*/

    //end of hc-sequence-ELEM 8: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 9: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx69 -ROOTS11 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx71- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx71- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc7 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx74 -rootc7: CGI->NR_CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx75 -ROOTS12 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx77- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_4[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_4);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_4, sizeof(temp_buff_for_pLMNIdentity_4)); // change octetstring data here
    //end of hc-pLMNIdentity -idx77- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx79- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx79- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx75 NR-CGI -ROOTS12 ===*/

    #endif /*choice-ELEM 1 -idx74 -rootc7 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx80 -rootc7: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx81 -ROOTS13 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx83- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_5[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_5);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_5, sizeof(temp_buff_for_pLMNIdentity_5)); // change octetstring data here
    //end of hc-pLMNIdentity -idx83- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx85- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx85- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx81 EUTRA-CGI -ROOTS13 ===*/

    #endif /*choice-ELEM 2 -idx80 -rootc7 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc7 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx69 Cell-RNTI -ROOTS11 ===*/

    //end of hc-sequence-ELEM 9: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB alias = -1
    /*=== END SEQUENCE -idx13 UEID-GNB -ROOTS4 ===*/

    #endif /*choice-ELEM 1 -idx12 -rootc2 - UEID->UEID-GNB */

    #if 0 //hc-choice-ELEM 2 -idx86 -rootc2: UEID->UEID-GNB-DU - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.choice_type = E2AP_UEID_e2ap_G_NB_DU_UEID;
    /*=== START SEQUENCE -idx87 -ROOTS14 UEID-GNB-DU ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU alias = 6 -mandatory
    //hc-gNB_CU_UE_F1AP_ID -idx89- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_DU_UEID.gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx89- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU alias = 8 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_DU_UEID.bitmask |= E2AP_UEID_GNB_DU_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx91- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->RANUEID
    OSOCTET temp_buff_for_ran_UEID_1[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_DU_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_1);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_DU_UEID.ran_UEID.data, temp_buff_for_ran_UEID_1, sizeof(temp_buff_for_ran_UEID_1)); // change octetstring data here
    //end of hc-ran_UEID -idx91- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU alias = 8
    //hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_DU_UEID.bitmask |= E2AP_UEID_GNB_DU_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx93 -ROOTS15 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx95- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->RNTI-Value
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx95- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc8 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx98 -rootc8: CGI->NR_CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx99 -ROOTS16 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx101- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_6[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_6);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_6, sizeof(temp_buff_for_pLMNIdentity_6)); // change octetstring data here
    //end of hc-pLMNIdentity -idx101- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx103- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_1[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_1, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx103- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx99 NR-CGI -ROOTS16 ===*/

    #endif /*choice-ELEM 1 -idx98 -rootc8 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx104 -rootc8: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx105 -ROOTS17 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx107- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_7[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_7);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_7, sizeof(temp_buff_for_pLMNIdentity_7)); // change octetstring data here
    //end of hc-pLMNIdentity -idx107- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx109- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_1[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_1, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx109- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx105 EUTRA-CGI -ROOTS17 ===*/

    #endif /*choice-ELEM 2 -idx104 -rootc8 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc8 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx93 Cell-RNTI -ROOTS15 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU alias = -1
    /*=== END SEQUENCE -idx87 UEID-GNB-DU -ROOTS14 ===*/

    #endif /*choice-ELEM 2 -idx86 -rootc2 - UEID->UEID-GNB-DU */

    #if 0 //hc-choice-ELEM 3 -idx110 -rootc2: UEID->UEID-GNB-CU-UP - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.choice_type = E2AP_UEID_e2ap_G_NB_CU_UP_UEID;
    /*=== START SEQUENCE -idx111 -ROOTS18 UEID-GNB-CU-UP ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-CU-UP alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx113- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-CU-UP->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_CU_UP_UEID.gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx113- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-CU-UP alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-CU-UP alias = 8 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_CU_UP_UEID.bitmask |= E2AP_UEID_GNB_CU_UP_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx115- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-CU-UP->RANUEID
    OSOCTET temp_buff_for_ran_UEID_2[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_CU_UP_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_2);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.gNB_CU_UP_UEID.ran_UEID.data, temp_buff_for_ran_UEID_2, sizeof(temp_buff_for_ran_UEID_2)); // change octetstring data here
    //end of hc-ran_UEID -idx115- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-CU-UP alias = 8
    /*=== END SEQUENCE -idx111 UEID-GNB-CU-UP -ROOTS18 ===*/

    #endif /*choice-ELEM 3 -idx110 -rootc2 - UEID->UEID-GNB-CU-UP */

    #if 0 //hc-choice-ELEM 4 -idx116 -rootc2: UEID->UEID-NG-ENB - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.choice_type = E2AP_UEID_e2ap_NG_E_NB_UEID;
    /*=== START SEQUENCE -idx117 -ROOTS19 UEID-NG-ENB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB alias = 6 -mandatory
    //hc-amf_UE_NGAP_ID -idx119- alias primitive - pid = 6 - INTEGER - min:0 - max:1099511627775  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->AMF-UE-NGAP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.amf_UE_NGAP_ID = 549755813887;// change integer here
    //end of hc-amf_UE_NGAP_ID -idx119- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB alias = -1 -mandatory
    /*=== START SEQUENCE -idx121 -ROOTS20 GUAMI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GUAMI alias = 8 -mandatory
    //hc-pLMNIdentity -idx123- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GUAMI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_8[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.guami.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_8);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.guami.pLMNIdentity.data, temp_buff_for_pLMNIdentity_8, sizeof(temp_buff_for_pLMNIdentity_8)); // change octetstring data here
    //end of hc-pLMNIdentity -idx123- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GUAMI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFRegionID -idx125- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GUAMI->AMFRegionID
    OSOCTET temp_buff_for_aMFRegionID_1[] = {0x01}; // min =8 - max = 8 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.guami.aMFRegionID.numbits = 8;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.guami.aMFRegionID.data, temp_buff_for_aMFRegionID_1, 1); // change bitstring data here
    //end of hc-aMFRegionID -idx125- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GUAMI alias = 3
    //hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFSetID -idx127- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GUAMI->AMFSetID
    OSOCTET temp_buff_for_aMFSetID_1[] = {0x01, 0x02}; // min =10 - max = 10 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.guami.aMFSetID.numbits = 10;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.guami.aMFSetID.data, temp_buff_for_aMFSetID_1, 2); // change bitstring data here
    //end of hc-aMFSetID -idx127- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GUAMI alias = 3
    //hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFPointer -idx129- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GUAMI->AMFPointer
    OSOCTET temp_buff_for_aMFPointer_1[] = {0x01}; // min =6 - max = 6 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.guami.aMFPointer.numbits = 6;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.guami.aMFPointer.data, temp_buff_for_aMFPointer_1, 1); // change bitstring data here
    //end of hc-aMFPointer -idx129- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GUAMI alias = 3
    /*=== END SEQUENCE -idx121 GUAMI -ROOTS20 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB alias = 6 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_NG_E_NB_CU_UE_W1AP_ID_PRESENT;
    //hc-ng_eNB_CU_UE_W1AP_ID -idx131- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->NGENB-CU-UE-W1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.ng_eNB_CU_UE_W1AP_ID = 2147483647;// change integer here
    //end of hc-ng_eNB_CU_UE_W1AP_ID -idx131- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB alias = 6 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_M_NG_RAN_UE_XN_AP_ID_PRESENT;
    //hc-m_NG_RAN_UE_XnAP_ID -idx133- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->NG-RANnodeUEXnAPID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.m_NG_RAN_UE_XnAP_ID = 2147483647;// change integer here
    //end of hc-m_NG_RAN_UE_XnAP_ID -idx133- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 5: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_GLOBAL_NG_ENB_ID_PRESENT;
    /*=== START SEQUENCE -idx135 -ROOTS21 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx137- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_9[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_9);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_9, sizeof(temp_buff_for_pLMNIdentity_9)); // change octetstring data here
    //end of hc-pLMNIdentity -idx137- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc9 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx140 -rootc9: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx141- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_1[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_1, 3);
    //end of hc-macroNgENB_ID -idx141- primitive
    #endif /*choice-ELEM 1 -idx140 -rootc9 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx142 -rootc9: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx143- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_1[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_1, 3);
    //end of hc-shortMacroNgENB_ID -idx143- primitive
    #endif /*choice-ELEM 2 -idx142 -rootc9 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx144 -rootc9: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx145- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_1[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_1, 3);
    //end of hc-longMacroNgENB_ID -idx145- primitive
    #endif /*choice-ELEM 3 -idx144 -rootc9 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc9 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx135 GlobalNgENB-ID -ROOTS21 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_GLOBAL_NG_RANNODE_ID_PRESENT;
    /*=== START CHOICE -rootc10 - GlobalNGRANNodeID ===*/
    #if 1 //hc-choice-ELEM 1 -idx148 -rootc10: GlobalNGRANNodeID->GlobalGNB_ID - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_G_NB;
    /*=== START SEQUENCE -idx149 -ROOTS22 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx151- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_10[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_10);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_10, sizeof(temp_buff_for_pLMNIdentity_10)); // change octetstring data here
    //end of hc-pLMNIdentity -idx151- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc11 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx154 -rootc11: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx155- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_2[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_2, 3);
    //end of hc-gNB_ID -idx155- primitive
    #endif /*choice-ELEM 1 -idx154 -rootc11 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc11 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx149 GlobalGNB-ID -ROOTS22 ===*/

    #endif /*choice-ELEM 1 -idx148 -rootc10 - GlobalNGRANNodeID->GlobalGNB-ID */

    #if 0 //hc-choice-ELEM 2 -idx156 -rootc10: GlobalNGRANNodeID->GlobalNgENB-ID - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_NG_E_NB;
    /*=== START SEQUENCE -idx157 -ROOTS23 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx159- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_11[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_11);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_11, sizeof(temp_buff_for_pLMNIdentity_11)); // change octetstring data here
    //end of hc-pLMNIdentity -idx159- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc12 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx162 -rootc12: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx163- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_2[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_2, 3);
    //end of hc-macroNgENB_ID -idx163- primitive
    #endif /*choice-ELEM 1 -idx162 -rootc12 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx164 -rootc12: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx165- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_2[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_2, 3);
    //end of hc-shortMacroNgENB_ID -idx165- primitive
    #endif /*choice-ELEM 2 -idx164 -rootc12 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx166 -rootc12: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx167- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_2[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_2, 3);
    //end of hc-longMacroNgENB_ID -idx167- primitive
    #endif /*choice-ELEM 3 -idx166 -rootc12 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc12 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx157 GlobalNgENB-ID -ROOTS23 ===*/

    #endif /*choice-ELEM 2 -idx156 -rootc10 - GlobalNGRANNodeID->GlobalNgENB-ID */

    /*=== END CHOICE -rootc10 - GlobalNGRANNodeID ===*/

    //end of hc-sequence-ELEM 6: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 7: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx169 -ROOTS24 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx171- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx171- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc13 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx174 -rootc13: CGI->NR_CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx175 -ROOTS25 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx177- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_12[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_12);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_12, sizeof(temp_buff_for_pLMNIdentity_12)); // change octetstring data here
    //end of hc-pLMNIdentity -idx177- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx179- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_2[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_2, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx179- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx175 NR-CGI -ROOTS25 ===*/

    #endif /*choice-ELEM 1 -idx174 -rootc13 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx180 -rootc13: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx181 -ROOTS26 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx183- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_13[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_13);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_13, sizeof(temp_buff_for_pLMNIdentity_13)); // change octetstring data here
    //end of hc-pLMNIdentity -idx183- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx185- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_2[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_2, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx185- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx181 EUTRA-CGI -ROOTS26 ===*/

    #endif /*choice-ELEM 2 -idx180 -rootc13 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc13 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx169 Cell-RNTI -ROOTS24 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB alias = -1
    /*=== END SEQUENCE -idx117 UEID-NG-ENB -ROOTS19 ===*/

    #endif /*choice-ELEM 4 -idx116 -rootc2 - UEID->UEID-NG-ENB */

    #if 0 //hc-choice-ELEM 5 -idx186 -rootc2: UEID->UEID-NG-ENB-DU - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.choice_type = E2AP_UEID_e2ap_NG_E_NB_DU_UEID;
    /*=== START SEQUENCE -idx187 -ROOTS27 UEID-NG-ENB-DU ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU alias = 6 -mandatory
    //hc-ng_eNB_CU_UE_W1AP_ID -idx189- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->NGENB-CU-UE-W1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_DU_UEID.ng_eNB_CU_UE_W1AP_ID = 2147483647;// change integer here
    //end of hc-ng_eNB_CU_UE_W1AP_ID -idx189- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_DU_UEID.bitmask |= E2AP_UEID_NG_ENB_DU_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx191 -ROOTS28 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx193- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->RNTI-Value
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx193- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc14 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx196 -rootc14: CGI->NR_CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx197 -ROOTS29 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx199- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_14[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_14);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_14, sizeof(temp_buff_for_pLMNIdentity_14)); // change octetstring data here
    //end of hc-pLMNIdentity -idx199- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx201- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_3[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_3, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx201- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx197 NR-CGI -ROOTS29 ===*/

    #endif /*choice-ELEM 1 -idx196 -rootc14 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx202 -rootc14: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx203 -ROOTS30 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx205- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_15[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_15);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_15, sizeof(temp_buff_for_pLMNIdentity_15)); // change octetstring data here
    //end of hc-pLMNIdentity -idx205- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx207- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_3[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_3, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx207- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx203 EUTRA-CGI -ROOTS30 ===*/

    #endif /*choice-ELEM 2 -idx202 -rootc14 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc14 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx191 Cell-RNTI -ROOTS28 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU alias = -1
    /*=== END SEQUENCE -idx187 UEID-NG-ENB-DU -ROOTS27 ===*/

    #endif /*choice-ELEM 5 -idx186 -rootc2 - UEID->UEID-NG-ENB-DU */

    #if 0 //hc-choice-ELEM 6 -idx208 -rootc2: UEID->UEID-EN-GNB - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.choice_type = E2AP_UEID_e2ap_EN_G_NB_UEID;
    /*=== START SEQUENCE -idx209 -ROOTS31 UEID-EN-GNB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB alias = 6 -mandatory
    //hc-m_eNB_UE_X2AP_ID -idx211- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.m_eNB_UE_X2AP_ID = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID -idx211- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB alias = 5 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_M_E_NB_UE_X2AP_ID_EXTENSION_PRESENT;
    //hc-m_eNB_UE_X2AP_ID_Extension -idx213- alias primitive - pid = 5 - INTEGER - min:0 - max:4095  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID-Extension
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.m_eNB_UE_X2AP_ID_Extension = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID_Extension -idx213- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB alias = 5
    //hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB alias = -1 -mandatory
    /*=== START SEQUENCE -idx215 -ROOTS32 GlobalENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx217- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_16[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_16);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_16, sizeof(temp_buff_for_pLMNIdentity_16)); // change octetstring data here
    //end of hc-pLMNIdentity -idx217- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc15 - ENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx220 -rootc15: ENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    //hc-macro_eNB_ID -idx221- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->macro-eNB-ID
    OSOCTET temp_buff_for_macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID, 3);
    //end of hc-macro_eNB_ID -idx221- primitive
    #endif /*choice-ELEM 1 -idx220 -rootc15 - ENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx222 -rootc15: ENB-ID->BIT STRING (SIZE(28)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    //hc-home_eNB_ID -idx223- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->home-eNB-ID
    OSOCTET temp_buff_for_home_eNB_ID[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID, 4);
    //end of hc-home_eNB_ID -idx223- primitive
    #endif /*choice-ELEM 2 -idx222 -rootc15 - ENB-ID->BIT STRING (SIZE(28)) */

    #if 0 //hc-choice-ELEM 3 -idx224 -rootc15: ENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    //hc-short_Macro_eNB_ID -idx225- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    OSOCTET temp_buff_for_short_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID, 3);
    //end of hc-short_Macro_eNB_ID -idx225- primitive
    #endif /*choice-ELEM 3 -idx224 -rootc15 - ENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 4 -idx226 -rootc15: ENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    //hc-long_Macro_eNB_ID -idx227- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    OSOCTET temp_buff_for_long_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID, 3);
    //end of hc-long_Macro_eNB_ID -idx227- primitive
    #endif /*choice-ELEM 4 -idx226 -rootc15 - ENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc15 - ENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID alias = -1
    /*=== END SEQUENCE -idx215 GlobalENB-ID -ROOTS32 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB alias = -1
    //hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB alias = 6 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_G_NB_CU_UE_F1AP_ID_PRESENT;
    //hc-gNB_CU_UE_F1AP_ID -idx229- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx229- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB alias = 6
    //hc-sequence-ELEM 5: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_G_NB_CU_CP_UE_E1AP_ID_LIST_PRESENT;
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx231 -ROOTS33 UEID-GNB-CU-CP-E1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx233- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item[0].gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx233- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx231 UEID-GNB-CU-CP-E1AP-ID-Item -ROOTS33 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB alias = 8 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx235- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->RANUEID
    OSOCTET temp_buff_for_ran_UEID_3[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_3);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.ran_UEID.data, temp_buff_for_ran_UEID_3, sizeof(temp_buff_for_ran_UEID_3)); // change octetstring data here
    //end of hc-ran_UEID -idx235- alias primitive

    //end of hc-sequence-ELEM 6: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB alias = 8
    //hc-sequence-ELEM 7: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx237 -ROOTS34 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx239- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx239- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc16 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx242 -rootc16: CGI->NR_CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx243 -ROOTS35 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx245- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_17[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_17);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_17, sizeof(temp_buff_for_pLMNIdentity_17)); // change octetstring data here
    //end of hc-pLMNIdentity -idx245- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx247- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_4[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_4, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx247- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx243 NR-CGI -ROOTS35 ===*/

    #endif /*choice-ELEM 1 -idx242 -rootc16 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx248 -rootc16: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx249 -ROOTS36 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx251- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_18[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_18);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_18, sizeof(temp_buff_for_pLMNIdentity_18)); // change octetstring data here
    //end of hc-pLMNIdentity -idx251- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx253- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_4[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_4, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx253- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx249 EUTRA-CGI -ROOTS36 ===*/

    #endif /*choice-ELEM 2 -idx248 -rootc16 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc16 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx237 Cell-RNTI -ROOTS34 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB alias = -1
    /*=== END SEQUENCE -idx209 UEID-EN-GNB -ROOTS31 ===*/

    #endif /*choice-ELEM 6 -idx208 -rootc2 - UEID->UEID-EN-GNB */

    #if 0 //hc-choice-ELEM 7 -idx254 -rootc2: UEID->UEID-ENB - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.choice_type = E2AP_UEID_e2ap_E_NB_UEID;
    /*=== START SEQUENCE -idx255 -ROOTS37 UEID-ENB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB alias = 6 -mandatory
    //hc-mME_UE_S1AP_ID -idx257- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->MME-UE-S1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.mME_UE_S1AP_ID = 2147483647;// change integer here
    //end of hc-mME_UE_S1AP_ID -idx257- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB alias = -1 -mandatory
    /*=== START SEQUENCE -idx259 -ROOTS38 GUMMEI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-pLMN_Identity -idx261- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GUMMEI->PLMNIdentity
    OSOCTET temp_buff_for_pLMN_Identity[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.gUMMEI.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.gUMMEI.pLMN_Identity.data, temp_buff_for_pLMN_Identity, sizeof(temp_buff_for_pLMN_Identity)); // change octetstring data here
    //end of hc-pLMN_Identity -idx261- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GUMMEI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-mME_Group_ID -idx263- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GUMMEI->MME-Group-ID
    OSOCTET temp_buff_for_mME_Group_ID[] = {0x01, 0x02}; // min =2 - max = 2 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.gUMMEI.mME_Group_ID.numocts = sizeof(temp_buff_for_mME_Group_ID);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.gUMMEI.mME_Group_ID.data, temp_buff_for_mME_Group_ID, sizeof(temp_buff_for_mME_Group_ID)); // change octetstring data here
    //end of hc-mME_Group_ID -idx263- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GUMMEI alias = 8
    //hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-mME_Code -idx265- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GUMMEI->MME-Code
    OSOCTET temp_buff_for_mME_Code[] = {0x01}; // min =1 - max = 1 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.gUMMEI.mME_Code.numocts = sizeof(temp_buff_for_mME_Code);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.gUMMEI.mME_Code.data, temp_buff_for_mME_Code, sizeof(temp_buff_for_mME_Code)); // change octetstring data here
    //end of hc-mME_Code -idx265- alias primitive

    //end of hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GUMMEI alias = 8
    /*=== END SEQUENCE -idx259 GUMMEI -ROOTS38 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB alias = 6 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_M_E_NB_UE_X2AP_ID_PRESENT;
    //hc-m_eNB_UE_X2AP_ID -idx267- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->ENB-UE-X2AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.m_eNB_UE_X2AP_ID = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID -idx267- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB alias = 6
    //hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB alias = 5 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_M_E_NB_UE_X2AP_ID_EXTENSION_PRESENT;
    //hc-m_eNB_UE_X2AP_ID_Extension -idx269- alias primitive - pid = 5 - INTEGER - min:0 - max:4095  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->ENB-UE-X2AP-ID-Extension
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.m_eNB_UE_X2AP_ID_Extension = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID_Extension -idx269- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB alias = 5
    //hc-sequence-ELEM 5: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_GLOBAL_ENB_ID_PRESENT;
    /*=== START SEQUENCE -idx271 -ROOTS39 GlobalENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GlobalENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx273- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_19[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.globalENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_19);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.globalENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_19, sizeof(temp_buff_for_pLMNIdentity_19)); // change octetstring data here
    //end of hc-pLMNIdentity -idx273- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GlobalENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GlobalENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc17 - ENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx276 -rootc17: ENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    //hc-macro_eNB_ID -idx277- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->macro-eNB-ID
    OSOCTET temp_buff_for_macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_1, 3);
    //end of hc-macro_eNB_ID -idx277- primitive
    #endif /*choice-ELEM 1 -idx276 -rootc17 - ENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx278 -rootc17: ENB-ID->BIT STRING (SIZE(28)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    //hc-home_eNB_ID -idx279- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->home-eNB-ID
    OSOCTET temp_buff_for_home_eNB_ID_1[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_1, 4);
    //end of hc-home_eNB_ID -idx279- primitive
    #endif /*choice-ELEM 2 -idx278 -rootc17 - ENB-ID->BIT STRING (SIZE(28)) */

    #if 0 //hc-choice-ELEM 3 -idx280 -rootc17: ENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    //hc-short_Macro_eNB_ID -idx281- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    OSOCTET temp_buff_for_short_Macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_1, 3);
    //end of hc-short_Macro_eNB_ID -idx281- primitive
    #endif /*choice-ELEM 3 -idx280 -rootc17 - ENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 4 -idx282 -rootc17: ENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    //hc-long_Macro_eNB_ID -idx283- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    OSOCTET temp_buff_for_long_Macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_1, 3);
    //end of hc-long_Macro_eNB_ID -idx283- primitive
    #endif /*choice-ELEM 4 -idx282 -rootc17 - ENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc17 - ENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GlobalENB-ID alias = -1
    /*=== END SEQUENCE -idx271 GlobalENB-ID -ROOTS39 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx285 -ROOTS40 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx287- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx287- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc18 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx290 -rootc18: CGI->NR_CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx291 -ROOTS41 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx293- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_20[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_20);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_20, sizeof(temp_buff_for_pLMNIdentity_20)); // change octetstring data here
    //end of hc-pLMNIdentity -idx293- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx295- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_5[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_5, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx295- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx291 NR-CGI -ROOTS41 ===*/

    #endif /*choice-ELEM 1 -idx290 -rootc18 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx296 -rootc18: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx297 -ROOTS42 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx299- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_21[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_21);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_21, sizeof(temp_buff_for_pLMNIdentity_21)); // change octetstring data here
    //end of hc-pLMNIdentity -idx299- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx301- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_5[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_5, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx301- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx297 EUTRA-CGI -ROOTS42 ===*/

    #endif /*choice-ELEM 2 -idx296 -rootc18 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc18 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx285 Cell-RNTI -ROOTS40 ===*/

    //end of hc-sequence-ELEM 6: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB alias = -1
    /*=== END SEQUENCE -idx255 UEID-ENB -ROOTS37 ===*/

    #endif /*choice-ELEM 7 -idx254 -rootc2 - UEID->UEID-ENB */

    /*=== END CHOICE -rootc2 - UEID ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2 alias = -1
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2 alias = 15 -mandatory
    //hc-ric_InsertStyle_Type -idx303- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->RIC-Style-Type
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ric_InsertStyle_Type = 875;// change integer here
    //end of hc-ric_InsertStyle_Type -idx303- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2 alias = 15
    //hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2 alias = 5 -mandatory
    //hc-ric_InsertIndication_ID -idx305- alias primitive - pid = 5 - INTEGER - min:1 - max:65535  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->RIC-InsertIndication-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format2.ric_InsertIndication_ID = 32768;// change integer here
    //end of hc-ric_InsertIndication_ID -idx305- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2 alias = 5
    /*=== END SEQUENCE -idx9 E2SM-RC-IndicationHeader-Format2 -ROOTS3 ===*/

    #endif /*choice-ELEM 2 -idx8 -rootc1 - E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2 */

    #if 0 //hc-choice-ELEM 3 -idx306 -rootc1: E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3 - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.choice_type = E2AP_E2SM_RC_INDICATION_HEADER_RIC_INDICATION_HEADER_FORMATS_e2ap_INDICATION_HEADER_FORMAT3;
    /*=== START SEQUENCE -idx307 -ROOTS43 E2SM-RC-IndicationHeader-Format3 ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3 alias = 5 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.bitmask |= E2AP_E2SM_RC_INDICATION_HEADER_FORMAT3_e2ap_RIC_EVENT_TRIGGER_CONDITION_ID_PRESENT;
    //hc-ric_eventTriggerCondition_ID -idx309- alias primitive - pid = 5 - INTEGER - min:1 - max:65535  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->RIC-EventTriggerCondition-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ric_eventTriggerCondition_ID = 32768;// change integer here
    //end of hc-ric_eventTriggerCondition_ID -idx309- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3 alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3 alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.bitmask |= E2AP_E2SM_RC_INDICATION_HEADER_FORMAT3_e2ap_UE_ID_PRESENT;
    /*=== START CHOICE -rootc19 - UEID ===*/
    #if 1 //hc-choice-ELEM 1 -idx312 -rootc19: UEID->UEID_GNB - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.choice_type = E2AP_UEID_e2ap_G_NB_UEID;
    /*=== START SEQUENCE -idx313 -ROOTS44 UEID-GNB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = 6 -mandatory
    //hc-amf_UE_NGAP_ID -idx315- alias primitive - pid = 6 - INTEGER - min:0 - max:1099511627775  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->AMF-UE-NGAP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.amf_UE_NGAP_ID = 549755813887;// change integer here
    //end of hc-amf_UE_NGAP_ID -idx315- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = -1 -mandatory
    /*=== START SEQUENCE -idx317 -ROOTS45 GUAMI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GUAMI alias = 8 -mandatory
    //hc-pLMNIdentity -idx319- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GUAMI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_22[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.guami.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_22);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.guami.pLMNIdentity.data, temp_buff_for_pLMNIdentity_22, sizeof(temp_buff_for_pLMNIdentity_22)); // change octetstring data here
    //end of hc-pLMNIdentity -idx319- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GUAMI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFRegionID -idx321- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GUAMI->AMFRegionID
    OSOCTET temp_buff_for_aMFRegionID_2[] = {0x01}; // min =8 - max = 8 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.guami.aMFRegionID.numbits = 8;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.guami.aMFRegionID.data, temp_buff_for_aMFRegionID_2, 1); // change bitstring data here
    //end of hc-aMFRegionID -idx321- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GUAMI alias = 3
    //hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFSetID -idx323- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GUAMI->AMFSetID
    OSOCTET temp_buff_for_aMFSetID_2[] = {0x01, 0x02}; // min =10 - max = 10 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.guami.aMFSetID.numbits = 10;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.guami.aMFSetID.data, temp_buff_for_aMFSetID_2, 2); // change bitstring data here
    //end of hc-aMFSetID -idx323- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GUAMI alias = 3
    //hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFPointer -idx325- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GUAMI->AMFPointer
    OSOCTET temp_buff_for_aMFPointer_2[] = {0x01}; // min =6 - max = 6 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.guami.aMFPointer.numbits = 6;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.guami.aMFPointer.data, temp_buff_for_aMFPointer_2, 1); // change bitstring data here
    //end of hc-aMFPointer -idx325- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GUAMI alias = 3
    /*=== END SEQUENCE -idx317 GUAMI -ROOTS45 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_G_NB_CU_UE_F1AP_ID_LIST_PRESENT;
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.gNB_CU_UE_F1AP_ID_List.UEID_GNB_CU_CP_F1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx327 -ROOTS46 UEID-GNB-CU-CP-F1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_UE_F1AP_ID -idx329- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.gNB_CU_UE_F1AP_ID_List.UEID_GNB_CU_CP_F1AP_ID_Item[0].gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx329- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx327 UEID-GNB-CU-CP-F1AP-ID-Item -ROOTS46 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_G_NB_CU_CP_UE_E1AP_ID_LIST_PRESENT;
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx331 -ROOTS47 UEID-GNB-CU-CP-E1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx333- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item[0].gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx333- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx331 UEID-GNB-CU-CP-E1AP-ID-Item -ROOTS47 ===*/

    //end of hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 5: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = 8 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx335- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->RANUEID
    OSOCTET temp_buff_for_ran_UEID_4[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_4);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.ran_UEID.data, temp_buff_for_ran_UEID_4, sizeof(temp_buff_for_ran_UEID_4)); // change octetstring data here
    //end of hc-ran_UEID -idx335- alias primitive

    //end of hc-sequence-ELEM 5: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = 8
    //hc-sequence-ELEM 6: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = 6 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_M_NG_RAN_UE_XN_AP_ID_PRESENT;
    //hc-m_NG_RAN_UE_XnAP_ID -idx337- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->NG-RANnodeUEXnAPID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.m_NG_RAN_UE_XnAP_ID = 2147483647;// change integer here
    //end of hc-m_NG_RAN_UE_XnAP_ID -idx337- alias primitive
    //end of hc-sequence-ELEM 6: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = 6
    //hc-sequence-ELEM 7: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_GLOBAL_GNB_ID_PRESENT;
    /*=== START SEQUENCE -idx339 -ROOTS48 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx341- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_23[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalGNB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_23);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalGNB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_23, sizeof(temp_buff_for_pLMNIdentity_23)); // change octetstring data here
    //end of hc-pLMNIdentity -idx341- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc20 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx344 -rootc20: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalGNB_ID.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx345- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_3[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalGNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalGNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_3, 3);
    //end of hc-gNB_ID -idx345- primitive
    #endif /*choice-ELEM 1 -idx344 -rootc20 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc20 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx339 GlobalGNB-ID -ROOTS48 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 8: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_GLOBAL_NG_RANNODE_ID_PRESENT;
    /*=== START CHOICE -rootc21 - GlobalNGRANNodeID ===*/
    #if 1 //hc-choice-ELEM 1 -idx348 -rootc21: GlobalNGRANNodeID->GlobalGNB_ID - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_G_NB;
    /*=== START SEQUENCE -idx349 -ROOTS49 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx351- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_24[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_24);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_24, sizeof(temp_buff_for_pLMNIdentity_24)); // change octetstring data here
    //end of hc-pLMNIdentity -idx351- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc22 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx354 -rootc22: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx355- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_4[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_4, 3);
    //end of hc-gNB_ID -idx355- primitive
    #endif /*choice-ELEM 1 -idx354 -rootc22 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc22 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx349 GlobalGNB-ID -ROOTS49 ===*/

    #endif /*choice-ELEM 1 -idx348 -rootc21 - GlobalNGRANNodeID->GlobalGNB-ID */

    #if 0 //hc-choice-ELEM 2 -idx356 -rootc21: GlobalNGRANNodeID->GlobalNgENB-ID - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_NG_E_NB;
    /*=== START SEQUENCE -idx357 -ROOTS50 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx359- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_25[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_25);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_25, sizeof(temp_buff_for_pLMNIdentity_25)); // change octetstring data here
    //end of hc-pLMNIdentity -idx359- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc23 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx362 -rootc23: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx363- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_3[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_3, 3);
    //end of hc-macroNgENB_ID -idx363- primitive
    #endif /*choice-ELEM 1 -idx362 -rootc23 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx364 -rootc23: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx365- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_3[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_3, 3);
    //end of hc-shortMacroNgENB_ID -idx365- primitive
    #endif /*choice-ELEM 2 -idx364 -rootc23 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx366 -rootc23: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx367- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_3[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_3, 3);
    //end of hc-longMacroNgENB_ID -idx367- primitive
    #endif /*choice-ELEM 3 -idx366 -rootc23 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc23 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx357 GlobalNgENB-ID -ROOTS50 ===*/

    #endif /*choice-ELEM 2 -idx356 -rootc21 - GlobalNGRANNodeID->GlobalNgENB-ID */

    /*=== END CHOICE -rootc21 - GlobalNGRANNodeID ===*/

    //end of hc-sequence-ELEM 8: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 9: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx369 -ROOTS51 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx371- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx371- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc24 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx374 -rootc24: CGI->NR_CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx375 -ROOTS52 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx377- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_26[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_26);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_26, sizeof(temp_buff_for_pLMNIdentity_26)); // change octetstring data here
    //end of hc-pLMNIdentity -idx377- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx379- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_6[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_6, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx379- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx375 NR-CGI -ROOTS52 ===*/

    #endif /*choice-ELEM 1 -idx374 -rootc24 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx380 -rootc24: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx381 -ROOTS53 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx383- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_27[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_27);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_27, sizeof(temp_buff_for_pLMNIdentity_27)); // change octetstring data here
    //end of hc-pLMNIdentity -idx383- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx385- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_6[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_6, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx385- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx381 EUTRA-CGI -ROOTS53 ===*/

    #endif /*choice-ELEM 2 -idx380 -rootc24 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc24 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx369 Cell-RNTI -ROOTS51 ===*/

    //end of hc-sequence-ELEM 9: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB alias = -1
    /*=== END SEQUENCE -idx313 UEID-GNB -ROOTS44 ===*/

    #endif /*choice-ELEM 1 -idx312 -rootc19 - UEID->UEID-GNB */

    #if 0 //hc-choice-ELEM 2 -idx386 -rootc19: UEID->UEID-GNB-DU - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.choice_type = E2AP_UEID_e2ap_G_NB_DU_UEID;
    /*=== START SEQUENCE -idx387 -ROOTS54 UEID-GNB-DU ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU alias = 6 -mandatory
    //hc-gNB_CU_UE_F1AP_ID -idx389- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_DU_UEID.gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx389- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU alias = 8 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_DU_UEID.bitmask |= E2AP_UEID_GNB_DU_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx391- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->RANUEID
    OSOCTET temp_buff_for_ran_UEID_5[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_DU_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_5);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_DU_UEID.ran_UEID.data, temp_buff_for_ran_UEID_5, sizeof(temp_buff_for_ran_UEID_5)); // change octetstring data here
    //end of hc-ran_UEID -idx391- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU alias = 8
    //hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_DU_UEID.bitmask |= E2AP_UEID_GNB_DU_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx393 -ROOTS55 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx395- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->RNTI-Value
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_DU_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx395- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc25 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx398 -rootc25: CGI->NR_CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx399 -ROOTS56 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx401- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_28[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_28);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_28, sizeof(temp_buff_for_pLMNIdentity_28)); // change octetstring data here
    //end of hc-pLMNIdentity -idx401- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx403- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_7[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_7, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx403- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx399 NR-CGI -ROOTS56 ===*/

    #endif /*choice-ELEM 1 -idx398 -rootc25 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx404 -rootc25: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx405 -ROOTS57 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx407- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_29[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_29);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_29, sizeof(temp_buff_for_pLMNIdentity_29)); // change octetstring data here
    //end of hc-pLMNIdentity -idx407- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx409- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_7[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_7, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx409- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx405 EUTRA-CGI -ROOTS57 ===*/

    #endif /*choice-ELEM 2 -idx404 -rootc25 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc25 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx393 Cell-RNTI -ROOTS55 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU alias = -1
    /*=== END SEQUENCE -idx387 UEID-GNB-DU -ROOTS54 ===*/

    #endif /*choice-ELEM 2 -idx386 -rootc19 - UEID->UEID-GNB-DU */

    #if 0 //hc-choice-ELEM 3 -idx410 -rootc19: UEID->UEID-GNB-CU-UP - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.choice_type = E2AP_UEID_e2ap_G_NB_CU_UP_UEID;
    /*=== START SEQUENCE -idx411 -ROOTS58 UEID-GNB-CU-UP ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-CU-UP alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx413- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-CU-UP->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_CU_UP_UEID.gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx413- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-CU-UP alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-CU-UP alias = 8 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_CU_UP_UEID.bitmask |= E2AP_UEID_GNB_CU_UP_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx415- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-CU-UP->RANUEID
    OSOCTET temp_buff_for_ran_UEID_6[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_CU_UP_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_6);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.gNB_CU_UP_UEID.ran_UEID.data, temp_buff_for_ran_UEID_6, sizeof(temp_buff_for_ran_UEID_6)); // change octetstring data here
    //end of hc-ran_UEID -idx415- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-CU-UP alias = 8
    /*=== END SEQUENCE -idx411 UEID-GNB-CU-UP -ROOTS58 ===*/

    #endif /*choice-ELEM 3 -idx410 -rootc19 - UEID->UEID-GNB-CU-UP */

    #if 0 //hc-choice-ELEM 4 -idx416 -rootc19: UEID->UEID-NG-ENB - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.choice_type = E2AP_UEID_e2ap_NG_E_NB_UEID;
    /*=== START SEQUENCE -idx417 -ROOTS59 UEID-NG-ENB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB alias = 6 -mandatory
    //hc-amf_UE_NGAP_ID -idx419- alias primitive - pid = 6 - INTEGER - min:0 - max:1099511627775  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->AMF-UE-NGAP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.amf_UE_NGAP_ID = 549755813887;// change integer here
    //end of hc-amf_UE_NGAP_ID -idx419- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB alias = -1 -mandatory
    /*=== START SEQUENCE -idx421 -ROOTS60 GUAMI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GUAMI alias = 8 -mandatory
    //hc-pLMNIdentity -idx423- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GUAMI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_30[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.guami.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_30);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.guami.pLMNIdentity.data, temp_buff_for_pLMNIdentity_30, sizeof(temp_buff_for_pLMNIdentity_30)); // change octetstring data here
    //end of hc-pLMNIdentity -idx423- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GUAMI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFRegionID -idx425- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GUAMI->AMFRegionID
    OSOCTET temp_buff_for_aMFRegionID_3[] = {0x01}; // min =8 - max = 8 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.guami.aMFRegionID.numbits = 8;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.guami.aMFRegionID.data, temp_buff_for_aMFRegionID_3, 1); // change bitstring data here
    //end of hc-aMFRegionID -idx425- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GUAMI alias = 3
    //hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFSetID -idx427- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GUAMI->AMFSetID
    OSOCTET temp_buff_for_aMFSetID_3[] = {0x01, 0x02}; // min =10 - max = 10 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.guami.aMFSetID.numbits = 10;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.guami.aMFSetID.data, temp_buff_for_aMFSetID_3, 2); // change bitstring data here
    //end of hc-aMFSetID -idx427- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GUAMI alias = 3
    //hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFPointer -idx429- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GUAMI->AMFPointer
    OSOCTET temp_buff_for_aMFPointer_3[] = {0x01}; // min =6 - max = 6 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.guami.aMFPointer.numbits = 6;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.guami.aMFPointer.data, temp_buff_for_aMFPointer_3, 1); // change bitstring data here
    //end of hc-aMFPointer -idx429- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GUAMI alias = 3
    /*=== END SEQUENCE -idx421 GUAMI -ROOTS60 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB alias = 6 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_NG_E_NB_CU_UE_W1AP_ID_PRESENT;
    //hc-ng_eNB_CU_UE_W1AP_ID -idx431- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->NGENB-CU-UE-W1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.ng_eNB_CU_UE_W1AP_ID = 2147483647;// change integer here
    //end of hc-ng_eNB_CU_UE_W1AP_ID -idx431- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB alias = 6 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_M_NG_RAN_UE_XN_AP_ID_PRESENT;
    //hc-m_NG_RAN_UE_XnAP_ID -idx433- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->NG-RANnodeUEXnAPID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.m_NG_RAN_UE_XnAP_ID = 2147483647;// change integer here
    //end of hc-m_NG_RAN_UE_XnAP_ID -idx433- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 5: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_GLOBAL_NG_ENB_ID_PRESENT;
    /*=== START SEQUENCE -idx435 -ROOTS61 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx437- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_31[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_31);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_31, sizeof(temp_buff_for_pLMNIdentity_31)); // change octetstring data here
    //end of hc-pLMNIdentity -idx437- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc26 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx440 -rootc26: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx441- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_4[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_4, 3);
    //end of hc-macroNgENB_ID -idx441- primitive
    #endif /*choice-ELEM 1 -idx440 -rootc26 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx442 -rootc26: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx443- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_4[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_4, 3);
    //end of hc-shortMacroNgENB_ID -idx443- primitive
    #endif /*choice-ELEM 2 -idx442 -rootc26 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx444 -rootc26: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx445- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_4[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_4, 3);
    //end of hc-longMacroNgENB_ID -idx445- primitive
    #endif /*choice-ELEM 3 -idx444 -rootc26 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc26 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx435 GlobalNgENB-ID -ROOTS61 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_GLOBAL_NG_RANNODE_ID_PRESENT;
    /*=== START CHOICE -rootc27 - GlobalNGRANNodeID ===*/
    #if 1 //hc-choice-ELEM 1 -idx448 -rootc27: GlobalNGRANNodeID->GlobalGNB_ID - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_G_NB;
    /*=== START SEQUENCE -idx449 -ROOTS62 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx451- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_32[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_32);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_32, sizeof(temp_buff_for_pLMNIdentity_32)); // change octetstring data here
    //end of hc-pLMNIdentity -idx451- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc28 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx454 -rootc28: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx455- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_5[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_5, 3);
    //end of hc-gNB_ID -idx455- primitive
    #endif /*choice-ELEM 1 -idx454 -rootc28 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc28 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx449 GlobalGNB-ID -ROOTS62 ===*/

    #endif /*choice-ELEM 1 -idx448 -rootc27 - GlobalNGRANNodeID->GlobalGNB-ID */

    #if 0 //hc-choice-ELEM 2 -idx456 -rootc27: GlobalNGRANNodeID->GlobalNgENB-ID - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_NG_E_NB;
    /*=== START SEQUENCE -idx457 -ROOTS63 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx459- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_33[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_33);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_33, sizeof(temp_buff_for_pLMNIdentity_33)); // change octetstring data here
    //end of hc-pLMNIdentity -idx459- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc29 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx462 -rootc29: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx463- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_5[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_5, 3);
    //end of hc-macroNgENB_ID -idx463- primitive
    #endif /*choice-ELEM 1 -idx462 -rootc29 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx464 -rootc29: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx465- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_5[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_5, 3);
    //end of hc-shortMacroNgENB_ID -idx465- primitive
    #endif /*choice-ELEM 2 -idx464 -rootc29 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx466 -rootc29: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx467- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_5[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_5, 3);
    //end of hc-longMacroNgENB_ID -idx467- primitive
    #endif /*choice-ELEM 3 -idx466 -rootc29 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc29 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx457 GlobalNgENB-ID -ROOTS63 ===*/

    #endif /*choice-ELEM 2 -idx456 -rootc27 - GlobalNGRANNodeID->GlobalNgENB-ID */

    /*=== END CHOICE -rootc27 - GlobalNGRANNodeID ===*/

    //end of hc-sequence-ELEM 6: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 7: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx469 -ROOTS64 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx471- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx471- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc30 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx474 -rootc30: CGI->NR_CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx475 -ROOTS65 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx477- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_34[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_34);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_34, sizeof(temp_buff_for_pLMNIdentity_34)); // change octetstring data here
    //end of hc-pLMNIdentity -idx477- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx479- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_8[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_8, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx479- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx475 NR-CGI -ROOTS65 ===*/

    #endif /*choice-ELEM 1 -idx474 -rootc30 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx480 -rootc30: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx481 -ROOTS66 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx483- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_35[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_35);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_35, sizeof(temp_buff_for_pLMNIdentity_35)); // change octetstring data here
    //end of hc-pLMNIdentity -idx483- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx485- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_8[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_8, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx485- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx481 EUTRA-CGI -ROOTS66 ===*/

    #endif /*choice-ELEM 2 -idx480 -rootc30 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc30 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx469 Cell-RNTI -ROOTS64 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB alias = -1
    /*=== END SEQUENCE -idx417 UEID-NG-ENB -ROOTS59 ===*/

    #endif /*choice-ELEM 4 -idx416 -rootc19 - UEID->UEID-NG-ENB */

    #if 0 //hc-choice-ELEM 5 -idx486 -rootc19: UEID->UEID-NG-ENB-DU - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.choice_type = E2AP_UEID_e2ap_NG_E_NB_DU_UEID;
    /*=== START SEQUENCE -idx487 -ROOTS67 UEID-NG-ENB-DU ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU alias = 6 -mandatory
    //hc-ng_eNB_CU_UE_W1AP_ID -idx489- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->NGENB-CU-UE-W1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_DU_UEID.ng_eNB_CU_UE_W1AP_ID = 2147483647;// change integer here
    //end of hc-ng_eNB_CU_UE_W1AP_ID -idx489- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_DU_UEID.bitmask |= E2AP_UEID_NG_ENB_DU_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx491 -ROOTS68 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx493- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->RNTI-Value
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx493- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc31 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx496 -rootc31: CGI->NR_CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx497 -ROOTS69 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx499- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_36[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_36);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_36, sizeof(temp_buff_for_pLMNIdentity_36)); // change octetstring data here
    //end of hc-pLMNIdentity -idx499- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx501- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_9[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_9, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx501- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx497 NR-CGI -ROOTS69 ===*/

    #endif /*choice-ELEM 1 -idx496 -rootc31 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx502 -rootc31: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx503 -ROOTS70 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx505- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_37[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_37);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_37, sizeof(temp_buff_for_pLMNIdentity_37)); // change octetstring data here
    //end of hc-pLMNIdentity -idx505- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx507- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_9[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_9, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx507- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx503 EUTRA-CGI -ROOTS70 ===*/

    #endif /*choice-ELEM 2 -idx502 -rootc31 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc31 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx491 Cell-RNTI -ROOTS68 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU alias = -1
    /*=== END SEQUENCE -idx487 UEID-NG-ENB-DU -ROOTS67 ===*/

    #endif /*choice-ELEM 5 -idx486 -rootc19 - UEID->UEID-NG-ENB-DU */

    #if 0 //hc-choice-ELEM 6 -idx508 -rootc19: UEID->UEID-EN-GNB - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.choice_type = E2AP_UEID_e2ap_EN_G_NB_UEID;
    /*=== START SEQUENCE -idx509 -ROOTS71 UEID-EN-GNB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB alias = 6 -mandatory
    //hc-m_eNB_UE_X2AP_ID -idx511- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.m_eNB_UE_X2AP_ID = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID -idx511- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB alias = 5 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_M_E_NB_UE_X2AP_ID_EXTENSION_PRESENT;
    //hc-m_eNB_UE_X2AP_ID_Extension -idx513- alias primitive - pid = 5 - INTEGER - min:0 - max:4095  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID-Extension
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.m_eNB_UE_X2AP_ID_Extension = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID_Extension -idx513- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB alias = 5
    //hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB alias = -1 -mandatory
    /*=== START SEQUENCE -idx515 -ROOTS72 GlobalENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GlobalENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx517- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_38[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.globalENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_38);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.globalENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_38, sizeof(temp_buff_for_pLMNIdentity_38)); // change octetstring data here
    //end of hc-pLMNIdentity -idx517- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GlobalENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GlobalENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc32 - ENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx520 -rootc32: ENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    //hc-macro_eNB_ID -idx521- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->macro-eNB-ID
    OSOCTET temp_buff_for_macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_2, 3);
    //end of hc-macro_eNB_ID -idx521- primitive
    #endif /*choice-ELEM 1 -idx520 -rootc32 - ENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx522 -rootc32: ENB-ID->BIT STRING (SIZE(28)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    //hc-home_eNB_ID -idx523- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->home-eNB-ID
    OSOCTET temp_buff_for_home_eNB_ID_2[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_2, 4);
    //end of hc-home_eNB_ID -idx523- primitive
    #endif /*choice-ELEM 2 -idx522 -rootc32 - ENB-ID->BIT STRING (SIZE(28)) */

    #if 0 //hc-choice-ELEM 3 -idx524 -rootc32: ENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    //hc-short_Macro_eNB_ID -idx525- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    OSOCTET temp_buff_for_short_Macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_2, 3);
    //end of hc-short_Macro_eNB_ID -idx525- primitive
    #endif /*choice-ELEM 3 -idx524 -rootc32 - ENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 4 -idx526 -rootc32: ENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    //hc-long_Macro_eNB_ID -idx527- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    OSOCTET temp_buff_for_long_Macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_2, 3);
    //end of hc-long_Macro_eNB_ID -idx527- primitive
    #endif /*choice-ELEM 4 -idx526 -rootc32 - ENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc32 - ENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GlobalENB-ID alias = -1
    /*=== END SEQUENCE -idx515 GlobalENB-ID -ROOTS72 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB alias = -1
    //hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB alias = 6 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_G_NB_CU_UE_F1AP_ID_PRESENT;
    //hc-gNB_CU_UE_F1AP_ID -idx529- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx529- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB alias = 6
    //hc-sequence-ELEM 5: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_G_NB_CU_CP_UE_E1AP_ID_LIST_PRESENT;
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx531 -ROOTS73 UEID-GNB-CU-CP-E1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx533- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item[0].gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx533- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx531 UEID-GNB-CU-CP-E1AP-ID-Item -ROOTS73 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB alias = 8 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx535- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->RANUEID
    OSOCTET temp_buff_for_ran_UEID_7[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_7);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.ran_UEID.data, temp_buff_for_ran_UEID_7, sizeof(temp_buff_for_ran_UEID_7)); // change octetstring data here
    //end of hc-ran_UEID -idx535- alias primitive

    //end of hc-sequence-ELEM 6: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB alias = 8
    //hc-sequence-ELEM 7: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx537 -ROOTS74 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx539- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx539- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc33 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx542 -rootc33: CGI->NR_CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx543 -ROOTS75 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx545- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_39[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_39);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_39, sizeof(temp_buff_for_pLMNIdentity_39)); // change octetstring data here
    //end of hc-pLMNIdentity -idx545- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx547- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_10[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_10, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx547- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx543 NR-CGI -ROOTS75 ===*/

    #endif /*choice-ELEM 1 -idx542 -rootc33 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx548 -rootc33: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx549 -ROOTS76 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx551- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_40[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_40);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_40, sizeof(temp_buff_for_pLMNIdentity_40)); // change octetstring data here
    //end of hc-pLMNIdentity -idx551- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx553- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_10[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_10, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx553- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx549 EUTRA-CGI -ROOTS76 ===*/

    #endif /*choice-ELEM 2 -idx548 -rootc33 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc33 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx537 Cell-RNTI -ROOTS74 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB alias = -1
    /*=== END SEQUENCE -idx509 UEID-EN-GNB -ROOTS71 ===*/

    #endif /*choice-ELEM 6 -idx508 -rootc19 - UEID->UEID-EN-GNB */

    #if 0 //hc-choice-ELEM 7 -idx554 -rootc19: UEID->UEID-ENB - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.choice_type = E2AP_UEID_e2ap_E_NB_UEID;
    /*=== START SEQUENCE -idx555 -ROOTS77 UEID-ENB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB alias = 6 -mandatory
    //hc-mME_UE_S1AP_ID -idx557- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->MME-UE-S1AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.mME_UE_S1AP_ID = 2147483647;// change integer here
    //end of hc-mME_UE_S1AP_ID -idx557- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB alias = -1 -mandatory
    /*=== START SEQUENCE -idx559 -ROOTS78 GUMMEI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-pLMN_Identity -idx561- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GUMMEI->PLMNIdentity
    OSOCTET temp_buff_for_pLMN_Identity_1[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.gUMMEI.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_1);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.gUMMEI.pLMN_Identity.data, temp_buff_for_pLMN_Identity_1, sizeof(temp_buff_for_pLMN_Identity_1)); // change octetstring data here
    //end of hc-pLMN_Identity -idx561- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GUMMEI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-mME_Group_ID -idx563- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GUMMEI->MME-Group-ID
    OSOCTET temp_buff_for_mME_Group_ID_1[] = {0x01, 0x02}; // min =2 - max = 2 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.gUMMEI.mME_Group_ID.numocts = sizeof(temp_buff_for_mME_Group_ID_1);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.gUMMEI.mME_Group_ID.data, temp_buff_for_mME_Group_ID_1, sizeof(temp_buff_for_mME_Group_ID_1)); // change octetstring data here
    //end of hc-mME_Group_ID -idx563- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GUMMEI alias = 8
    //hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-mME_Code -idx565- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GUMMEI->MME-Code
    OSOCTET temp_buff_for_mME_Code_1[] = {0x01}; // min =1 - max = 1 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.gUMMEI.mME_Code.numocts = sizeof(temp_buff_for_mME_Code_1);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.gUMMEI.mME_Code.data, temp_buff_for_mME_Code_1, sizeof(temp_buff_for_mME_Code_1)); // change octetstring data here
    //end of hc-mME_Code -idx565- alias primitive

    //end of hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GUMMEI alias = 8
    /*=== END SEQUENCE -idx559 GUMMEI -ROOTS78 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB alias = 6 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_M_E_NB_UE_X2AP_ID_PRESENT;
    //hc-m_eNB_UE_X2AP_ID -idx567- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->ENB-UE-X2AP-ID
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.m_eNB_UE_X2AP_ID = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID -idx567- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB alias = 6
    //hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB alias = 5 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_M_E_NB_UE_X2AP_ID_EXTENSION_PRESENT;
    //hc-m_eNB_UE_X2AP_ID_Extension -idx569- alias primitive - pid = 5 - INTEGER - min:0 - max:4095  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->ENB-UE-X2AP-ID-Extension
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.m_eNB_UE_X2AP_ID_Extension = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID_Extension -idx569- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB alias = 5
    //hc-sequence-ELEM 5: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_GLOBAL_ENB_ID_PRESENT;
    /*=== START SEQUENCE -idx571 -ROOTS79 GlobalENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GlobalENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx573- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GlobalENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_41[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.globalENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_41);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.globalENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_41, sizeof(temp_buff_for_pLMNIdentity_41)); // change octetstring data here
    //end of hc-pLMNIdentity -idx573- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GlobalENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GlobalENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc34 - ENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx576 -rootc34: ENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    //hc-macro_eNB_ID -idx577- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->macro-eNB-ID
    OSOCTET temp_buff_for_macro_eNB_ID_3[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_3, 3);
    //end of hc-macro_eNB_ID -idx577- primitive
    #endif /*choice-ELEM 1 -idx576 -rootc34 - ENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx578 -rootc34: ENB-ID->BIT STRING (SIZE(28)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    //hc-home_eNB_ID -idx579- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->home-eNB-ID
    OSOCTET temp_buff_for_home_eNB_ID_3[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_3, 4);
    //end of hc-home_eNB_ID -idx579- primitive
    #endif /*choice-ELEM 2 -idx578 -rootc34 - ENB-ID->BIT STRING (SIZE(28)) */

    #if 0 //hc-choice-ELEM 3 -idx580 -rootc34: ENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    //hc-short_Macro_eNB_ID -idx581- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    OSOCTET temp_buff_for_short_Macro_eNB_ID_3[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_3, 3);
    //end of hc-short_Macro_eNB_ID -idx581- primitive
    #endif /*choice-ELEM 3 -idx580 -rootc34 - ENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 4 -idx582 -rootc34: ENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    //hc-long_Macro_eNB_ID -idx583- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    OSOCTET temp_buff_for_long_Macro_eNB_ID_3[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_3, 3);
    //end of hc-long_Macro_eNB_ID -idx583- primitive
    #endif /*choice-ELEM 4 -idx582 -rootc34 - ENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc34 - ENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GlobalENB-ID alias = -1
    /*=== END SEQUENCE -idx571 GlobalENB-ID -ROOTS79 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB alias = -1 -optional
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx585 -ROOTS80 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx587- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx587- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc35 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx590 -rootc35: CGI->NR_CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx591 -ROOTS81 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx593- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_42[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_42);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_42, sizeof(temp_buff_for_pLMNIdentity_42)); // change octetstring data here
    //end of hc-pLMNIdentity -idx593- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx595- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_11[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_11, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx595- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx591 NR-CGI -ROOTS81 ===*/

    #endif /*choice-ELEM 1 -idx590 -rootc35 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx596 -rootc35: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx597 -ROOTS82 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx599- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_43[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_43);
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_43, sizeof(temp_buff_for_pLMNIdentity_43)); // change octetstring data here
    //end of hc-pLMNIdentity -idx599- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx601- alias primitive - pid = 3 - BIT STRING - E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_11[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_IndicationHeader->ric_indicationHeader_formats.indicationHeader_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_11, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx601- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx597 EUTRA-CGI -ROOTS82 ===*/

    #endif /*choice-ELEM 2 -idx596 -rootc35 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc35 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx585 Cell-RNTI -ROOTS80 ===*/

    //end of hc-sequence-ELEM 6: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB alias = -1
    /*=== END SEQUENCE -idx555 UEID-ENB -ROOTS77 ===*/

    #endif /*choice-ELEM 7 -idx554 -rootc19 - UEID->UEID-ENB */

    /*=== END CHOICE -rootc19 - UEID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3 alias = -1
    /*=== END SEQUENCE -idx307 E2SM-RC-IndicationHeader-Format3 -ROOTS43 ===*/

    #endif /*choice-ELEM 3 -idx306 -rootc1 - E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3 */

    /*=== END CHOICE -rootc1 - E2SM-RC-IndicationHeader-ric-indicationHeader-formats ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-IndicationHeader alias = -1
    /*=== END SEQUENCE -idx1 E2SM-RC-IndicationHeader -ROOTS1 ===*/

    return XNAP_SUCCESS;
}
/*
E2SM-RC-IndicationHeader : (E2SM-RC-IndicationHeader) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-IndicationHeader
    ric-indicationHeader-formats : (E2SM-RC-IndicationHeader-ric-indicationHeader-formats) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats
        indicationHeader-Format1 : (E2SM-RC-IndicationHeader-Format1) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format1
            ric-eventTriggerCondition-ID : (RIC-EventTriggerCondition-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format1->RIC-EventTriggerCondition-ID
        indicationHeader-Format2 : (E2SM-RC-IndicationHeader-Format2) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2
            ueID : (UEID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID
                gNB-UEID : (UEID-GNB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB
                    amf-UE-NGAP-ID : (AMF-UE-NGAP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->AMF-UE-NGAP-ID
                    guami : (GUAMI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GUAMI
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GUAMI->PLMNIdentity
                        aMFRegionID : (AMFRegionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GUAMI->AMFRegionID
                        aMFSetID : (AMFSetID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GUAMI->AMFSetID
                        aMFPointer : (AMFPointer) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GUAMI->AMFPointer
                    gNB-CU-UE-F1AP-ID-List : (UEID-GNB-CU-F1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List
                        UEID-GNB-CU-CP-F1AP-ID-Item : (UEID-GNB-CU-CP-F1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item
                            gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item->GNB-CU-UE-F1AP-ID
                    gNB-CU-CP-UE-E1AP-ID-List : (UEID-GNB-CU-CP-E1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List
                        UEID-GNB-CU-CP-E1AP-ID-Item : (UEID-GNB-CU-CP-E1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item
                            gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->RANUEID
                    m-NG-RAN-UE-XnAP-ID : (NG-RANnodeUEXnAPID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->NG-RANnodeUEXnAPID
                    globalGNB-ID : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID->PLMNIdentity
                        gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID
                            gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID->gNB-ID
                    globalNG-RANNode-ID : (GlobalNGRANNodeID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID
                        gNB : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
                            gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID
                                gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
                        ng-eNB : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
                            ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID
                                macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                                shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                                longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                gNB-DU-UEID : (UEID-GNB-DU) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU
                    gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->GNB-CU-UE-F1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->RANUEID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                gNB-CU-UP-UEID : (UEID-GNB-CU-UP) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-CU-UP
                    gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-CU-UP->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-GNB-CU-UP->RANUEID
                ng-eNB-UEID : (UEID-NG-ENB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB
                    amf-UE-NGAP-ID : (AMF-UE-NGAP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->AMF-UE-NGAP-ID
                    guami : (GUAMI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GUAMI
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GUAMI->PLMNIdentity
                        aMFRegionID : (AMFRegionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GUAMI->AMFRegionID
                        aMFSetID : (AMFSetID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GUAMI->AMFSetID
                        aMFPointer : (AMFPointer) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GUAMI->AMFPointer
                    ng-eNB-CU-UE-W1AP-ID : (NGENB-CU-UE-W1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->NGENB-CU-UE-W1AP-ID
                    m-NG-RAN-UE-XnAP-ID : (NG-RANnodeUEXnAPID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->NG-RANnodeUEXnAPID
                    globalNgENB-ID : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->PLMNIdentity
                        ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID
                            macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                            shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                            longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    globalNG-RANNode-ID : (GlobalNGRANNodeID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID
                        gNB : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
                            gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID
                                gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
                        ng-eNB : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
                            ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID
                                macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                                shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                                longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                ng-eNB-DU-UEID : (UEID-NG-ENB-DU) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU
                    ng-eNB-CU-UE-W1AP-ID : (NGENB-CU-UE-W1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->NGENB-CU-UE-W1AP-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                en-gNB-UEID : (UEID-EN-GNB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB
                    m-eNB-UE-X2AP-ID : (ENB-UE-X2AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID
                    m-eNB-UE-X2AP-ID-Extension : (ENB-UE-X2AP-ID-Extension) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID-Extension
                    globalENB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->PLMNIdentity
                        eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID
                            macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->macro-eNB-ID
                            home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->home-eNB-ID
                            short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                            long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                    gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->GNB-CU-UE-F1AP-ID
                    gNB-CU-CP-UE-E1AP-ID-List : (UEID-GNB-CU-CP-E1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List
                        UEID-GNB-CU-CP-E1AP-ID-Item : (UEID-GNB-CU-CP-E1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item
                            gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->RANUEID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                eNB-UEID : (UEID-ENB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB
                    mME-UE-S1AP-ID : (MME-UE-S1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->MME-UE-S1AP-ID
                    gUMMEI : (GUMMEI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GUMMEI
                        pLMN-Identity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GUMMEI->PLMNIdentity
                        mME-Group-ID : (MME-Group-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GUMMEI->MME-Group-ID
                        mME-Code : (MME-Code) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GUMMEI->MME-Code
                    m-eNB-UE-X2AP-ID : (ENB-UE-X2AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->ENB-UE-X2AP-ID
                    m-eNB-UE-X2AP-ID-Extension : (ENB-UE-X2AP-ID-Extension) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->ENB-UE-X2AP-ID-Extension
                    globalENB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GlobalENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->PLMNIdentity
                        eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID
                            macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->macro-eNB-ID
                            home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->home-eNB-ID
                            short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                            long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
            ric-InsertStyle-Type : (RIC-Style-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->RIC-Style-Type
            ric-InsertIndication-ID : (RIC-InsertIndication-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format2->RIC-InsertIndication-ID
        indicationHeader-Format3 : (E2SM-RC-IndicationHeader-Format3) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3
            ric-eventTriggerCondition-ID : (RIC-EventTriggerCondition-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->RIC-EventTriggerCondition-ID
            ueID : (UEID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID
                gNB-UEID : (UEID-GNB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB
                    amf-UE-NGAP-ID : (AMF-UE-NGAP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->AMF-UE-NGAP-ID
                    guami : (GUAMI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GUAMI
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GUAMI->PLMNIdentity
                        aMFRegionID : (AMFRegionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GUAMI->AMFRegionID
                        aMFSetID : (AMFSetID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GUAMI->AMFSetID
                        aMFPointer : (AMFPointer) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GUAMI->AMFPointer
                    gNB-CU-UE-F1AP-ID-List : (UEID-GNB-CU-F1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List
                        UEID-GNB-CU-CP-F1AP-ID-Item : (UEID-GNB-CU-CP-F1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item
                            gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item->GNB-CU-UE-F1AP-ID
                    gNB-CU-CP-UE-E1AP-ID-List : (UEID-GNB-CU-CP-E1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List
                        UEID-GNB-CU-CP-E1AP-ID-Item : (UEID-GNB-CU-CP-E1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item
                            gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->RANUEID
                    m-NG-RAN-UE-XnAP-ID : (NG-RANnodeUEXnAPID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->NG-RANnodeUEXnAPID
                    globalGNB-ID : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalGNB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalGNB-ID->PLMNIdentity
                        gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID
                            gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID->gNB-ID
                    globalNG-RANNode-ID : (GlobalNGRANNodeID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID
                        gNB : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
                            gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID
                                gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
                        ng-eNB : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
                            ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID
                                macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                                shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                                longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                gNB-DU-UEID : (UEID-GNB-DU) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU
                    gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->GNB-CU-UE-F1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->RANUEID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                gNB-CU-UP-UEID : (UEID-GNB-CU-UP) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-CU-UP
                    gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-CU-UP->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-GNB-CU-UP->RANUEID
                ng-eNB-UEID : (UEID-NG-ENB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB
                    amf-UE-NGAP-ID : (AMF-UE-NGAP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->AMF-UE-NGAP-ID
                    guami : (GUAMI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GUAMI
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GUAMI->PLMNIdentity
                        aMFRegionID : (AMFRegionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GUAMI->AMFRegionID
                        aMFSetID : (AMFSetID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GUAMI->AMFSetID
                        aMFPointer : (AMFPointer) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GUAMI->AMFPointer
                    ng-eNB-CU-UE-W1AP-ID : (NGENB-CU-UE-W1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->NGENB-CU-UE-W1AP-ID
                    m-NG-RAN-UE-XnAP-ID : (NG-RANnodeUEXnAPID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->NG-RANnodeUEXnAPID
                    globalNgENB-ID : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->PLMNIdentity
                        ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID
                            macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                            shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                            longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    globalNG-RANNode-ID : (GlobalNGRANNodeID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID
                        gNB : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
                            gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID
                                gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
                        ng-eNB : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
                            ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID
                                macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                                shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                                longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                ng-eNB-DU-UEID : (UEID-NG-ENB-DU) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU
                    ng-eNB-CU-UE-W1AP-ID : (NGENB-CU-UE-W1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->NGENB-CU-UE-W1AP-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                en-gNB-UEID : (UEID-EN-GNB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB
                    m-eNB-UE-X2AP-ID : (ENB-UE-X2AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID
                    m-eNB-UE-X2AP-ID-Extension : (ENB-UE-X2AP-ID-Extension) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID-Extension
                    globalENB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GlobalENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->PLMNIdentity
                        eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID
                            macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->macro-eNB-ID
                            home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->home-eNB-ID
                            short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                            long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                    gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->GNB-CU-UE-F1AP-ID
                    gNB-CU-CP-UE-E1AP-ID-List : (UEID-GNB-CU-CP-E1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List
                        UEID-GNB-CU-CP-E1AP-ID-Item : (UEID-GNB-CU-CP-E1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item
                            gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->RANUEID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                eNB-UEID : (UEID-ENB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB
                    mME-UE-S1AP-ID : (MME-UE-S1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->MME-UE-S1AP-ID
                    gUMMEI : (GUMMEI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GUMMEI
                        pLMN-Identity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GUMMEI->PLMNIdentity
                        mME-Group-ID : (MME-Group-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GUMMEI->MME-Group-ID
                        mME-Code : (MME-Code) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GUMMEI->MME-Code
                    m-eNB-UE-X2AP-ID : (ENB-UE-X2AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->ENB-UE-X2AP-ID
                    m-eNB-UE-X2AP-ID-Extension : (ENB-UE-X2AP-ID-Extension) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->ENB-UE-X2AP-ID-Extension
                    globalENB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GlobalENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GlobalENB-ID->PLMNIdentity
                        eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID
                            macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->macro-eNB-ID
                            home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->home-eNB-ID
                            short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                            long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-IndicationHeader->E2SM-RC-IndicationHeader-ric-indicationHeader-formats->E2SM-RC-IndicationHeader-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity

RECURSION LIST:[]
RECURSION MARK LIST:set()
*/
#endif // ASSIGN_HARDCODE_E2SM_RC_INDICATION_HEADER_H

