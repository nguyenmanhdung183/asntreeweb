#ifndef ASSIGN_HARDCODE_E2SM_RC_SERVICE_LAYER_CAUSE_H
#define ASSIGN_HARDCODE_E2SM_RC_SERVICE_LAYER_CAUSE_H
#include<stdio.h>
#include"output_main.h"
#include "MAIN_STRUCT.h"

xnap_return_et assign_hardcode_value_E2SM_RC_ServiceLayerCause(_e2ap_E2SM_RC_ServiceLayerCause_t* p_E2SM_RC_ServiceLayerCause)
{
    /*=== START CHOICE -rootc1 - E2SM-RC-ServiceLayerCause ===*/
    #if 1 //hc-choice-ELEM 1 -idx2 -rootc1: E2SM-RC-ServiceLayerCause->CauseRICrequest - alias = 13
    p_E2SM_RC_ServiceLayerCause->choice_type = E2AP_E2SM_RC_SERVICE_LAYER_CAUSE_e2ap_RIC_REQUEST;
    //hc-CauseRICrequest -idx3 - alias primitive - pid = 13 ENUMURATE - E2SM-RC-ServiceLayerCause->CauseRICrequest
    p_E2SM_RC_ServiceLayerCause->ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    //end of hc-CauseRICrequest -idx3- alias primitive

    #endif /*choice-ELEM 1 -idx2 -rootc1 - E2SM-RC-ServiceLayerCause->CauseRICrequest */

    #if 0 //hc-choice-ELEM 2 -idx4 -rootc1: E2SM-RC-ServiceLayerCause->CauseRICservice - alias = 13
    p_E2SM_RC_ServiceLayerCause->choice_type = E2AP_E2SM_RC_SERVICE_LAYER_CAUSE_e2ap_RIC_SERVICE;
    //hc-CauseRICservice -idx5 - alias primitive - pid = 13 ENUMURATE - E2SM-RC-ServiceLayerCause->CauseRICservice
    p_E2SM_RC_ServiceLayerCause->ricService = E2AP_CAUSE_RICSERVICE_RIC_EVENT_TRIGGER_STYLE_TYPE_NOT_SUPPORTED; // change enum value here
    //end of hc-CauseRICservice -idx5- alias primitive

    #endif /*choice-ELEM 2 -idx4 -rootc1 - E2SM-RC-ServiceLayerCause->CauseRICservice */

    #if 0 //hc-choice-ELEM 3 -idx6 -rootc1: E2SM-RC-ServiceLayerCause->CauseProtocol - alias = 13
    p_E2SM_RC_ServiceLayerCause->choice_type = E2AP_E2SM_RC_SERVICE_LAYER_CAUSE_e2ap_PROTOCOL;
    //hc-CauseProtocol -idx7 - alias primitive - pid = 13 ENUMURATE - E2SM-RC-ServiceLayerCause->CauseProtocol
    p_E2SM_RC_ServiceLayerCause->protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    //end of hc-CauseProtocol -idx7- alias primitive

    #endif /*choice-ELEM 3 -idx6 -rootc1 - E2SM-RC-ServiceLayerCause->CauseProtocol */

    /*=== END CHOICE -rootc1 - E2SM-RC-ServiceLayerCause ===*/

    return XNAP_SUCCESS;
}
/*
E2SM-RC-ServiceLayerCause : (E2SM-RC-ServiceLayerCause) 					---- (CHOICE) ---- [UNK] ----PATH: E2SM-RC-ServiceLayerCause
    ricRequest : (CauseRICrequest) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2SM-RC-ServiceLayerCause->CauseRICrequest
    ricService : (CauseRICservice) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2SM-RC-ServiceLayerCause->CauseRICservice
    protocol : (CauseProtocol) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [M] ----PATH: E2SM-RC-ServiceLayerCause->CauseProtocol

RECURSION LIST:[]
RECURSION MARK LIST:set()
*/
#endif // ASSIGN_HARDCODE_E2SM_RC_SERVICE_LAYER_CAUSE_H

