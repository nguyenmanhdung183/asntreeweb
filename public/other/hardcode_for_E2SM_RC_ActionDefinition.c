#ifndef ASSIGN_HARDCODE_E2SM_RC_ACTION_DEFINITION_H
#define ASSIGN_HARDCODE_E2SM_RC_ACTION_DEFINITION_H
#include<stdio.h>
#include"output_main.h"
#include "MAIN_STRUCT.h"

xnap_return_et assign_hardcode_value_E2SM_RC_ActionDefinition(_e2ap_E2SM_RC_ActionDefinition_t* p_E2SM_RC_ActionDefinition)
{
    /*=== START SEQUENCE -idx1 -ROOTS1 E2SM-RC-ActionDefinition ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition alias = 15 -mandatory
    //hc-p_E2SM_RC_ActionDefinition->ric_Style_Type -idx3- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-RC-ActionDefinition->RIC-Style-Type
    p_E2SM_RC_ActionDefinition->ric_Style_Type = 875;// change integer here
    //end of hc-p_E2SM_RC_ActionDefinition->ric_Style_Type -idx3- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition alias = 15
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition alias = -1 -mandatory
    /*=== START CHOICE -rootc1 - E2SM-RC-ActionDefinition-ric-actionDefinition-formats ===*/
    #if 1 //hc-choice-ELEM 1 -idx6 -rootc1: E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM_RC_ActionDefinition_Format1 - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.choice_type = E2AP_E2SM_RC_ACTION_DEFINITION_RIC_ACTION_DEFINITION_FORMATS_e2ap_ACTION_DEFINITION_FORMAT1;
    /*=== START SEQUENCE -idx7 -ROOTS2 E2SM-RC-ActionDefinition-Format1 ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1 alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item_count = 1;
    /*=== START SEQUENCE -idx9 -ROOTS3 E2SM-RC-ActionDefinition-Format1-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx11- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx11- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].bitmask |= E2AP_E2SM_RC_ACTION_DEFINITION_FORMAT1_ITEM_e2ap_RAN_PARAMETER_DEFINITION_PRESENT;
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition = xnap_mem_get(sizeof(_e2ap_RANParameter_Definition_t)); //memgetforrecu
    /*=== START SEQUENCE -idx13 -ROOTS4 RANParameter-Definition ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition alias = -1 -mandatory
    /*=== START CHOICE -rootc2 - RANParameter-Definition-Choice ===*/
    #if 1 //hc-choice-ELEM 1 -idx16 -rootc2: RANParameter-Definition-Choice->RANParameter_Definition_Choice_LIST - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_LIST;
    /*=== START SEQUENCE -idx17 -ROOTS5 RANParameter-Definition-Choice-LIST ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item_count = 1;
    /*=== START SEQUENCE -idx19 -ROOTS6 RANParameter-Definition-Choice-LIST-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx21- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx21- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx23- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx23- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].bitmask |= E2AP_RANPARAMETER_DEFINITION_CHOICE_LIST_ITEM_e2ap_RAN_PARAMETER_DEFINITION_PRESENT;
    // [RECUSIVE] recursive - re-idx = 1 / SEQUENCE RANParameter_Definition detected in stack, continuing...
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition = xnap_mem_get(sizeof(_e2ap_RANParameter_Definition_t)); //memgetforrecu
    /*=== START SEQUENCE -idx25 -ROOTS7 RANParameter-Definition ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition alias = -1 -mandatory
    /*=== START CHOICE -rootc3 - RANParameter-Definition-Choice ===*/
    #if 1 //hc-choice-ELEM 1 -idx28 -rootc3: RANParameter-Definition-Choice->RANParameter_Definition_Choice_LIST - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_LIST;
    /*=== START SEQUENCE -idx29 -ROOTS8 RANParameter-Definition-Choice-LIST ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item_count = 1;
    /*=== START SEQUENCE -idx31 -ROOTS9 RANParameter-Definition-Choice-LIST-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx33- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx33- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx35- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx35- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1 -optional
    // [STOP] recursive SEQUENCE RANParameter_Definition in stack
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1
    /*=== END SEQUENCE -idx31 RANParameter-Definition-Choice-LIST-Item -ROOTS9 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1
    /*=== END SEQUENCE -idx29 RANParameter-Definition-Choice-LIST -ROOTS8 ===*/

    #endif /*choice-ELEM 1 -idx28 -rootc3 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST */

    #if 0 //hc-choice-ELEM 2 -idx37 -rootc3: RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_STRUCTURE;
    /*=== START SEQUENCE -idx38 -ROOTS10 RANParameter-Definition-Choice-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx40 -ROOTS11 RANParameter-Definition-Choice-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx42- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx42- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx44- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx44- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1 -optional
    // [STOP] recursive SEQUENCE RANParameter_Definition in stack
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx40 RANParameter-Definition-Choice-STRUCTURE-Item -ROOTS11 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx38 RANParameter-Definition-Choice-STRUCTURE -ROOTS10 ===*/

    #endif /*choice-ELEM 2 -idx37 -rootc3 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE */

    /*=== END CHOICE -rootc3 - RANParameter-Definition-Choice ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition alias = -1
    /*=== END SEQUENCE -idx25 RANParameter-Definition -ROOTS7 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1
    /*=== END SEQUENCE -idx19 RANParameter-Definition-Choice-LIST-Item -ROOTS6 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1
    /*=== END SEQUENCE -idx17 RANParameter-Definition-Choice-LIST -ROOTS5 ===*/

    #endif /*choice-ELEM 1 -idx16 -rootc2 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST */

    #if 0 //hc-choice-ELEM 2 -idx46 -rootc2: RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_STRUCTURE;
    /*=== START SEQUENCE -idx47 -ROOTS12 RANParameter-Definition-Choice-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx49 -ROOTS13 RANParameter-Definition-Choice-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx51- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx51- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx53- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx53- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].bitmask |= E2AP_RANPARAMETER_DEFINITION_CHOICE_STRUCTURE_ITEM_e2ap_RAN_PARAMETER_DEFINITION_PRESENT;
    // [RECUSIVE] recursive - re-idx = 1 / SEQUENCE RANParameter_Definition detected in stack, continuing...
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition = xnap_mem_get(sizeof(_e2ap_RANParameter_Definition_t)); //memgetforrecu
    /*=== START SEQUENCE -idx55 -ROOTS14 RANParameter-Definition ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition alias = -1 -mandatory
    /*=== START CHOICE -rootc4 - RANParameter-Definition-Choice ===*/
    #if 1 //hc-choice-ELEM 1 -idx58 -rootc4: RANParameter-Definition-Choice->RANParameter_Definition_Choice_LIST - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_LIST;
    /*=== START SEQUENCE -idx59 -ROOTS15 RANParameter-Definition-Choice-LIST ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item_count = 1;
    /*=== START SEQUENCE -idx61 -ROOTS16 RANParameter-Definition-Choice-LIST-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx63- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx63- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx65- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx65- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1 -optional
    // [STOP] recursive SEQUENCE RANParameter_Definition in stack
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1
    /*=== END SEQUENCE -idx61 RANParameter-Definition-Choice-LIST-Item -ROOTS16 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1
    /*=== END SEQUENCE -idx59 RANParameter-Definition-Choice-LIST -ROOTS15 ===*/

    #endif /*choice-ELEM 1 -idx58 -rootc4 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST */

    #if 0 //hc-choice-ELEM 2 -idx67 -rootc4: RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_STRUCTURE;
    /*=== START SEQUENCE -idx68 -ROOTS17 RANParameter-Definition-Choice-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx70 -ROOTS18 RANParameter-Definition-Choice-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx72- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx72- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx74- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format1.ranP_ToBeReported_List.E2SM_RC_ActionDefinition_Format1_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx74- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1 -optional
    // [STOP] recursive SEQUENCE RANParameter_Definition in stack
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx70 RANParameter-Definition-Choice-STRUCTURE-Item -ROOTS18 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx68 RANParameter-Definition-Choice-STRUCTURE -ROOTS17 ===*/

    #endif /*choice-ELEM 2 -idx67 -rootc4 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE */

    /*=== END CHOICE -rootc4 - RANParameter-Definition-Choice ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition alias = -1
    /*=== END SEQUENCE -idx55 RANParameter-Definition -ROOTS14 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx49 RANParameter-Definition-Choice-STRUCTURE-Item -ROOTS13 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx47 RANParameter-Definition-Choice-STRUCTURE -ROOTS12 ===*/

    #endif /*choice-ELEM 2 -idx46 -rootc2 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE */

    /*=== END CHOICE -rootc2 - RANParameter-Definition-Choice ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition alias = -1
    /*=== END SEQUENCE -idx13 RANParameter-Definition -ROOTS4 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item alias = -1
    /*=== END SEQUENCE -idx9 E2SM-RC-ActionDefinition-Format1-Item -ROOTS3 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1 alias = -1
    /*=== END SEQUENCE -idx7 E2SM-RC-ActionDefinition-Format1 -ROOTS2 ===*/

    #endif /*choice-ELEM 1 -idx6 -rootc1 - E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1 */

    #if 0 //hc-choice-ELEM 2 -idx76 -rootc1: E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2 - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.choice_type = E2AP_E2SM_RC_ACTION_DEFINITION_RIC_ACTION_DEFINITION_FORMATS_e2ap_ACTION_DEFINITION_FORMAT2;
    /*=== START SEQUENCE -idx77 -ROOTS19 E2SM-RC-ActionDefinition-Format2 ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2 alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item_count = 1;
    /*=== START SEQUENCE -idx79 -ROOTS20 E2SM-RC-ActionDefinition-Format2-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item alias = -1 -mandatory
    /*=== START SEQUENCE -idx81 -ROOTS21 RIC-PolicyAction ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction alias = 5 -mandatory
    //hc-ric_PolicyAction_ID -idx83- alias primitive - pid = 5 - INTEGER - min:1 - max:65535  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-ControlAction-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ric_PolicyAction_ID = 32768;// change integer here
    //end of hc-ric_PolicyAction_ID -idx83- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.bitmask |= E2AP_RIC_POLICY_ACTION_e2ap_RAN_PARAMETERS_LIST_PRESENT;
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item_count = 1;
    /*=== START SEQUENCE -idx85 -ROOTS22 RIC-PolicyAction-RANParameter-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx87- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx87- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item alias = -1 -mandatory
    /*=== START CHOICE -rootc5 - RANParameter-ValueType ===*/
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType = xnap_mem_get(sizeof(_e2ap_RANParameter_ValueType_t)); //memgetforrecu
    #if 1 //hc-choice-ELEM 1 -idx90 -rootc5: RANParameter-ValueType->RANParameter_ValueType_Choice_ElementTrue - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_ELEMENT_TRUE;
    /*=== START SEQUENCE -idx91 -ROOTS23 RANParameter-ValueType-Choice-ElementTrue ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue alias = -1 -mandatory
    /*=== START CHOICE -rootc6 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx94 -rootc6: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx95- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBoolean
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx95- primitive

    #endif /*choice-ELEM 1 -idx94 -rootc6 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx96 -rootc6: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx97 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueInt
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx97- primitive

    #endif /*choice-ELEM 2 -idx96 -rootc6 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx98 -rootc6: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx99- primitive in scope - pid = 17 REAL - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueReal
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx99- primitive

    #endif /*choice-ELEM 3 -idx98 -rootc6 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx100 -rootc6: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx101- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueBitS.data, temp_buff_for_valueBitS, 0);
    //end of hc-valueBitS -idx101- primitive
    #endif /*choice-ELEM 4 -idx100 -rootc6 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx102 -rootc6: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx103- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS); // change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS));
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valueOctS.data, temp_buff_for_valueOctS, sizeof(temp_buff_for_valueOctS));
    //end of hc-valueOctS -idx103- primitive
    #endif /*choice-ELEM 5 -idx102 -rootc6 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx104 -rootc6: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx105- primitive in scope - pid = 14 Printable STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valuePrintableString
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementTrue.ranParameter_value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx105- primitive

    #endif /*choice-ELEM 6 -idx104 -rootc6 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc6 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue alias = -1
    /*=== END SEQUENCE -idx91 RANParameter-ValueType-Choice-ElementTrue -ROOTS23 ===*/

    #endif /*choice-ELEM 1 -idx90 -rootc5 - RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue */

    #if 0 //hc-choice-ELEM 2 -idx106 -rootc5: RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_ELEMENT_FALSE;
    /*=== START SEQUENCE -idx107 -ROOTS24 RANParameter-ValueType-Choice-ElementFalse ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.bitmask |= E2AP_RANPARAMETER_VALUE_TYPE_CHOICE_ELEMENT_FALSE_e2ap_RAN_PARAMETER_VALUE_PRESENT;
    /*=== START CHOICE -rootc7 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx110 -rootc7: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx111- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBoolean
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx111- primitive

    #endif /*choice-ELEM 1 -idx110 -rootc7 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx112 -rootc7: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx113 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueInt
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx113- primitive

    #endif /*choice-ELEM 2 -idx112 -rootc7 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx114 -rootc7: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx115- primitive in scope - pid = 17 REAL - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueReal
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx115- primitive

    #endif /*choice-ELEM 3 -idx114 -rootc7 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx116 -rootc7: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx117- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS_1[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueBitS.data, temp_buff_for_valueBitS_1, 0);
    //end of hc-valueBitS -idx117- primitive
    #endif /*choice-ELEM 4 -idx116 -rootc7 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx118 -rootc7: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx119- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS_1[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS_1); // change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS_1));
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valueOctS.data, temp_buff_for_valueOctS_1, sizeof(temp_buff_for_valueOctS_1));
    //end of hc-valueOctS -idx119- primitive
    #endif /*choice-ELEM 5 -idx118 -rootc7 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx120 -rootc7: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx121- primitive in scope - pid = 14 Printable STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valuePrintableString
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_ElementFalse.ranParameter_value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx121- primitive

    #endif /*choice-ELEM 6 -idx120 -rootc7 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc7 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse alias = -1
    /*=== END SEQUENCE -idx107 RANParameter-ValueType-Choice-ElementFalse -ROOTS24 ===*/

    #endif /*choice-ELEM 2 -idx106 -rootc5 - RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse */

    #if 0 //hc-choice-ELEM 3 -idx122 -rootc5: RANParameter-ValueType->RANParameter-ValueType-Choice-Structure - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_STRUCTURE;
    /*=== START SEQUENCE -idx123 -ROOTS25 RANParameter-ValueType-Choice-Structure ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure alias = -1 -mandatory
    /*=== START SEQUENCE -idx125 -ROOTS26 RANParameter-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_Structure.ranParameter_Structure.sequence_of_ranParameters.RANParameter_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx127 -ROOTS27 RANParameter-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx129- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_Structure.ranParameter_Structure.sequence_of_ranParameters.RANParameter_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx129- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1 -mandatory
    // [STOP] recursive CHOICE RANParameter_ValueType in stack
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx127 RANParameter-STRUCTURE-Item -ROOTS27 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx125 RANParameter-STRUCTURE -ROOTS26 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure alias = -1
    /*=== END SEQUENCE -idx123 RANParameter-ValueType-Choice-Structure -ROOTS25 ===*/

    #endif /*choice-ELEM 3 -idx122 -rootc5 - RANParameter-ValueType->RANParameter-ValueType-Choice-Structure */

    #if 0 //hc-choice-ELEM 4 -idx131 -rootc5: RANParameter-ValueType->RANParameter-ValueType-Choice-List - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->choice_type = E2AP_RANPARAMETER_VALUE_TYPE_e2ap_RAN_P_CHOICE_LIST;
    /*=== START SEQUENCE -idx132 -ROOTS28 RANParameter-ValueType-Choice-List ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List alias = -1 -mandatory
    /*=== START SEQUENCE -idx134 -ROOTS29 RANParameter-LIST ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_List.ranParameter_List.list_of_ranParameter.RANParameter_STRUCTURE_count = 1;
    /*=== START SEQUENCE -idx136 -ROOTS30 RANParameter-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_List.ranParameter_List.list_of_ranParameter.RANParameter_STRUCTURE[0].sequence_of_ranParameters.RANParameter_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx138 -ROOTS31 RANParameter-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx140- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ranParameters_List.RIC_PolicyAction_RANParameter_Item[0].ranParameter_valueType->ranP_Choice_List.ranParameter_List.list_of_ranParameter.RANParameter_STRUCTURE[0].sequence_of_ranParameters.RANParameter_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx140- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1 -mandatory
    // [STOP] recursive CHOICE RANParameter_ValueType in stack
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx138 RANParameter-STRUCTURE-Item -ROOTS31 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx136 RANParameter-STRUCTURE -ROOTS30 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST alias = -1
    /*=== END SEQUENCE -idx134 RANParameter-LIST -ROOTS29 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List alias = -1
    /*=== END SEQUENCE -idx132 RANParameter-ValueType-Choice-List -ROOTS28 ===*/

    #endif /*choice-ELEM 4 -idx131 -rootc5 - RANParameter-ValueType->RANParameter-ValueType-Choice-List */

    /*=== END CHOICE -rootc5 - RANParameter-ValueType ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item alias = -1
    /*=== END SEQUENCE -idx85 RIC-PolicyAction-RANParameter-Item -ROOTS22 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.bitmask |= E2AP_RIC_POLICY_ACTION_e2ap_RIC_POLICY_DECISION_PRESENT;
    //hc-ric_PolicyDecision -idx143- primitive in scope - pid = 13 ENUMURATE - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->ric-PolicyDecision
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyAction.ric_PolicyDecision = E2AP_RIC_POLICY_ACTION_RIC_POLICY_DECISION_ACCEPT; // change enum value here
    //end of hc-ric_PolicyDecision -idx143- primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction alias = -1
    /*=== END SEQUENCE -idx81 RIC-PolicyAction -ROOTS21 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item alias = -1
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].bitmask |= E2AP_E2SM_RC_ACTION_DEFINITION_FORMAT2_ITEM_e2ap_RIC_POLICY_CONDITION_DEFINITION_PRESENT;
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item_count = 1;
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0] = xnap_mem_get(sizeof(_e2ap_RANParameter_Testing_Item_t)); //memgetforrecu
    /*=== START SEQUENCE -idx145 -ROOTS32 RANParameter-Testing-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx147- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx147- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item alias = -1 -mandatory
    /*=== START CHOICE -rootc8 - RANParameter-Testing-Item-ranParameter-Type ===*/
    #if 1 //hc-choice-ELEM 1 -idx150 -rootc8: RANParameter-Testing-Item-ranParameter-Type->RANParameter_Testing_Item_Choice_List - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.choice_type = E2AP_RANPARAMETER_TESTING_ITEM_RAN_PARAMETER_TYPE_e2ap_RAN_P_CHOICE_LIST;
    /*=== START SEQUENCE -idx151 -ROOTS33 RANParameter-Testing-Item-Choice-List ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item_count = 1;
    // [RECUSIVE] recursive - re-idx = 1 / SEQUENCE RANParameter_Testing_Item detected in stack, continuing...
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0] = xnap_mem_get(sizeof(_e2ap_RANParameter_Testing_Item_t)); //memgetforrecu
    /*=== START SEQUENCE -idx153 -ROOTS34 RANParameter-Testing-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx155- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx155- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item alias = -1 -mandatory
    /*=== START CHOICE -rootc9 - RANParameter-Testing-Item-ranParameter-Type ===*/
    #if 1 //hc-choice-ELEM 1 -idx158 -rootc9: RANParameter-Testing-Item-ranParameter-Type->RANParameter_Testing_Item_Choice_List - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.choice_type = E2AP_RANPARAMETER_TESTING_ITEM_RAN_PARAMETER_TYPE_e2ap_RAN_P_CHOICE_LIST;
    /*=== START SEQUENCE -idx159 -ROOTS35 RANParameter-Testing-Item-Choice-List ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item_count = 1;
    // [STOP] recursive SEQUENCE RANParameter_Testing_Item in stack
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List alias = -1
    /*=== END SEQUENCE -idx159 RANParameter-Testing-Item-Choice-List -ROOTS35 ===*/

    #endif /*choice-ELEM 1 -idx158 -rootc9 - RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List */

    #if 0 //hc-choice-ELEM 2 -idx161 -rootc9: RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.choice_type = E2AP_RANPARAMETER_TESTING_ITEM_RAN_PARAMETER_TYPE_e2ap_RAN_P_CHOICE_STRUCTURE;
    /*=== START SEQUENCE -idx162 -ROOTS36 RANParameter-Testing-Item-Choice-Structure ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item_count = 1;
    // [STOP] recursive SEQUENCE RANParameter_Testing_Item in stack
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure alias = -1
    /*=== END SEQUENCE -idx162 RANParameter-Testing-Item-Choice-Structure -ROOTS36 ===*/

    #endif /*choice-ELEM 2 -idx161 -rootc9 - RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure */

    #if 0 //hc-choice-ELEM 3 -idx164 -rootc9: RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.choice_type = E2AP_RANPARAMETER_TESTING_ITEM_RAN_PARAMETER_TYPE_e2ap_RAN_P_CHOICE_ELEMENT_TRUE;
    /*=== START SEQUENCE -idx165 -ROOTS37 RANParameter-Testing-Item-Choice-ElementTrue ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue alias = -1 -mandatory
    /*=== START CHOICE -rootc10 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx168 -rootc10: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx169- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueBoolean
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx169- primitive

    #endif /*choice-ELEM 1 -idx168 -rootc10 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx170 -rootc10: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx171 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueInt
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx171- primitive

    #endif /*choice-ELEM 2 -idx170 -rootc10 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx172 -rootc10: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx173- primitive in scope - pid = 17 REAL - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueReal
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx173- primitive

    #endif /*choice-ELEM 3 -idx172 -rootc10 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx174 -rootc10: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx175- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS_2[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueBitS.data, temp_buff_for_valueBitS_2, 0);
    //end of hc-valueBitS -idx175- primitive
    #endif /*choice-ELEM 4 -idx174 -rootc10 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx176 -rootc10: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx177- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS_2[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS_2); // change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS_2));
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueOctS.data, temp_buff_for_valueOctS_2, sizeof(temp_buff_for_valueOctS_2));
    //end of hc-valueOctS -idx177- primitive
    #endif /*choice-ELEM 5 -idx176 -rootc10 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx178 -rootc10: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx179- primitive in scope - pid = 14 Printable STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valuePrintableString
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx179- primitive

    #endif /*choice-ELEM 6 -idx178 -rootc10 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc10 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue alias = -1
    /*=== END SEQUENCE -idx165 RANParameter-Testing-Item-Choice-ElementTrue -ROOTS37 ===*/

    #endif /*choice-ELEM 3 -idx164 -rootc9 - RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue */

    #if 0 //hc-choice-ELEM 4 -idx180 -rootc9: RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.choice_type = E2AP_RANPARAMETER_TESTING_ITEM_RAN_PARAMETER_TYPE_e2ap_RAN_P_CHOICE_ELEMENT_FALSE;
    /*=== START SEQUENCE -idx181 -ROOTS38 RANParameter-Testing-Item-Choice-ElementFalse ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = -1 -mandatory
    /*=== START CHOICE -rootc11 - RANParameter-TestingCondition ===*/
    #if 1 //hc-choice-ELEM 1 -idx184 -rootc11: RANParameter-TestingCondition->ENUMERATED - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_TestCondition.choice_type = E2AP_RANPARAMETER_TESTING_CONDITION_e2ap_RAN_P_CHOICE_COMPARISON;
    //hc-ranP_Choice_comparison -idx185- primitive in scope - pid = 13 ENUMURATE - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-TestingCondition->ranP-Choice-comparison
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_TestCondition.ranP_Choice_comparison = E2AP_RANPARAMETER_TESTING_CONDITION_RAN_P_CHOICE_COMPARISON_EQUAL; // change enum value here
    //end of hc-ranP_Choice_comparison -idx185- primitive
    #endif /*choice-ELEM 1 -idx184 -rootc11 - RANParameter-TestingCondition->ENUMERATED */

    #if 0 //hc-choice-ELEM 2 -idx186 -rootc11: RANParameter-TestingCondition->ENUMERATED - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_TestCondition.choice_type = E2AP_RANPARAMETER_TESTING_CONDITION_e2ap_RAN_P_CHOICE_PRESENCE;
    //hc-ranP_Choice_presence -idx187- primitive in scope - pid = 13 ENUMURATE - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-TestingCondition->ranP-Choice-presence
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_TestCondition.ranP_Choice_presence = E2AP_RANPARAMETER_TESTING_CONDITION_RAN_P_CHOICE_PRESENCE_PRESENT; // change enum value here
    //end of hc-ranP_Choice_presence -idx187- primitive
    #endif /*choice-ELEM 2 -idx186 -rootc11 - RANParameter-TestingCondition->ENUMERATED */

    /*=== END CHOICE -rootc11 - RANParameter-TestingCondition ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = -1
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.bitmask |= E2AP_RANPARAMETER_TESTING_ITEM_CHOICE_ELEMENT_FALSE_e2ap_RAN_PARAMETER_VALUE_PRESENT;
    /*=== START CHOICE -rootc12 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx190 -rootc12: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx191- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueBoolean
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx191- primitive

    #endif /*choice-ELEM 1 -idx190 -rootc12 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx192 -rootc12: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx193 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueInt
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx193- primitive

    #endif /*choice-ELEM 2 -idx192 -rootc12 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx194 -rootc12: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx195- primitive in scope - pid = 17 REAL - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueReal
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx195- primitive

    #endif /*choice-ELEM 3 -idx194 -rootc12 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx196 -rootc12: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx197- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS_3[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueBitS.data, temp_buff_for_valueBitS_3, 0);
    //end of hc-valueBitS -idx197- primitive
    #endif /*choice-ELEM 4 -idx196 -rootc12 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx198 -rootc12: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx199- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS_3[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS_3); // change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS_3));
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueOctS.data, temp_buff_for_valueOctS_3, sizeof(temp_buff_for_valueOctS_3));
    //end of hc-valueOctS -idx199- primitive
    #endif /*choice-ELEM 5 -idx198 -rootc12 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx200 -rootc12: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx201- primitive in scope - pid = 14 Printable STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valuePrintableString
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx201- primitive

    #endif /*choice-ELEM 6 -idx200 -rootc12 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc12 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = 13 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.bitmask |= E2AP_RANPARAMETER_TESTING_ITEM_CHOICE_ELEMENT_FALSE_e2ap_LOGICAL_OR_PRESENT;
    //hc-LogicalOR -idx203 - alias primitive - pid = 13 ENUMURATE - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->LogicalOR
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.logicalOR = E2AP_LOGICAL_OR_TRUE; // change enum value here
    //end of hc-LogicalOR -idx203- alias primitive

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = 13
    /*=== END SEQUENCE -idx181 RANParameter-Testing-Item-Choice-ElementFalse -ROOTS38 ===*/

    #endif /*choice-ELEM 4 -idx180 -rootc9 - RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse */

    /*=== END CHOICE -rootc9 - RANParameter-Testing-Item-ranParameter-Type ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item alias = -1
    /*=== END SEQUENCE -idx153 RANParameter-Testing-Item -ROOTS34 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List alias = -1
    /*=== END SEQUENCE -idx151 RANParameter-Testing-Item-Choice-List -ROOTS33 ===*/

    #endif /*choice-ELEM 1 -idx150 -rootc8 - RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List */

    #if 0 //hc-choice-ELEM 2 -idx204 -rootc8: RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.choice_type = E2AP_RANPARAMETER_TESTING_ITEM_RAN_PARAMETER_TYPE_e2ap_RAN_P_CHOICE_STRUCTURE;
    /*=== START SEQUENCE -idx205 -ROOTS39 RANParameter-Testing-Item-Choice-Structure ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item_count = 1;
    // [RECUSIVE] recursive - re-idx = 1 / SEQUENCE RANParameter_Testing_Item detected in stack, continuing...
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0] = xnap_mem_get(sizeof(_e2ap_RANParameter_Testing_Item_t)); //memgetforrecu
    /*=== START SEQUENCE -idx207 -ROOTS40 RANParameter-Testing-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx209- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx209- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item alias = -1 -mandatory
    /*=== START CHOICE -rootc13 - RANParameter-Testing-Item-ranParameter-Type ===*/
    #if 1 //hc-choice-ELEM 1 -idx212 -rootc13: RANParameter-Testing-Item-ranParameter-Type->RANParameter_Testing_Item_Choice_List - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.choice_type = E2AP_RANPARAMETER_TESTING_ITEM_RAN_PARAMETER_TYPE_e2ap_RAN_P_CHOICE_LIST;
    /*=== START SEQUENCE -idx213 -ROOTS41 RANParameter-Testing-Item-Choice-List ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_List.ranParameter_List.RANParameter_Testing_Item_count = 1;
    // [STOP] recursive SEQUENCE RANParameter_Testing_Item in stack
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List alias = -1
    /*=== END SEQUENCE -idx213 RANParameter-Testing-Item-Choice-List -ROOTS41 ===*/

    #endif /*choice-ELEM 1 -idx212 -rootc13 - RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List */

    #if 0 //hc-choice-ELEM 2 -idx215 -rootc13: RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.choice_type = E2AP_RANPARAMETER_TESTING_ITEM_RAN_PARAMETER_TYPE_e2ap_RAN_P_CHOICE_STRUCTURE;
    /*=== START SEQUENCE -idx216 -ROOTS42 RANParameter-Testing-Item-Choice-Structure ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item_count = 1;
    // [STOP] recursive SEQUENCE RANParameter_Testing_Item in stack
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure alias = -1
    /*=== END SEQUENCE -idx216 RANParameter-Testing-Item-Choice-Structure -ROOTS42 ===*/

    #endif /*choice-ELEM 2 -idx215 -rootc13 - RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure */

    #if 0 //hc-choice-ELEM 3 -idx218 -rootc13: RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.choice_type = E2AP_RANPARAMETER_TESTING_ITEM_RAN_PARAMETER_TYPE_e2ap_RAN_P_CHOICE_ELEMENT_TRUE;
    /*=== START SEQUENCE -idx219 -ROOTS43 RANParameter-Testing-Item-Choice-ElementTrue ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue alias = -1 -mandatory
    /*=== START CHOICE -rootc14 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx222 -rootc14: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx223- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueBoolean
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx223- primitive

    #endif /*choice-ELEM 1 -idx222 -rootc14 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx224 -rootc14: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx225 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueInt
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx225- primitive

    #endif /*choice-ELEM 2 -idx224 -rootc14 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx226 -rootc14: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx227- primitive in scope - pid = 17 REAL - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueReal
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx227- primitive

    #endif /*choice-ELEM 3 -idx226 -rootc14 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx228 -rootc14: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx229- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS_4[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueBitS.data, temp_buff_for_valueBitS_4, 0);
    //end of hc-valueBitS -idx229- primitive
    #endif /*choice-ELEM 4 -idx228 -rootc14 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx230 -rootc14: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx231- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS_4[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS_4); // change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS_4));
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueOctS.data, temp_buff_for_valueOctS_4, sizeof(temp_buff_for_valueOctS_4));
    //end of hc-valueOctS -idx231- primitive
    #endif /*choice-ELEM 5 -idx230 -rootc14 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx232 -rootc14: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx233- primitive in scope - pid = 14 Printable STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valuePrintableString
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx233- primitive

    #endif /*choice-ELEM 6 -idx232 -rootc14 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc14 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue alias = -1
    /*=== END SEQUENCE -idx219 RANParameter-Testing-Item-Choice-ElementTrue -ROOTS43 ===*/

    #endif /*choice-ELEM 3 -idx218 -rootc13 - RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue */

    #if 0 //hc-choice-ELEM 4 -idx234 -rootc13: RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.choice_type = E2AP_RANPARAMETER_TESTING_ITEM_RAN_PARAMETER_TYPE_e2ap_RAN_P_CHOICE_ELEMENT_FALSE;
    /*=== START SEQUENCE -idx235 -ROOTS44 RANParameter-Testing-Item-Choice-ElementFalse ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = -1 -mandatory
    /*=== START CHOICE -rootc15 - RANParameter-TestingCondition ===*/
    #if 1 //hc-choice-ELEM 1 -idx238 -rootc15: RANParameter-TestingCondition->ENUMERATED - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_TestCondition.choice_type = E2AP_RANPARAMETER_TESTING_CONDITION_e2ap_RAN_P_CHOICE_COMPARISON;
    //hc-ranP_Choice_comparison -idx239- primitive in scope - pid = 13 ENUMURATE - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-TestingCondition->ranP-Choice-comparison
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_TestCondition.ranP_Choice_comparison = E2AP_RANPARAMETER_TESTING_CONDITION_RAN_P_CHOICE_COMPARISON_EQUAL; // change enum value here
    //end of hc-ranP_Choice_comparison -idx239- primitive
    #endif /*choice-ELEM 1 -idx238 -rootc15 - RANParameter-TestingCondition->ENUMERATED */

    #if 0 //hc-choice-ELEM 2 -idx240 -rootc15: RANParameter-TestingCondition->ENUMERATED - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_TestCondition.choice_type = E2AP_RANPARAMETER_TESTING_CONDITION_e2ap_RAN_P_CHOICE_PRESENCE;
    //hc-ranP_Choice_presence -idx241- primitive in scope - pid = 13 ENUMURATE - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-TestingCondition->ranP-Choice-presence
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_TestCondition.ranP_Choice_presence = E2AP_RANPARAMETER_TESTING_CONDITION_RAN_P_CHOICE_PRESENCE_PRESENT; // change enum value here
    //end of hc-ranP_Choice_presence -idx241- primitive
    #endif /*choice-ELEM 2 -idx240 -rootc15 - RANParameter-TestingCondition->ENUMERATED */

    /*=== END CHOICE -rootc15 - RANParameter-TestingCondition ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = -1
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.bitmask |= E2AP_RANPARAMETER_TESTING_ITEM_CHOICE_ELEMENT_FALSE_e2ap_RAN_PARAMETER_VALUE_PRESENT;
    /*=== START CHOICE -rootc16 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx244 -rootc16: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx245- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueBoolean
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx245- primitive

    #endif /*choice-ELEM 1 -idx244 -rootc16 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx246 -rootc16: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx247 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueInt
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx247- primitive

    #endif /*choice-ELEM 2 -idx246 -rootc16 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx248 -rootc16: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx249- primitive in scope - pid = 17 REAL - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueReal
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx249- primitive

    #endif /*choice-ELEM 3 -idx248 -rootc16 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx250 -rootc16: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx251- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS_5[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueBitS.data, temp_buff_for_valueBitS_5, 0);
    //end of hc-valueBitS -idx251- primitive
    #endif /*choice-ELEM 4 -idx250 -rootc16 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx252 -rootc16: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx253- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS_5[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS_5); // change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS_5));
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueOctS.data, temp_buff_for_valueOctS_5, sizeof(temp_buff_for_valueOctS_5));
    //end of hc-valueOctS -idx253- primitive
    #endif /*choice-ELEM 5 -idx252 -rootc16 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx254 -rootc16: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx255- primitive in scope - pid = 14 Printable STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valuePrintableString
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx255- primitive

    #endif /*choice-ELEM 6 -idx254 -rootc16 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc16 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = 13 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.bitmask |= E2AP_RANPARAMETER_TESTING_ITEM_CHOICE_ELEMENT_FALSE_e2ap_LOGICAL_OR_PRESENT;
    //hc-LogicalOR -idx257 - alias primitive - pid = 13 ENUMURATE - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->LogicalOR
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_Structure.ranParameter_Structure.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.logicalOR = E2AP_LOGICAL_OR_TRUE; // change enum value here
    //end of hc-LogicalOR -idx257- alias primitive

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = 13
    /*=== END SEQUENCE -idx235 RANParameter-Testing-Item-Choice-ElementFalse -ROOTS44 ===*/

    #endif /*choice-ELEM 4 -idx234 -rootc13 - RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse */

    /*=== END CHOICE -rootc13 - RANParameter-Testing-Item-ranParameter-Type ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item alias = -1
    /*=== END SEQUENCE -idx207 RANParameter-Testing-Item -ROOTS40 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure alias = -1
    /*=== END SEQUENCE -idx205 RANParameter-Testing-Item-Choice-Structure -ROOTS39 ===*/

    #endif /*choice-ELEM 2 -idx204 -rootc8 - RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure */

    #if 0 //hc-choice-ELEM 3 -idx258 -rootc8: RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.choice_type = E2AP_RANPARAMETER_TESTING_ITEM_RAN_PARAMETER_TYPE_e2ap_RAN_P_CHOICE_ELEMENT_TRUE;
    /*=== START SEQUENCE -idx259 -ROOTS45 RANParameter-Testing-Item-Choice-ElementTrue ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue alias = -1 -mandatory
    /*=== START CHOICE -rootc17 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx262 -rootc17: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx263- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueBoolean
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx263- primitive

    #endif /*choice-ELEM 1 -idx262 -rootc17 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx264 -rootc17: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx265 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueInt
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx265- primitive

    #endif /*choice-ELEM 2 -idx264 -rootc17 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx266 -rootc17: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx267- primitive in scope - pid = 17 REAL - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueReal
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx267- primitive

    #endif /*choice-ELEM 3 -idx266 -rootc17 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx268 -rootc17: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx269- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS_6[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueBitS.data, temp_buff_for_valueBitS_6, 0);
    //end of hc-valueBitS -idx269- primitive
    #endif /*choice-ELEM 4 -idx268 -rootc17 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx270 -rootc17: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx271- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS_6[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS_6); // change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS_6));
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valueOctS.data, temp_buff_for_valueOctS_6, sizeof(temp_buff_for_valueOctS_6));
    //end of hc-valueOctS -idx271- primitive
    #endif /*choice-ELEM 5 -idx270 -rootc17 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx272 -rootc17: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx273- primitive in scope - pid = 14 Printable STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valuePrintableString
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementTrue.ranParameter_value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx273- primitive

    #endif /*choice-ELEM 6 -idx272 -rootc17 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc17 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue alias = -1
    /*=== END SEQUENCE -idx259 RANParameter-Testing-Item-Choice-ElementTrue -ROOTS45 ===*/

    #endif /*choice-ELEM 3 -idx258 -rootc8 - RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue */

    #if 0 //hc-choice-ELEM 4 -idx274 -rootc8: RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.choice_type = E2AP_RANPARAMETER_TESTING_ITEM_RAN_PARAMETER_TYPE_e2ap_RAN_P_CHOICE_ELEMENT_FALSE;
    /*=== START SEQUENCE -idx275 -ROOTS46 RANParameter-Testing-Item-Choice-ElementFalse ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = -1 -mandatory
    /*=== START CHOICE -rootc18 - RANParameter-TestingCondition ===*/
    #if 1 //hc-choice-ELEM 1 -idx278 -rootc18: RANParameter-TestingCondition->ENUMERATED - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_TestCondition.choice_type = E2AP_RANPARAMETER_TESTING_CONDITION_e2ap_RAN_P_CHOICE_COMPARISON;
    //hc-ranP_Choice_comparison -idx279- primitive in scope - pid = 13 ENUMURATE - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-TestingCondition->ranP-Choice-comparison
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_TestCondition.ranP_Choice_comparison = E2AP_RANPARAMETER_TESTING_CONDITION_RAN_P_CHOICE_COMPARISON_EQUAL; // change enum value here
    //end of hc-ranP_Choice_comparison -idx279- primitive
    #endif /*choice-ELEM 1 -idx278 -rootc18 - RANParameter-TestingCondition->ENUMERATED */

    #if 0 //hc-choice-ELEM 2 -idx280 -rootc18: RANParameter-TestingCondition->ENUMERATED - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_TestCondition.choice_type = E2AP_RANPARAMETER_TESTING_CONDITION_e2ap_RAN_P_CHOICE_PRESENCE;
    //hc-ranP_Choice_presence -idx281- primitive in scope - pid = 13 ENUMURATE - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-TestingCondition->ranP-Choice-presence
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_TestCondition.ranP_Choice_presence = E2AP_RANPARAMETER_TESTING_CONDITION_RAN_P_CHOICE_PRESENCE_PRESENT; // change enum value here
    //end of hc-ranP_Choice_presence -idx281- primitive
    #endif /*choice-ELEM 2 -idx280 -rootc18 - RANParameter-TestingCondition->ENUMERATED */

    /*=== END CHOICE -rootc18 - RANParameter-TestingCondition ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = -1
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.bitmask |= E2AP_RANPARAMETER_TESTING_ITEM_CHOICE_ELEMENT_FALSE_e2ap_RAN_PARAMETER_VALUE_PRESENT;
    /*=== START CHOICE -rootc19 - RANParameter-Value ===*/
    #if 1 //hc-choice-ELEM 1 -idx284 -rootc19: RANParameter-Value->BOOLEAN - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BOOLEAN;
    //hc-valueBoolean -idx285- primitive in scope - pid = 16 BOOLEAN - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueBoolean
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueBoolean = TRUE; // change boolean value here
    //end of hc-valueBoolean -idx285- primitive

    #endif /*choice-ELEM 1 -idx284 -rootc19 - RANParameter-Value->BOOLEAN */

    #if 0 //hc-choice-ELEM 2 -idx286 -rootc19: RANParameter-Value->INTEGER - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx287 - primitive in scope - pid = 15 - INTEGER  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueInt
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueInt = 875; // change integer here
    //end of hc-valueInt -idx287- primitive

    #endif /*choice-ELEM 2 -idx286 -rootc19 - RANParameter-Value->INTEGER */

    #if 0 //hc-choice-ELEM 3 -idx288 -rootc19: RANParameter-Value->REAL - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx289- primitive in scope - pid = 17 REAL - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueReal
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx289- primitive

    #endif /*choice-ELEM 3 -idx288 -rootc19 - RANParameter-Value->REAL */

    #if 0 //hc-choice-ELEM 4 -idx290 -rootc19: RANParameter-Value->BIT STRING - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_BIT_S;
    //hc-valueBitS -idx291- primitive in scope - pid = 1 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueBitS
    OSOCTET temp_buff_for_valueBitS_7[] = {0x99}; // min =-1 - max = -1 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueBitS.numbits = -1; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueBitS.data, temp_buff_for_valueBitS_7, 0);
    //end of hc-valueBitS -idx291- primitive
    #endif /*choice-ELEM 4 -idx290 -rootc19 - RANParameter-Value->BIT STRING */

    #if 0 //hc-choice-ELEM 5 -idx292 -rootc19: RANParameter-Value->OCTET STRING - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_OCT_S;
    //hc-valueOctS -idx293- primitive in scope - pid = 9 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueOctS
    OSOCTET temp_buff_for_valueOctS_7[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueOctS.numocts = sizeof(temp_buff_for_valueOctS_7); // change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueOctS.data = xnap_mem_get(sizeof(temp_buff_for_valueOctS_7));
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valueOctS.data, temp_buff_for_valueOctS_7, sizeof(temp_buff_for_valueOctS_7));
    //end of hc-valueOctS -idx293- primitive
    #endif /*choice-ELEM 5 -idx292 -rootc19 - RANParameter-Value->OCTET STRING */

    #if 0 //hc-choice-ELEM 6 -idx294 -rootc19: RANParameter-Value->PrintableString - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.choice_type = E2AP_RANPARAMETER_VALUE_e2ap_VALUE_PRINTABLE_STRING;
    //hc-valuePrintableString -idx295- primitive in scope - pid = 14 Printable STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valuePrintableString
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.ranParameter_Value.valuePrintableString = "hardcode string valueu"; // change printable string here
    //end of hc-valuePrintableString -idx295- primitive

    #endif /*choice-ELEM 6 -idx294 -rootc19 - RANParameter-Value->PrintableString */

    /*=== END CHOICE -rootc19 - RANParameter-Value ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = 13 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.bitmask |= E2AP_RANPARAMETER_TESTING_ITEM_CHOICE_ELEMENT_FALSE_e2ap_LOGICAL_OR_PRESENT;
    //hc-LogicalOR -idx297 - alias primitive - pid = 13 ENUMURATE - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->LogicalOR
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionDefinition.RANParameter_Testing_Item[0]->ranParameter_Type.ranP_Choice_ElementFalse.logicalOR = E2AP_LOGICAL_OR_TRUE; // change enum value here
    //end of hc-LogicalOR -idx297- alias primitive

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse alias = 13
    /*=== END SEQUENCE -idx275 RANParameter-Testing-Item-Choice-ElementFalse -ROOTS46 ===*/

    #endif /*choice-ELEM 4 -idx274 -rootc8 - RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse */

    /*=== END CHOICE -rootc8 - RANParameter-Testing-Item-ranParameter-Type ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item alias = -1
    /*=== END SEQUENCE -idx145 RANParameter-Testing-Item -ROOTS32 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item alias = 6 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].bitmask |= E2AP_E2SM_RC_ACTION_DEFINITION_FORMAT2_ITEM_e2ap_RIC_POLICY_CONDITION_ID_PRESENT;
    //hc-ric_PolicyConditionID -idx299- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->Ric-PolicyConditionID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format2.ric_PolicyConditions_List.E2SM_RC_ActionDefinition_Format2_Item[0].ric_PolicyConditionID = 32767;// change integer here
    //end of hc-ric_PolicyConditionID -idx299- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item alias = 6
    /*=== END SEQUENCE -idx79 E2SM-RC-ActionDefinition-Format2-Item -ROOTS20 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2 alias = -1
    /*=== END SEQUENCE -idx77 E2SM-RC-ActionDefinition-Format2 -ROOTS19 ===*/

    #endif /*choice-ELEM 2 -idx76 -rootc1 - E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2 */

    #if 0 //hc-choice-ELEM 3 -idx300 -rootc1: E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3 - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.choice_type = E2AP_E2SM_RC_ACTION_DEFINITION_RIC_ACTION_DEFINITION_FORMATS_e2ap_ACTION_DEFINITION_FORMAT3;
    /*=== START SEQUENCE -idx301 -ROOTS47 E2SM-RC-ActionDefinition-Format3 ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3 alias = 5 -mandatory
    //hc-ric_InsertIndication_ID -idx303- alias primitive - pid = 5 - INTEGER - min:1 - max:65535  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->RIC-InsertIndication-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ric_InsertIndication_ID = 32768;// change integer here
    //end of hc-ric_InsertIndication_ID -idx303- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3 alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3 alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item_count = 1;
    /*=== START SEQUENCE -idx305 -ROOTS48 E2SM-RC-ActionDefinition-Format3-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx307- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx307- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].bitmask |= E2AP_E2SM_RC_ACTION_DEFINITION_FORMAT3_ITEM_e2ap_RAN_PARAMETER_DEFINITION_PRESENT;
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition = xnap_mem_get(sizeof(_e2ap_RANParameter_Definition_t)); //memgetforrecu
    /*=== START SEQUENCE -idx309 -ROOTS49 RANParameter-Definition ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition alias = -1 -mandatory
    /*=== START CHOICE -rootc20 - RANParameter-Definition-Choice ===*/
    #if 1 //hc-choice-ELEM 1 -idx312 -rootc20: RANParameter-Definition-Choice->RANParameter_Definition_Choice_LIST - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_LIST;
    /*=== START SEQUENCE -idx313 -ROOTS50 RANParameter-Definition-Choice-LIST ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item_count = 1;
    /*=== START SEQUENCE -idx315 -ROOTS51 RANParameter-Definition-Choice-LIST-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx317- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx317- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx319- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx319- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].bitmask |= E2AP_RANPARAMETER_DEFINITION_CHOICE_LIST_ITEM_e2ap_RAN_PARAMETER_DEFINITION_PRESENT;
    // [RECUSIVE] recursive - re-idx = 1 / SEQUENCE RANParameter_Definition detected in stack, continuing...
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition = xnap_mem_get(sizeof(_e2ap_RANParameter_Definition_t)); //memgetforrecu
    /*=== START SEQUENCE -idx321 -ROOTS52 RANParameter-Definition ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition alias = -1 -mandatory
    /*=== START CHOICE -rootc21 - RANParameter-Definition-Choice ===*/
    #if 1 //hc-choice-ELEM 1 -idx324 -rootc21: RANParameter-Definition-Choice->RANParameter_Definition_Choice_LIST - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_LIST;
    /*=== START SEQUENCE -idx325 -ROOTS53 RANParameter-Definition-Choice-LIST ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item_count = 1;
    /*=== START SEQUENCE -idx327 -ROOTS54 RANParameter-Definition-Choice-LIST-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx329- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx329- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx331- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx331- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1 -optional
    // [STOP] recursive SEQUENCE RANParameter_Definition in stack
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1
    /*=== END SEQUENCE -idx327 RANParameter-Definition-Choice-LIST-Item -ROOTS54 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1
    /*=== END SEQUENCE -idx325 RANParameter-Definition-Choice-LIST -ROOTS53 ===*/

    #endif /*choice-ELEM 1 -idx324 -rootc21 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST */

    #if 0 //hc-choice-ELEM 2 -idx333 -rootc21: RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_STRUCTURE;
    /*=== START SEQUENCE -idx334 -ROOTS55 RANParameter-Definition-Choice-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx336 -ROOTS56 RANParameter-Definition-Choice-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx338- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx338- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx340- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx340- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1 -optional
    // [STOP] recursive SEQUENCE RANParameter_Definition in stack
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx336 RANParameter-Definition-Choice-STRUCTURE-Item -ROOTS56 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx334 RANParameter-Definition-Choice-STRUCTURE -ROOTS55 ===*/

    #endif /*choice-ELEM 2 -idx333 -rootc21 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE */

    /*=== END CHOICE -rootc21 - RANParameter-Definition-Choice ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition alias = -1
    /*=== END SEQUENCE -idx321 RANParameter-Definition -ROOTS52 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1
    /*=== END SEQUENCE -idx315 RANParameter-Definition-Choice-LIST-Item -ROOTS51 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1
    /*=== END SEQUENCE -idx313 RANParameter-Definition-Choice-LIST -ROOTS50 ===*/

    #endif /*choice-ELEM 1 -idx312 -rootc20 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST */

    #if 0 //hc-choice-ELEM 2 -idx342 -rootc20: RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_STRUCTURE;
    /*=== START SEQUENCE -idx343 -ROOTS57 RANParameter-Definition-Choice-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx345 -ROOTS58 RANParameter-Definition-Choice-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx347- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx347- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx349- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx349- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].bitmask |= E2AP_RANPARAMETER_DEFINITION_CHOICE_STRUCTURE_ITEM_e2ap_RAN_PARAMETER_DEFINITION_PRESENT;
    // [RECUSIVE] recursive - re-idx = 1 / SEQUENCE RANParameter_Definition detected in stack, continuing...
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition = xnap_mem_get(sizeof(_e2ap_RANParameter_Definition_t)); //memgetforrecu
    /*=== START SEQUENCE -idx351 -ROOTS59 RANParameter-Definition ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition alias = -1 -mandatory
    /*=== START CHOICE -rootc22 - RANParameter-Definition-Choice ===*/
    #if 1 //hc-choice-ELEM 1 -idx354 -rootc22: RANParameter-Definition-Choice->RANParameter_Definition_Choice_LIST - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_LIST;
    /*=== START SEQUENCE -idx355 -ROOTS60 RANParameter-Definition-Choice-LIST ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item_count = 1;
    /*=== START SEQUENCE -idx357 -ROOTS61 RANParameter-Definition-Choice-LIST-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx359- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx359- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx361- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx361- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1 -optional
    // [STOP] recursive SEQUENCE RANParameter_Definition in stack
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1
    /*=== END SEQUENCE -idx357 RANParameter-Definition-Choice-LIST-Item -ROOTS61 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1
    /*=== END SEQUENCE -idx355 RANParameter-Definition-Choice-LIST -ROOTS60 ===*/

    #endif /*choice-ELEM 1 -idx354 -rootc22 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST */

    #if 0 //hc-choice-ELEM 2 -idx363 -rootc22: RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_STRUCTURE;
    /*=== START SEQUENCE -idx364 -ROOTS62 RANParameter-Definition-Choice-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx366 -ROOTS63 RANParameter-Definition-Choice-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx368- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx368- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx370- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format3_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx370- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1 -optional
    // [STOP] recursive SEQUENCE RANParameter_Definition in stack
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx366 RANParameter-Definition-Choice-STRUCTURE-Item -ROOTS63 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx364 RANParameter-Definition-Choice-STRUCTURE -ROOTS62 ===*/

    #endif /*choice-ELEM 2 -idx363 -rootc22 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE */

    /*=== END CHOICE -rootc22 - RANParameter-Definition-Choice ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition alias = -1
    /*=== END SEQUENCE -idx351 RANParameter-Definition -ROOTS59 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx345 RANParameter-Definition-Choice-STRUCTURE-Item -ROOTS58 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx343 RANParameter-Definition-Choice-STRUCTURE -ROOTS57 ===*/

    #endif /*choice-ELEM 2 -idx342 -rootc20 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE */

    /*=== END CHOICE -rootc20 - RANParameter-Definition-Choice ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition alias = -1
    /*=== END SEQUENCE -idx309 RANParameter-Definition -ROOTS49 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item alias = -1
    /*=== END SEQUENCE -idx305 E2SM-RC-ActionDefinition-Format3-Item -ROOTS48 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3 alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3 alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.bitmask |= E2AP_E2SM_RC_ACTION_DEFINITION_FORMAT3_e2ap_UE_ID_PRESENT;
    /*=== START CHOICE -rootc23 - UEID ===*/
    #if 1 //hc-choice-ELEM 1 -idx374 -rootc23: UEID->UEID_GNB - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.choice_type = E2AP_UEID_e2ap_G_NB_UEID;
    /*=== START SEQUENCE -idx375 -ROOTS64 UEID-GNB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = 6 -mandatory
    //hc-amf_UE_NGAP_ID -idx377- alias primitive - pid = 6 - INTEGER - min:0 - max:1099511627775  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->AMF-UE-NGAP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.amf_UE_NGAP_ID = 549755813887;// change integer here
    //end of hc-amf_UE_NGAP_ID -idx377- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = -1 -mandatory
    /*=== START SEQUENCE -idx379 -ROOTS65 GUAMI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GUAMI alias = 8 -mandatory
    //hc-pLMNIdentity -idx381- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GUAMI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.guami.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.guami.pLMNIdentity.data, temp_buff_for_pLMNIdentity, sizeof(temp_buff_for_pLMNIdentity)); // change octetstring data here
    //end of hc-pLMNIdentity -idx381- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GUAMI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFRegionID -idx383- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GUAMI->AMFRegionID
    OSOCTET temp_buff_for_aMFRegionID[] = {0x01}; // min =8 - max = 8 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.guami.aMFRegionID.numbits = 8;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.guami.aMFRegionID.data, temp_buff_for_aMFRegionID, 1); // change bitstring data here
    //end of hc-aMFRegionID -idx383- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GUAMI alias = 3
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFSetID -idx385- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GUAMI->AMFSetID
    OSOCTET temp_buff_for_aMFSetID[] = {0x01, 0x02}; // min =10 - max = 10 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.guami.aMFSetID.numbits = 10;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.guami.aMFSetID.data, temp_buff_for_aMFSetID, 2); // change bitstring data here
    //end of hc-aMFSetID -idx385- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GUAMI alias = 3
    //hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFPointer -idx387- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GUAMI->AMFPointer
    OSOCTET temp_buff_for_aMFPointer[] = {0x01}; // min =6 - max = 6 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.guami.aMFPointer.numbits = 6;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.guami.aMFPointer.data, temp_buff_for_aMFPointer, 1); // change bitstring data here
    //end of hc-aMFPointer -idx387- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GUAMI alias = 3
    /*=== END SEQUENCE -idx379 GUAMI -ROOTS65 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_G_NB_CU_UE_F1AP_ID_LIST_PRESENT;
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.gNB_CU_UE_F1AP_ID_List.UEID_GNB_CU_CP_F1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx389 -ROOTS66 UEID-GNB-CU-CP-F1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_UE_F1AP_ID -idx391- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.gNB_CU_UE_F1AP_ID_List.UEID_GNB_CU_CP_F1AP_ID_Item[0].gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx391- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx389 UEID-GNB-CU-CP-F1AP-ID-Item -ROOTS66 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_G_NB_CU_CP_UE_E1AP_ID_LIST_PRESENT;
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx393 -ROOTS67 UEID-GNB-CU-CP-E1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx395- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item[0].gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx395- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx393 UEID-GNB-CU-CP-E1AP-ID-Item -ROOTS67 ===*/

    //end of hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 5: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = 8 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx397- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->RANUEID
    OSOCTET temp_buff_for_ran_UEID[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.ran_UEID.data, temp_buff_for_ran_UEID, sizeof(temp_buff_for_ran_UEID)); // change octetstring data here
    //end of hc-ran_UEID -idx397- alias primitive

    //end of hc-sequence-ELEM 5: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = 8
    //hc-sequence-ELEM 6: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = 6 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_M_NG_RAN_UE_XN_AP_ID_PRESENT;
    //hc-m_NG_RAN_UE_XnAP_ID -idx399- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->NG-RANnodeUEXnAPID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.m_NG_RAN_UE_XnAP_ID = 2147483647;// change integer here
    //end of hc-m_NG_RAN_UE_XnAP_ID -idx399- alias primitive
    //end of hc-sequence-ELEM 6: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = 6
    //hc-sequence-ELEM 7: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_GLOBAL_GNB_ID_PRESENT;
    /*=== START SEQUENCE -idx401 -ROOTS68 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx403- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_1[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalGNB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_1);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalGNB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_1, sizeof(temp_buff_for_pLMNIdentity_1)); // change octetstring data here
    //end of hc-pLMNIdentity -idx403- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc24 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx406 -rootc24: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalGNB_ID.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx407- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalGNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalGNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID, 3);
    //end of hc-gNB_ID -idx407- primitive
    #endif /*choice-ELEM 1 -idx406 -rootc24 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc24 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx401 GlobalGNB-ID -ROOTS68 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 8: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_GLOBAL_NG_RANNODE_ID_PRESENT;
    /*=== START CHOICE -rootc25 - GlobalNGRANNodeID ===*/
    #if 1 //hc-choice-ELEM 1 -idx410 -rootc25: GlobalNGRANNodeID->GlobalGNB_ID - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_G_NB;
    /*=== START SEQUENCE -idx411 -ROOTS69 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx413- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_2[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_2);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_2, sizeof(temp_buff_for_pLMNIdentity_2)); // change octetstring data here
    //end of hc-pLMNIdentity -idx413- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc26 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx416 -rootc26: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx417- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_1[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_1, 3);
    //end of hc-gNB_ID -idx417- primitive
    #endif /*choice-ELEM 1 -idx416 -rootc26 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc26 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx411 GlobalGNB-ID -ROOTS69 ===*/

    #endif /*choice-ELEM 1 -idx410 -rootc25 - GlobalNGRANNodeID->GlobalGNB-ID */

    #if 0 //hc-choice-ELEM 2 -idx418 -rootc25: GlobalNGRANNodeID->GlobalNgENB-ID - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_NG_E_NB;
    /*=== START SEQUENCE -idx419 -ROOTS70 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx421- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_3[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_3);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_3, sizeof(temp_buff_for_pLMNIdentity_3)); // change octetstring data here
    //end of hc-pLMNIdentity -idx421- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc27 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx424 -rootc27: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx425- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID, 3);
    //end of hc-macroNgENB_ID -idx425- primitive
    #endif /*choice-ELEM 1 -idx424 -rootc27 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx426 -rootc27: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx427- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID, 3);
    //end of hc-shortMacroNgENB_ID -idx427- primitive
    #endif /*choice-ELEM 2 -idx426 -rootc27 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx428 -rootc27: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx429- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID, 3);
    //end of hc-longMacroNgENB_ID -idx429- primitive
    #endif /*choice-ELEM 3 -idx428 -rootc27 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc27 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx419 GlobalNgENB-ID -ROOTS70 ===*/

    #endif /*choice-ELEM 2 -idx418 -rootc25 - GlobalNGRANNodeID->GlobalNgENB-ID */

    /*=== END CHOICE -rootc25 - GlobalNGRANNodeID ===*/

    //end of hc-sequence-ELEM 8: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 9: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx431 -ROOTS71 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx433- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx433- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc28 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx436 -rootc28: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx437 -ROOTS72 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx439- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_4[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_4);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_4, sizeof(temp_buff_for_pLMNIdentity_4)); // change octetstring data here
    //end of hc-pLMNIdentity -idx439- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx441- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx441- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx437 NR-CGI -ROOTS72 ===*/

    #endif /*choice-ELEM 1 -idx436 -rootc28 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx442 -rootc28: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx443 -ROOTS73 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx445- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_5[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_5);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_5, sizeof(temp_buff_for_pLMNIdentity_5)); // change octetstring data here
    //end of hc-pLMNIdentity -idx445- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx447- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx447- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx443 EUTRA-CGI -ROOTS73 ===*/

    #endif /*choice-ELEM 2 -idx442 -rootc28 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc28 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx431 Cell-RNTI -ROOTS71 ===*/

    //end of hc-sequence-ELEM 9: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB alias = -1
    /*=== END SEQUENCE -idx375 UEID-GNB -ROOTS64 ===*/

    #endif /*choice-ELEM 1 -idx374 -rootc23 - UEID->UEID-GNB */

    #if 0 //hc-choice-ELEM 2 -idx448 -rootc23: UEID->UEID-GNB-DU - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.choice_type = E2AP_UEID_e2ap_G_NB_DU_UEID;
    /*=== START SEQUENCE -idx449 -ROOTS74 UEID-GNB-DU ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU alias = 6 -mandatory
    //hc-gNB_CU_UE_F1AP_ID -idx451- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_DU_UEID.gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx451- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU alias = 8 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_DU_UEID.bitmask |= E2AP_UEID_GNB_DU_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx453- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->RANUEID
    OSOCTET temp_buff_for_ran_UEID_1[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_DU_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_1);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_DU_UEID.ran_UEID.data, temp_buff_for_ran_UEID_1, sizeof(temp_buff_for_ran_UEID_1)); // change octetstring data here
    //end of hc-ran_UEID -idx453- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU alias = 8
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_DU_UEID.bitmask |= E2AP_UEID_GNB_DU_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx455 -ROOTS75 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx457- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_DU_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx457- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc29 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx460 -rootc29: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx461 -ROOTS76 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx463- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_6[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_6);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_6, sizeof(temp_buff_for_pLMNIdentity_6)); // change octetstring data here
    //end of hc-pLMNIdentity -idx463- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx465- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_1[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_1, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx465- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx461 NR-CGI -ROOTS76 ===*/

    #endif /*choice-ELEM 1 -idx460 -rootc29 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx466 -rootc29: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx467 -ROOTS77 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx469- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_7[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_7);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_7, sizeof(temp_buff_for_pLMNIdentity_7)); // change octetstring data here
    //end of hc-pLMNIdentity -idx469- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx471- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_1[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_1, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx471- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx467 EUTRA-CGI -ROOTS77 ===*/

    #endif /*choice-ELEM 2 -idx466 -rootc29 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc29 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx455 Cell-RNTI -ROOTS75 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU alias = -1
    /*=== END SEQUENCE -idx449 UEID-GNB-DU -ROOTS74 ===*/

    #endif /*choice-ELEM 2 -idx448 -rootc23 - UEID->UEID-GNB-DU */

    #if 0 //hc-choice-ELEM 3 -idx472 -rootc23: UEID->UEID-GNB-CU-UP - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.choice_type = E2AP_UEID_e2ap_G_NB_CU_UP_UEID;
    /*=== START SEQUENCE -idx473 -ROOTS78 UEID-GNB-CU-UP ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-CU-UP alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx475- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-CU-UP->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_CU_UP_UEID.gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx475- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-CU-UP alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-CU-UP alias = 8 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_CU_UP_UEID.bitmask |= E2AP_UEID_GNB_CU_UP_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx477- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-CU-UP->RANUEID
    OSOCTET temp_buff_for_ran_UEID_2[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_CU_UP_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_2);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.gNB_CU_UP_UEID.ran_UEID.data, temp_buff_for_ran_UEID_2, sizeof(temp_buff_for_ran_UEID_2)); // change octetstring data here
    //end of hc-ran_UEID -idx477- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-CU-UP alias = 8
    /*=== END SEQUENCE -idx473 UEID-GNB-CU-UP -ROOTS78 ===*/

    #endif /*choice-ELEM 3 -idx472 -rootc23 - UEID->UEID-GNB-CU-UP */

    #if 0 //hc-choice-ELEM 4 -idx478 -rootc23: UEID->UEID-NG-ENB - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.choice_type = E2AP_UEID_e2ap_NG_E_NB_UEID;
    /*=== START SEQUENCE -idx479 -ROOTS79 UEID-NG-ENB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB alias = 6 -mandatory
    //hc-amf_UE_NGAP_ID -idx481- alias primitive - pid = 6 - INTEGER - min:0 - max:1099511627775  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->AMF-UE-NGAP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.amf_UE_NGAP_ID = 549755813887;// change integer here
    //end of hc-amf_UE_NGAP_ID -idx481- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB alias = -1 -mandatory
    /*=== START SEQUENCE -idx483 -ROOTS80 GUAMI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GUAMI alias = 8 -mandatory
    //hc-pLMNIdentity -idx485- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GUAMI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_8[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.guami.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_8);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.guami.pLMNIdentity.data, temp_buff_for_pLMNIdentity_8, sizeof(temp_buff_for_pLMNIdentity_8)); // change octetstring data here
    //end of hc-pLMNIdentity -idx485- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GUAMI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFRegionID -idx487- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GUAMI->AMFRegionID
    OSOCTET temp_buff_for_aMFRegionID_1[] = {0x01}; // min =8 - max = 8 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.guami.aMFRegionID.numbits = 8;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.guami.aMFRegionID.data, temp_buff_for_aMFRegionID_1, 1); // change bitstring data here
    //end of hc-aMFRegionID -idx487- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GUAMI alias = 3
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFSetID -idx489- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GUAMI->AMFSetID
    OSOCTET temp_buff_for_aMFSetID_1[] = {0x01, 0x02}; // min =10 - max = 10 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.guami.aMFSetID.numbits = 10;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.guami.aMFSetID.data, temp_buff_for_aMFSetID_1, 2); // change bitstring data here
    //end of hc-aMFSetID -idx489- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GUAMI alias = 3
    //hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFPointer -idx491- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GUAMI->AMFPointer
    OSOCTET temp_buff_for_aMFPointer_1[] = {0x01}; // min =6 - max = 6 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.guami.aMFPointer.numbits = 6;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.guami.aMFPointer.data, temp_buff_for_aMFPointer_1, 1); // change bitstring data here
    //end of hc-aMFPointer -idx491- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GUAMI alias = 3
    /*=== END SEQUENCE -idx483 GUAMI -ROOTS80 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB alias = 6 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_NG_E_NB_CU_UE_W1AP_ID_PRESENT;
    //hc-ng_eNB_CU_UE_W1AP_ID -idx493- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->NGENB-CU-UE-W1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.ng_eNB_CU_UE_W1AP_ID = 2147483647;// change integer here
    //end of hc-ng_eNB_CU_UE_W1AP_ID -idx493- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB alias = 6 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_M_NG_RAN_UE_XN_AP_ID_PRESENT;
    //hc-m_NG_RAN_UE_XnAP_ID -idx495- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->NG-RANnodeUEXnAPID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.m_NG_RAN_UE_XnAP_ID = 2147483647;// change integer here
    //end of hc-m_NG_RAN_UE_XnAP_ID -idx495- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 5: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_GLOBAL_NG_ENB_ID_PRESENT;
    /*=== START SEQUENCE -idx497 -ROOTS81 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx499- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_9[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_9);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_9, sizeof(temp_buff_for_pLMNIdentity_9)); // change octetstring data here
    //end of hc-pLMNIdentity -idx499- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc30 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx502 -rootc30: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx503- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_1[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_1, 3);
    //end of hc-macroNgENB_ID -idx503- primitive
    #endif /*choice-ELEM 1 -idx502 -rootc30 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx504 -rootc30: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx505- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_1[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_1, 3);
    //end of hc-shortMacroNgENB_ID -idx505- primitive
    #endif /*choice-ELEM 2 -idx504 -rootc30 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx506 -rootc30: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx507- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_1[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_1, 3);
    //end of hc-longMacroNgENB_ID -idx507- primitive
    #endif /*choice-ELEM 3 -idx506 -rootc30 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc30 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx497 GlobalNgENB-ID -ROOTS81 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_GLOBAL_NG_RANNODE_ID_PRESENT;
    /*=== START CHOICE -rootc31 - GlobalNGRANNodeID ===*/
    #if 1 //hc-choice-ELEM 1 -idx510 -rootc31: GlobalNGRANNodeID->GlobalGNB_ID - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_G_NB;
    /*=== START SEQUENCE -idx511 -ROOTS82 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx513- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_10[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_10);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_10, sizeof(temp_buff_for_pLMNIdentity_10)); // change octetstring data here
    //end of hc-pLMNIdentity -idx513- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc32 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx516 -rootc32: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx517- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_2[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_2, 3);
    //end of hc-gNB_ID -idx517- primitive
    #endif /*choice-ELEM 1 -idx516 -rootc32 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc32 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx511 GlobalGNB-ID -ROOTS82 ===*/

    #endif /*choice-ELEM 1 -idx510 -rootc31 - GlobalNGRANNodeID->GlobalGNB-ID */

    #if 0 //hc-choice-ELEM 2 -idx518 -rootc31: GlobalNGRANNodeID->GlobalNgENB-ID - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_NG_E_NB;
    /*=== START SEQUENCE -idx519 -ROOTS83 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx521- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_11[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_11);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_11, sizeof(temp_buff_for_pLMNIdentity_11)); // change octetstring data here
    //end of hc-pLMNIdentity -idx521- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc33 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx524 -rootc33: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx525- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_2[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_2, 3);
    //end of hc-macroNgENB_ID -idx525- primitive
    #endif /*choice-ELEM 1 -idx524 -rootc33 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx526 -rootc33: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx527- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_2[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_2, 3);
    //end of hc-shortMacroNgENB_ID -idx527- primitive
    #endif /*choice-ELEM 2 -idx526 -rootc33 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx528 -rootc33: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx529- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_2[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_2, 3);
    //end of hc-longMacroNgENB_ID -idx529- primitive
    #endif /*choice-ELEM 3 -idx528 -rootc33 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc33 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx519 GlobalNgENB-ID -ROOTS83 ===*/

    #endif /*choice-ELEM 2 -idx518 -rootc31 - GlobalNGRANNodeID->GlobalNgENB-ID */

    /*=== END CHOICE -rootc31 - GlobalNGRANNodeID ===*/

    //end of hc-sequence-ELEM 6: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 7: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx531 -ROOTS84 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx533- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx533- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc34 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx536 -rootc34: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx537 -ROOTS85 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx539- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_12[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_12);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_12, sizeof(temp_buff_for_pLMNIdentity_12)); // change octetstring data here
    //end of hc-pLMNIdentity -idx539- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx541- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_2[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_2, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx541- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx537 NR-CGI -ROOTS85 ===*/

    #endif /*choice-ELEM 1 -idx536 -rootc34 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx542 -rootc34: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx543 -ROOTS86 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx545- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_13[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_13);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_13, sizeof(temp_buff_for_pLMNIdentity_13)); // change octetstring data here
    //end of hc-pLMNIdentity -idx545- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx547- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_2[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_2, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx547- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx543 EUTRA-CGI -ROOTS86 ===*/

    #endif /*choice-ELEM 2 -idx542 -rootc34 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc34 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx531 Cell-RNTI -ROOTS84 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB alias = -1
    /*=== END SEQUENCE -idx479 UEID-NG-ENB -ROOTS79 ===*/

    #endif /*choice-ELEM 4 -idx478 -rootc23 - UEID->UEID-NG-ENB */

    #if 0 //hc-choice-ELEM 5 -idx548 -rootc23: UEID->UEID-NG-ENB-DU - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.choice_type = E2AP_UEID_e2ap_NG_E_NB_DU_UEID;
    /*=== START SEQUENCE -idx549 -ROOTS87 UEID-NG-ENB-DU ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU alias = 6 -mandatory
    //hc-ng_eNB_CU_UE_W1AP_ID -idx551- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->NGENB-CU-UE-W1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_DU_UEID.ng_eNB_CU_UE_W1AP_ID = 2147483647;// change integer here
    //end of hc-ng_eNB_CU_UE_W1AP_ID -idx551- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_DU_UEID.bitmask |= E2AP_UEID_NG_ENB_DU_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx553 -ROOTS88 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx555- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx555- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc35 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx558 -rootc35: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx559 -ROOTS89 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx561- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_14[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_14);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_14, sizeof(temp_buff_for_pLMNIdentity_14)); // change octetstring data here
    //end of hc-pLMNIdentity -idx561- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx563- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_3[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_3, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx563- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx559 NR-CGI -ROOTS89 ===*/

    #endif /*choice-ELEM 1 -idx558 -rootc35 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx564 -rootc35: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx565 -ROOTS90 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx567- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_15[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_15);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_15, sizeof(temp_buff_for_pLMNIdentity_15)); // change octetstring data here
    //end of hc-pLMNIdentity -idx567- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx569- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_3[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_3, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx569- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx565 EUTRA-CGI -ROOTS90 ===*/

    #endif /*choice-ELEM 2 -idx564 -rootc35 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc35 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx553 Cell-RNTI -ROOTS88 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU alias = -1
    /*=== END SEQUENCE -idx549 UEID-NG-ENB-DU -ROOTS87 ===*/

    #endif /*choice-ELEM 5 -idx548 -rootc23 - UEID->UEID-NG-ENB-DU */

    #if 0 //hc-choice-ELEM 6 -idx570 -rootc23: UEID->UEID-EN-GNB - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.choice_type = E2AP_UEID_e2ap_EN_G_NB_UEID;
    /*=== START SEQUENCE -idx571 -ROOTS91 UEID-EN-GNB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB alias = 6 -mandatory
    //hc-m_eNB_UE_X2AP_ID -idx573- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.m_eNB_UE_X2AP_ID = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID -idx573- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB alias = 5 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_M_E_NB_UE_X2AP_ID_EXTENSION_PRESENT;
    //hc-m_eNB_UE_X2AP_ID_Extension -idx575- alias primitive - pid = 5 - INTEGER - min:0 - max:4095  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID-Extension
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.m_eNB_UE_X2AP_ID_Extension = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID_Extension -idx575- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB alias = 5
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB alias = -1 -mandatory
    /*=== START SEQUENCE -idx577 -ROOTS92 GlobalENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GlobalENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx579- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_16[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.globalENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_16);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.globalENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_16, sizeof(temp_buff_for_pLMNIdentity_16)); // change octetstring data here
    //end of hc-pLMNIdentity -idx579- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GlobalENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GlobalENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc36 - ENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx582 -rootc36: ENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    //hc-macro_eNB_ID -idx583- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->macro-eNB-ID
    OSOCTET temp_buff_for_macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID, 3);
    //end of hc-macro_eNB_ID -idx583- primitive
    #endif /*choice-ELEM 1 -idx582 -rootc36 - ENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx584 -rootc36: ENB-ID->BIT STRING (SIZE(28)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    //hc-home_eNB_ID -idx585- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->home-eNB-ID
    OSOCTET temp_buff_for_home_eNB_ID[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID, 4);
    //end of hc-home_eNB_ID -idx585- primitive
    #endif /*choice-ELEM 2 -idx584 -rootc36 - ENB-ID->BIT STRING (SIZE(28)) */

    #if 0 //hc-choice-ELEM 3 -idx586 -rootc36: ENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    //hc-short_Macro_eNB_ID -idx587- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    OSOCTET temp_buff_for_short_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID, 3);
    //end of hc-short_Macro_eNB_ID -idx587- primitive
    #endif /*choice-ELEM 3 -idx586 -rootc36 - ENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 4 -idx588 -rootc36: ENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    //hc-long_Macro_eNB_ID -idx589- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    OSOCTET temp_buff_for_long_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID, 3);
    //end of hc-long_Macro_eNB_ID -idx589- primitive
    #endif /*choice-ELEM 4 -idx588 -rootc36 - ENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc36 - ENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GlobalENB-ID alias = -1
    /*=== END SEQUENCE -idx577 GlobalENB-ID -ROOTS92 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB alias = -1
    //hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB alias = 6 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_G_NB_CU_UE_F1AP_ID_PRESENT;
    //hc-gNB_CU_UE_F1AP_ID -idx591- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx591- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB alias = 6
    //hc-sequence-ELEM 5: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_G_NB_CU_CP_UE_E1AP_ID_LIST_PRESENT;
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx593 -ROOTS93 UEID-GNB-CU-CP-E1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx595- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item[0].gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx595- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx593 UEID-GNB-CU-CP-E1AP-ID-Item -ROOTS93 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB alias = 8 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx597- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->RANUEID
    OSOCTET temp_buff_for_ran_UEID_3[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_3);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.ran_UEID.data, temp_buff_for_ran_UEID_3, sizeof(temp_buff_for_ran_UEID_3)); // change octetstring data here
    //end of hc-ran_UEID -idx597- alias primitive

    //end of hc-sequence-ELEM 6: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB alias = 8
    //hc-sequence-ELEM 7: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx599 -ROOTS94 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx601- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx601- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc37 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx604 -rootc37: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx605 -ROOTS95 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx607- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_17[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_17);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_17, sizeof(temp_buff_for_pLMNIdentity_17)); // change octetstring data here
    //end of hc-pLMNIdentity -idx607- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx609- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_4[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_4, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx609- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx605 NR-CGI -ROOTS95 ===*/

    #endif /*choice-ELEM 1 -idx604 -rootc37 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx610 -rootc37: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx611 -ROOTS96 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx613- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_18[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_18);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_18, sizeof(temp_buff_for_pLMNIdentity_18)); // change octetstring data here
    //end of hc-pLMNIdentity -idx613- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx615- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_4[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_4, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx615- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx611 EUTRA-CGI -ROOTS96 ===*/

    #endif /*choice-ELEM 2 -idx610 -rootc37 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc37 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx599 Cell-RNTI -ROOTS94 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB alias = -1
    /*=== END SEQUENCE -idx571 UEID-EN-GNB -ROOTS91 ===*/

    #endif /*choice-ELEM 6 -idx570 -rootc23 - UEID->UEID-EN-GNB */

    #if 0 //hc-choice-ELEM 7 -idx616 -rootc23: UEID->UEID-ENB - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.choice_type = E2AP_UEID_e2ap_E_NB_UEID;
    /*=== START SEQUENCE -idx617 -ROOTS97 UEID-ENB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB alias = 6 -mandatory
    //hc-mME_UE_S1AP_ID -idx619- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->MME-UE-S1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.mME_UE_S1AP_ID = 2147483647;// change integer here
    //end of hc-mME_UE_S1AP_ID -idx619- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB alias = -1 -mandatory
    /*=== START SEQUENCE -idx621 -ROOTS98 GUMMEI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-pLMN_Identity -idx623- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GUMMEI->PLMNIdentity
    OSOCTET temp_buff_for_pLMN_Identity[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.gUMMEI.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.gUMMEI.pLMN_Identity.data, temp_buff_for_pLMN_Identity, sizeof(temp_buff_for_pLMN_Identity)); // change octetstring data here
    //end of hc-pLMN_Identity -idx623- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GUMMEI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-mME_Group_ID -idx625- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GUMMEI->MME-Group-ID
    OSOCTET temp_buff_for_mME_Group_ID[] = {0x01, 0x02}; // min =2 - max = 2 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.gUMMEI.mME_Group_ID.numocts = sizeof(temp_buff_for_mME_Group_ID);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.gUMMEI.mME_Group_ID.data, temp_buff_for_mME_Group_ID, sizeof(temp_buff_for_mME_Group_ID)); // change octetstring data here
    //end of hc-mME_Group_ID -idx625- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GUMMEI alias = 8
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-mME_Code -idx627- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GUMMEI->MME-Code
    OSOCTET temp_buff_for_mME_Code[] = {0x01}; // min =1 - max = 1 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.gUMMEI.mME_Code.numocts = sizeof(temp_buff_for_mME_Code);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.gUMMEI.mME_Code.data, temp_buff_for_mME_Code, sizeof(temp_buff_for_mME_Code)); // change octetstring data here
    //end of hc-mME_Code -idx627- alias primitive

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GUMMEI alias = 8
    /*=== END SEQUENCE -idx621 GUMMEI -ROOTS98 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB alias = 6 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_M_E_NB_UE_X2AP_ID_PRESENT;
    //hc-m_eNB_UE_X2AP_ID -idx629- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->ENB-UE-X2AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.m_eNB_UE_X2AP_ID = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID -idx629- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB alias = 6
    //hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB alias = 5 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_M_E_NB_UE_X2AP_ID_EXTENSION_PRESENT;
    //hc-m_eNB_UE_X2AP_ID_Extension -idx631- alias primitive - pid = 5 - INTEGER - min:0 - max:4095  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->ENB-UE-X2AP-ID-Extension
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.m_eNB_UE_X2AP_ID_Extension = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID_Extension -idx631- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB alias = 5
    //hc-sequence-ELEM 5: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_GLOBAL_ENB_ID_PRESENT;
    /*=== START SEQUENCE -idx633 -ROOTS99 GlobalENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GlobalENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx635- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GlobalENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_19[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.globalENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_19);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.globalENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_19, sizeof(temp_buff_for_pLMNIdentity_19)); // change octetstring data here
    //end of hc-pLMNIdentity -idx635- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GlobalENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GlobalENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc38 - ENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx638 -rootc38: ENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    //hc-macro_eNB_ID -idx639- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->macro-eNB-ID
    OSOCTET temp_buff_for_macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_1, 3);
    //end of hc-macro_eNB_ID -idx639- primitive
    #endif /*choice-ELEM 1 -idx638 -rootc38 - ENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx640 -rootc38: ENB-ID->BIT STRING (SIZE(28)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    //hc-home_eNB_ID -idx641- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->home-eNB-ID
    OSOCTET temp_buff_for_home_eNB_ID_1[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_1, 4);
    //end of hc-home_eNB_ID -idx641- primitive
    #endif /*choice-ELEM 2 -idx640 -rootc38 - ENB-ID->BIT STRING (SIZE(28)) */

    #if 0 //hc-choice-ELEM 3 -idx642 -rootc38: ENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    //hc-short_Macro_eNB_ID -idx643- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    OSOCTET temp_buff_for_short_Macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_1, 3);
    //end of hc-short_Macro_eNB_ID -idx643- primitive
    #endif /*choice-ELEM 3 -idx642 -rootc38 - ENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 4 -idx644 -rootc38: ENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    //hc-long_Macro_eNB_ID -idx645- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    OSOCTET temp_buff_for_long_Macro_eNB_ID_1[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_1, 3);
    //end of hc-long_Macro_eNB_ID -idx645- primitive
    #endif /*choice-ELEM 4 -idx644 -rootc38 - ENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc38 - ENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GlobalENB-ID alias = -1
    /*=== END SEQUENCE -idx633 GlobalENB-ID -ROOTS99 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx647 -ROOTS100 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx649- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx649- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc39 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx652 -rootc39: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx653 -ROOTS101 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx655- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_20[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_20);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_20, sizeof(temp_buff_for_pLMNIdentity_20)); // change octetstring data here
    //end of hc-pLMNIdentity -idx655- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx657- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_5[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_5, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx657- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx653 NR-CGI -ROOTS101 ===*/

    #endif /*choice-ELEM 1 -idx652 -rootc39 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx658 -rootc39: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx659 -ROOTS102 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx661- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_21[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_21);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_21, sizeof(temp_buff_for_pLMNIdentity_21)); // change octetstring data here
    //end of hc-pLMNIdentity -idx661- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx663- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_5[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format3.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_5, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx663- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx659 EUTRA-CGI -ROOTS102 ===*/

    #endif /*choice-ELEM 2 -idx658 -rootc39 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc39 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx647 Cell-RNTI -ROOTS100 ===*/

    //end of hc-sequence-ELEM 6: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB alias = -1
    /*=== END SEQUENCE -idx617 UEID-ENB -ROOTS97 ===*/

    #endif /*choice-ELEM 7 -idx616 -rootc23 - UEID->UEID-ENB */

    /*=== END CHOICE -rootc23 - UEID ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3 alias = -1
    /*=== END SEQUENCE -idx301 E2SM-RC-ActionDefinition-Format3 -ROOTS47 ===*/

    #endif /*choice-ELEM 3 -idx300 -rootc1 - E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3 */

    #if 0 //hc-choice-ELEM 4 -idx664 -rootc1: E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4 - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.choice_type = E2AP_E2SM_RC_ACTION_DEFINITION_RIC_ACTION_DEFINITION_FORMATS_e2ap_ACTION_DEFINITION_FORMAT4;
    /*=== START SEQUENCE -idx665 -ROOTS103 E2SM-RC-ActionDefinition-Format4 ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4 alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item_count = 1;
    /*=== START SEQUENCE -idx667 -ROOTS104 E2SM-RC-ActionDefinition-Format4-Style-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item alias = 15 -mandatory
    //hc-requested_Insert_Style_Type -idx669- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->RIC-Style-Type
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].requested_Insert_Style_Type = 875;// change integer here
    //end of hc-requested_Insert_Style_Type -idx669- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item alias = 15
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item_count = 1;
    /*=== START SEQUENCE -idx671 -ROOTS105 E2SM-RC-ActionDefinition-Format4-Indication-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item alias = 5 -mandatory
    //hc-ric_InsertIndication_ID -idx673- alias primitive - pid = 5 - INTEGER - min:1 - max:65535  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->RIC-InsertIndication-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ric_InsertIndication_ID = 32768;// change integer here
    //end of hc-ric_InsertIndication_ID -idx673- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item_count = 1;
    /*=== START SEQUENCE -idx675 -ROOTS106 E2SM-RC-ActionDefinition-Format4-RANP-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx677- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx677- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].bitmask |= E2AP_E2SM_RC_ACTION_DEFINITION_FORMAT4_RANP_ITEM_e2ap_RAN_PARAMETER_DEFINITION_PRESENT;
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition = xnap_mem_get(sizeof(_e2ap_RANParameter_Definition_t)); //memgetforrecu
    /*=== START SEQUENCE -idx679 -ROOTS107 RANParameter-Definition ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition alias = -1 -mandatory
    /*=== START CHOICE -rootc40 - RANParameter-Definition-Choice ===*/
    #if 1 //hc-choice-ELEM 1 -idx682 -rootc40: RANParameter-Definition-Choice->RANParameter_Definition_Choice_LIST - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_LIST;
    /*=== START SEQUENCE -idx683 -ROOTS108 RANParameter-Definition-Choice-LIST ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item_count = 1;
    /*=== START SEQUENCE -idx685 -ROOTS109 RANParameter-Definition-Choice-LIST-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx687- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx687- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx689- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx689- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].bitmask |= E2AP_RANPARAMETER_DEFINITION_CHOICE_LIST_ITEM_e2ap_RAN_PARAMETER_DEFINITION_PRESENT;
    // [RECUSIVE] recursive - re-idx = 1 / SEQUENCE RANParameter_Definition detected in stack, continuing...
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition = xnap_mem_get(sizeof(_e2ap_RANParameter_Definition_t)); //memgetforrecu
    /*=== START SEQUENCE -idx691 -ROOTS110 RANParameter-Definition ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition alias = -1 -mandatory
    /*=== START CHOICE -rootc41 - RANParameter-Definition-Choice ===*/
    #if 1 //hc-choice-ELEM 1 -idx694 -rootc41: RANParameter-Definition-Choice->RANParameter_Definition_Choice_LIST - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_LIST;
    /*=== START SEQUENCE -idx695 -ROOTS111 RANParameter-Definition-Choice-LIST ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item_count = 1;
    /*=== START SEQUENCE -idx697 -ROOTS112 RANParameter-Definition-Choice-LIST-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx699- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx699- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx701- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx701- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1 -optional
    // [STOP] recursive SEQUENCE RANParameter_Definition in stack
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1
    /*=== END SEQUENCE -idx697 RANParameter-Definition-Choice-LIST-Item -ROOTS112 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1
    /*=== END SEQUENCE -idx695 RANParameter-Definition-Choice-LIST -ROOTS111 ===*/

    #endif /*choice-ELEM 1 -idx694 -rootc41 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST */

    #if 0 //hc-choice-ELEM 2 -idx703 -rootc41: RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_STRUCTURE;
    /*=== START SEQUENCE -idx704 -ROOTS113 RANParameter-Definition-Choice-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx706 -ROOTS114 RANParameter-Definition-Choice-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx708- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx708- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx710- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx710- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1 -optional
    // [STOP] recursive SEQUENCE RANParameter_Definition in stack
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx706 RANParameter-Definition-Choice-STRUCTURE-Item -ROOTS114 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx704 RANParameter-Definition-Choice-STRUCTURE -ROOTS113 ===*/

    #endif /*choice-ELEM 2 -idx703 -rootc41 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE */

    /*=== END CHOICE -rootc41 - RANParameter-Definition-Choice ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition alias = -1
    /*=== END SEQUENCE -idx691 RANParameter-Definition -ROOTS110 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1
    /*=== END SEQUENCE -idx685 RANParameter-Definition-Choice-LIST-Item -ROOTS109 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1
    /*=== END SEQUENCE -idx683 RANParameter-Definition-Choice-LIST -ROOTS108 ===*/

    #endif /*choice-ELEM 1 -idx682 -rootc40 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST */

    #if 0 //hc-choice-ELEM 2 -idx712 -rootc40: RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_STRUCTURE;
    /*=== START SEQUENCE -idx713 -ROOTS115 RANParameter-Definition-Choice-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx715 -ROOTS116 RANParameter-Definition-Choice-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx717- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx717- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx719- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx719- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].bitmask |= E2AP_RANPARAMETER_DEFINITION_CHOICE_STRUCTURE_ITEM_e2ap_RAN_PARAMETER_DEFINITION_PRESENT;
    // [RECUSIVE] recursive - re-idx = 1 / SEQUENCE RANParameter_Definition detected in stack, continuing...
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition = xnap_mem_get(sizeof(_e2ap_RANParameter_Definition_t)); //memgetforrecu
    /*=== START SEQUENCE -idx721 -ROOTS117 RANParameter-Definition ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition alias = -1 -mandatory
    /*=== START CHOICE -rootc42 - RANParameter-Definition-Choice ===*/
    #if 1 //hc-choice-ELEM 1 -idx724 -rootc42: RANParameter-Definition-Choice->RANParameter_Definition_Choice_LIST - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_LIST;
    /*=== START SEQUENCE -idx725 -ROOTS118 RANParameter-Definition-Choice-LIST ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item_count = 1;
    /*=== START SEQUENCE -idx727 -ROOTS119 RANParameter-Definition-Choice-LIST-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx729- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx729- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx731- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceLIST.ranParameter_List.RANParameter_Definition_Choice_LIST_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx731- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1 -optional
    // [STOP] recursive SEQUENCE RANParameter_Definition in stack
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item alias = -1
    /*=== END SEQUENCE -idx727 RANParameter-Definition-Choice-LIST-Item -ROOTS119 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST alias = -1
    /*=== END SEQUENCE -idx725 RANParameter-Definition-Choice-LIST -ROOTS118 ===*/

    #endif /*choice-ELEM 1 -idx724 -rootc42 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST */

    #if 0 //hc-choice-ELEM 2 -idx733 -rootc42: RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choice_type = E2AP_RANPARAMETER_DEFINITION_CHOICE_e2ap_CHOICE_STRUCTURE;
    /*=== START SEQUENCE -idx734 -ROOTS120 RANParameter-Definition-Choice-STRUCTURE ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1 -mandatory
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item_count = 1;
    /*=== START SEQUENCE -idx736 -ROOTS121 RANParameter-Definition-Choice-STRUCTURE-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5 -mandatory
    //hc-ranParameter_ID -idx738- alias primitive - pid = 5 - INTEGER - min:1 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_ID = 2147483648;// change integer here
    //end of hc-ranParameter_ID -idx738- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 5
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10 -mandatory
    //hc-ranParameter_name -idx740- alias primitive - pid = 10 PrintableString - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Name
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ric_InsertStyle_List.E2SM_RC_ActionDefinition_Format4_Style_Item[0].ric_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_Indication_Item[0].ranP_InsertIndication_List.E2SM_RC_ActionDefinition_Format4_RANP_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_Definition->ranParameter_Definition_Choice.choiceSTRUCTURE.ranParameter_STRUCTURE.RANParameter_Definition_Choice_STRUCTURE_Item[0].ranParameter_name =  "hardcode string valueu"; // change printable string here
    //end of hc-ranParameter_name -idx740- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1 -optional
    // [STOP] recursive SEQUENCE RANParameter_Definition in stack
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx736 RANParameter-Definition-Choice-STRUCTURE-Item -ROOTS121 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx734 RANParameter-Definition-Choice-STRUCTURE -ROOTS120 ===*/

    #endif /*choice-ELEM 2 -idx733 -rootc42 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE */

    /*=== END CHOICE -rootc42 - RANParameter-Definition-Choice ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition alias = -1
    /*=== END SEQUENCE -idx721 RANParameter-Definition -ROOTS117 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item alias = -1
    /*=== END SEQUENCE -idx715 RANParameter-Definition-Choice-STRUCTURE-Item -ROOTS116 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE alias = -1
    /*=== END SEQUENCE -idx713 RANParameter-Definition-Choice-STRUCTURE -ROOTS115 ===*/

    #endif /*choice-ELEM 2 -idx712 -rootc40 - RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE */

    /*=== END CHOICE -rootc40 - RANParameter-Definition-Choice ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition alias = -1
    /*=== END SEQUENCE -idx679 RANParameter-Definition -ROOTS107 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item alias = -1
    /*=== END SEQUENCE -idx675 E2SM-RC-ActionDefinition-Format4-RANP-Item -ROOTS106 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item alias = -1
    /*=== END SEQUENCE -idx671 E2SM-RC-ActionDefinition-Format4-Indication-Item -ROOTS105 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item alias = -1
    /*=== END SEQUENCE -idx667 E2SM-RC-ActionDefinition-Format4-Style-Item -ROOTS104 ===*/

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4 alias = -1
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4 alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.bitmask |= E2AP_E2SM_RC_ACTION_DEFINITION_FORMAT4_e2ap_UE_ID_PRESENT;
    /*=== START CHOICE -rootc43 - UEID ===*/
    #if 1 //hc-choice-ELEM 1 -idx744 -rootc43: UEID->UEID_GNB - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.choice_type = E2AP_UEID_e2ap_G_NB_UEID;
    /*=== START SEQUENCE -idx745 -ROOTS122 UEID-GNB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = 6 -mandatory
    //hc-amf_UE_NGAP_ID -idx747- alias primitive - pid = 6 - INTEGER - min:0 - max:1099511627775  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->AMF-UE-NGAP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.amf_UE_NGAP_ID = 549755813887;// change integer here
    //end of hc-amf_UE_NGAP_ID -idx747- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = -1 -mandatory
    /*=== START SEQUENCE -idx749 -ROOTS123 GUAMI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GUAMI alias = 8 -mandatory
    //hc-pLMNIdentity -idx751- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GUAMI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_22[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.guami.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_22);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.guami.pLMNIdentity.data, temp_buff_for_pLMNIdentity_22, sizeof(temp_buff_for_pLMNIdentity_22)); // change octetstring data here
    //end of hc-pLMNIdentity -idx751- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GUAMI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFRegionID -idx753- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GUAMI->AMFRegionID
    OSOCTET temp_buff_for_aMFRegionID_2[] = {0x01}; // min =8 - max = 8 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.guami.aMFRegionID.numbits = 8;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.guami.aMFRegionID.data, temp_buff_for_aMFRegionID_2, 1); // change bitstring data here
    //end of hc-aMFRegionID -idx753- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GUAMI alias = 3
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFSetID -idx755- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GUAMI->AMFSetID
    OSOCTET temp_buff_for_aMFSetID_2[] = {0x01, 0x02}; // min =10 - max = 10 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.guami.aMFSetID.numbits = 10;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.guami.aMFSetID.data, temp_buff_for_aMFSetID_2, 2); // change bitstring data here
    //end of hc-aMFSetID -idx755- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GUAMI alias = 3
    //hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GUAMI alias = 3 -mandatory
    //hc-aMFPointer -idx757- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GUAMI->AMFPointer
    OSOCTET temp_buff_for_aMFPointer_2[] = {0x01}; // min =6 - max = 6 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.guami.aMFPointer.numbits = 6;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.guami.aMFPointer.data, temp_buff_for_aMFPointer_2, 1); // change bitstring data here
    //end of hc-aMFPointer -idx757- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GUAMI alias = 3
    /*=== END SEQUENCE -idx749 GUAMI -ROOTS123 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_G_NB_CU_UE_F1AP_ID_LIST_PRESENT;
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.gNB_CU_UE_F1AP_ID_List.UEID_GNB_CU_CP_F1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx759 -ROOTS124 UEID-GNB-CU-CP-F1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_UE_F1AP_ID -idx761- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.gNB_CU_UE_F1AP_ID_List.UEID_GNB_CU_CP_F1AP_ID_Item[0].gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx761- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx759 UEID-GNB-CU-CP-F1AP-ID-Item -ROOTS124 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_G_NB_CU_CP_UE_E1AP_ID_LIST_PRESENT;
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx763 -ROOTS125 UEID-GNB-CU-CP-E1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx765- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item[0].gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx765- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx763 UEID-GNB-CU-CP-E1AP-ID-Item -ROOTS125 ===*/

    //end of hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 5: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = 8 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx767- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->RANUEID
    OSOCTET temp_buff_for_ran_UEID_4[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_4);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.ran_UEID.data, temp_buff_for_ran_UEID_4, sizeof(temp_buff_for_ran_UEID_4)); // change octetstring data here
    //end of hc-ran_UEID -idx767- alias primitive

    //end of hc-sequence-ELEM 5: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = 8
    //hc-sequence-ELEM 6: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = 6 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_M_NG_RAN_UE_XN_AP_ID_PRESENT;
    //hc-m_NG_RAN_UE_XnAP_ID -idx769- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->NG-RANnodeUEXnAPID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.m_NG_RAN_UE_XnAP_ID = 2147483647;// change integer here
    //end of hc-m_NG_RAN_UE_XnAP_ID -idx769- alias primitive
    //end of hc-sequence-ELEM 6: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = 6
    //hc-sequence-ELEM 7: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_GLOBAL_GNB_ID_PRESENT;
    /*=== START SEQUENCE -idx771 -ROOTS126 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx773- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_23[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalGNB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_23);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalGNB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_23, sizeof(temp_buff_for_pLMNIdentity_23)); // change octetstring data here
    //end of hc-pLMNIdentity -idx773- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc44 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx776 -rootc44: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalGNB_ID.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx777- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_3[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalGNB_ID.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalGNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_3, 3);
    //end of hc-gNB_ID -idx777- primitive
    #endif /*choice-ELEM 1 -idx776 -rootc44 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc44 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx771 GlobalGNB-ID -ROOTS126 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 8: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_GLOBAL_NG_RANNODE_ID_PRESENT;
    /*=== START CHOICE -rootc45 - GlobalNGRANNodeID ===*/
    #if 1 //hc-choice-ELEM 1 -idx780 -rootc45: GlobalNGRANNodeID->GlobalGNB_ID - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_G_NB;
    /*=== START SEQUENCE -idx781 -ROOTS127 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx783- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_24[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_24);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_24, sizeof(temp_buff_for_pLMNIdentity_24)); // change octetstring data here
    //end of hc-pLMNIdentity -idx783- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc46 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx786 -rootc46: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx787- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_4[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_4, 3);
    //end of hc-gNB_ID -idx787- primitive
    #endif /*choice-ELEM 1 -idx786 -rootc46 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc46 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx781 GlobalGNB-ID -ROOTS127 ===*/

    #endif /*choice-ELEM 1 -idx780 -rootc45 - GlobalNGRANNodeID->GlobalGNB-ID */

    #if 0 //hc-choice-ELEM 2 -idx788 -rootc45: GlobalNGRANNodeID->GlobalNgENB-ID - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_NG_E_NB;
    /*=== START SEQUENCE -idx789 -ROOTS128 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx791- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_25[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_25);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_25, sizeof(temp_buff_for_pLMNIdentity_25)); // change octetstring data here
    //end of hc-pLMNIdentity -idx791- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc47 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx794 -rootc47: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx795- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_3[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_3, 3);
    //end of hc-macroNgENB_ID -idx795- primitive
    #endif /*choice-ELEM 1 -idx794 -rootc47 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx796 -rootc47: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx797- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_3[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_3, 3);
    //end of hc-shortMacroNgENB_ID -idx797- primitive
    #endif /*choice-ELEM 2 -idx796 -rootc47 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx798 -rootc47: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx799- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_3[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_3, 3);
    //end of hc-longMacroNgENB_ID -idx799- primitive
    #endif /*choice-ELEM 3 -idx798 -rootc47 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc47 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx789 GlobalNgENB-ID -ROOTS128 ===*/

    #endif /*choice-ELEM 2 -idx788 -rootc45 - GlobalNGRANNodeID->GlobalNgENB-ID */

    /*=== END CHOICE -rootc45 - GlobalNGRANNodeID ===*/

    //end of hc-sequence-ELEM 8: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = -1
    //hc-sequence-ELEM 9: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.bitmask |= E2AP_UEID_GNB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx801 -ROOTS129 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx803- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx803- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc48 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx806 -rootc48: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx807 -ROOTS130 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx809- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_26[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_26);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_26, sizeof(temp_buff_for_pLMNIdentity_26)); // change octetstring data here
    //end of hc-pLMNIdentity -idx809- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx811- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_6[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_6, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx811- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx807 NR-CGI -ROOTS130 ===*/

    #endif /*choice-ELEM 1 -idx806 -rootc48 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx812 -rootc48: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx813 -ROOTS131 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx815- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_27[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_27);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_27, sizeof(temp_buff_for_pLMNIdentity_27)); // change octetstring data here
    //end of hc-pLMNIdentity -idx815- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx817- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_6[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_6, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx817- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx813 EUTRA-CGI -ROOTS131 ===*/

    #endif /*choice-ELEM 2 -idx812 -rootc48 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc48 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx801 Cell-RNTI -ROOTS129 ===*/

    //end of hc-sequence-ELEM 9: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB alias = -1
    /*=== END SEQUENCE -idx745 UEID-GNB -ROOTS122 ===*/

    #endif /*choice-ELEM 1 -idx744 -rootc43 - UEID->UEID-GNB */

    #if 0 //hc-choice-ELEM 2 -idx818 -rootc43: UEID->UEID-GNB-DU - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.choice_type = E2AP_UEID_e2ap_G_NB_DU_UEID;
    /*=== START SEQUENCE -idx819 -ROOTS132 UEID-GNB-DU ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU alias = 6 -mandatory
    //hc-gNB_CU_UE_F1AP_ID -idx821- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_DU_UEID.gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx821- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU alias = 8 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_DU_UEID.bitmask |= E2AP_UEID_GNB_DU_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx823- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->RANUEID
    OSOCTET temp_buff_for_ran_UEID_5[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_DU_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_5);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_DU_UEID.ran_UEID.data, temp_buff_for_ran_UEID_5, sizeof(temp_buff_for_ran_UEID_5)); // change octetstring data here
    //end of hc-ran_UEID -idx823- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU alias = 8
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_DU_UEID.bitmask |= E2AP_UEID_GNB_DU_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx825 -ROOTS133 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx827- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_DU_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx827- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc49 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx830 -rootc49: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx831 -ROOTS134 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx833- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_28[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_28);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_28, sizeof(temp_buff_for_pLMNIdentity_28)); // change octetstring data here
    //end of hc-pLMNIdentity -idx833- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx835- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_7[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_7, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx835- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx831 NR-CGI -ROOTS134 ===*/

    #endif /*choice-ELEM 1 -idx830 -rootc49 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx836 -rootc49: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx837 -ROOTS135 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx839- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_29[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_29);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_29, sizeof(temp_buff_for_pLMNIdentity_29)); // change octetstring data here
    //end of hc-pLMNIdentity -idx839- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx841- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_7[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_7, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx841- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx837 EUTRA-CGI -ROOTS135 ===*/

    #endif /*choice-ELEM 2 -idx836 -rootc49 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc49 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx825 Cell-RNTI -ROOTS133 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU alias = -1
    /*=== END SEQUENCE -idx819 UEID-GNB-DU -ROOTS132 ===*/

    #endif /*choice-ELEM 2 -idx818 -rootc43 - UEID->UEID-GNB-DU */

    #if 0 //hc-choice-ELEM 3 -idx842 -rootc43: UEID->UEID-GNB-CU-UP - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.choice_type = E2AP_UEID_e2ap_G_NB_CU_UP_UEID;
    /*=== START SEQUENCE -idx843 -ROOTS136 UEID-GNB-CU-UP ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-CU-UP alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx845- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-CU-UP->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_CU_UP_UEID.gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx845- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-CU-UP alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-CU-UP alias = 8 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_CU_UP_UEID.bitmask |= E2AP_UEID_GNB_CU_UP_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx847- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-CU-UP->RANUEID
    OSOCTET temp_buff_for_ran_UEID_6[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_CU_UP_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_6);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.gNB_CU_UP_UEID.ran_UEID.data, temp_buff_for_ran_UEID_6, sizeof(temp_buff_for_ran_UEID_6)); // change octetstring data here
    //end of hc-ran_UEID -idx847- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-CU-UP alias = 8
    /*=== END SEQUENCE -idx843 UEID-GNB-CU-UP -ROOTS136 ===*/

    #endif /*choice-ELEM 3 -idx842 -rootc43 - UEID->UEID-GNB-CU-UP */

    #if 0 //hc-choice-ELEM 4 -idx848 -rootc43: UEID->UEID-NG-ENB - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.choice_type = E2AP_UEID_e2ap_NG_E_NB_UEID;
    /*=== START SEQUENCE -idx849 -ROOTS137 UEID-NG-ENB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB alias = 6 -mandatory
    //hc-amf_UE_NGAP_ID -idx851- alias primitive - pid = 6 - INTEGER - min:0 - max:1099511627775  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->AMF-UE-NGAP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.amf_UE_NGAP_ID = 549755813887;// change integer here
    //end of hc-amf_UE_NGAP_ID -idx851- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB alias = -1 -mandatory
    /*=== START SEQUENCE -idx853 -ROOTS138 GUAMI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GUAMI alias = 8 -mandatory
    //hc-pLMNIdentity -idx855- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GUAMI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_30[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.guami.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_30);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.guami.pLMNIdentity.data, temp_buff_for_pLMNIdentity_30, sizeof(temp_buff_for_pLMNIdentity_30)); // change octetstring data here
    //end of hc-pLMNIdentity -idx855- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GUAMI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFRegionID -idx857- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GUAMI->AMFRegionID
    OSOCTET temp_buff_for_aMFRegionID_3[] = {0x01}; // min =8 - max = 8 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.guami.aMFRegionID.numbits = 8;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.guami.aMFRegionID.data, temp_buff_for_aMFRegionID_3, 1); // change bitstring data here
    //end of hc-aMFRegionID -idx857- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GUAMI alias = 3
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFSetID -idx859- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GUAMI->AMFSetID
    OSOCTET temp_buff_for_aMFSetID_3[] = {0x01, 0x02}; // min =10 - max = 10 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.guami.aMFSetID.numbits = 10;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.guami.aMFSetID.data, temp_buff_for_aMFSetID_3, 2); // change bitstring data here
    //end of hc-aMFSetID -idx859- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GUAMI alias = 3
    //hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GUAMI alias = 3 -mandatory
    //hc-aMFPointer -idx861- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GUAMI->AMFPointer
    OSOCTET temp_buff_for_aMFPointer_3[] = {0x01}; // min =6 - max = 6 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.guami.aMFPointer.numbits = 6;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.guami.aMFPointer.data, temp_buff_for_aMFPointer_3, 1); // change bitstring data here
    //end of hc-aMFPointer -idx861- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GUAMI alias = 3
    /*=== END SEQUENCE -idx853 GUAMI -ROOTS138 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB alias = 6 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_NG_E_NB_CU_UE_W1AP_ID_PRESENT;
    //hc-ng_eNB_CU_UE_W1AP_ID -idx863- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->NGENB-CU-UE-W1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.ng_eNB_CU_UE_W1AP_ID = 2147483647;// change integer here
    //end of hc-ng_eNB_CU_UE_W1AP_ID -idx863- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB alias = 6 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_M_NG_RAN_UE_XN_AP_ID_PRESENT;
    //hc-m_NG_RAN_UE_XnAP_ID -idx865- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->NG-RANnodeUEXnAPID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.m_NG_RAN_UE_XnAP_ID = 2147483647;// change integer here
    //end of hc-m_NG_RAN_UE_XnAP_ID -idx865- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB alias = 6
    //hc-sequence-ELEM 5: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_GLOBAL_NG_ENB_ID_PRESENT;
    /*=== START SEQUENCE -idx867 -ROOTS139 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx869- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_31[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNgENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_31);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNgENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_31, sizeof(temp_buff_for_pLMNIdentity_31)); // change octetstring data here
    //end of hc-pLMNIdentity -idx869- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc50 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx872 -rootc50: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx873- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_4[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_4, 3);
    //end of hc-macroNgENB_ID -idx873- primitive
    #endif /*choice-ELEM 1 -idx872 -rootc50 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx874 -rootc50: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx875- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_4[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_4, 3);
    //end of hc-shortMacroNgENB_ID -idx875- primitive
    #endif /*choice-ELEM 2 -idx874 -rootc50 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx876 -rootc50: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx877- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_4[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNgENB_ID.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_4, 3);
    //end of hc-longMacroNgENB_ID -idx877- primitive
    #endif /*choice-ELEM 3 -idx876 -rootc50 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc50 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx867 GlobalNgENB-ID -ROOTS139 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_GLOBAL_NG_RANNODE_ID_PRESENT;
    /*=== START CHOICE -rootc51 - GlobalNGRANNodeID ===*/
    #if 1 //hc-choice-ELEM 1 -idx880 -rootc51: GlobalNGRANNodeID->GlobalGNB_ID - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_G_NB;
    /*=== START SEQUENCE -idx881 -ROOTS140 GlobalGNB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx883- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_32[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_32);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_32, sizeof(temp_buff_for_pLMNIdentity_32)); // change octetstring data here
    //end of hc-pLMNIdentity -idx883- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc52 - GNB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx886 -rootc52: GNB-ID->BIT_STRING_(SIZE(22..32)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.choice_type = E2AP_GNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID -idx887- primitive in scope - pid = 4 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
    OSOCTET temp_buff_for_gNB_ID_5[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.numbits = 22; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.gNB.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID_5, 3);
    //end of hc-gNB_ID -idx887- primitive
    #endif /*choice-ELEM 1 -idx886 -rootc52 - GNB-ID->BIT STRING (SIZE(22..32)) */

    /*=== END CHOICE -rootc52 - GNB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID alias = -1
    /*=== END SEQUENCE -idx881 GlobalGNB-ID -ROOTS140 ===*/

    #endif /*choice-ELEM 1 -idx880 -rootc51 - GlobalNGRANNodeID->GlobalGNB-ID */

    #if 0 //hc-choice-ELEM 2 -idx888 -rootc51: GlobalNGRANNodeID->GlobalNgENB-ID - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.choice_type = E2AP_GLOBAL_NGRANNODE_ID_e2ap_NG_E_NB;
    /*=== START SEQUENCE -idx889 -ROOTS141 GlobalNgENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx891- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_33[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_33);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.pLMNIdentity.data, temp_buff_for_pLMNIdentity_33, sizeof(temp_buff_for_pLMNIdentity_33)); // change octetstring data here
    //end of hc-pLMNIdentity -idx891- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc53 - NgENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx894 -rootc53: NgENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_MACRO_NG_ENB_ID;
    //hc-macroNgENB_ID -idx895- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
    OSOCTET temp_buff_for_macroNgENB_ID_5[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.macroNgENB_ID.data, temp_buff_for_macroNgENB_ID_5, 3);
    //end of hc-macroNgENB_ID -idx895- primitive
    #endif /*choice-ELEM 1 -idx894 -rootc53 - NgENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx896 -rootc53: NgENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_SHORT_MACRO_NG_ENB_ID;
    //hc-shortMacroNgENB_ID -idx897- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
    OSOCTET temp_buff_for_shortMacroNgENB_ID_5[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.shortMacroNgENB_ID.data, temp_buff_for_shortMacroNgENB_ID_5, 3);
    //end of hc-shortMacroNgENB_ID -idx897- primitive
    #endif /*choice-ELEM 2 -idx896 -rootc53 - NgENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 3 -idx898 -rootc53: NgENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.choice_type = E2AP_NG_ENB_ID_e2ap_LONG_MACRO_NG_ENB_ID;
    //hc-longMacroNgENB_ID -idx899- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
    OSOCTET temp_buff_for_longMacroNgENB_ID_5[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.globalNG_RANNode_ID.ng_eNB.ngENB_ID.longMacroNgENB_ID.data, temp_buff_for_longMacroNgENB_ID_5, 3);
    //end of hc-longMacroNgENB_ID -idx899- primitive
    #endif /*choice-ELEM 3 -idx898 -rootc53 - NgENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc53 - NgENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID alias = -1
    /*=== END SEQUENCE -idx889 GlobalNgENB-ID -ROOTS141 ===*/

    #endif /*choice-ELEM 2 -idx888 -rootc51 - GlobalNGRANNodeID->GlobalNgENB-ID */

    /*=== END CHOICE -rootc51 - GlobalNGRANNodeID ===*/

    //end of hc-sequence-ELEM 6: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB alias = -1
    //hc-sequence-ELEM 7: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.bitmask |= E2AP_UEID_NG_ENB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx901 -ROOTS142 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx903- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx903- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc54 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx906 -rootc54: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx907 -ROOTS143 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx909- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_34[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_34);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_34, sizeof(temp_buff_for_pLMNIdentity_34)); // change octetstring data here
    //end of hc-pLMNIdentity -idx909- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx911- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_8[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_8, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx911- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx907 NR-CGI -ROOTS143 ===*/

    #endif /*choice-ELEM 1 -idx906 -rootc54 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx912 -rootc54: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx913 -ROOTS144 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx915- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_35[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_35);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_35, sizeof(temp_buff_for_pLMNIdentity_35)); // change octetstring data here
    //end of hc-pLMNIdentity -idx915- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx917- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_8[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_8, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx917- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx913 EUTRA-CGI -ROOTS144 ===*/

    #endif /*choice-ELEM 2 -idx912 -rootc54 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc54 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx901 Cell-RNTI -ROOTS142 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB alias = -1
    /*=== END SEQUENCE -idx849 UEID-NG-ENB -ROOTS137 ===*/

    #endif /*choice-ELEM 4 -idx848 -rootc43 - UEID->UEID-NG-ENB */

    #if 0 //hc-choice-ELEM 5 -idx918 -rootc43: UEID->UEID-NG-ENB-DU - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.choice_type = E2AP_UEID_e2ap_NG_E_NB_DU_UEID;
    /*=== START SEQUENCE -idx919 -ROOTS145 UEID-NG-ENB-DU ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU alias = 6 -mandatory
    //hc-ng_eNB_CU_UE_W1AP_ID -idx921- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->NGENB-CU-UE-W1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_DU_UEID.ng_eNB_CU_UE_W1AP_ID = 2147483647;// change integer here
    //end of hc-ng_eNB_CU_UE_W1AP_ID -idx921- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_DU_UEID.bitmask |= E2AP_UEID_NG_ENB_DU_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx923 -ROOTS146 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx925- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_DU_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx925- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc55 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx928 -rootc55: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx929 -ROOTS147 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx931- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_36[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_36);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_36, sizeof(temp_buff_for_pLMNIdentity_36)); // change octetstring data here
    //end of hc-pLMNIdentity -idx931- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx933- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_9[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_9, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx933- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx929 NR-CGI -ROOTS147 ===*/

    #endif /*choice-ELEM 1 -idx928 -rootc55 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx934 -rootc55: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx935 -ROOTS148 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx937- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_37[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_37);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_37, sizeof(temp_buff_for_pLMNIdentity_37)); // change octetstring data here
    //end of hc-pLMNIdentity -idx937- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx939- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_9[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.ng_eNB_DU_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_9, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx939- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx935 EUTRA-CGI -ROOTS148 ===*/

    #endif /*choice-ELEM 2 -idx934 -rootc55 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc55 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx923 Cell-RNTI -ROOTS146 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU alias = -1
    /*=== END SEQUENCE -idx919 UEID-NG-ENB-DU -ROOTS145 ===*/

    #endif /*choice-ELEM 5 -idx918 -rootc43 - UEID->UEID-NG-ENB-DU */

    #if 0 //hc-choice-ELEM 6 -idx940 -rootc43: UEID->UEID-EN-GNB - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.choice_type = E2AP_UEID_e2ap_EN_G_NB_UEID;
    /*=== START SEQUENCE -idx941 -ROOTS149 UEID-EN-GNB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB alias = 6 -mandatory
    //hc-m_eNB_UE_X2AP_ID -idx943- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.m_eNB_UE_X2AP_ID = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID -idx943- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB alias = 5 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_M_E_NB_UE_X2AP_ID_EXTENSION_PRESENT;
    //hc-m_eNB_UE_X2AP_ID_Extension -idx945- alias primitive - pid = 5 - INTEGER - min:0 - max:4095  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID-Extension
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.m_eNB_UE_X2AP_ID_Extension = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID_Extension -idx945- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB alias = 5
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB alias = -1 -mandatory
    /*=== START SEQUENCE -idx947 -ROOTS150 GlobalENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GlobalENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx949- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GlobalENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_38[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.globalENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_38);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.globalENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_38, sizeof(temp_buff_for_pLMNIdentity_38)); // change octetstring data here
    //end of hc-pLMNIdentity -idx949- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GlobalENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GlobalENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc56 - ENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx952 -rootc56: ENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    //hc-macro_eNB_ID -idx953- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->macro-eNB-ID
    OSOCTET temp_buff_for_macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_2, 3);
    //end of hc-macro_eNB_ID -idx953- primitive
    #endif /*choice-ELEM 1 -idx952 -rootc56 - ENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx954 -rootc56: ENB-ID->BIT STRING (SIZE(28)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    //hc-home_eNB_ID -idx955- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->home-eNB-ID
    OSOCTET temp_buff_for_home_eNB_ID_2[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_2, 4);
    //end of hc-home_eNB_ID -idx955- primitive
    #endif /*choice-ELEM 2 -idx954 -rootc56 - ENB-ID->BIT STRING (SIZE(28)) */

    #if 0 //hc-choice-ELEM 3 -idx956 -rootc56: ENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    //hc-short_Macro_eNB_ID -idx957- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    OSOCTET temp_buff_for_short_Macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_2, 3);
    //end of hc-short_Macro_eNB_ID -idx957- primitive
    #endif /*choice-ELEM 3 -idx956 -rootc56 - ENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 4 -idx958 -rootc56: ENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    //hc-long_Macro_eNB_ID -idx959- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    OSOCTET temp_buff_for_long_Macro_eNB_ID_2[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_2, 3);
    //end of hc-long_Macro_eNB_ID -idx959- primitive
    #endif /*choice-ELEM 4 -idx958 -rootc56 - ENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc56 - ENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GlobalENB-ID alias = -1
    /*=== END SEQUENCE -idx947 GlobalENB-ID -ROOTS150 ===*/

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB alias = -1
    //hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB alias = 6 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_G_NB_CU_UE_F1AP_ID_PRESENT;
    //hc-gNB_CU_UE_F1AP_ID -idx961- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GNB-CU-UE-F1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.gNB_CU_UE_F1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_UE_F1AP_ID -idx961- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB alias = 6
    //hc-sequence-ELEM 5: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_G_NB_CU_CP_UE_E1AP_ID_LIST_PRESENT;
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item_count = 1;
    /*=== START SEQUENCE -idx963 -ROOTS151 UEID-GNB-CU-CP-E1AP-ID-Item ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6 -mandatory
    //hc-gNB_CU_CP_UE_E1AP_ID -idx965- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.gNB_CU_CP_UE_E1AP_ID_List.UEID_GNB_CU_CP_E1AP_ID_Item[0].gNB_CU_CP_UE_E1AP_ID = 2147483647;// change integer here
    //end of hc-gNB_CU_CP_UE_E1AP_ID -idx965- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item alias = 6
    /*=== END SEQUENCE -idx963 UEID-GNB-CU-CP-E1AP-ID-Item -ROOTS151 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB alias = 8 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_RAN_UEID_PRESENT;
    //hc-ran_UEID -idx967- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->RANUEID
    OSOCTET temp_buff_for_ran_UEID_7[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.ran_UEID.numocts = sizeof(temp_buff_for_ran_UEID_7);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.ran_UEID.data, temp_buff_for_ran_UEID_7, sizeof(temp_buff_for_ran_UEID_7)); // change octetstring data here
    //end of hc-ran_UEID -idx967- alias primitive

    //end of hc-sequence-ELEM 6: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB alias = 8
    //hc-sequence-ELEM 7: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.bitmask |= E2AP_UEID_EN_GNB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx969 -ROOTS152 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx971- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx971- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc57 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx974 -rootc57: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx975 -ROOTS153 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx977- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_39[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_39);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_39, sizeof(temp_buff_for_pLMNIdentity_39)); // change octetstring data here
    //end of hc-pLMNIdentity -idx977- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx979- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_10[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_10, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx979- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx975 NR-CGI -ROOTS153 ===*/

    #endif /*choice-ELEM 1 -idx974 -rootc57 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx980 -rootc57: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx981 -ROOTS154 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx983- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_40[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_40);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_40, sizeof(temp_buff_for_pLMNIdentity_40)); // change octetstring data here
    //end of hc-pLMNIdentity -idx983- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx985- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_10[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.en_gNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_10, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx985- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx981 EUTRA-CGI -ROOTS154 ===*/

    #endif /*choice-ELEM 2 -idx980 -rootc57 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc57 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx969 Cell-RNTI -ROOTS152 ===*/

    //end of hc-sequence-ELEM 7: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB alias = -1
    /*=== END SEQUENCE -idx941 UEID-EN-GNB -ROOTS149 ===*/

    #endif /*choice-ELEM 6 -idx940 -rootc43 - UEID->UEID-EN-GNB */

    #if 0 //hc-choice-ELEM 7 -idx986 -rootc43: UEID->UEID-ENB - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.choice_type = E2AP_UEID_e2ap_E_NB_UEID;
    /*=== START SEQUENCE -idx987 -ROOTS155 UEID-ENB ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB alias = 6 -mandatory
    //hc-mME_UE_S1AP_ID -idx989- alias primitive - pid = 6 - INTEGER - min:0 - max:4294967295  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->MME-UE-S1AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.mME_UE_S1AP_ID = 2147483647;// change integer here
    //end of hc-mME_UE_S1AP_ID -idx989- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB alias = -1 -mandatory
    /*=== START SEQUENCE -idx991 -ROOTS156 GUMMEI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-pLMN_Identity -idx993- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GUMMEI->PLMNIdentity
    OSOCTET temp_buff_for_pLMN_Identity_1[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.gUMMEI.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity_1);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.gUMMEI.pLMN_Identity.data, temp_buff_for_pLMN_Identity_1, sizeof(temp_buff_for_pLMN_Identity_1)); // change octetstring data here
    //end of hc-pLMN_Identity -idx993- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GUMMEI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-mME_Group_ID -idx995- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GUMMEI->MME-Group-ID
    OSOCTET temp_buff_for_mME_Group_ID_1[] = {0x01, 0x02}; // min =2 - max = 2 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.gUMMEI.mME_Group_ID.numocts = sizeof(temp_buff_for_mME_Group_ID_1);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.gUMMEI.mME_Group_ID.data, temp_buff_for_mME_Group_ID_1, sizeof(temp_buff_for_mME_Group_ID_1)); // change octetstring data here
    //end of hc-mME_Group_ID -idx995- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GUMMEI alias = 8
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GUMMEI alias = 8 -mandatory
    //hc-mME_Code -idx997- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GUMMEI->MME-Code
    OSOCTET temp_buff_for_mME_Code_1[] = {0x01}; // min =1 - max = 1 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.gUMMEI.mME_Code.numocts = sizeof(temp_buff_for_mME_Code_1);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.gUMMEI.mME_Code.data, temp_buff_for_mME_Code_1, sizeof(temp_buff_for_mME_Code_1)); // change octetstring data here
    //end of hc-mME_Code -idx997- alias primitive

    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GUMMEI alias = 8
    /*=== END SEQUENCE -idx991 GUMMEI -ROOTS156 ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB alias = -1
    //hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB alias = 6 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_M_E_NB_UE_X2AP_ID_PRESENT;
    //hc-m_eNB_UE_X2AP_ID -idx999- alias primitive - pid = 6 - INTEGER - min:0 - max:4095  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->ENB-UE-X2AP-ID
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.m_eNB_UE_X2AP_ID = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID -idx999- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB alias = 6
    //hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB alias = 5 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_M_E_NB_UE_X2AP_ID_EXTENSION_PRESENT;
    //hc-m_eNB_UE_X2AP_ID_Extension -idx1001- alias primitive - pid = 5 - INTEGER - min:0 - max:4095  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->ENB-UE-X2AP-ID-Extension
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.m_eNB_UE_X2AP_ID_Extension = 2047;// change integer here
    //end of hc-m_eNB_UE_X2AP_ID_Extension -idx1001- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB alias = 5
    //hc-sequence-ELEM 5: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_GLOBAL_ENB_ID_PRESENT;
    /*=== START SEQUENCE -idx1003 -ROOTS157 GlobalENB-ID ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GlobalENB-ID alias = 8 -mandatory
    //hc-pLMNIdentity -idx1005- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GlobalENB-ID->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_41[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.globalENB_ID.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_41);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.globalENB_ID.pLMNIdentity.data, temp_buff_for_pLMNIdentity_41, sizeof(temp_buff_for_pLMNIdentity_41)); // change octetstring data here
    //end of hc-pLMNIdentity -idx1005- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GlobalENB-ID alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GlobalENB-ID alias = -1 -mandatory
    /*=== START CHOICE -rootc58 - ENB-ID ===*/
    #if 1 //hc-choice-ELEM 1 -idx1008 -rootc58: ENB-ID->BIT_STRING_(SIZE(20)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    //hc-macro_eNB_ID -idx1009- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->macro-eNB-ID
    OSOCTET temp_buff_for_macro_eNB_ID_3[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.numbits = 20; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.globalENB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID_3, 3);
    //end of hc-macro_eNB_ID -idx1009- primitive
    #endif /*choice-ELEM 1 -idx1008 -rootc58 - ENB-ID->BIT STRING (SIZE(20)) */

    #if 0 //hc-choice-ELEM 2 -idx1010 -rootc58: ENB-ID->BIT STRING (SIZE(28)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    //hc-home_eNB_ID -idx1011- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->home-eNB-ID
    OSOCTET temp_buff_for_home_eNB_ID_3[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.numbits = 28; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.globalENB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID_3, 4);
    //end of hc-home_eNB_ID -idx1011- primitive
    #endif /*choice-ELEM 2 -idx1010 -rootc58 - ENB-ID->BIT STRING (SIZE(28)) */

    #if 0 //hc-choice-ELEM 3 -idx1012 -rootc58: ENB-ID->BIT STRING (SIZE(18)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    //hc-short_Macro_eNB_ID -idx1013- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
    OSOCTET temp_buff_for_short_Macro_eNB_ID_3[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 18; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.globalENB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID_3, 3);
    //end of hc-short_Macro_eNB_ID -idx1013- primitive
    #endif /*choice-ELEM 3 -idx1012 -rootc58 - ENB-ID->BIT STRING (SIZE(18)) */

    #if 0 //hc-choice-ELEM 4 -idx1014 -rootc58: ENB-ID->BIT STRING (SIZE(21)) - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.globalENB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    //hc-long_Macro_eNB_ID -idx1015- primitive in scope - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
    OSOCTET temp_buff_for_long_Macro_eNB_ID_3[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 21; // change bitstring data here
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.globalENB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID_3, 3);
    //end of hc-long_Macro_eNB_ID -idx1015- primitive
    #endif /*choice-ELEM 4 -idx1014 -rootc58 - ENB-ID->BIT STRING (SIZE(21)) */

    /*=== END CHOICE -rootc58 - ENB-ID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GlobalENB-ID alias = -1
    /*=== END SEQUENCE -idx1003 GlobalENB-ID -ROOTS157 ===*/

    //end of hc-sequence-ELEM 5: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB alias = -1
    //hc-sequence-ELEM 6: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB alias = -1 -optional
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.bitmask |= E2AP_UEID_ENB_e2ap_CELL_RNTI_PRESENT;
    /*=== START SEQUENCE -idx1017 -ROOTS158 Cell-RNTI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI alias = 6 -mandatory
    //hc-c_RNTI -idx1019- alias primitive - pid = 6 - INTEGER - min:0 - max:65535  - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->RNTI-Value
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.cell_RNTI.c_RNTI = 32767;// change integer here
    //end of hc-c_RNTI -idx1019- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI alias = 6
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI alias = -1 -mandatory
    /*=== START CHOICE -rootc59 - CGI ===*/
    #if 1 //hc-choice-ELEM 1 -idx1022 -rootc59: CGI->NR_CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_N_R_CGI;
    /*=== START SEQUENCE -idx1023 -ROOTS159 NR-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx1025- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_42[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_42);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_42, sizeof(temp_buff_for_pLMNIdentity_42)); // change octetstring data here
    //end of hc-pLMNIdentity -idx1025- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 3 -mandatory
    //hc-nRCellIdentity -idx1027- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
    OSOCTET temp_buff_for_nRCellIdentity_11[] = {0x01, 0x02, 0x03, 0x04, 0x05}; // min =36 - max = 36 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.numbits = 36;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.nR_CGI.nRCellIdentity.data, temp_buff_for_nRCellIdentity_11, 5); // change bitstring data here
    //end of hc-nRCellIdentity -idx1027- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI alias = 3
    /*=== END SEQUENCE -idx1023 NR-CGI -ROOTS159 ===*/

    #endif /*choice-ELEM 1 -idx1022 -rootc59 - CGI->NR-CGI */

    #if 0 //hc-choice-ELEM 2 -idx1028 -rootc59: CGI->EUTRA-CGI - alias = -1
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.choice_type = E2AP_CGI_e2ap_E_UTRA_CGI;
    /*=== START SEQUENCE -idx1029 -ROOTS160 EUTRA-CGI ===*/
    //hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8 -mandatory
    //hc-pLMNIdentity -idx1031- alias primitive - pid = 8 - OCTET STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
    OSOCTET temp_buff_for_pLMNIdentity_43[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.numocts = sizeof(temp_buff_for_pLMNIdentity_43);
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.pLMNIdentity.data, temp_buff_for_pLMNIdentity_43, sizeof(temp_buff_for_pLMNIdentity_43)); // change octetstring data here
    //end of hc-pLMNIdentity -idx1031- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 8
    //hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3 -mandatory
    //hc-eUTRACellIdentity -idx1033- alias primitive - pid = 3 - BIT STRING - E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
    OSOCTET temp_buff_for_eUTRACellIdentity_11[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits change bitstring data here
    p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.numbits = 28;
    XNAP_MEMCPY(p_E2SM_RC_ActionDefinition->ric_actionDefinition_formats.actionDefinition_Format4.ueID.eNB_UEID.cell_RNTI.cell_Global_ID.eUTRA_CGI.eUTRACellIdentity.data, temp_buff_for_eUTRACellIdentity_11, 4); // change bitstring data here
    //end of hc-eUTRACellIdentity -idx1033- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI alias = 3
    /*=== END SEQUENCE -idx1029 EUTRA-CGI -ROOTS160 ===*/

    #endif /*choice-ELEM 2 -idx1028 -rootc59 - CGI->EUTRA-CGI */

    /*=== END CHOICE -rootc59 - CGI ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI alias = -1
    /*=== END SEQUENCE -idx1017 Cell-RNTI -ROOTS158 ===*/

    //end of hc-sequence-ELEM 6: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB alias = -1
    /*=== END SEQUENCE -idx987 UEID-ENB -ROOTS155 ===*/

    #endif /*choice-ELEM 7 -idx986 -rootc43 - UEID->UEID-ENB */

    /*=== END CHOICE -rootc43 - UEID ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4 alias = -1
    /*=== END SEQUENCE -idx665 E2SM-RC-ActionDefinition-Format4 -ROOTS103 ===*/

    #endif /*choice-ELEM 4 -idx664 -rootc1 - E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4 */

    /*=== END CHOICE -rootc1 - E2SM-RC-ActionDefinition-ric-actionDefinition-formats ===*/

    //end of hc-sequence-ELEM 2: E2SM-RC-ActionDefinition alias = -1
    /*=== END SEQUENCE -idx1 E2SM-RC-ActionDefinition -ROOTS1 ===*/

    return XNAP_SUCCESS;
}
/*
E2SM-RC-ActionDefinition : (E2SM-RC-ActionDefinition) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition
    ric-Style-Type : (RIC-Style-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->RIC-Style-Type
    ric-actionDefinition-formats : (E2SM-RC-ActionDefinition-ric-actionDefinition-formats) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats
        actionDefinition-Format1 : (E2SM-RC-ActionDefinition-Format1) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1
            ranP-ToBeReported-List : (E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List
                E2SM-RC-ActionDefinition-Format1-Item : (E2SM-RC-ActionDefinition-Format1-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item
                    ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-ID
                    ranParameter-Definition : (RANParameter-Definition) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition
                        ranParameter-Definition-Choice : (RANParameter-Definition-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice
                            choiceLIST : (RANParameter-Definition-Choice-LIST) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST
                                ranParameter-List : (RANParameter-Definition-Choice-LIST-ranParameter-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List
                                    RANParameter-Definition-Choice-LIST-Item : (RANParameter-Definition-Choice-LIST-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item
                                        ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-ID
                                        ranParameter-name : (RANParameter-Name) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Name
                                        ranParameter-Definition : (RANParameter-Definition) 					---- (RECURSIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition
                            choiceSTRUCTURE : (RANParameter-Definition-Choice-STRUCTURE) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE
                                ranParameter-STRUCTURE : (RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE
                                    RANParameter-Definition-Choice-STRUCTURE-Item : (RANParameter-Definition-Choice-STRUCTURE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item
                                        ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-ID
                                        ranParameter-name : (RANParameter-Name) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Name
                                        ranParameter-Definition : (RANParameter-Definition) 					---- (RECURSIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format1->E2SM-RC-ActionDefinition-Format1-ranP-ToBeReported-List->E2SM-RC-ActionDefinition-Format1-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition
        actionDefinition-Format2 : (E2SM-RC-ActionDefinition-Format2) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2
            ric-PolicyConditions-List : (E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List
                E2SM-RC-ActionDefinition-Format2-Item : (E2SM-RC-ActionDefinition-Format2-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item
                    ric-PolicyAction : (RIC-PolicyAction) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction
                        ric-PolicyAction-ID : (RIC-ControlAction-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-ControlAction-ID
                        ranParameters-List : (RIC-PolicyAction-ranParameters-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List
                            RIC-PolicyAction-RANParameter-Item : (RIC-PolicyAction-RANParameter-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item
                                ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ID
                                ranParameter-valueType : (RANParameter-ValueType) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType
                                    ranP-Choice-ElementTrue : (RANParameter-ValueType-Choice-ElementTrue) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue
                                        ranParameter-value : (RANParameter-Value) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value
                                            valueBoolean : (valueBoolean) 					---- (BOOLEAN) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBoolean
                                            valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueInt
                                            valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueReal
                                            valueBitS : (valueBitS) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueBitS
                                            valueOctS : (valueOctS) 					---- (OCTET STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valueOctS
                                            valuePrintableString : (valuePrintableString) 					---- (PrintableString) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementTrue->RANParameter-Value->valuePrintableString
                                    ranP-Choice-ElementFalse : (RANParameter-ValueType-Choice-ElementFalse) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse
                                        ranParameter-value : (RANParameter-Value) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value
                                            valueBoolean : (valueBoolean) 					---- (BOOLEAN) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBoolean
                                            valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueInt
                                            valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueReal
                                            valueBitS : (valueBitS) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueBitS
                                            valueOctS : (valueOctS) 					---- (OCTET STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valueOctS
                                            valuePrintableString : (valuePrintableString) 					---- (PrintableString) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-ElementFalse->RANParameter-Value->valuePrintableString
                                    ranP-Choice-Structure : (RANParameter-ValueType-Choice-Structure) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure
                                        ranParameter-Structure : (RANParameter-STRUCTURE) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE
                                            sequence-of-ranParameters : (RANParameter-STRUCTURE-sequence-of-ranParameters) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters
                                                RANParameter-STRUCTURE-Item : (RANParameter-STRUCTURE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item
                                                    ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
                                                    ranParameter-valueType : (RANParameter-ValueType) 					---- (RECURSIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-Structure->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ValueType
                                    ranP-Choice-List : (RANParameter-ValueType-Choice-List) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List
                                        ranParameter-List : (RANParameter-LIST) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST
                                            list-of-ranParameter : (RANParameter-LIST-list-of-ranParameter) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter
                                                RANParameter-STRUCTURE : (RANParameter-STRUCTURE) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE
                                                    sequence-of-ranParameters : (RANParameter-STRUCTURE-sequence-of-ranParameters) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters
                                                        RANParameter-STRUCTURE-Item : (RANParameter-STRUCTURE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item
                                                            ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ID
                                                            ranParameter-valueType : (RANParameter-ValueType) 					---- (RECURSIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->RIC-PolicyAction-ranParameters-List->RIC-PolicyAction-RANParameter-Item->RANParameter-ValueType->RANParameter-ValueType-Choice-List->RANParameter-LIST->RANParameter-LIST-list-of-ranParameter->RANParameter-STRUCTURE->RANParameter-STRUCTURE-sequence-of-ranParameters->RANParameter-STRUCTURE-Item->RANParameter-ValueType
                        ric-PolicyDecision : (ric-PolicyDecision) 					---- (ENUMERATED) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RIC-PolicyAction->ric-PolicyDecision
                    ric-PolicyConditionDefinition : (RANParameter-Testing) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing
                        RANParameter-Testing-Item : (RANParameter-Testing-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item
                            ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-ID
                            ranParameter-Type : (RANParameter-Testing-Item-ranParameter-Type) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type
                                ranP-Choice-List : (RANParameter-Testing-Item-Choice-List) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List
                                    ranParameter-List : (RANParameter-Testing-LIST) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST
                                        RANParameter-Testing-Item : (RANParameter-Testing-Item) 					---- (RECURSIVE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-List->RANParameter-Testing-LIST->RANParameter-Testing-Item
                                ranP-Choice-Structure : (RANParameter-Testing-Item-Choice-Structure) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure
                                    ranParameter-Structure : (RANParameter-Testing-STRUCTURE) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE
                                        RANParameter-Testing-Item : (RANParameter-Testing-Item) 					---- (RECURSIVE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-Structure->RANParameter-Testing-STRUCTURE->RANParameter-Testing-Item
                                ranP-Choice-ElementTrue : (RANParameter-Testing-Item-Choice-ElementTrue) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue
                                    ranParameter-value : (RANParameter-Value) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value
                                        valueBoolean : (valueBoolean) 					---- (BOOLEAN) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueBoolean
                                        valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueInt
                                        valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueReal
                                        valueBitS : (valueBitS) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueBitS
                                        valueOctS : (valueOctS) 					---- (OCTET STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valueOctS
                                        valuePrintableString : (valuePrintableString) 					---- (PrintableString) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementTrue->RANParameter-Value->valuePrintableString
                                ranP-Choice-ElementFalse : (RANParameter-Testing-Item-Choice-ElementFalse) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse
                                    ranParameter-TestCondition : (RANParameter-TestingCondition) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-TestingCondition
                                        ranP-Choice-comparison : (ranP-Choice-comparison) 					---- (ENUMERATED) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-TestingCondition->ranP-Choice-comparison
                                        ranP-Choice-presence : (ranP-Choice-presence) 					---- (ENUMERATED) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-TestingCondition->ranP-Choice-presence
                                    ranParameter-Value : (RANParameter-Value) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value
                                        valueBoolean : (valueBoolean) 					---- (BOOLEAN) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueBoolean
                                        valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueInt
                                        valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueReal
                                        valueBitS : (valueBitS) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueBitS
                                        valueOctS : (valueOctS) 					---- (OCTET STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valueOctS
                                        valuePrintableString : (valuePrintableString) 					---- (PrintableString) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->RANParameter-Value->valuePrintableString
                                    logicalOR : (LogicalOR) 					---- (PRIMITIVE_OR_EXTERNAL) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->RANParameter-Testing->RANParameter-Testing-Item->RANParameter-Testing-Item-ranParameter-Type->RANParameter-Testing-Item-Choice-ElementFalse->LogicalOR
                    ric-PolicyConditionID : (Ric-PolicyConditionID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format2->E2SM-RC-ActionDefinition-Format2-ric-PolicyConditions-List->E2SM-RC-ActionDefinition-Format2-Item->Ric-PolicyConditionID
        actionDefinition-Format3 : (E2SM-RC-ActionDefinition-Format3) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3
            ric-InsertIndication-ID : (RIC-InsertIndication-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->RIC-InsertIndication-ID
            ranP-InsertIndication-List : (E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List
                E2SM-RC-ActionDefinition-Format3-Item : (E2SM-RC-ActionDefinition-Format3-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item
                    ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-ID
                    ranParameter-Definition : (RANParameter-Definition) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition
                        ranParameter-Definition-Choice : (RANParameter-Definition-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice
                            choiceLIST : (RANParameter-Definition-Choice-LIST) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST
                                ranParameter-List : (RANParameter-Definition-Choice-LIST-ranParameter-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List
                                    RANParameter-Definition-Choice-LIST-Item : (RANParameter-Definition-Choice-LIST-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item
                                        ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-ID
                                        ranParameter-name : (RANParameter-Name) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Name
                                        ranParameter-Definition : (RANParameter-Definition) 					---- (RECURSIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition
                            choiceSTRUCTURE : (RANParameter-Definition-Choice-STRUCTURE) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE
                                ranParameter-STRUCTURE : (RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE
                                    RANParameter-Definition-Choice-STRUCTURE-Item : (RANParameter-Definition-Choice-STRUCTURE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item
                                        ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-ID
                                        ranParameter-name : (RANParameter-Name) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Name
                                        ranParameter-Definition : (RANParameter-Definition) 					---- (RECURSIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->E2SM-RC-ActionDefinition-Format3-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format3-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition
            ueID : (UEID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID
                gNB-UEID : (UEID-GNB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB
                    amf-UE-NGAP-ID : (AMF-UE-NGAP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->AMF-UE-NGAP-ID
                    guami : (GUAMI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GUAMI
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GUAMI->PLMNIdentity
                        aMFRegionID : (AMFRegionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GUAMI->AMFRegionID
                        aMFSetID : (AMFSetID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GUAMI->AMFSetID
                        aMFPointer : (AMFPointer) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GUAMI->AMFPointer
                    gNB-CU-UE-F1AP-ID-List : (UEID-GNB-CU-F1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List
                        UEID-GNB-CU-CP-F1AP-ID-Item : (UEID-GNB-CU-CP-F1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item
                            gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item->GNB-CU-UE-F1AP-ID
                    gNB-CU-CP-UE-E1AP-ID-List : (UEID-GNB-CU-CP-E1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List
                        UEID-GNB-CU-CP-E1AP-ID-Item : (UEID-GNB-CU-CP-E1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item
                            gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->RANUEID
                    m-NG-RAN-UE-XnAP-ID : (NG-RANnodeUEXnAPID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->NG-RANnodeUEXnAPID
                    globalGNB-ID : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalGNB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalGNB-ID->PLMNIdentity
                        gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID
                            gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID->gNB-ID
                    globalNG-RANNode-ID : (GlobalNGRANNodeID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID
                        gNB : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
                            gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID
                                gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
                        ng-eNB : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
                            ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID
                                macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                                shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                                longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                gNB-DU-UEID : (UEID-GNB-DU) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU
                    gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->GNB-CU-UE-F1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->RANUEID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                gNB-CU-UP-UEID : (UEID-GNB-CU-UP) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-CU-UP
                    gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-CU-UP->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-GNB-CU-UP->RANUEID
                ng-eNB-UEID : (UEID-NG-ENB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB
                    amf-UE-NGAP-ID : (AMF-UE-NGAP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->AMF-UE-NGAP-ID
                    guami : (GUAMI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GUAMI
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GUAMI->PLMNIdentity
                        aMFRegionID : (AMFRegionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GUAMI->AMFRegionID
                        aMFSetID : (AMFSetID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GUAMI->AMFSetID
                        aMFPointer : (AMFPointer) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GUAMI->AMFPointer
                    ng-eNB-CU-UE-W1AP-ID : (NGENB-CU-UE-W1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->NGENB-CU-UE-W1AP-ID
                    m-NG-RAN-UE-XnAP-ID : (NG-RANnodeUEXnAPID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->NG-RANnodeUEXnAPID
                    globalNgENB-ID : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->PLMNIdentity
                        ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID
                            macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                            shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                            longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    globalNG-RANNode-ID : (GlobalNGRANNodeID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID
                        gNB : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
                            gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID
                                gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
                        ng-eNB : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
                            ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID
                                macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                                shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                                longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                ng-eNB-DU-UEID : (UEID-NG-ENB-DU) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU
                    ng-eNB-CU-UE-W1AP-ID : (NGENB-CU-UE-W1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->NGENB-CU-UE-W1AP-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                en-gNB-UEID : (UEID-EN-GNB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB
                    m-eNB-UE-X2AP-ID : (ENB-UE-X2AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID
                    m-eNB-UE-X2AP-ID-Extension : (ENB-UE-X2AP-ID-Extension) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID-Extension
                    globalENB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GlobalENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->PLMNIdentity
                        eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID
                            macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->macro-eNB-ID
                            home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->home-eNB-ID
                            short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                            long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                    gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->GNB-CU-UE-F1AP-ID
                    gNB-CU-CP-UE-E1AP-ID-List : (UEID-GNB-CU-CP-E1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List
                        UEID-GNB-CU-CP-E1AP-ID-Item : (UEID-GNB-CU-CP-E1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item
                            gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->RANUEID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                eNB-UEID : (UEID-ENB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB
                    mME-UE-S1AP-ID : (MME-UE-S1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->MME-UE-S1AP-ID
                    gUMMEI : (GUMMEI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GUMMEI
                        pLMN-Identity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GUMMEI->PLMNIdentity
                        mME-Group-ID : (MME-Group-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GUMMEI->MME-Group-ID
                        mME-Code : (MME-Code) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GUMMEI->MME-Code
                    m-eNB-UE-X2AP-ID : (ENB-UE-X2AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->ENB-UE-X2AP-ID
                    m-eNB-UE-X2AP-ID-Extension : (ENB-UE-X2AP-ID-Extension) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->ENB-UE-X2AP-ID-Extension
                    globalENB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GlobalENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GlobalENB-ID->PLMNIdentity
                        eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID
                            macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->macro-eNB-ID
                            home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->home-eNB-ID
                            short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                            long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format3->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
        actionDefinition-Format4 : (E2SM-RC-ActionDefinition-Format4) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4
            ric-InsertStyle-List : (E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List
                E2SM-RC-ActionDefinition-Format4-Style-Item : (E2SM-RC-ActionDefinition-Format4-Style-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item
                    requested-Insert-Style-Type : (RIC-Style-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->RIC-Style-Type
                    ric-InsertIndication-List : (E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List
                        E2SM-RC-ActionDefinition-Format4-Indication-Item : (E2SM-RC-ActionDefinition-Format4-Indication-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item
                            ric-InsertIndication-ID : (RIC-InsertIndication-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->RIC-InsertIndication-ID
                            ranP-InsertIndication-List : (E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List
                                E2SM-RC-ActionDefinition-Format4-RANP-Item : (E2SM-RC-ActionDefinition-Format4-RANP-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item
                                    ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-ID
                                    ranParameter-Definition : (RANParameter-Definition) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition
                                        ranParameter-Definition-Choice : (RANParameter-Definition-Choice) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice
                                            choiceLIST : (RANParameter-Definition-Choice-LIST) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST
                                                ranParameter-List : (RANParameter-Definition-Choice-LIST-ranParameter-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List
                                                    RANParameter-Definition-Choice-LIST-Item : (RANParameter-Definition-Choice-LIST-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item
                                                        ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-ID
                                                        ranParameter-name : (RANParameter-Name) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Name
                                                        ranParameter-Definition : (RANParameter-Definition) 					---- (RECURSIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-LIST->RANParameter-Definition-Choice-LIST-ranParameter-List->RANParameter-Definition-Choice-LIST-Item->RANParameter-Definition
                                            choiceSTRUCTURE : (RANParameter-Definition-Choice-STRUCTURE) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE
                                                ranParameter-STRUCTURE : (RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE
                                                    RANParameter-Definition-Choice-STRUCTURE-Item : (RANParameter-Definition-Choice-STRUCTURE-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item
                                                        ranParameter-ID : (RANParameter-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-ID
                                                        ranParameter-name : (RANParameter-Name) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Name
                                                        ranParameter-Definition : (RANParameter-Definition) 					---- (RECURSIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->E2SM-RC-ActionDefinition-Format4-ric-InsertStyle-List->E2SM-RC-ActionDefinition-Format4-Style-Item->E2SM-RC-ActionDefinition-Format4-Style-Item-ric-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-Indication-Item->E2SM-RC-ActionDefinition-Format4-Indication-Item-ranP-InsertIndication-List->E2SM-RC-ActionDefinition-Format4-RANP-Item->RANParameter-Definition->RANParameter-Definition-Choice->RANParameter-Definition-Choice-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-ranParameter-STRUCTURE->RANParameter-Definition-Choice-STRUCTURE-Item->RANParameter-Definition
            ueID : (UEID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID
                gNB-UEID : (UEID-GNB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB
                    amf-UE-NGAP-ID : (AMF-UE-NGAP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->AMF-UE-NGAP-ID
                    guami : (GUAMI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GUAMI
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GUAMI->PLMNIdentity
                        aMFRegionID : (AMFRegionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GUAMI->AMFRegionID
                        aMFSetID : (AMFSetID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GUAMI->AMFSetID
                        aMFPointer : (AMFPointer) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GUAMI->AMFPointer
                    gNB-CU-UE-F1AP-ID-List : (UEID-GNB-CU-F1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List
                        UEID-GNB-CU-CP-F1AP-ID-Item : (UEID-GNB-CU-CP-F1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item
                            gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->UEID-GNB-CU-F1AP-ID-List->UEID-GNB-CU-CP-F1AP-ID-Item->GNB-CU-UE-F1AP-ID
                    gNB-CU-CP-UE-E1AP-ID-List : (UEID-GNB-CU-CP-E1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List
                        UEID-GNB-CU-CP-E1AP-ID-Item : (UEID-GNB-CU-CP-E1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item
                            gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->RANUEID
                    m-NG-RAN-UE-XnAP-ID : (NG-RANnodeUEXnAPID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->NG-RANnodeUEXnAPID
                    globalGNB-ID : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalGNB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalGNB-ID->PLMNIdentity
                        gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID
                            gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalGNB-ID->GNB-ID->gNB-ID
                    globalNG-RANNode-ID : (GlobalNGRANNodeID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID
                        gNB : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
                            gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID
                                gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
                        ng-eNB : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
                            ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID
                                macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                                shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                                longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                gNB-DU-UEID : (UEID-GNB-DU) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU
                    gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->GNB-CU-UE-F1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->RANUEID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                gNB-CU-UP-UEID : (UEID-GNB-CU-UP) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-CU-UP
                    gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-CU-UP->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-GNB-CU-UP->RANUEID
                ng-eNB-UEID : (UEID-NG-ENB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB
                    amf-UE-NGAP-ID : (AMF-UE-NGAP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->AMF-UE-NGAP-ID
                    guami : (GUAMI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GUAMI
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GUAMI->PLMNIdentity
                        aMFRegionID : (AMFRegionID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GUAMI->AMFRegionID
                        aMFSetID : (AMFSetID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GUAMI->AMFSetID
                        aMFPointer : (AMFPointer) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GUAMI->AMFPointer
                    ng-eNB-CU-UE-W1AP-ID : (NGENB-CU-UE-W1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->NGENB-CU-UE-W1AP-ID
                    m-NG-RAN-UE-XnAP-ID : (NG-RANnodeUEXnAPID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->NG-RANnodeUEXnAPID
                    globalNgENB-ID : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNgENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNgENB-ID->PLMNIdentity
                        ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID
                            macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                            shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                            longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    globalNG-RANNode-ID : (GlobalNGRANNodeID) 					---- (CHOICE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID
                        gNB : (GlobalGNB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->PLMNIdentity
                            gNB-ID : (GNB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID
                                gNB-ID : (gNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalGNB-ID->GNB-ID->gNB-ID
                        ng-eNB : (GlobalNgENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID
                            pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->PLMNIdentity
                            ngENB-ID : (NgENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID
                                macroNgENB-ID : (macroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->macroNgENB-ID
                                shortMacroNgENB-ID : (shortMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->shortMacroNgENB-ID
                                longMacroNgENB-ID : (longMacroNgENB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->GlobalNGRANNodeID->GlobalNgENB-ID->NgENB-ID->longMacroNgENB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                ng-eNB-DU-UEID : (UEID-NG-ENB-DU) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU
                    ng-eNB-CU-UE-W1AP-ID : (NGENB-CU-UE-W1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->NGENB-CU-UE-W1AP-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-NG-ENB-DU->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                en-gNB-UEID : (UEID-EN-GNB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB
                    m-eNB-UE-X2AP-ID : (ENB-UE-X2AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID
                    m-eNB-UE-X2AP-ID-Extension : (ENB-UE-X2AP-ID-Extension) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->ENB-UE-X2AP-ID-Extension
                    globalENB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GlobalENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GlobalENB-ID->PLMNIdentity
                        eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID
                            macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->macro-eNB-ID
                            home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->home-eNB-ID
                            short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                            long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                    gNB-CU-UE-F1AP-ID : (GNB-CU-UE-F1AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->GNB-CU-UE-F1AP-ID
                    gNB-CU-CP-UE-E1AP-ID-List : (UEID-GNB-CU-CP-E1AP-ID-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List
                        UEID-GNB-CU-CP-E1AP-ID-Item : (UEID-GNB-CU-CP-E1AP-ID-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item
                            gNB-CU-CP-UE-E1AP-ID : (GNB-CU-CP-UE-E1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->UEID-GNB-CU-CP-E1AP-ID-List->UEID-GNB-CU-CP-E1AP-ID-Item->GNB-CU-CP-UE-E1AP-ID
                    ran-UEID : (RANUEID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->RANUEID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-EN-GNB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity
                eNB-UEID : (UEID-ENB) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB
                    mME-UE-S1AP-ID : (MME-UE-S1AP-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->MME-UE-S1AP-ID
                    gUMMEI : (GUMMEI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GUMMEI
                        pLMN-Identity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GUMMEI->PLMNIdentity
                        mME-Group-ID : (MME-Group-ID) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GUMMEI->MME-Group-ID
                        mME-Code : (MME-Code) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GUMMEI->MME-Code
                    m-eNB-UE-X2AP-ID : (ENB-UE-X2AP-ID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->ENB-UE-X2AP-ID
                    m-eNB-UE-X2AP-ID-Extension : (ENB-UE-X2AP-ID-Extension) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->ENB-UE-X2AP-ID-Extension
                    globalENB-ID : (GlobalENB-ID) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GlobalENB-ID
                        pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GlobalENB-ID->PLMNIdentity
                        eNB-ID : (ENB-ID) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GlobalENB-ID->ENB-ID
                            macro-eNB-ID : (macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->macro-eNB-ID
                            home-eNB-ID : (home-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->home-eNB-ID
                            short-Macro-eNB-ID : (short-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->short-Macro-eNB-ID
                            long-Macro-eNB-ID : (long-Macro-eNB-ID) 					---- (BIT STRING) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->GlobalENB-ID->ENB-ID->long-Macro-eNB-ID
                    cell-RNTI : (Cell-RNTI) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI
                        c-RNTI : (RNTI-Value) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->RNTI-Value
                        cell-Global-ID : (CGI) 					---- (CHOICE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI
                            nR-CGI : (NR-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->PLMNIdentity
                                nRCellIdentity : (NRCellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->NR-CGI->NRCellIdentity
                            eUTRA-CGI : (EUTRA-CGI) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI
                                pLMNIdentity : (PLMNIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->PLMNIdentity
                                eUTRACellIdentity : (EUTRACellIdentity) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-RC-ActionDefinition->E2SM-RC-ActionDefinition-ric-actionDefinition-formats->E2SM-RC-ActionDefinition-Format4->UEID->UEID-ENB->Cell-RNTI->CGI->EUTRA-CGI->EUTRACellIdentity

RECURSION LIST:[]
RECURSION MARK LIST:{'RANParameter-Definition', 'RANParameter-Testing-Item', 'RANParameter-ValueType'}
*/
#endif // ASSIGN_HARDCODE_E2SM_RC_ACTION_DEFINITION_H

