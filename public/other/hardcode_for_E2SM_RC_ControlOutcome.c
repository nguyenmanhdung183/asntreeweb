#ifndef ASSIGN_HARDCODE_E2SM_RC_CONTROL_OUTCOME_H
#define ASSIGN_HARDCODE_E2SM_RC_CONTROL_OUTCOME_H
#include<stdio.h>
#include"output_main.h"
#include "MAIN_STRUCT.h"

xnap_return_et assign_hardcode_value_E2SM_RC_ControlOutcome(_e2ap_E2SM_RC_ControlOutcome_t* p_E2SM_RC_ControlOutcome)
{
    /*=== START SEQUENCE -idx1 -ROOTS1 E2SM-RC-ControlOutcome ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome alias = -1 -mandatory
    /*=== START CHOICE -rootc1 - E2SM-RC-ControlOutcome-ric-controlOutcome-formats ===*/
    #if 1 //hc-choice-ELEM 1 -idx4 -rootc1: E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM_RC_ControlOutcome_Format1 - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.choice_type = E2AP_E2SM_RC_CONTROL_OUTCOME_RIC_CONTROL_OUTCOME_FORMATS_e2ap_CONTROL_OUTCOME_FORMAT1;
    /*=== START SEQUENCE -idx5 -ROOTS2 E2SM-RC-ControlOutcome-Format1 ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1 alias = -1 -mandatory
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format1.ranP_List.E2SM_RC_ControlOutcome_Format1_Item_count = 1;
    /*=== START SEQUENCE -idx7 -ROOTS3 E2SM-RC-ControlOutcome-Format1-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx9- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item->RANParameter-ID
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format1.ranP_List.E2SM_RC_ControlOutcome_Format1_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx9- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item alias = -1 -mandatory
    /*=== START CHOICE -rootc2 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx12 -rootc2: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format1.ranP_List.E2SM_RC_ControlOutcome_Format1_Item[0].ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx13- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item->RANParameter-Value->valueBoolean
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format1.ranP_List.E2SM_RC_ControlOutcome_Format1_Item[0].ranParameter_value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx13- primitive

    #endif /*choice-ELEM 1 -idx12 -rootc2 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx14 -rootc2: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format1.ranP_List.E2SM_RC_ControlOutcome_Format1_Item[0].ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx15 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item->RANParameter-Value->valueInt
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format1.ranP_List.E2SM_RC_ControlOutcome_Format1_Item[0].ranParameter_value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx15- primitive

    #endif /*choice-ELEM 2 -idx14 -rootc2 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx16 -rootc2: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format1.ranP_List.E2SM_RC_ControlOutcome_Format1_Item[0].ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx17- primitive in scope - pid = 17 REAL - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item->RANParameter-Value->valueReal
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format1.ranP_List.E2SM_RC_ControlOutcome_Format1_Item[0].ranParameter_value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx17- primitive

    #endif /*choice-ELEM 3 -idx16 -rootc2 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx18 -rootc2: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format1.ranP_List.E2SM_RC_ControlOutcome_Format1_Item[0].ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx19- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format1.ranP_List.E2SM_RC_ControlOutcome_Format1_Item[0].ranParameter_value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format1.ranP_List.E2SM_RC_ControlOutcome_Format1_Item[0].ranParameter_value.valueBitS.data, temp_buff_for_valueBitS, 0);
    //end of hc-valueBitS -idx19- primitive
    #endif /*choice-ELEM 4 -idx18 -rootc2 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx20 -rootc2: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format1.ranP_List.E2SM_RC_ControlOutcome_Format1_Item[0].ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx21- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format1.ranP_List.E2SM_RC_ControlOutcome_Format1_Item[0].ranParameter_value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS); // change octetstring data here
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format1.ranP_List.E2SM_RC_ControlOutcome_Format1_Item[0].ranParameter_value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS));
    XNAP_MEMCPY(p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format1.ranP_List.E2SM_RC_ControlOutcome_Format1_Item[0].ranParameter_value.valueOctS.data, temp_buff_for_valueOctS, sizeof(temp_buff_for_valueOctS));
    //end of hc-valueOctS -idx21- primitive
    #endif /*choice-ELEM 5 -idx20 -rootc2 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx22 -rootc2: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format1.ranP_List.E2SM_RC_ControlOutcome_Format1_Item[0].ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx23- primitive in scope - pid = 14 Printable STRING - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item->RANParameter-Value->valuePrintableString
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format1.ranP_List.E2SM_RC_ControlOutcome_Format1_Item[0].ranParameter_value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx23- primitive

    #endif /*choice-ELEM 6 -idx22 -rootc2 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc2 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item alias = -1
    /*=== END SEQUENCE -idx7 E2SM-RC-ControlOutcome-Format1-Item -ROOTS3 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1 alias = -1
    /*=== END SEQUENCE -idx5 E2SM-RC-ControlOutcome-Format1 -ROOTS2 ===*/

    #endif /*choice-ELEM 1 -idx4 -rootc1 - E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1 */

    #if 0 //hc-choice-ELEM 2 -idx24 -rootc1: E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2 - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.choice_type = E2AP_E2SM_RC_CONTROL_OUTCOME_RIC_CONTROL_OUTCOME_FORMATS_e2ap_CONTROL_OUTCOME_FORMAT2;
    /*=== START SEQUENCE -idx25 -ROOTS4 E2SM-RC-ControlOutcome-Format2 ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2 alias = -1 -mandatory
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item_count = 1;
    /*=== START SEQUENCE -idx27 -ROOTS5 E2SM-RC-ControlOutcome-Format2-Style-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item alias = 15 -mandatory
    //hc-indicated_Control_Style_Type -idx29- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->RIC-Style-Type
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].indicated_Control_Style_Type = 875;// change integer here
    //end of hc-indicated_Control_Style_Type -idx29- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item alias = 15
    //hc-sequence-ELEM 2: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item alias = -1 -mandatory
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item_count = 1;
    /*=== START SEQUENCE -idx31 -ROOTS6 E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item alias = 5 -mandatory
    //hc-ric_ControlAction_ID -idx33- alias primitive - pid = 5 - INTEGER - min:1 - max:65535  - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->RIC-ControlAction-ID
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ric_ControlAction_ID = 32768;// change integer here
    //end of hc-ric_ControlAction_ID -idx33- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item alias = -1 -mandatory
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ranP_List.E2SM_RC_ControlOutcome_Format2_RANP_Item_count = 1;
    /*=== START SEQUENCE -idx35 -ROOTS7 E2SM-RC-ControlOutcome-Format2-RANP-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx37- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item->RANParameter-ID
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ranP_List.E2SM_RC_ControlOutcome_Format2_RANP_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx37- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item alias = -1 -mandatory
    /*=== START CHOICE -rootc3 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx40 -rootc3: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ranP_List.E2SM_RC_ControlOutcome_Format2_RANP_Item[0].ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx41- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item->RANParameter-Value->valueBoolean
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ranP_List.E2SM_RC_ControlOutcome_Format2_RANP_Item[0].ranParameter_value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx41- primitive

    #endif /*choice-ELEM 1 -idx40 -rootc3 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx42 -rootc3: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ranP_List.E2SM_RC_ControlOutcome_Format2_RANP_Item[0].ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx43 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item->RANParameter-Value->valueInt
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ranP_List.E2SM_RC_ControlOutcome_Format2_RANP_Item[0].ranParameter_value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx43- primitive

    #endif /*choice-ELEM 2 -idx42 -rootc3 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx44 -rootc3: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ranP_List.E2SM_RC_ControlOutcome_Format2_RANP_Item[0].ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx45- primitive in scope - pid = 17 REAL - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item->RANParameter-Value->valueReal
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ranP_List.E2SM_RC_ControlOutcome_Format2_RANP_Item[0].ranParameter_value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx45- primitive

    #endif /*choice-ELEM 3 -idx44 -rootc3 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx46 -rootc3: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ranP_List.E2SM_RC_ControlOutcome_Format2_RANP_Item[0].ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx47- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS_1[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ranP_List.E2SM_RC_ControlOutcome_Format2_RANP_Item[0].ranParameter_value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ranP_List.E2SM_RC_ControlOutcome_Format2_RANP_Item[0].ranParameter_value.valueBitS.data, temp_buff_for_valueBitS_1, 0);
    //end of hc-valueBitS -idx47- primitive
    #endif /*choice-ELEM 4 -idx46 -rootc3 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx48 -rootc3: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ranP_List.E2SM_RC_ControlOutcome_Format2_RANP_Item[0].ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx49- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS_1[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ranP_List.E2SM_RC_ControlOutcome_Format2_RANP_Item[0].ranParameter_value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS_1); // change octetstring data here
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ranP_List.E2SM_RC_ControlOutcome_Format2_RANP_Item[0].ranParameter_value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS_1));
    XNAP_MEMCPY(p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ranP_List.E2SM_RC_ControlOutcome_Format2_RANP_Item[0].ranParameter_value.valueOctS.data, temp_buff_for_valueOctS_1, sizeof(temp_buff_for_valueOctS_1));
    //end of hc-valueOctS -idx49- primitive
    #endif /*choice-ELEM 5 -idx48 -rootc3 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx50 -rootc3: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ranP_List.E2SM_RC_ControlOutcome_Format2_RANP_Item[0].ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx51- primitive in scope - pid = 14 Printable STRING - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item->RANParameter-Value->valuePrintableString
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format2.ric_ControlStyle_List.E2SM_RC_ControlOutcome_Format2_Style_Item[0].ric_ControlOutcome_List.E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item[0].ranP_List.E2SM_RC_ControlOutcome_Format2_RANP_Item[0].ranParameter_value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx51- primitive

    #endif /*choice-ELEM 6 -idx50 -rootc3 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc3 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item alias = -1
    /*=== END SEQUENCE -idx35 E2SM-RC-ControlOutcome-Format2-RANP-Item -ROOTS7 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item alias = -1
    /*=== END SEQUENCE -idx31 E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item -ROOTS6 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item alias = -1
    /*=== END SEQUENCE -idx27 E2SM-RC-ControlOutcome-Format2-Style-Item -ROOTS5 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2 alias = -1
    /*=== END SEQUENCE -idx25 E2SM-RC-ControlOutcome-Format2 -ROOTS4 ===*/

    #endif /*choice-ELEM 2 -idx24 -rootc1 - E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2 */

    #if 0 //hc-choice-ELEM 3 -idx52 -rootc1: E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3 - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.choice_type = E2AP_E2SM_RC_CONTROL_OUTCOME_RIC_CONTROL_OUTCOME_FORMATS_e2ap_CONTROL_OUTCOME_FORMAT3;
    /*=== START SEQUENCE -idx53 -ROOTS8 E2SM-RC-ControlOutcome-Format3 ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3 alias = -1 -mandatory
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item_count = 1;
    /*=== START SEQUENCE -idx55 -ROOTS9 E2SM-RC-ControlOutcome-Format3-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx57- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ID
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx57- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item alias = -1 -mandatory
    /*=== START CHOICE -rootc4 - RANParameter-ValueType ===*/
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType = xnap_mem_get(sizeof(_e2ap_RANParameter_ValueType_t)); //memgetforrecu
    #if 1 //hc-choice-ELEM 1 -idx60 -rootc4: RANParameter-ValueType->RANParameter_ValueType_Choice_ElementTrue - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_ELEMENT_TRUE;
    /*=== START SEQUENCE -idx61 -ROOTS10 RANParameter-ValueType-Choice-ElementTrue ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue alias = -1 -mandatory
    /*=== START CHOICE -rootc5 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx64 -rootc5: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx65- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBoolean
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx65- primitive

    #endif /*choice-ELEM 1 -idx64 -rootc5 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx66 -rootc5: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx67 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueInt
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx67- primitive

    #endif /*choice-ELEM 2 -idx66 -rootc5 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx68 -rootc5: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx69- primitive in scope - pid = 17 REAL - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueReal
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx69- primitive

    #endif /*choice-ELEM 3 -idx68 -rootc5 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx70 -rootc5: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx71- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS_2[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueBitS.data, temp_buff_for_valueBitS_2, 0);
    //end of hc-valueBitS -idx71- primitive
    #endif /*choice-ELEM 4 -idx70 -rootc5 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx72 -rootc5: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx73- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS_2[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS_2); // change octetstring data here
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS_2));
    XNAP_MEMCPY(p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueOctS.data, temp_buff_for_valueOctS_2, sizeof(temp_buff_for_valueOctS_2));
    //end of hc-valueOctS -idx73- primitive
    #endif /*choice-ELEM 5 -idx72 -rootc5 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx74 -rootc5: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx75- primitive in scope - pid = 14 Printable STRING - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valuePrintableString
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx75- primitive

    #endif /*choice-ELEM 6 -idx74 -rootc5 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc5 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue alias = -1
    /*=== END SEQUENCE -idx61 RANParameter-ValueType-Choice-ElementTrue -ROOTS10 ===*/

    #endif /*choice-ELEM 1 -idx60 -rootc4 - RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue */

    #if 0 //hc-choice-ELEM 2 -idx76 -rootc4: RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_ELEMENT_FALSE;
    /*=== START SEQUENCE -idx77 -ROOTS11 RANParameter-ValueType-Choice-ElementFalse ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse alias = -1 -optional
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.bitmask |= E2AP_RANPARAMETER_VALUE_TYPE_CHOICE_ELEMENT_FALSE_e2ap_RAN_PARAMETER_VALUE_PRESENT;
    /*=== START CHOICE -rootc6 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx80 -rootc6: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx81- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBoolean
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx81- primitive

    #endif /*choice-ELEM 1 -idx80 -rootc6 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx82 -rootc6: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx83 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueInt
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx83- primitive

    #endif /*choice-ELEM 2 -idx82 -rootc6 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx84 -rootc6: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx85- primitive in scope - pid = 17 REAL - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueReal
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx85- primitive

    #endif /*choice-ELEM 3 -idx84 -rootc6 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx86 -rootc6: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx87- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS_3[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueBitS.data, temp_buff_for_valueBitS_3, 0);
    //end of hc-valueBitS -idx87- primitive
    #endif /*choice-ELEM 4 -idx86 -rootc6 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx88 -rootc6: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx89- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS_3[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS_3); // change octetstring data here
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS_3));
    XNAP_MEMCPY(p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueOctS.data, temp_buff_for_valueOctS_3, sizeof(temp_buff_for_valueOctS_3));
    //end of hc-valueOctS -idx89- primitive
    #endif /*choice-ELEM 5 -idx88 -rootc6 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx90 -rootc6: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx91- primitive in scope - pid = 14 Printable STRING - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valuePrintableString
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx91- primitive

    #endif /*choice-ELEM 6 -idx90 -rootc6 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc6 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse alias = -1
    /*=== END SEQUENCE -idx77 RANParameter-ValueType-Choice-ElementFalse -ROOTS11 ===*/

    #endif /*choice-ELEM 2 -idx76 -rootc4 - RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse */

    #if 0 //hc-choice-ELEM 3 -idx92 -rootc4: RANParameter-ValueType->RANParameter-ValueType-Choice-Structure - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_STRUCTURE;
    /*=== START SEQUENCE -idx93 -ROOTS12 RANParameter-ValueType-Choice-Structure ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure alias = -1 -mandatory
    /*=== START SEQUENCE -idx95 -ROOTS13 RANParameter-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_Structure.ranParameter_Structure.sequence_of_ranParameters.RANParameter_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx97 -ROOTS14 RANParameter-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx99- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_Structure.ranParameter_Structure.sequence_of_ranParameters.RANParameter_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx99- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1 -mandatory
    // [STOP] recursive CHOICE RANParameter_ValueType in stack
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx97 RANParameter-STRUCTURE-Item -ROOTS14 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx95 RANParameter-STRUCTURE -ROOTS13 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure alias = -1
    /*=== END SEQUENCE -idx93 RANParameter-ValueType-Choice-Structure -ROOTS12 ===*/

    #endif /*choice-ELEM 3 -idx92 -rootc4 - RANParameter-ValueType->RANParameter-ValueType-Choice-Structure */

    #if 0 //hc-choice-ELEM 4 -idx101 -rootc4: RANParameter-ValueType->RANParameter-ValueType-Choice-List - alias = -1
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_LIST;
    /*=== START SEQUENCE -idx102 -ROOTS15 RANParameter-ValueType-Choice-List ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List alias = -1 -mandatory
    /*=== START SEQUENCE -idx104 -ROOTS16 RANParameter-LIST ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST alias = -1 -mandatory
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_List.ranParameter_List.list_of_ranParameter.RANParameter_STRUCTURE_count = 1;
    /*=== START SEQUENCE -idx106 -ROOTS17 RANParameter-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_List.ranParameter_List.list_of_ranParameter.RANParameter_STRUCTURE[0].sequence_of_ranParameters.RANParameter_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx108 -ROOTS18 RANParameter-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx110- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_ControlOutcome->ric_controlOutcome_formats.controlOutcome_Format3.ranP_List.E2SM_RC_ControlOutcome_Format3_Item[0].ranParameter_valueType->ranP_Choice_List.ranParameter_List.list_of_ranParameter.RANParameter_STRUCTURE[0].sequence_of_ranParameters.RANParameter_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx110- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1 -mandatory
    // [STOP] recursive CHOICE RANParameter_ValueType in stack
    //end of hc-sequence-ELEM 2: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx108 RANParameter-STRUCTURE-Item -ROOTS18 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx106 RANParameter-STRUCTURE -ROOTS17 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST alias = -1
    /*=== END SEQUENCE -idx104 RANParameter-LIST -ROOTS16 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List alias = -1
    /*=== END SEQUENCE -idx102 RANParameter-ValueType-Choice-List -ROOTS15 ===*/

    #endif /*choice-ELEM 4 -idx101 -rootc4 - RANParameter-ValueType->RANParameter-ValueType-Choice-List */

    /*=== END CHOICE -rootc4 - RANParameter-ValueType ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item alias = -1
    /*=== END SEQUENCE -idx55 E2SM-RC-ControlOutcome-Format3-Item -ROOTS9 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3 alias = -1
    /*=== END SEQUENCE -idx53 E2SM-RC-ControlOutcome-Format3 -ROOTS8 ===*/

    #endif /*choice-ELEM 3 -idx52 -rootc1 - E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3 */

    /*=== END CHOICE -rootc1 - E2SM-RC-ControlOutcome-ric-controlOutcome-formats ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ControlOutcome alias = -1
    /*=== END SEQUENCE -idx1 E2SM-RC-ControlOutcome -ROOTS1 ===*/

    return XNAP_SUCCESS;
}
/*
E2SM-RC-ControlOutcome : (E2SM-RC-ControlOutcome) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlOutcome
    ric-controlOutcome-formats : (E2SM-RC-ControlOutcome-ric-controlOutcome-formats) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats
        controlOutcome-Format1 : (E2SM-RC-ControlOutcome-Format1) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1
            ranP-List : (E2SM-RC-ControlOutcome-Format1-ranP-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List
                E2SM-RC-ControlOutcome-Format1-Item : (E2SM-RC-ControlOutcome-Format1-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item
                    ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item->RANParameter-ID
                    ranParameter-value : (RANParameter-Value) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item->RANParameter-Value
                        valueBoolean : (valueBoolean) 					---- (BOOLEAN) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item->RANParameter-Value->valueBoolean
                        valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item->RANParameter-Value->valueInt
                        valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item->RANParameter-Value->valueReal
                        valueBitS : (valueBitS) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item->RANParameter-Value->valueBitS
                        valueOctS : (valueOctS) 					---- (OCTET STRING) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item->RANParameter-Value->valueOctS
                        valuePrintableString : (valuePrintableString) 					---- (PrintableString) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format1->E2SM-RC-ControlOutcome-Format1-ranP-List->E2SM-RC-ControlOutcome-Format1-Item->RANParameter-Value->valuePrintableString
        controlOutcome-Format2 : (E2SM-RC-ControlOutcome-Format2) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2
            ric-ControlStyle-List : (E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List
                E2SM-RC-ControlOutcome-Format2-Style-Item : (E2SM-RC-ControlOutcome-Format2-Style-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item
                    indicated-Control-Style-Type : (RIC-Style-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->RIC-Style-Type
                    ric-ControlOutcome-List : (E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List
                        E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item : (E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item
                            ric-ControlAction-ID : (RIC-ControlAction-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->RIC-ControlAction-ID
                            ranP-List : (E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List
                                E2SM-RC-ControlOutcome-Format2-RANP-Item : (E2SM-RC-ControlOutcome-Format2-RANP-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item
                                    ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item->RANParameter-ID
                                    ranParameter-value : (RANParameter-Value) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item->RANParameter-Value
                                        valueBoolean : (valueBoolean) 					---- (BOOLEAN) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item->RANParameter-Value->valueBoolean
                                        valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item->RANParameter-Value->valueInt
                                        valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item->RANParameter-Value->valueReal
                                        valueBitS : (valueBitS) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item->RANParameter-Value->valueBitS
                                        valueOctS : (valueOctS) 					---- (OCTET STRING) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item->RANParameter-Value->valueOctS
                                        valuePrintableString : (valuePrintableString) 					---- (PrintableString) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format2->E2SM-RC-ControlOutcome-Format2-ric-ControlStyle-List->E2SM-RC-ControlOutcome-Format2-Style-Item->E2SM-RC-ControlOutcome-Format2-Style-Item-ric-ControlOutcome-List->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item->E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item-ranP-List->E2SM-RC-ControlOutcome-Format2-RANP-Item->RANParameter-Value->valuePrintableString
        controlOutcome-Format3 : (E2SM-RC-ControlOutcome-Format3) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3
            ranP-List : (E2SM-RC-ControlOutcome-Format3-ranP-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List
                E2SM-RC-ControlOutcome-Format3-Item : (E2SM-RC-ControlOutcome-Format3-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item
                    ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ID
                    ranParameter-valueType : (RANParameter-ValueType) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType
                        ranP-Choice-ElementTrue : (RANParameter-ValueType-Choice-ElementTrue) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue
                            ranParameter-value : (RANParameter-Value) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value
                                valueBoolean : (valueBoolean) 					---- (BOOLEAN) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBoolean
                                valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueInt
                                valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueReal
                                valueBitS : (valueBitS) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBitS
                                valueOctS : (valueOctS) 					---- (OCTET STRING) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueOctS
                                valuePrintableString : (valuePrintableString) 					---- (PrintableString) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valuePrintableString
                        ranP-Choice-ElementFalse : (RANParameter-ValueType-Choice-ElementFalse) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse
                            ranParameter-value : (RANParameter-Value) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value
                                valueBoolean : (valueBoolean) 					---- (BOOLEAN) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBoolean
                                valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueInt
                                valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueReal
                                valueBitS : (valueBitS) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBitS
                                valueOctS : (valueOctS) 					---- (OCTET STRING) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueOctS
                                valuePrintableString : (valuePrintableString) 					---- (PrintableString) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valuePrintableString
                        ranP-Choice-Structure : (RANParameter-ValueType-Choice-Structure) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure
                            ranParameter-Structure : (RANParameter-STRUCTURE) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE
                                sequence-of-ranParameters : (RANParameter-STRUCTURE-sequence-of-ranParameters) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters
                                    RANParameter-STRUCTURE-Item : (RANParameter-STRUCTURE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item
                                        ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
                                        ranParameter-valueType : (RANParameter-ValueType) 					---- (RECURSIVE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ValueType
                        ranP-Choice-List : (RANParameter-ValueType-Choice-List) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List
                            ranParameter-List : (RANParameter-LIST) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST
                                list-of-ranParameter : (RANParameter-LIST-list-of-ranParameter) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter
                                    RANParameter-STRUCTURE : (RANParameter-STRUCTURE) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE
                                        sequence-of-ranParameters : (RANParameter-STRUCTURE-sequence-of-ranParameters) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters
                                            RANParameter-STRUCTURE-Item : (RANParameter-STRUCTURE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item
                                                ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
                                                ranParameter-valueType : (RANParameter-ValueType) 					---- (RECURSIVE) ---- [M] ----PATH: E2SM-RC-ControlOutcome->E2SM-RC-ControlOutcome-ric-controlOutcome-formats->E2SM-RC-ControlOutcome-Format3->E2SM-RC-ControlOutcome-Format3-ranP-List->E2SM-RC-ControlOutcome-Format3-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ValueType

RECURSION LIST:[]
RECURSION MARK LIST:{'RANParameter-ValueType'}
*/
#endif // ASSIGN_HARDCODE_E2SM_RC_CONTROL_OUTCOME_H

