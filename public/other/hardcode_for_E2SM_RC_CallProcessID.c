#ifndef ASSIGN_HARDCODE_E2SM_RC_CALL_PROCESS_ID_H
#define ASSIGN_HARDCODE_E2SM_RC_CALL_PROCESS_ID_H
#include<stdio.h>
#include"output_main.h"
#include "MAIN_STRUCT.h"

xnap_return_et assign_hardcode_value_E2SM_RC_CallProcessID(_e2ap_E2SM_RC_CallProcessID_t* p_E2SM_RC_CallProcessID)
{
    /*=== START SEQUENCE -idx1 -ROOTS1 E2SM-RC-CallProcessID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-CallProcessID alias = -1 -mandatory
    /*=== START CHOICE -rootc1 - E2SM-RC-CallProcessID-ric-callProcessID-formats ===*/
    #if 1 //hc-choice-ELEM 1 -idx4 -rootc1: E2SM-RC-CallProcessID-ric-callProcessID-formats->E2SM_RC_CallProcessID_Format1 - alias = -1
    p_E2SM_RC_CallProcessID->ric_callProcessID_formats.choice_type = E2AP_E2SM_RC_CALL_PROCESS_ID_RIC_CALL_PROCESS_ID_FORMATS_e2ap_CALL_PROCESS_ID_FORMAT1;
    /*=== START SEQUENCE -idx5 -ROOTS2 E2SM-RC-CallProcessID-Format1 ===*/
    //hc-sequence-ELEM 1: E2SM-RC-CallProcessID->E2SM-RC-CallProcessID-ric-callProcessID-formats->E2SM-RC-CallProcessID-Format1 alias = 5 -mandatory
    //hc-ric_callProcess_ID -idx7- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-CallProcessID->E2SM-RC-CallProcessID-ric-callProcessID-formats->E2SM-RC-CallProcessID-Format1->RAN-CallProcess-ID
    p_E2SM_RC_CallProcessID->ric_callProcessID_formats.callProcessID_Format1.ric_callProcess_ID = 2147483648;// change integer here
    //end of hc-ric_callProcess_ID -idx7- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-CallProcessID->E2SM-RC-CallProcessID-ric-callProcessID-formats->E2SM-RC-CallProcessID-Format1 alias = 5
    /*=== END SEQUENCE -idx5 E2SM-RC-CallProcessID-Format1 -ROOTS2 ===*/

    #endif /*choice-ELEM 1 -idx4 -rootc1 - E2SM-RC-CallProcessID-ric-callProcessID-formats->E2SM-RC-CallProcessID-Format1 */

    /*=== END CHOICE -rootc1 - E2SM-RC-CallProcessID-ric-callProcessID-formats ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-CallProcessID alias = -1
    /*=== END SEQUENCE -idx1 E2SM-RC-CallProcessID -ROOTS1 ===*/

    return XNAP_SUCCESS;
}
/*
E2SM-RC-CallProcessID : (E2SM-RC-CallProcessID) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-CallProcessID
    ric-callProcessID-formats : (E2SM-RC-CallProcessID-ric-callProcessID-formats) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-CallProcessID->E2SM-RC-CallProcessID-ric-callProcessID-formats
        callProcessID-Format1 : (E2SM-RC-CallProcessID-Format1) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-CallProcessID->E2SM-RC-CallProcessID-ric-callProcessID-formats->E2SM-RC-CallProcessID-Format1
            ric-callProcess-ID : (RAN-CallProcess-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-CallProcessID->E2SM-RC-CallProcessID-ric-callProcessID-formats->E2SM-RC-CallProcessID-Format1->RAN-CallProcess-ID

RECURSION LIST:[]
RECURSION MARK LIST:set()
*/
#endif // ASSIGN_HARDCODE_E2SM_RC_CALL_PROCESS_ID_H

