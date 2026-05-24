#ifndef ASSIGN_HARDCODE_E2SM_RC_QUERY_OUTCOME_H
#define ASSIGN_HARDCODE_E2SM_RC_QUERY_OUTCOME_H
#include<stdio.h>
#include"output_main.h"
#include "MAIN_STRUCT.h"

xnap_return_et assign_hardcode_value_E2SM_RC_QueryOutcome(_e2ap_E2SM_RC_QueryOutcome_t* p_E2SM_RC_QueryOutcome)
{
    /*=== START SEQUENCE -idx1 -ROOTS1 E2SM-RC-QueryOutcome ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome alias = -1 -mandatory
    /*=== START CHOICE -rootc1 - E2SM-RC-QueryOutcome-ric-queryOutcome-formats ===*/
    #if 1 //hc-choice-ELEM 1 -idx4 -rootc1: E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM_RC_QueryOutcome_Format1 - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.choice_type = E2AP_E2SM_RC_QUERY_OUTCOME_RIC_QUERY_OUTCOME_FORMATS_e2ap_QUERY_OUTCOME_FORMAT1;
    /*=== START SEQUENCE -idx5 -ROOTS2 E2SM-RC-QueryOutcome-Format1 ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1 alias = -1 -mandatory
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell_count = 1;
    /*=== START SEQUENCE -idx7 -ROOTS3 E2SM-RC-QueryOutcome-Format1-ItemCell ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell alias = -1 -mandatory
    /*=== START CHOICE -rootc2 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx10 -rootc2: CGI->NR_CGI - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].cellGlobal_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx11 -ROOTS4 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx13- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].cellGlobal_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].cellGlobal_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity, sizeof(temp_buff_for_pLMNIdentity)); // change octetstring data here
    //end of hc-pLMNIdentity -idx13- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx15- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].cellGlobal_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].cellGlobal_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx15- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx11 NR-CGI -ROOTS4 ===*/

    #endif /*choice-ELEM 1 -idx10 -rootc2 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx16 -rootc2: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].cellGlobal_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx17 -ROOTS5 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx19- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_1[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].cellGlobal_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_1);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].cellGlobal_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_1, sizeof(temp_buff_for_pLMNIdentity_1)); // change octetstring data here
    //end of hc-pLMNIdentity -idx19- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx21- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].cellGlobal_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].cellGlobal_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx21- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx17 EUTRA-CGI -ROOTS5 ===*/

    #endif /*choice-ELEM 2 -idx16 -rootc2 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc2 - CGI ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell alias = -1
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell alias = -1 -mandatory
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters_count = 1;
    /*=== START SEQUENCE -idx23 -ROOTS6 E2SM-RC-QueryOutcome-Format1-ItemParameters ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters alias = 5 -mandatory
    //hc-ranParameter_ID -idx25- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx25- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].bitmask |= E2AP_E2SM_RC_QUERY_OUTCOME_FORMAT1_ITEM_PARAMETERS_e2ap_RAN_PARAMETER_VALUE_TYPE_PRESENT;
    /*=== START CHOICE -rootc3 - RANParameter-ValueType ===*/
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType = xnap_mem_get(sizeof(_e2ap_RANParameter_ValueType_t)); //memgetforrecu
    #if 1 //hc-choice-ELEM 1 -idx28 -rootc3: RANParameter-ValueType->RANParameter_ValueType_Choice_ElementTrue - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_ELEMENT_TRUE;
    /*=== START SEQUENCE -idx29 -ROOTS7 RANParameter-ValueType-Choice-ElementTrue ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue alias = -1 -mandatory
    /*=== START CHOICE -rootc4 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx32 -rootc4: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx33- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBoolean
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx33- primitive

    #endif /*choice-ELEM 1 -idx32 -rootc4 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx34 -rootc4: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx35 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueInt
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx35- primitive

    #endif /*choice-ELEM 2 -idx34 -rootc4 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx36 -rootc4: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx37- primitive in scope - pid = 17 REAL - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueReal
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx37- primitive

    #endif /*choice-ELEM 3 -idx36 -rootc4 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx38 -rootc4: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx39- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueBitS.data, temp_buff_for_valueBitS, 0);
    //end of hc-valueBitS -idx39- primitive
    #endif /*choice-ELEM 4 -idx38 -rootc4 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx40 -rootc4: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx41- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS); // change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS));
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueOctS.data, temp_buff_for_valueOctS, sizeof(temp_buff_for_valueOctS));
    //end of hc-valueOctS -idx41- primitive
    #endif /*choice-ELEM 5 -idx40 -rootc4 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx42 -rootc4: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx43- primitive in scope - pid = 14 Printable STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valuePrintableString
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx43- primitive

    #endif /*choice-ELEM 6 -idx42 -rootc4 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc4 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue alias = -1
    /*=== END SEQUENCE -idx29 RANParameter-ValueType-Choice-ElementTrue -ROOTS7 ===*/

    #endif /*choice-ELEM 1 -idx28 -rootc3 - RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue */

    #if 0 //hc-choice-ELEM 2 -idx44 -rootc3: RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_ELEMENT_FALSE;
    /*=== START SEQUENCE -idx45 -ROOTS8 RANParameter-ValueType-Choice-ElementFalse ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.bitmask |= E2AP_RANPARAMETER_VALUE_TYPE_CHOICE_ELEMENT_FALSE_e2ap_RAN_PARAMETER_VALUE_PRESENT;
    /*=== START CHOICE -rootc5 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx48 -rootc5: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx49- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBoolean
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx49- primitive

    #endif /*choice-ELEM 1 -idx48 -rootc5 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx50 -rootc5: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx51 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueInt
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx51- primitive

    #endif /*choice-ELEM 2 -idx50 -rootc5 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx52 -rootc5: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx53- primitive in scope - pid = 17 REAL - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueReal
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx53- primitive

    #endif /*choice-ELEM 3 -idx52 -rootc5 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx54 -rootc5: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx55- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS_1[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueBitS.data, temp_buff_for_valueBitS_1, 0);
    //end of hc-valueBitS -idx55- primitive
    #endif /*choice-ELEM 4 -idx54 -rootc5 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx56 -rootc5: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx57- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS_1[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS_1); // change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS_1));
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueOctS.data, temp_buff_for_valueOctS_1, sizeof(temp_buff_for_valueOctS_1));
    //end of hc-valueOctS -idx57- primitive
    #endif /*choice-ELEM 5 -idx56 -rootc5 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx58 -rootc5: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx59- primitive in scope - pid = 14 Printable STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valuePrintableString
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx59- primitive

    #endif /*choice-ELEM 6 -idx58 -rootc5 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc5 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse alias = -1
    /*=== END SEQUENCE -idx45 RANParameter-ValueType-Choice-ElementFalse -ROOTS8 ===*/

    #endif /*choice-ELEM 2 -idx44 -rootc3 - RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse */

    #if 0 //hc-choice-ELEM 3 -idx60 -rootc3: RANParameter-ValueType->RANParameter-ValueType-Choice-Structure - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_STRUCTURE;
    /*=== START SEQUENCE -idx61 -ROOTS9 RANParameter-ValueType-Choice-Structure ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure alias = -1 -mandatory
    /*=== START SEQUENCE -idx63 -ROOTS10 RANParameter-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_Structure.ranParameter_Structure.sequence_of_ranParameters.RANParameter_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx65 -ROOTS11 RANParameter-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx67- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_Structure.ranParameter_Structure.sequence_of_ranParameters.RANParameter_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx67- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1 -mandatory
    // [STOP] recursive CHOICE RANParameter_ValueType in stack
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx65 RANParameter-STRUCTURE-Item -ROOTS11 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx63 RANParameter-STRUCTURE -ROOTS10 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure alias = -1
    /*=== END SEQUENCE -idx61 RANParameter-ValueType-Choice-Structure -ROOTS9 ===*/

    #endif /*choice-ELEM 3 -idx60 -rootc3 - RANParameter-ValueType->RANParameter-ValueType-Choice-Structure */

    #if 0 //hc-choice-ELEM 4 -idx69 -rootc3: RANParameter-ValueType->RANParameter-ValueType-Choice-List - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_LIST;
    /*=== START SEQUENCE -idx70 -ROOTS12 RANParameter-ValueType-Choice-List ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List alias = -1 -mandatory
    /*=== START SEQUENCE -idx72 -ROOTS13 RANParameter-LIST ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST alias = -1 -mandatory
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_List.ranParameter_List.list_of_ranParameter.RANParameter_STRUCTURE_count = 1;
    /*=== START SEQUENCE -idx74 -ROOTS14 RANParameter-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_List.ranParameter_List.list_of_ranParameter.RANParameter_STRUCTURE[0].sequence_of_ranParameters.RANParameter_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx76 -ROOTS15 RANParameter-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx78- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].ranP_List.E2SM_RC_QueryOutcome_Format1_ItemParameters[0].ranParameter_valueType->ranP_Choice_List.ranParameter_List.list_of_ranParameter.RANParameter_STRUCTURE[0].sequence_of_ranParameters.RANParameter_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx78- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1 -mandatory
    // [STOP] recursive CHOICE RANParameter_ValueType in stack
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx76 RANParameter-STRUCTURE-Item -ROOTS15 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx74 RANParameter-STRUCTURE -ROOTS14 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST alias = -1
    /*=== END SEQUENCE -idx72 RANParameter-LIST -ROOTS13 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List alias = -1
    /*=== END SEQUENCE -idx70 RANParameter-ValueType-Choice-List -ROOTS12 ===*/

    #endif /*choice-ELEM 4 -idx69 -rootc3 - RANParameter-ValueType->RANParameter-ValueType-Choice-List */

    /*=== END CHOICE -rootc3 - RANParameter-ValueType ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters alias = -1
    /*=== END SEQUENCE -idx23 E2SM-RC-QueryOutcome-Format1-ItemParameters -ROOTS6 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].bitmask |= E2AP_E2SM_RC_QUERY_OUTCOME_FORMAT1_ITEM_CELL_e2ap_NEIGHBOUR_RELATION_TABLE_PRESENT;
    /*=== START SEQUENCE -idx81 -ROOTS16 NeighbourRelation-Info ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info alias = -1 -mandatory
    /*=== START CHOICE -rootc6 - ServingCell-PCI ===*/
    #if 1 //hc-choice-ELEM 1 -idx84 -rootc6: ServingCell-PCI->NR_PCI - alias = 6
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.servingCellPCI.choice_type = E2AP_SERVING_CELL_PCI_e2ap_N_R;
    //hc-nR -idx85- alias primitive - pid = 6 - INTEGER - min:0 - max:1007  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->ServingCell-PCI->NR-PCI
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.servingCellPCI.nR = 503;// change integer here
    //end of hc-nR -idx85- alias primitive
    #endif /*choice-ELEM 1 -idx84 -rootc6 - ServingCell-PCI->NR-PCI */

    #if 0 //hc-choice-ELEM 2 -idx86 -rootc6: ServingCell-PCI->E-UTRA-PCI - alias = 5
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.servingCellPCI.choice_type = E2AP_SERVING_CELL_PCI_e2ap_E_UTRA;
    //hc-eUTRA -idx87- alias primitive - pid = 5 - INTEGER - min:0 - max:503  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->ServingCell-PCI->E-UTRA-PCI
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.servingCellPCI.eUTRA = 251;// change integer here
    //end of hc-eUTRA -idx87- alias primitive
    #endif /*choice-ELEM 2 -idx86 -rootc6 - ServingCell-PCI->E-UTRA-PCI */

    /*=== END CHOICE -rootc6 - ServingCell-PCI ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info alias = -1
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info alias = -1 -mandatory
    /*=== START CHOICE -rootc7 - ServingCell-ARFCN ===*/
    #if 1 //hc-choice-ELEM 1 -idx90 -rootc7: ServingCell-ARFCN->NR_ARFCN - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.servingCellARFCN.choice_type = E2AP_SERVING_CELL_ARFCN_e2ap_N_R;
    /*=== START SEQUENCE -idx91 -ROOTS17 NR-ARFCN ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->ServingCell-ARFCN->NR-ARFCN alias = -1 -mandatory
    //hc-nRARFCN -idx93 - primitive in scope - pid = 6 - INTEGER  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->ServingCell-ARFCN->NR-ARFCN->nRARFCN
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.servingCellARFCN.nR.nRARFCN = 1639582; // change integer here
    //end of hc-nRARFCN -idx93- primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->ServingCell-ARFCN->NR-ARFCN alias = -1
    /*=== END SEQUENCE -idx91 NR-ARFCN -ROOTS17 ===*/

    #endif /*choice-ELEM 1 -idx90 -rootc7 - ServingCell-ARFCN->NR-ARFCN */

    #if 0 //hc-choice-ELEM 2 -idx94 -rootc7: ServingCell-ARFCN->E-UTRA-ARFCN - alias = 6
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.servingCellARFCN.choice_type = E2AP_SERVING_CELL_ARFCN_e2ap_E_UTRA;
    //hc-eUTRA -idx95- alias primitive - pid = 6 - INTEGER - min:0 - max:3279165  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->ServingCell-ARFCN->E-UTRA-ARFCN
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.servingCellARFCN.eUTRA = 1639582;// change integer here
    //end of hc-eUTRA -idx95- alias primitive
    #endif /*choice-ELEM 2 -idx94 -rootc7 - ServingCell-ARFCN->E-UTRA-ARFCN */

    /*=== END CHOICE -rootc7 - ServingCell-ARFCN ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info alias = -1 -mandatory
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item_count = 1;
    /*=== START CHOICE -rootc8 - NeighbourCell-Item ===*/
    #if 1 //hc-choice-ELEM 1 -idx98 -rootc8: NeighbourCell-Item->NeighbourCell_Item_Choice_NR - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].choice_type = E2AP_NEIGHBOUR_CELL_ITEM_e2ap_RAN_TYPE_CHOICE_NR;
    /*=== START SEQUENCE -idx99 -ROOTS18 NeighbourCell-Item-Choice-NR ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR alias = -1 -mandatory
    /*=== START SEQUENCE -idx101 -ROOTS19 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx103- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_2[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_2);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_2, sizeof(temp_buff_for_pLMNIdentity_2)); // change octetstring data here
    //end of hc-pLMNIdentity -idx103- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx105- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_1[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_1, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx105- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NR-CGI alias = 3
    /*=== END SEQUENCE -idx101 NR-CGI -ROOTS19 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR alias = -1
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR alias = 6 -mandatory
    //hc-nR_PCI -idx107- alias primitive - pid = 6 - INTEGER - min:0 - max:1007  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NR-PCI
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.nR_PCI = 503;// change integer here
    //end of hc-nR_PCI -idx107- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR alias = 6
    //hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR alias = 8 -mandatory
    //hc-fiveGS_TAC -idx109- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->FiveGS-TAC
    OSOCTET temp_buff_for_fiveGS_TAC[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.fiveGS_TAC.numocts = sizeof(temp_buff_for_fiveGS_TAC);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.fiveGS_TAC.data, temp_buff_for_fiveGS_TAC, sizeof(temp_buff_for_fiveGS_TAC)); // change octetstring data here
    //end of hc-fiveGS_TAC -idx109- alias primitive

    //end of hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR alias = 8
    //hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR alias = -1 -mandatory
    //hc-nR_mode_info -idx111- primitive in scope - pid = 13 ENUMURATE - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->nR-mode-info
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.nR_mode_info = E2AP_NEIGHBOUR_CELL_ITEM_CHOICE_NR_N_R_MODE_INFO_FDD; // change enum value here
    //end of hc-nR_mode_info -idx111- primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR alias = -1
    //hc-sequence-ELEM 5: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR alias = -1 -mandatory
    /*=== START SEQUENCE -idx113 -ROOTS20 NRFrequencyInfo ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo alias = -1 -mandatory
    /*=== START SEQUENCE -idx115 -ROOTS21 NR-ARFCN ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NR-ARFCN alias = -1 -mandatory
    //hc-nRARFCN -idx117 - primitive in scope - pid = 6 - INTEGER  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NR-ARFCN->nRARFCN
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.nR_FreqInfo.nrARFCN.nRARFCN = 1639582; // change integer here
    //end of hc-nRARFCN -idx117- primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NR-ARFCN alias = -1
    /*=== END SEQUENCE -idx115 NR-ARFCN -ROOTS21 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo alias = -1
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo alias = -1 -mandatory
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.nR_FreqInfo.frequencyBand_List.NRFrequencyBandItem_count = 1;
    /*=== START SEQUENCE -idx119 -ROOTS22 NRFrequencyBandItem ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NRFrequencyBand-List->NRFrequencyBandItem alias = -1 -mandatory
    //hc-freqBandIndicatorNr -idx121 - primitive in scope - pid = 5 - INTEGER  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NRFrequencyBand-List->NRFrequencyBandItem->freqBandIndicatorNr
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.nR_FreqInfo.frequencyBand_List.NRFrequencyBandItem[0].freqBandIndicatorNr = 512; // change integer here
    //end of hc-freqBandIndicatorNr -idx121- primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NRFrequencyBand-List->NRFrequencyBandItem alias = -1
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NRFrequencyBand-List->NRFrequencyBandItem alias = -1 -mandatory
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.nR_FreqInfo.frequencyBand_List.NRFrequencyBandItem[0].supportedSULBandList.SupportedSULFreqBandItem_count = 1;
    /*=== START SEQUENCE -idx123 -ROOTS23 SupportedSULFreqBandItem ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NRFrequencyBand-List->NRFrequencyBandItem->SupportedSULBandList->SupportedSULFreqBandItem alias = -1 -mandatory
    //hc-freqBandIndicatorNr -idx125 - primitive in scope - pid = 5 - INTEGER  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NRFrequencyBand-List->NRFrequencyBandItem->SupportedSULBandList->SupportedSULFreqBandItem->freqBandIndicatorNr
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.nR_FreqInfo.frequencyBand_List.NRFrequencyBandItem[0].supportedSULBandList.SupportedSULFreqBandItem[0].freqBandIndicatorNr = 512; // change integer here
    //end of hc-freqBandIndicatorNr -idx125- primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NRFrequencyBand-List->NRFrequencyBandItem->SupportedSULBandList->SupportedSULFreqBandItem alias = -1
    /*=== END SEQUENCE -idx123 SupportedSULFreqBandItem -ROOTS23 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NRFrequencyBand-List->NRFrequencyBandItem alias = -1
    /*=== END SEQUENCE -idx119 NRFrequencyBandItem -ROOTS22 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo alias = 13 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.nR_FreqInfo.bitmask |= E2AP_NRFREQUENCY_INFO_e2ap_FREQUENCY_SHIFT7P5KHZ_PRESENT;
    //hc-NRFrequencyShift7p5khz -idx127 - alias primitive - pid = 13 ENUMURATE - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NRFrequencyShift7p5khz
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.nR_FreqInfo.frequencyShift7p5khz = E2AP_NRFREQUENCY_SHIFT7P5KHZ_FALSE; // change enum value here
    //end of hc-NRFrequencyShift7p5khz -idx127- alias primitive

    //end of hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo alias = 13
    /*=== END SEQUENCE -idx113 NRFrequencyInfo -ROOTS20 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR alias = -1 -mandatory
    //hc-x2_Xn_established -idx129- primitive in scope - pid = 13 ENUMURATE - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->x2-Xn-established
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.x2_Xn_established = E2AP_NEIGHBOUR_CELL_ITEM_CHOICE_NR_X2_XN_ESTABLISHED_TRUE; // change enum value here
    //end of hc-x2_Xn_established -idx129- primitive
    //end of hc-sequence-ELEM 6: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR alias = -1
    //hc-sequence-ELEM 7: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR alias = -1 -mandatory
    //hc-hO_validated -idx131- primitive in scope - pid = 13 ENUMURATE - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->hO-validated
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.hO_validated = E2AP_NEIGHBOUR_CELL_ITEM_CHOICE_NR_H_O_VALIDATED_TRUE; // change enum value here
    //end of hc-hO_validated -idx131- primitive
    //end of hc-sequence-ELEM 7: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR alias = -1
    //hc-sequence-ELEM 8: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR alias = -1 -mandatory
    //hc-version -idx133 - primitive in scope - pid = 5 - INTEGER  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->version
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_NR.version = 32768; // change integer here
    //end of hc-version -idx133- primitive

    //end of hc-sequence-ELEM 8: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR alias = -1
    /*=== END SEQUENCE -idx99 NeighbourCell-Item-Choice-NR -ROOTS18 ===*/

    #endif /*choice-ELEM 1 -idx98 -rootc8 - NeighbourCell-Item->NeighbourCell-Item-Choice-NR */

    #if 0 //hc-choice-ELEM 2 -idx134 -rootc8: NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].choice_type = E2AP_NEIGHBOUR_CELL_ITEM_e2ap_RAN_TYPE_CHOICE_EUTRA;
    /*=== START SEQUENCE -idx135 -ROOTS24 NeighbourCell-Item-Choice-E-UTRA ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA alias = -1 -mandatory
    /*=== START SEQUENCE -idx137 -ROOTS25 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx139- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_3[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_EUTRA.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_3);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_EUTRA.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_3, sizeof(temp_buff_for_pLMNIdentity_3)); // change octetstring data here
    //end of hc-pLMNIdentity -idx139- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx141- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_1[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_EUTRA.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_EUTRA.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_1, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx141- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx137 EUTRA-CGI -ROOTS25 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA alias = -1
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA alias = 5 -mandatory
    //hc-eUTRA_PCI -idx143- alias primitive - pid = 5 - INTEGER - min:0 - max:503  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->E-UTRA-PCI
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_EUTRA.eUTRA_PCI = 251;// change integer here
    //end of hc-eUTRA_PCI -idx143- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA alias = 5
    //hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA alias = 6 -mandatory
    //hc-eUTRA_ARFCN -idx145- alias primitive - pid = 6 - INTEGER - min:0 - max:3279165  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->E-UTRA-ARFCN
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_EUTRA.eUTRA_ARFCN = 1639582;// change integer here
    //end of hc-eUTRA_ARFCN -idx145- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA alias = 6
    //hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA alias = 8 -mandatory
    //hc-eUTRA_TAC -idx147- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->E-UTRA-TAC
    OSOCTET temp_buff_for_eUTRA_TAC[] = {0x01, 0x02}; // min =2 - max = 2 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_EUTRA.eUTRA_TAC.numocts = sizeof(temp_buff_for_eUTRA_TAC);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_EUTRA.eUTRA_TAC.data, temp_buff_for_eUTRA_TAC, sizeof(temp_buff_for_eUTRA_TAC)); // change octetstring data here
    //end of hc-eUTRA_TAC -idx147- alias primitive

    //end of hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA alias = 8
    //hc-sequence-ELEM 5: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA alias = -1 -mandatory
    //hc-x2_Xn_established -idx149- primitive in scope - pid = 13 ENUMURATE - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->x2-Xn-established
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_EUTRA.x2_Xn_established = E2AP_NEIGHBOUR_CELL_ITEM_CHOICE_E_UTRA_X2_XN_ESTABLISHED_TRUE; // change enum value here
    //end of hc-x2_Xn_established -idx149- primitive
    //end of hc-sequence-ELEM 5: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA alias = -1 -mandatory
    //hc-hO_validated -idx151- primitive in scope - pid = 13 ENUMURATE - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->hO-validated
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_EUTRA.hO_validated = E2AP_NEIGHBOUR_CELL_ITEM_CHOICE_E_UTRA_H_O_VALIDATED_TRUE; // change enum value here
    //end of hc-hO_validated -idx151- primitive
    //end of hc-sequence-ELEM 6: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA alias = -1
    //hc-sequence-ELEM 7: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA alias = -1 -mandatory
    //hc-version -idx153 - primitive in scope - pid = 5 - INTEGER  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->version
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].neighbourRelation_Table.neighbourCell_List.NeighbourCell_Item[0].ranType_Choice_EUTRA.version = 32768; // change integer here
    //end of hc-version -idx153- primitive

    //end of hc-sequence-ELEM 7: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA alias = -1
    /*=== END SEQUENCE -idx135 NeighbourCell-Item-Choice-E-UTRA -ROOTS24 ===*/

    #endif /*choice-ELEM 2 -idx134 -rootc8 - NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA */

    /*=== END CHOICE -rootc8 - NeighbourCell-Item ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info alias = -1
    /*=== END SEQUENCE -idx81 NeighbourRelation-Info -ROOTS16 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell alias = -1
    //hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].bitmask |= E2AP_E2SM_RC_QUERY_OUTCOME_FORMAT1_ITEM_CELL_e2ap_SERVING_CELL_CONFIG_COMMON_PRESENT;
    /*=== START SEQUENCE -idx155 -ROOTS26 ServingCellConfigCommon ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->ServingCellConfigCommon alias = -1 -mandatory
    //hc-ssbPositionsInBurst -idx157- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->ServingCellConfigCommon->ssbPositionsInBurst
    OSOCTET temp_buff_for_ssbPositionsInBurst[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].servingCellConfigCommon.ssbPositionsInBurst.numocts = sizeof(temp_buff_for_ssbPositionsInBurst); // change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].servingCellConfigCommon.ssbPositionsInBurst.data = xnap_mem_get(sizeof(temp_buff_for_ssbPositionsInBurst));
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].servingCellConfigCommon.ssbPositionsInBurst.data, temp_buff_for_ssbPositionsInBurst, sizeof(temp_buff_for_ssbPositionsInBurst));
    //end of hc-ssbPositionsInBurst -idx157- primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->ServingCellConfigCommon alias = -1
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->ServingCellConfigCommon alias = -1 -mandatory
    //hc-ssbPeriodicity -idx159- primitive in scope - pid = 13 ENUMURATE - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->ServingCellConfigCommon->ssbPeriodicity
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].servingCellConfigCommon.ssbPeriodicity = E2AP_SERVING_CELL_CONFIG_COMMON_SSB_PERIODICITY_MS5; // change enum value here
    //end of hc-ssbPeriodicity -idx159- primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->ServingCellConfigCommon alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->ServingCellConfigCommon alias = -1 -mandatory
    //hc-ssbSubcarrierSpacing -idx161- primitive in scope - pid = 13 ENUMURATE - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->ServingCellConfigCommon->ssbSubcarrierSpacing
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format1.cellInfo_List.E2SM_RC_QueryOutcome_Format1_ItemCell[0].servingCellConfigCommon.ssbSubcarrierSpacing = E2AP_SERVING_CELL_CONFIG_COMMON_SSB_SUBCARRIER_SPACING_K_HZ15; // change enum value here
    //end of hc-ssbSubcarrierSpacing -idx161- primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->ServingCellConfigCommon alias = -1
    /*=== END SEQUENCE -idx155 ServingCellConfigCommon -ROOTS26 ===*/

    //end of hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell alias = -1
    /*=== END SEQUENCE -idx7 E2SM-RC-QueryOutcome-Format1-ItemCell -ROOTS3 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1 alias = -1
    /*=== END SEQUENCE -idx5 E2SM-RC-QueryOutcome-Format1 -ROOTS2 ===*/

    #endif /*choice-ELEM 1 -idx4 -rootc1 - E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1 */

    #if 0 //hc-choice-ELEM 2 -idx162 -rootc1: E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2 - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.choice_type = E2AP_E2SM_RC_QUERY_OUTCOME_RIC_QUERY_OUTCOME_FORMATS_e2ap_QUERY_OUTCOME_FORMAT2;
    /*=== START SEQUENCE -idx163 -ROOTS27 E2SM-RC-QueryOutcome-Format2 ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2 alias = -1 -mandatory
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE_count = 1;
    /*=== START SEQUENCE -idx165 -ROOTS28 E2SM-RC-QueryOutcome-Format2-ItemUE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE alias = -1 -mandatory
    /*=== START CHOICE -rootc9 - UEID ===*/
    #if 1 //hc-choice-ELEM 1 -idx168 -rootc9: UEID->UEID_GNB - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.choice_type = E2AP_UEID_e2ap_G_NB_UEID;
    /*=== START SEQUENCE -idx169 -ROOTS29 UEID-GNB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = 6 -mandatory
    //hc-amf_UE_NGAP_ID -idx171- alias primitive - pid = 6 - INTEGER - min:0 - max:1099511627775  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->AMF-UE-NGAP-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.amf_UE_NGAP_ID = 549755813887;// change integer here
    //end of hc-amf_UE_NGAP_ID -idx171- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = -1 -mandatory
    /*=== START SEQUENCE -idx173 -ROOTS30 GUAMI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GUAMI alias = 8 -mandatory
    //hc-pLMNIdentity -idx175- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GUAMI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_4[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.guami.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_4);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.guami.pLMNIdentity.data, temp_buff_for_pLMNIdentity_4, sizeof(temp_buff_for_pLMNIdentity_4)); // change octetstring data here
    //end of hc-pLMNIdentity -idx175- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GUAMI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFRegionID -idx177- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GUAMI->AMFRegionID
    OSOCTET temp_buff_for_aMFRegionID[] = {0x01}; // min =8 - max = 8 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.guami.aMFRegionID.numbits = 8;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.guami.aMFRegionID.data, temp_buff_for_aMFRegionID, 1); // change bitstring data here
    //end of hc-aMFRegionID -idx177- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GUAMI alias = 3
    //hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFSetID -idx179- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GUAMI->AMFSetID
    OSOCTET temp_buff_for_aMFSetID[] = {0x01, 0x02}; // min =10 - max = 10 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.guami.aMFSetID.numbits = 10;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.guami.aMFSetID.data, temp_buff_for_aMFSetID, 2); // change bitstring data here
    //end of hc-aMFSetID -idx179- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GUAMI alias = 3
    //hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFPointer -idx181- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GUAMI->AMFPointer
    OSOCTET temp_buff_for_aMFPointer[] = {0x01}; // min =6 - max = 6 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.guami.aMFPointer.numbits = 6;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.guami.aMFPointer.data, temp_buff_for_aMFPointer, 1); // change bitstring data here
    //end of hc-aMFPointer -idx181- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GUAMI alias = 3
    /*=== END SEQUENCE -idx173 GUAMI -ROOTS30 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_G_NB_CU_UE_F1AP_ID_LIST_PRESENT;
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.gNB_CU_UE_F1AP_ID_List.UEID_GNB_CU_CP_F1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx183 -ROOTS31 UEID-GNB-CU-CP-F1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_UE_F1AP_ID -idx185- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.gNB_CU_UE_F1AP_ID_List.UEID_GNB_CU_CP_F1AP_ID_Item[0].gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx185- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx183 UEID-GNB-CU-CP-F1AP-ID-Item -ROOTS31 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_G_NB_CU_CP_UE_E1AP_ID_LIST_PRESENT;
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx187 -ROOTS32 UEID-GNB-CU-CP-E1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx189- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item[0].gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx189- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx187 UEID-GNB-CU-CP-E1AP-ID-Item -ROOTS32 ===*/

    //end of hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 5: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = 8 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx191- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->RANUEID
    OSOCTET temp_buff_for_ran_UEID[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.ran_UEID.data, temp_buff_for_ran_UEID, sizeof(temp_buff_for_ran_UEID)); // change octetstring data here
    //end of hc-ran_UEID -idx191- alias primitive

    //end of hc-sequence-ELEM 5: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = 8
    //hc-sequence-ELEM 6: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = 6 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_M_NG_RAN_UE_XN_AP_ID_PRESENT;
    //hc-m_NG_RAN_UE_XnAP_ID -idx193- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->NG-RANnodeUEXnAPID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.m_NG_RAN_UE_XnAP_ID = 2147483647;// change integer here
    //end of hc-m_NG_RAN_UE_XnAP_ID -idx193- alias primitive
    //end of hc-sequence-ELEM 6: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = 6
    //hc-sequence-ELEM 7: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_GLOBAL_GNB_ID_PRESENT;
    /*=== START SEQUENCE -idx195 -ROOTS33 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx197- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_5[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalGNB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_5);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalGNB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_5, sizeof(temp_buff_for_pLMNIdentity_5)); // change octetstring data here
    //end of hc-pLMNIdentity -idx197- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc10 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx200 -rootc10: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalGNB_ID.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx201- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalGNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalGNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID, 3);
    //end of hc-gNB_ID -idx201- primitive
    #endif /*choice-ELEM 1 -idx200 -rootc10 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc10 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx195 GlobalGNB-ID -ROOTS33 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 8: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_GLOBAL_NG_RANNODE_ID_PRESENT;
    /*=== START CHOICE -rootc11 - GlobalNGRANNodeID ===*/
    #if 1 //hc-choice-ELEM 1 -idx204 -rootc11: GlobalNGRANNodeID->GlobalGNB_ID - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_G_NB;
    /*=== START SEQUENCE -idx205 -ROOTS34 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx207- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_6[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_6);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_6, sizeof(temp_buff_for_pLMNIdentity_6)); // change octetstring data here
    //end of hc-pLMNIdentity -idx207- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc12 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx210 -rootc12: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx211- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_1[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_1, 3);
    //end of hc-gNB_ID -idx211- primitive
    #endif /*choice-ELEM 1 -idx210 -rootc12 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc12 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx205 GlobalGNB-ID -ROOTS34 ===*/

    #endif /*choice-ELEM 1 -idx204 -rootc11 - GlobalNGRANNodeID->GlobalGNB-ID */

    #if 0 //hc-choice-ELEM 2 -idx212 -rootc11: GlobalNGRANNodeID->GlobalNgENB-ID - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_NG_E_NB;
    /*=== START SEQUENCE -idx213 -ROOTS35 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx215- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_7[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_7);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_7, sizeof(temp_buff_for_pLMNIdentity_7)); // change octetstring data here
    //end of hc-pLMNIdentity -idx215- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc13 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx218 -rootc13: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx219- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID, 3);
    //end of hc-macroNgENB_ID -idx219- primitive
    #endif /*choice-ELEM 1 -idx218 -rootc13 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx220 -rootc13: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx221- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID, 3);
    //end of hc-shortMacroNgENB_ID -idx221- primitive
    #endif /*choice-ELEM 2 -idx220 -rootc13 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx222 -rootc13: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx223- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID, 3);
    //end of hc-longMacroNgENB_ID -idx223- primitive
    #endif /*choice-ELEM 3 -idx222 -rootc13 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc13 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx213 GlobalNgENB-ID -ROOTS35 ===*/

    #endif /*choice-ELEM 2 -idx212 -rootc11 - GlobalNGRANNodeID->GlobalNgENB-ID */

    /*=== END CHOICE -rootc11 - GlobalNGRANNodeID ===*/

    //end of hc-sequence-ELEM 8: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 9: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx225 -ROOTS36 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx227- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx227- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc14 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx230 -rootc14: CGI->NR_CGI - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx231 -ROOTS37 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx233- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_8[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_8);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_8, sizeof(temp_buff_for_pLMNIdentity_8)); // change octetstring data here
    //end of hc-pLMNIdentity -idx233- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx235- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_2[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_2, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx235- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx231 NR-CGI -ROOTS37 ===*/

    #endif /*choice-ELEM 1 -idx230 -rootc14 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx236 -rootc14: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx237 -ROOTS38 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx239- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_9[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_9);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_9, sizeof(temp_buff_for_pLMNIdentity_9)); // change octetstring data here
    //end of hc-pLMNIdentity -idx239- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx241- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_2[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_2, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx241- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx237 EUTRA-CGI -ROOTS38 ===*/

    #endif /*choice-ELEM 2 -idx236 -rootc14 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc14 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx225 Cell-RNTI -ROOTS36 ===*/

    //end of hc-sequence-ELEM 9: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB alias = -1
    /*=== END SEQUENCE -idx169 UEID-GNB -ROOTS29 ===*/

    #endif /*choice-ELEM 1 -idx168 -rootc9 - UEID->UEID-GNB */

    #if 0 //hc-choice-ELEM 2 -idx242 -rootc9: UEID->UEID-GNB-DU - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.choice_type = E2AP_UEID_e2ap_G_NB_DU_UEID;
    /*=== START SEQUENCE -idx243 -ROOTS39 UEID-GNB-DU ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU alias = 6 -mandatory
    //hc-gNB_CU_UE_F1AP_ID -idx245- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_DU_UEID.gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx245- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU alias = 8 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_DU_UEID.bitmask |= E2AP_UEID_GNB_DU_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx247- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->RANUEID
    OSOCTET temp_buff_for_ran_UEID_1[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_DU_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_1);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_DU_UEID.ran_UEID.data, temp_buff_for_ran_UEID_1, sizeof(temp_buff_for_ran_UEID_1)); // change octetstring data here
    //end of hc-ran_UEID -idx247- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU alias = 8
    //hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_DU_UEID.bitmask |= E2AP_UEID_GNB_DU_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx249 -ROOTS40 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx251- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->RNTI-Value
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_DU_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx251- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc15 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx254 -rootc15: CGI->NR_CGI - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx255 -ROOTS41 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx257- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_10[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_10);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_10, sizeof(temp_buff_for_pLMNIdentity_10)); // change octetstring data here
    //end of hc-pLMNIdentity -idx257- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx259- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_3[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_3, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx259- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx255 NR-CGI -ROOTS41 ===*/

    #endif /*choice-ELEM 1 -idx254 -rootc15 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx260 -rootc15: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx261 -ROOTS42 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx263- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_11[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_11);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_11, sizeof(temp_buff_for_pLMNIdentity_11)); // change octetstring data here
    //end of hc-pLMNIdentity -idx263- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx265- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_3[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_3, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx265- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx261 EUTRA-CGI -ROOTS42 ===*/

    #endif /*choice-ELEM 2 -idx260 -rootc15 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc15 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx249 Cell-RNTI -ROOTS40 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU alias = -1
    /*=== END SEQUENCE -idx243 UEID-GNB-DU -ROOTS39 ===*/

    #endif /*choice-ELEM 2 -idx242 -rootc9 - UEID->UEID-GNB-DU */

    #if 0 //hc-choice-ELEM 3 -idx266 -rootc9: UEID->UEID-GNB-CU-UP - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.choice_type = E2AP_UEID_e2ap_G_NB_CU_UP_UEID;
    /*=== START SEQUENCE -idx267 -ROOTS43 UEID-GNB-CU-UP ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-CU-UP alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx269- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-CU-UP->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_CU_UP_UEID.gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx269- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-CU-UP alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-CU-UP alias = 8 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_CU_UP_UEID.bitmask |= E2AP_UEID_GNB_CU_UP_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx271- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-CU-UP->RANUEID
    OSOCTET temp_buff_for_ran_UEID_2[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_CU_UP_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_2);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.gNB_CU_UP_UEID.ran_UEID.data, temp_buff_for_ran_UEID_2, sizeof(temp_buff_for_ran_UEID_2)); // change octetstring data here
    //end of hc-ran_UEID -idx271- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-CU-UP alias = 8
    /*=== END SEQUENCE -idx267 UEID-GNB-CU-UP -ROOTS43 ===*/

    #endif /*choice-ELEM 3 -idx266 -rootc9 - UEID->UEID-GNB-CU-UP */

    #if 0 //hc-choice-ELEM 4 -idx272 -rootc9: UEID->UEID-NG-ENB - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.choice_type = E2AP_UEID_e2ap_NG_E_NB_UEID;
    /*=== START SEQUENCE -idx273 -ROOTS44 UEID-NG-ENB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB alias = 6 -mandatory
    //hc-amf_UE_NGAP_ID -idx275- alias primitive - pid = 6 - INTEGER - min:0 - max:1099511627775  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->AMF-UE-NGAP-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.amf_UE_NGAP_ID = 549755813887;// change integer here
    //end of hc-amf_UE_NGAP_ID -idx275- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB alias = -1 -mandatory
    /*=== START SEQUENCE -idx277 -ROOTS45 GUAMI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GUAMI alias = 8 -mandatory
    //hc-pLMNIdentity -idx279- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GUAMI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_12[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.guami.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_12);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.guami.pLMNIdentity.data, temp_buff_for_pLMNIdentity_12, sizeof(temp_buff_for_pLMNIdentity_12)); // change octetstring data here
    //end of hc-pLMNIdentity -idx279- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GUAMI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFRegionID -idx281- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GUAMI->AMFRegionID
    OSOCTET temp_buff_for_aMFRegionID_1[] = {0x01}; // min =8 - max = 8 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.guami.aMFRegionID.numbits = 8;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.guami.aMFRegionID.data, temp_buff_for_aMFRegionID_1, 1); // change bitstring data here
    //end of hc-aMFRegionID -idx281- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GUAMI alias = 3
    //hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFSetID -idx283- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GUAMI->AMFSetID
    OSOCTET temp_buff_for_aMFSetID_1[] = {0x01, 0x02}; // min =10 - max = 10 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.guami.aMFSetID.numbits = 10;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.guami.aMFSetID.data, temp_buff_for_aMFSetID_1, 2); // change bitstring data here
    //end of hc-aMFSetID -idx283- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GUAMI alias = 3
    //hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFPointer -idx285- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GUAMI->AMFPointer
    OSOCTET temp_buff_for_aMFPointer_1[] = {0x01}; // min =6 - max = 6 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.guami.aMFPointer.numbits = 6;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.guami.aMFPointer.data, temp_buff_for_aMFPointer_1, 1); // change bitstring data here
    //end of hc-aMFPointer -idx285- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GUAMI alias = 3
    /*=== END SEQUENCE -idx277 GUAMI -ROOTS45 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB alias = 6 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_NG_E_NB_CU_UE_W1AP_ID_PRESENT;
    //hc-ng_eNB_CU_UE_W1AP_ID -idx287- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->NGENB-CU-UE-W1AP-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.ng_eNB_CU_UE_W1AP_ID = 2147483647;// change integer here
    //end of hc-ng_eNB_CU_UE_W1AP_ID -idx287- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB alias = 6 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_M_NG_RAN_UE_XN_AP_ID_PRESENT;
    //hc-m_NG_RAN_UE_XnAP_ID -idx289- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->NG-RANnodeUEXnAPID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.m_NG_RAN_UE_XnAP_ID = 2147483647;// change integer here
    //end of hc-m_NG_RAN_UE_XnAP_ID -idx289- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 5: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_GLOBAL_NG_ENB_ID_PRESENT;
    /*=== START SEQUENCE -idx291 -ROOTS46 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx293- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_13[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNgENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_13);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNgENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_13, sizeof(temp_buff_for_pLMNIdentity_13)); // change octetstring data here
    //end of hc-pLMNIdentity -idx293- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc16 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx296 -rootc16: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx297- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_1[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_1, 3);
    //end of hc-macroNgENB_ID -idx297- primitive
    #endif /*choice-ELEM 1 -idx296 -rootc16 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx298 -rootc16: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx299- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_1[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_1, 3);
    //end of hc-shortMacroNgENB_ID -idx299- primitive
    #endif /*choice-ELEM 2 -idx298 -rootc16 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx300 -rootc16: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx301- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_1[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_1, 3);
    //end of hc-longMacroNgENB_ID -idx301- primitive
    #endif /*choice-ELEM 3 -idx300 -rootc16 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc16 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx291 GlobalNgENB-ID -ROOTS46 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_GLOBAL_NG_RANNODE_ID_PRESENT;
    /*=== START CHOICE -rootc17 - GlobalNGRANNodeID ===*/
    #if 1 //hc-choice-ELEM 1 -idx304 -rootc17: GlobalNGRANNodeID->GlobalGNB_ID - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_G_NB;
    /*=== START SEQUENCE -idx305 -ROOTS47 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx307- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_14[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_14);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_14, sizeof(temp_buff_for_pLMNIdentity_14)); // change octetstring data here
    //end of hc-pLMNIdentity -idx307- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc18 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx310 -rootc18: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx311- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_2[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_2, 3);
    //end of hc-gNB_ID -idx311- primitive
    #endif /*choice-ELEM 1 -idx310 -rootc18 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc18 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx305 GlobalGNB-ID -ROOTS47 ===*/

    #endif /*choice-ELEM 1 -idx304 -rootc17 - GlobalNGRANNodeID->GlobalGNB-ID */

    #if 0 //hc-choice-ELEM 2 -idx312 -rootc17: GlobalNGRANNodeID->GlobalNgENB-ID - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_NG_E_NB;
    /*=== START SEQUENCE -idx313 -ROOTS48 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx315- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_15[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_15);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_15, sizeof(temp_buff_for_pLMNIdentity_15)); // change octetstring data here
    //end of hc-pLMNIdentity -idx315- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc19 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx318 -rootc19: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx319- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_2[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_2, 3);
    //end of hc-macroNgENB_ID -idx319- primitive
    #endif /*choice-ELEM 1 -idx318 -rootc19 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx320 -rootc19: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx321- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_2[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_2, 3);
    //end of hc-shortMacroNgENB_ID -idx321- primitive
    #endif /*choice-ELEM 2 -idx320 -rootc19 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx322 -rootc19: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx323- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_2[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_2, 3);
    //end of hc-longMacroNgENB_ID -idx323- primitive
    #endif /*choice-ELEM 3 -idx322 -rootc19 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc19 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx313 GlobalNgENB-ID -ROOTS48 ===*/

    #endif /*choice-ELEM 2 -idx312 -rootc17 - GlobalNGRANNodeID->GlobalNgENB-ID */

    /*=== END CHOICE -rootc17 - GlobalNGRANNodeID ===*/

    //end of hc-sequence-ELEM 6: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 7: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx325 -ROOTS49 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx327- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx327- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc20 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx330 -rootc20: CGI->NR_CGI - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx331 -ROOTS50 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx333- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_16[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_16);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_16, sizeof(temp_buff_for_pLMNIdentity_16)); // change octetstring data here
    //end of hc-pLMNIdentity -idx333- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx335- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_4[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_4, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx335- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx331 NR-CGI -ROOTS50 ===*/

    #endif /*choice-ELEM 1 -idx330 -rootc20 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx336 -rootc20: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx337 -ROOTS51 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx339- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_17[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_17);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_17, sizeof(temp_buff_for_pLMNIdentity_17)); // change octetstring data here
    //end of hc-pLMNIdentity -idx339- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx341- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_4[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_4, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx341- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx337 EUTRA-CGI -ROOTS51 ===*/

    #endif /*choice-ELEM 2 -idx336 -rootc20 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc20 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx325 Cell-RNTI -ROOTS49 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB alias = -1
    /*=== END SEQUENCE -idx273 UEID-NG-ENB -ROOTS44 ===*/

    #endif /*choice-ELEM 4 -idx272 -rootc9 - UEID->UEID-NG-ENB */

    #if 0 //hc-choice-ELEM 5 -idx342 -rootc9: UEID->UEID-NG-ENB-DU - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.choice_type = E2AP_UEID_e2ap_NG_E_NB_DU_UEID;
    /*=== START SEQUENCE -idx343 -ROOTS52 UEID-NG-ENB-DU ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU alias = 6 -mandatory
    //hc-ng_eNB_CU_UE_W1AP_ID -idx345- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->NGENB-CU-UE-W1AP-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_DU_UEID.ng_eNB_CU_UE_W1AP_ID = 2147483647;// change integer here
    //end of hc-ng_eNB_CU_UE_W1AP_ID -idx345- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_DU_UEID.bitmask |= E2AP_UEID_NG_ENB_DU_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx347 -ROOTS53 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx349- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->RNTI-Value
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_DU_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx349- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc21 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx352 -rootc21: CGI->NR_CGI - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx353 -ROOTS54 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx355- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_18[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_18);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_18, sizeof(temp_buff_for_pLMNIdentity_18)); // change octetstring data here
    //end of hc-pLMNIdentity -idx355- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx357- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_5[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_5, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx357- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx353 NR-CGI -ROOTS54 ===*/

    #endif /*choice-ELEM 1 -idx352 -rootc21 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx358 -rootc21: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx359 -ROOTS55 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx361- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_19[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_19);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_19, sizeof(temp_buff_for_pLMNIdentity_19)); // change octetstring data here
    //end of hc-pLMNIdentity -idx361- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx363- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_5[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_5, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx363- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx359 EUTRA-CGI -ROOTS55 ===*/

    #endif /*choice-ELEM 2 -idx358 -rootc21 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc21 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx347 Cell-RNTI -ROOTS53 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU alias = -1
    /*=== END SEQUENCE -idx343 UEID-NG-ENB-DU -ROOTS52 ===*/

    #endif /*choice-ELEM 5 -idx342 -rootc9 - UEID->UEID-NG-ENB-DU */

    #if 0 //hc-choice-ELEM 6 -idx364 -rootc9: UEID->UEID-EN-GNB - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.choice_type = E2AP_UEID_e2ap_EN_G_NB_UEID;
    /*=== START SEQUENCE -idx365 -ROOTS56 UEID-EN-GNB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB alias = 6 -mandatory
    //hc-m_eNB_UE_X2AP_ID -idx367- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.m_eNB_UE_X2AP_ID = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID -idx367- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB alias = 5 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_M_E_NB_UE_X2AP_ID_EXTENSION_PRESENT;
    //hc-m_eNB_UE_X2AP_ID_Extension -idx369- alias primitive - pid = 5 - INTEGER - min:0 - max:4095  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID-Extension
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.m_eNB_UE_X2AP_ID_Extension = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID_Extension -idx369- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB alias = 5
    //hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB alias = -1 -mandatory
    /*=== START SEQUENCE -idx371 -ROOTS57 GlobalENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GlobalENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx373- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GlobalENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_20[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.globalENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_20);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.globalENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_20, sizeof(temp_buff_for_pLMNIdentity_20)); // change octetstring data here
    //end of hc-pLMNIdentity -idx373- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GlobalENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GlobalENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc22 - ENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx376 -rootc22: ENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    //hc-macro_eNB_ID -idx377- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->macro-eNB-ID
    OSOCTET temp_buff_for_macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID, 3);
    //end of hc-macro_eNB_ID -idx377- primitive
    #endif /*choice-ELEM 1 -idx376 -rootc22 - ENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx378 -rootc22: ENB-ID->BIT STRING (SIZE(28)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    //hc-home_eNB_ID -idx379- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->home-eNB-ID
    OSOCTET temp_buff_for_home_eNB_ID[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID, 4);
    //end of hc-home_eNB_ID -idx379- primitive
    #endif /*choice-ELEM 2 -idx378 -rootc22 - ENB-ID->BIT STRING (SIZE(28)) */

    #if 0 //hc-choice-ELEM 3 -idx380 -rootc22: ENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    //hc-short_Macro_eNB_ID -idx381- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    OSOCTET temp_buff_for_short_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID, 3);
    //end of hc-short_Macro_eNB_ID -idx381- primitive
    #endif /*choice-ELEM 3 -idx380 -rootc22 - ENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 4 -idx382 -rootc22: ENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    //hc-long_Macro_eNB_ID -idx383- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    OSOCTET temp_buff_for_long_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID, 3);
    //end of hc-long_Macro_eNB_ID -idx383- primitive
    #endif /*choice-ELEM 4 -idx382 -rootc22 - ENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc22 - ENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GlobalENB-ID alias = -1
    /*=== END SEQUENCE -idx371 GlobalENB-ID -ROOTS57 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB alias = -1
    //hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB alias = 6 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_G_NB_CU_UE_F1AP_ID_PRESENT;
    //hc-gNB_CU_UE_F1AP_ID -idx385- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx385- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB alias = 6
    //hc-sequence-ELEM 5: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_G_NB_CU_CP_UE_E1AP_ID_LIST_PRESENT;
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx387 -ROOTS58 UEID-GNB-CU-CP-E1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx389- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item[0].gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx389- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx387 UEID-GNB-CU-CP-E1AP-ID-Item -ROOTS58 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB alias = 8 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx391- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->RANUEID
    OSOCTET temp_buff_for_ran_UEID_3[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_3);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.ran_UEID.data, temp_buff_for_ran_UEID_3, sizeof(temp_buff_for_ran_UEID_3)); // change octetstring data here
    //end of hc-ran_UEID -idx391- alias primitive

    //end of hc-sequence-ELEM 6: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB alias = 8
    //hc-sequence-ELEM 7: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx393 -ROOTS59 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx395- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx395- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc23 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx398 -rootc23: CGI->NR_CGI - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx399 -ROOTS60 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx401- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_21[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_21);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_21, sizeof(temp_buff_for_pLMNIdentity_21)); // change octetstring data here
    //end of hc-pLMNIdentity -idx401- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx403- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_6[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_6, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx403- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx399 NR-CGI -ROOTS60 ===*/

    #endif /*choice-ELEM 1 -idx398 -rootc23 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx404 -rootc23: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx405 -ROOTS61 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx407- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_22[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_22);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_22, sizeof(temp_buff_for_pLMNIdentity_22)); // change octetstring data here
    //end of hc-pLMNIdentity -idx407- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx409- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_6[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_6, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx409- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx405 EUTRA-CGI -ROOTS61 ===*/

    #endif /*choice-ELEM 2 -idx404 -rootc23 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc23 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx393 Cell-RNTI -ROOTS59 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB alias = -1
    /*=== END SEQUENCE -idx365 UEID-EN-GNB -ROOTS56 ===*/

    #endif /*choice-ELEM 6 -idx364 -rootc9 - UEID->UEID-EN-GNB */

    #if 0 //hc-choice-ELEM 7 -idx410 -rootc9: UEID->UEID-ENB - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.choice_type = E2AP_UEID_e2ap_E_NB_UEID;
    /*=== START SEQUENCE -idx411 -ROOTS62 UEID-ENB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB alias = 6 -mandatory
    //hc-mME_UE_S1AP_ID -idx413- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->MME-UE-S1AP-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.mME_UE_S1AP_ID = 2147483647;// change integer here
    //end of hc-mME_UE_S1AP_ID -idx413- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB alias = -1 -mandatory
    /*=== START SEQUENCE -idx415 -ROOTS63 GUMMEI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-pLMN_Identity -idx417- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GUMMEI->PLMNIdentity
    OSOCTET temp_buff_for_pLMN_Identity[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.gUMMEI.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.gUMMEI.pLMN_Identity.data, temp_buff_for_pLMN_Identity, sizeof(temp_buff_for_pLMN_Identity)); // change octetstring data here
    //end of hc-pLMN_Identity -idx417- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GUMMEI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-mME_Group_ID -idx419- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GUMMEI->MME-Group-ID
    OSOCTET temp_buff_for_mME_Group_ID[] = {0x01, 0x02}; // min =2 - max = 2 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.gUMMEI.mME_Group_ID.numocts = sizeof(temp_buff_for_mME_Group_ID);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.gUMMEI.mME_Group_ID.data, temp_buff_for_mME_Group_ID, sizeof(temp_buff_for_mME_Group_ID)); // change octetstring data here
    //end of hc-mME_Group_ID -idx419- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GUMMEI alias = 8
    //hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-mME_Code -idx421- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GUMMEI->MME-Code
    OSOCTET temp_buff_for_mME_Code[] = {0x01}; // min =1 - max = 1 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.gUMMEI.mME_Code.numocts = sizeof(temp_buff_for_mME_Code);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.gUMMEI.mME_Code.data, temp_buff_for_mME_Code, sizeof(temp_buff_for_mME_Code)); // change octetstring data here
    //end of hc-mME_Code -idx421- alias primitive

    //end of hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GUMMEI alias = 8
    /*=== END SEQUENCE -idx415 GUMMEI -ROOTS63 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB alias = 6 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_M_E_NB_UE_X2AP_ID_PRESENT;
    //hc-m_eNB_UE_X2AP_ID -idx423- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->ENB-UE-X2AP-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.m_eNB_UE_X2AP_ID = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID -idx423- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB alias = 6
    //hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB alias = 5 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_M_E_NB_UE_X2AP_ID_EXTENSION_PRESENT;
    //hc-m_eNB_UE_X2AP_ID_Extension -idx425- alias primitive - pid = 5 - INTEGER - min:0 - max:4095  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->ENB-UE-X2AP-ID-Extension
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.m_eNB_UE_X2AP_ID_Extension = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID_Extension -idx425- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB alias = 5
    //hc-sequence-ELEM 5: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_GLOBAL_ENB_ID_PRESENT;
    /*=== START SEQUENCE -idx427 -ROOTS64 GlobalENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GlobalENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx429- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GlobalENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_23[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.globalENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_23);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.globalENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_23, sizeof(temp_buff_for_pLMNIdentity_23)); // change octetstring data here
    //end of hc-pLMNIdentity -idx429- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GlobalENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GlobalENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc24 - ENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx432 -rootc24: ENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    //hc-macro_eNB_ID -idx433- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->macro-eNB-ID
    OSOCTET temp_buff_for_macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_1, 3);
    //end of hc-macro_eNB_ID -idx433- primitive
    #endif /*choice-ELEM 1 -idx432 -rootc24 - ENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx434 -rootc24: ENB-ID->BIT STRING (SIZE(28)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    //hc-home_eNB_ID -idx435- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->home-eNB-ID
    OSOCTET temp_buff_for_home_eNB_ID_1[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_1, 4);
    //end of hc-home_eNB_ID -idx435- primitive
    #endif /*choice-ELEM 2 -idx434 -rootc24 - ENB-ID->BIT STRING (SIZE(28)) */

    #if 0 //hc-choice-ELEM 3 -idx436 -rootc24: ENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    //hc-short_Macro_eNB_ID -idx437- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    OSOCTET temp_buff_for_short_Macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_1, 3);
    //end of hc-short_Macro_eNB_ID -idx437- primitive
    #endif /*choice-ELEM 3 -idx436 -rootc24 - ENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 4 -idx438 -rootc24: ENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    //hc-long_Macro_eNB_ID -idx439- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    OSOCTET temp_buff_for_long_Macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_1, 3);
    //end of hc-long_Macro_eNB_ID -idx439- primitive
    #endif /*choice-ELEM 4 -idx438 -rootc24 - ENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc24 - ENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GlobalENB-ID alias = -1
    /*=== END SEQUENCE -idx427 GlobalENB-ID -ROOTS64 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx441 -ROOTS65 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx443- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx443- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc25 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx446 -rootc25: CGI->NR_CGI - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx447 -ROOTS66 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx449- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_24[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_24);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_24, sizeof(temp_buff_for_pLMNIdentity_24)); // change octetstring data here
    //end of hc-pLMNIdentity -idx449- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx451- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_7[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_7, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx451- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx447 NR-CGI -ROOTS66 ===*/

    #endif /*choice-ELEM 1 -idx446 -rootc25 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx452 -rootc25: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx453 -ROOTS67 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx455- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_25[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_25);
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_25, sizeof(temp_buff_for_pLMNIdentity_25)); // change octetstring data here
    //end of hc-pLMNIdentity -idx455- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx457- alias primitive - pid = 3 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_7[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_7, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx457- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx453 EUTRA-CGI -ROOTS67 ===*/

    #endif /*choice-ELEM 2 -idx452 -rootc25 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc25 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx441 Cell-RNTI -ROOTS65 ===*/

    //end of hc-sequence-ELEM 6: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB alias = -1
    /*=== END SEQUENCE -idx411 UEID-ENB -ROOTS62 ===*/

    #endif /*choice-ELEM 7 -idx410 -rootc9 - UEID->UEID-ENB */

    /*=== END CHOICE -rootc9 - UEID ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE alias = -1
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE alias = -1 -mandatory
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters_count = 1;
    /*=== START SEQUENCE -idx459 -ROOTS68 E2SM-RC-QueryOutcome-Format2-ItemParameters ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters alias = 5 -mandatory
    //hc-ranParameter_ID -idx461- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx461- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].bitmask |= E2AP_E2SM_RC_QUERY_OUTCOME_FORMAT2_ITEM_PARAMETERS_e2ap_RAN_PARAMETER_VALUE_TYPE_PRESENT;
    /*=== START CHOICE -rootc26 - RANParameter-ValueType ===*/
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType = xnap_mem_get(sizeof(_e2ap_RANParameter_ValueType_t)); //memgetforrecu
    #if 1 //hc-choice-ELEM 1 -idx464 -rootc26: RANParameter-ValueType->RANParameter_ValueType_Choice_ElementTrue - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_ELEMENT_TRUE;
    /*=== START SEQUENCE -idx465 -ROOTS69 RANParameter-ValueType-Choice-ElementTrue ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue alias = -1 -mandatory
    /*=== START CHOICE -rootc27 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx468 -rootc27: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx469- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBoolean
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx469- primitive

    #endif /*choice-ELEM 1 -idx468 -rootc27 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx470 -rootc27: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx471 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueInt
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx471- primitive

    #endif /*choice-ELEM 2 -idx470 -rootc27 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx472 -rootc27: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx473- primitive in scope - pid = 17 REAL - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueReal
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx473- primitive

    #endif /*choice-ELEM 3 -idx472 -rootc27 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx474 -rootc27: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx475- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS_2[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueBitS.data, temp_buff_for_valueBitS_2, 0);
    //end of hc-valueBitS -idx475- primitive
    #endif /*choice-ELEM 4 -idx474 -rootc27 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx476 -rootc27: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx477- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS_2[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS_2); // change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS_2));
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueOctS.data, temp_buff_for_valueOctS_2, sizeof(temp_buff_for_valueOctS_2));
    //end of hc-valueOctS -idx477- primitive
    #endif /*choice-ELEM 5 -idx476 -rootc27 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx478 -rootc27: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx479- primitive in scope - pid = 14 Printable STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valuePrintableString
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx479- primitive

    #endif /*choice-ELEM 6 -idx478 -rootc27 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc27 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue alias = -1
    /*=== END SEQUENCE -idx465 RANParameter-ValueType-Choice-ElementTrue -ROOTS69 ===*/

    #endif /*choice-ELEM 1 -idx464 -rootc26 - RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue */

    #if 0 //hc-choice-ELEM 2 -idx480 -rootc26: RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_ELEMENT_FALSE;
    /*=== START SEQUENCE -idx481 -ROOTS70 RANParameter-ValueType-Choice-ElementFalse ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse alias = -1 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.bitmask |= E2AP_RANPARAMETER_VALUE_TYPE_CHOICE_ELEMENT_FALSE_e2ap_RAN_PARAMETER_VALUE_PRESENT;
    /*=== START CHOICE -rootc28 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx484 -rootc28: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx485- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBoolean
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx485- primitive

    #endif /*choice-ELEM 1 -idx484 -rootc28 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx486 -rootc28: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx487 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueInt
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx487- primitive

    #endif /*choice-ELEM 2 -idx486 -rootc28 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx488 -rootc28: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx489- primitive in scope - pid = 17 REAL - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueReal
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx489- primitive

    #endif /*choice-ELEM 3 -idx488 -rootc28 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx490 -rootc28: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx491- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS_3[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueBitS.data, temp_buff_for_valueBitS_3, 0);
    //end of hc-valueBitS -idx491- primitive
    #endif /*choice-ELEM 4 -idx490 -rootc28 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx492 -rootc28: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx493- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS_3[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS_3); // change octetstring data here
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS_3));
    XNAP_MEMCPY(p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueOctS.data, temp_buff_for_valueOctS_3, sizeof(temp_buff_for_valueOctS_3));
    //end of hc-valueOctS -idx493- primitive
    #endif /*choice-ELEM 5 -idx492 -rootc28 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx494 -rootc28: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx495- primitive in scope - pid = 14 Printable STRING - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valuePrintableString
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx495- primitive

    #endif /*choice-ELEM 6 -idx494 -rootc28 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc28 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse alias = -1
    /*=== END SEQUENCE -idx481 RANParameter-ValueType-Choice-ElementFalse -ROOTS70 ===*/

    #endif /*choice-ELEM 2 -idx480 -rootc26 - RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse */

    #if 0 //hc-choice-ELEM 3 -idx496 -rootc26: RANParameter-ValueType->RANParameter-ValueType-Choice-Structure - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_STRUCTURE;
    /*=== START SEQUENCE -idx497 -ROOTS71 RANParameter-ValueType-Choice-Structure ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure alias = -1 -mandatory
    /*=== START SEQUENCE -idx499 -ROOTS72 RANParameter-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_Structure.ranParameter_Structure.sequence_of_ranParameters.RANParameter_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx501 -ROOTS73 RANParameter-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx503- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_Structure.ranParameter_Structure.sequence_of_ranParameters.RANParameter_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx503- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1 -mandatory
    // [STOP] recursive CHOICE RANParameter_ValueType in stack
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx501 RANParameter-STRUCTURE-Item -ROOTS73 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx499 RANParameter-STRUCTURE -ROOTS72 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure alias = -1
    /*=== END SEQUENCE -idx497 RANParameter-ValueType-Choice-Structure -ROOTS71 ===*/

    #endif /*choice-ELEM 3 -idx496 -rootc26 - RANParameter-ValueType->RANParameter-ValueType-Choice-Structure */

    #if 0 //hc-choice-ELEM 4 -idx505 -rootc26: RANParameter-ValueType->RANParameter-ValueType-Choice-List - alias = -1
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_LIST;
    /*=== START SEQUENCE -idx506 -ROOTS74 RANParameter-ValueType-Choice-List ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List alias = -1 -mandatory
    /*=== START SEQUENCE -idx508 -ROOTS75 RANParameter-LIST ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST alias = -1 -mandatory
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_List.ranParameter_List.list_of_ranParameter.RANParameter_STRUCTURE_count = 1;
    /*=== START SEQUENCE -idx510 -ROOTS76 RANParameter-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_List.ranParameter_List.list_of_ranParameter.RANParameter_STRUCTURE[0].sequence_of_ranParameters.RANParameter_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx512 -ROOTS77 RANParameter-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx514- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ranP_List.E2SM_RC_QueryOutcome_Format2_ItemParameters[0].ranParameter_valueType->ranP_Choice_List.ranParameter_List.list_of_ranParameter.RANParameter_STRUCTURE[0].sequence_of_ranParameters.RANParameter_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx514- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1 -mandatory
    // [STOP] recursive CHOICE RANParameter_ValueType in stack
    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx512 RANParameter-STRUCTURE-Item -ROOTS77 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx510 RANParameter-STRUCTURE -ROOTS76 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST alias = -1
    /*=== END SEQUENCE -idx508 RANParameter-LIST -ROOTS75 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List alias = -1
    /*=== END SEQUENCE -idx506 RANParameter-ValueType-Choice-List -ROOTS74 ===*/

    #endif /*choice-ELEM 4 -idx505 -rootc26 - RANParameter-ValueType->RANParameter-ValueType-Choice-List */

    /*=== END CHOICE -rootc26 - RANParameter-ValueType ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters alias = -1
    /*=== END SEQUENCE -idx459 E2SM-RC-QueryOutcome-Format2-ItemParameters -ROOTS68 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE alias = 5 -optional
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].bitmask |= E2AP_E2SM_RC_QUERY_OUTCOME_FORMAT2_ITEM_UE_e2ap_UE_FILTER_ID_PRESENT;
    //hc-ueFilterID -idx517- alias primitive - pid = 5 - INTEGER - min:1 - max:65535  - E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UE-Filter-ID
    p_E2SM_RC_QueryOutcome->ric_queryOutcome_formats.queryOutcome_Format2.ueInfo_List.E2SM_RC_QueryOutcome_Format2_ItemUE[0].ueFilterID = 32768;// change integer here
    //end of hc-ueFilterID -idx517- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE alias = 5
    /*=== END SEQUENCE -idx165 E2SM-RC-QueryOutcome-Format2-ItemUE -ROOTS28 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2 alias = -1
    /*=== END SEQUENCE -idx163 E2SM-RC-QueryOutcome-Format2 -ROOTS27 ===*/

    #endif /*choice-ELEM 2 -idx162 -rootc1 - E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2 */

    /*=== END CHOICE -rootc1 - E2SM-RC-QueryOutcome-ric-queryOutcome-formats ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-QueryOutcome alias = -1
    /*=== END SEQUENCE -idx1 E2SM-RC-QueryOutcome -ROOTS1 ===*/

    return XNAP_SUCCESS;
}
/*
E2SM-RC-QueryOutcome : (E2SM-RC-QueryOutcome) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-QueryOutcome
    ric-queryOutcome-formats : (E2SM-RC-QueryOutcome-ric-queryOutcome-formats) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats
        queryOutcome-Format1 : (E2SM-RC-QueryOutcome-Format1) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1
            cellInfo-List : (E2SM-RC-QueryOutcome-Format1-cellInfo-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List
                E2SM-RC-QueryOutcome-Format1-ItemCell : (E2SM-RC-QueryOutcome-Format1-ItemCell) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell
                    cellGlobal-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI
                        nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->NR-CGI
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->NR-CGI->PLMNIdentity
                            nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->NR-CGI->NRCellIdentity
                        eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->EUTRA-CGI
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->EUTRA-CGI->PLMNIdentity
                            eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->CGI->EUTRA-CGI->EUTRACellIdentity
                    ranP-List : (E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List
                        E2SM-RC-QueryOutcome-Format1-ItemParameters : (E2SM-RC-QueryOutcome-Format1-ItemParameters) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters
                            ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ID
                            ranParameter-valueType : (RANParameter-ValueType) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType
                                ranP-Choice-ElementTrue : (RANParameter-ValueType-Choice-ElementTrue) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue
                                    ranParameter-value : (RANParameter-Value) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value
                                        valueBoolean : (valueBoolean) 					---- (BOOLEAN) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBoolean
                                        valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueInt
                                        valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueReal
                                        valueBitS : (valueBitS) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBitS
                                        valueOctS : (valueOctS) 					---- (OCTET STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueOctS
                                        valuePrintableString : (valuePrintableString) 					---- (PrintableString) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valuePrintableString
                                ranP-Choice-ElementFalse : (RANParameter-ValueType-Choice-ElementFalse) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse
                                    ranParameter-value : (RANParameter-Value) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value
                                        valueBoolean : (valueBoolean) 					---- (BOOLEAN) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBoolean
                                        valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueInt
                                        valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueReal
                                        valueBitS : (valueBitS) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBitS
                                        valueOctS : (valueOctS) 					---- (OCTET STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueOctS
                                        valuePrintableString : (valuePrintableString) 					---- (PrintableString) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valuePrintableString
                                ranP-Choice-Structure : (RANParameter-ValueType-Choice-Structure) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure
                                    ranParameter-Structure : (RANParameter-STRUCTURE) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE
                                        sequence-of-ranParameters : (RANParameter-STRUCTURE-sequence-of-ranParameters) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters
                                            RANParameter-STRUCTURE-Item : (RANParameter-STRUCTURE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item
                                                ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
                                                ranParameter-valueType : (RANParameter-ValueType) 					---- (RECURSIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ValueType
                                ranP-Choice-List : (RANParameter-ValueType-Choice-List) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List
                                    ranParameter-List : (RANParameter-LIST) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST
                                        list-of-ranParameter : (RANParameter-LIST-list-of-ranParameter) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter
                                            RANParameter-STRUCTURE : (RANParameter-STRUCTURE) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE
                                                sequence-of-ranParameters : (RANParameter-STRUCTURE-sequence-of-ranParameters) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters
                                                    RANParameter-STRUCTURE-Item : (RANParameter-STRUCTURE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item
                                                        ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
                                                        ranParameter-valueType : (RANParameter-ValueType) 					---- (RECURSIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->E2SM-RC-QueryOutcome-Format1-ItemCell-ranP-List->E2SM-RC-QueryOutcome-Format1-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ValueType
                    neighbourRelation-Table : (NeighbourRelation-Info) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info
                        servingCellPCI : (ServingCell-PCI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->ServingCell-PCI
                            nR : (NR-PCI) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->ServingCell-PCI->NR-PCI
                            eUTRA : (E-UTRA-PCI) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->ServingCell-PCI->E-UTRA-PCI
                        servingCellARFCN : (ServingCell-ARFCN) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->ServingCell-ARFCN
                            nR : (NR-ARFCN) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->ServingCell-ARFCN->NR-ARFCN
                                nRARFCN : (nRARFCN) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->ServingCell-ARFCN->NR-ARFCN->nRARFCN
                            eUTRA : (E-UTRA-ARFCN) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->ServingCell-ARFCN->E-UTRA-ARFCN
                        neighbourCell-List : (NeighbourCell-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List
                            NeighbourCell-Item : (NeighbourCell-Item) 					---- (CHOICE) ---- [UNK] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item
                                ranType-Choice-NR : (NeighbourCell-Item-Choice-NR) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR
                                    nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NR-CGI
                                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NR-CGI->PLMNIdentity
                                        nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NR-CGI->NRCellIdentity
                                    nR-PCI : (NR-PCI) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NR-PCI
                                    fiveGS-TAC : (FiveGS-TAC) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->FiveGS-TAC
                                    nR-mode-info : (nR-mode-info) 					---- (ENUMERATED) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->nR-mode-info
                                    nR-FreqInfo : (NRFrequencyInfo) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo
                                        nrARFCN : (NR-ARFCN) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NR-ARFCN
                                            nRARFCN : (nRARFCN) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NR-ARFCN->nRARFCN
                                        frequencyBand-List : (NRFrequencyBand-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NRFrequencyBand-List
                                            NRFrequencyBandItem : (NRFrequencyBandItem) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NRFrequencyBand-List->NRFrequencyBandItem
                                                freqBandIndicatorNr : (freqBandIndicatorNr) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NRFrequencyBand-List->NRFrequencyBandItem->freqBandIndicatorNr
                                                supportedSULBandList : (SupportedSULBandList) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NRFrequencyBand-List->NRFrequencyBandItem->SupportedSULBandList
                                                    SupportedSULFreqBandItem : (SupportedSULFreqBandItem) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NRFrequencyBand-List->NRFrequencyBandItem->SupportedSULBandList->SupportedSULFreqBandItem
                                                        freqBandIndicatorNr : (freqBandIndicatorNr) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NRFrequencyBand-List->NRFrequencyBandItem->SupportedSULBandList->SupportedSULFreqBandItem->freqBandIndicatorNr
                                        frequencyShift7p5khz : (NRFrequencyShift7p5khz) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->NRFrequencyInfo->NRFrequencyShift7p5khz
                                    x2-Xn-established : (x2-Xn-established) 					---- (ENUMERATED) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->x2-Xn-established
                                    hO-validated : (hO-validated) 					---- (ENUMERATED) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->hO-validated
                                    version : (version) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-NR->version
                                ranType-Choice-EUTRA : (NeighbourCell-Item-Choice-E-UTRA) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA
                                    eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->EUTRA-CGI
                                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->EUTRA-CGI->PLMNIdentity
                                        eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->EUTRA-CGI->EUTRACellIdentity
                                    eUTRA-PCI : (E-UTRA-PCI) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->E-UTRA-PCI
                                    eUTRA-ARFCN : (E-UTRA-ARFCN) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->E-UTRA-ARFCN
                                    eUTRA-TAC : (E-UTRA-TAC) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->E-UTRA-TAC
                                    x2-Xn-established : (x2-Xn-established) 					---- (ENUMERATED) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->x2-Xn-established
                                    hO-validated : (hO-validated) 					---- (ENUMERATED) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->hO-validated
                                    version : (version) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->NeighbourRelation-Info->NeighbourCell-List->NeighbourCell-Item->NeighbourCell-Item-Choice-E-UTRA->version
                    servingCellConfigCommon : (ServingCellConfigCommon) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->ServingCellConfigCommon
                        ssbPositionsInBurst : (ssbPositionsInBurst) 					---- (OCTET STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->ServingCellConfigCommon->ssbPositionsInBurst
                        ssbPeriodicity : (ssbPeriodicity) 					---- (ENUMERATED) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->ServingCellConfigCommon->ssbPeriodicity
                        ssbSubcarrierSpacing : (ssbSubcarrierSpacing) 					---- (ENUMERATED) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format1->E2SM-RC-QueryOutcome-Format1-cellInfo-List->E2SM-RC-QueryOutcome-Format1-ItemCell->ServingCellConfigCommon->ssbSubcarrierSpacing
        queryOutcome-Format2 : (E2SM-RC-QueryOutcome-Format2) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2
            ueInfo-List : (E2SM-RC-QueryOutcome-Format2-ueInfo-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List
                E2SM-RC-QueryOutcome-Format2-ItemUE : (E2SM-RC-QueryOutcome-Format2-ItemUE) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE
                    ueID : (UEID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID
                        gNB-UEID : (UEID-GNB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB
                            amf-UE-NGAP-ID : (AMF-UE-NGAP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->AMF-UE-NGAP-ID
                            guami : (GUAMI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GUAMI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GUAMI->PLMNIdentity
                                aMFRegionID : (AMFRegionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GUAMI->AMFRegionID
                                aMFSetID : (AMFSetID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GUAMI->AMFSetID
                                aMFPointer : (AMFPointer) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GUAMI->AMFPointer
                            gNB-CU-UE-F1AP-ID-List : (UEID-GNB-CU-F1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List
                                UEID-GNB-CU-CP-F1AP-ID-Item : (UEID-GNB-CU-CP-F1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item
                                    gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item->GNB-CU-UE-F1AP-ID
                            gNB-CU-CP-UE-E1AP-ID-List : (UEID-GNB-CU-CP-E1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List
                                UEID-GNB-CU-CP-E1AP-ID-Item : (UEID-GNB-CU-CP-E1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item
                                    gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
                            ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->RANUEID
                            m-NG-RAN-UE-XnAP-ID : (NG-RANnodeUEXnAPID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->NG-RANnodeUEXnAPID
                            globalGNB-ID : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalGNB-ID
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalGNB-ID->PLMNIdentity
                                gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID
                                    gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID->gNB-ID
                            globalNG-RANNode-ID : (GlobalNGRANNodeID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID
                                gNB : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID
                                    pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
                                    gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID
                                        gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
                                ng-eNB : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID
                                    pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
                                    ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID
                                        macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                                        shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                                        longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                            cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI
                                c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->RNTI-Value
                                cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI
                                    nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI
                                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                        nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                                    eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI
                                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                        eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                        gNB-DU-UEID : (UEID-GNB-DU) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU
                            gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->GNB-CU-UE-F1AP-ID
                            ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->RANUEID
                            cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI
                                c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->RNTI-Value
                                cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI
                                    nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI
                                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                        nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                                    eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI
                                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                        eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                        gNB-CU-UP-UEID : (UEID-GNB-CU-UP) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-CU-UP
                            gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-CU-UP->GNB-CU-CP-UE-E1AP-ID
                            ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-GNB-CU-UP->RANUEID
                        ng-eNB-UEID : (UEID-NG-ENB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB
                            amf-UE-NGAP-ID : (AMF-UE-NGAP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->AMF-UE-NGAP-ID
                            guami : (GUAMI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GUAMI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GUAMI->PLMNIdentity
                                aMFRegionID : (AMFRegionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GUAMI->AMFRegionID
                                aMFSetID : (AMFSetID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GUAMI->AMFSetID
                                aMFPointer : (AMFPointer) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GUAMI->AMFPointer
                            ng-eNB-CU-UE-W1AP-ID : (NGENB-CU-UE-W1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->NGENB-CU-UE-W1AP-ID
                            m-NG-RAN-UE-XnAP-ID : (NG-RANnodeUEXnAPID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->NG-RANnodeUEXnAPID
                            globalNgENB-ID : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNgENB-ID
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNgENB-ID->PLMNIdentity
                                ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID
                                    macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                                    shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                                    longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                            globalNG-RANNode-ID : (GlobalNGRANNodeID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID
                                gNB : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID
                                    pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
                                    gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID
                                        gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
                                ng-eNB : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID
                                    pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
                                    ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID
                                        macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                                        shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                                        longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                            cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI
                                c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->RNTI-Value
                                cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI
                                    nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI
                                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                        nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                                    eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI
                                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                        eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                        ng-eNB-DU-UEID : (UEID-NG-ENB-DU) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU
                            ng-eNB-CU-UE-W1AP-ID : (NGENB-CU-UE-W1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->NGENB-CU-UE-W1AP-ID
                            cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI
                                c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->RNTI-Value
                                cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI
                                    nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI
                                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                        nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                                    eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI
                                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                        eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                        en-gNB-UEID : (UEID-EN-GNB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB
                            m-eNB-UE-X2AP-ID : (ENB-UE-X2AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID
                            m-eNB-UE-X2AP-ID-Extension : (ENB-UE-X2AP-ID-Extension) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID-Extension
                            globalENB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GlobalENB-ID
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GlobalENB-ID->PLMNIdentity
                                eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID
                                    macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->macro-eNB-ID
                                    home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->home-eNB-ID
                                    short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                                    long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                            gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->GNB-CU-UE-F1AP-ID
                            gNB-CU-CP-UE-E1AP-ID-List : (UEID-GNB-CU-CP-E1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List
                                UEID-GNB-CU-CP-E1AP-ID-Item : (UEID-GNB-CU-CP-E1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item
                                    gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
                            ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->RANUEID
                            cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI
                                c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->RNTI-Value
                                cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI
                                    nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI
                                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                        nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                                    eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI
                                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                        eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                        eNB-UEID : (UEID-ENB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB
                            mME-UE-S1AP-ID : (MME-UE-S1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->MME-UE-S1AP-ID
                            gUMMEI : (GUMMEI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GUMMEI
                                pLMN-Identity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GUMMEI->PLMNIdentity
                                mME-Group-ID : (MME-Group-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GUMMEI->MME-Group-ID
                                mME-Code : (MME-Code) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GUMMEI->MME-Code
                            m-eNB-UE-X2AP-ID : (ENB-UE-X2AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->ENB-UE-X2AP-ID
                            m-eNB-UE-X2AP-ID-Extension : (ENB-UE-X2AP-ID-Extension) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->ENB-UE-X2AP-ID-Extension
                            globalENB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GlobalENB-ID
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GlobalENB-ID->PLMNIdentity
                                eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GlobalENB-ID->ENB-ID
                                    macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->macro-eNB-ID
                                    home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->home-eNB-ID
                                    short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                                    long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                            cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI
                                c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->RNTI-Value
                                cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI
                                    nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI
                                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                        nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                                    eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI
                                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                        eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                    ranP-List : (E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List
                        E2SM-RC-QueryOutcome-Format2-ItemParameters : (E2SM-RC-QueryOutcome-Format2-ItemParameters) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters
                            ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ID
                            ranParameter-valueType : (RANParameter-ValueType) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType
                                ranP-Choice-ElementTrue : (RANParameter-ValueType-Choice-ElementTrue) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue
                                    ranParameter-value : (RANParameter-Value) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value
                                        valueBoolean : (valueBoolean) 					---- (BOOLEAN) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBoolean
                                        valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueInt
                                        valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueReal
                                        valueBitS : (valueBitS) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBitS
                                        valueOctS : (valueOctS) 					---- (OCTET STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueOctS
                                        valuePrintableString : (valuePrintableString) 					---- (PrintableString) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valuePrintableString
                                ranP-Choice-ElementFalse : (RANParameter-ValueType-Choice-ElementFalse) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse
                                    ranParameter-value : (RANParameter-Value) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value
                                        valueBoolean : (valueBoolean) 					---- (BOOLEAN) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBoolean
                                        valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueInt
                                        valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueReal
                                        valueBitS : (valueBitS) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBitS
                                        valueOctS : (valueOctS) 					---- (OCTET STRING) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueOctS
                                        valuePrintableString : (valuePrintableString) 					---- (PrintableString) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valuePrintableString
                                ranP-Choice-Structure : (RANParameter-ValueType-Choice-Structure) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure
                                    ranParameter-Structure : (RANParameter-STRUCTURE) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE
                                        sequence-of-ranParameters : (RANParameter-STRUCTURE-sequence-of-ranParameters) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters
                                            RANParameter-STRUCTURE-Item : (RANParameter-STRUCTURE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item
                                                ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
                                                ranParameter-valueType : (RANParameter-ValueType) 					---- (RECURSIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ValueType
                                ranP-Choice-List : (RANParameter-ValueType-Choice-List) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List
                                    ranParameter-List : (RANParameter-LIST) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST
                                        list-of-ranParameter : (RANParameter-LIST-list-of-ranParameter) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter
                                            RANParameter-STRUCTURE : (RANParameter-STRUCTURE) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE
                                                sequence-of-ranParameters : (RANParameter-STRUCTURE-sequence-of-ranParameters) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters
                                                    RANParameter-STRUCTURE-Item : (RANParameter-STRUCTURE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item
                                                        ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
                                                        ranParameter-valueType : (RANParameter-ValueType) 					---- (RECURSIVE) ---- [M] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->E2SM-RC-QueryOutcome-Format2-ItemUE-ranP-List->E2SM-RC-QueryOutcome-Format2-ItemParameters->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ValueType
                    ueFilterID : (UE-Filter-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-QueryOutcome->E2SM-RC-QueryOutcome-ric-queryOutcome-formats->E2SM-RC-QueryOutcome-Format2->E2SM-RC-QueryOutcome-Format2-ueInfo-List->E2SM-RC-QueryOutcome-Format2-ItemUE->UE-Filter-ID

RECURSION LIST:[]
RECURSION MARK LIST:{'RANParameter-ValueType'}
*/
#endif // ASSIGN_HARDCODE_E2SM_RC_QUERY_OUTCOME_H

