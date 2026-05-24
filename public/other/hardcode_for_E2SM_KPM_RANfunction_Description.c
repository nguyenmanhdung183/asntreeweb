#ifndef ASSIGN_HARDCODE_E2SM_KPM_RANFUNCTION_DESCRIPTION_H
#define ASSIGN_HARDCODE_E2SM_KPM_RANFUNCTION_DESCRIPTION_H
#include<stdio.h>
#include"output_main.h"
#include "MAIN_STRUCT.h"

xnap_return_et assign_hardcode_value_E2SM_KPM_RANfunction_Description(_e2ap_E2SM_KPM_RANfunction_Description_t* p_E2SM_KPM_RANfunction_Description)
{
    /*=== START SEQUENCE -idx1 -ROOTS1 E2SM-KPM-RANfunction-Description ===*/
    //hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description alias = -1 -mandatory
    /*=== START SEQUENCE -idx3 -ROOTS2 RANfunction-Name ===*/
    //hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->RANfunction-Name alias = -1 -mandatory
    //hc-ranFunction_ShortName -idx5- primitive in scope - pid = 10 Printable STRING - E2SM-KPM-RANfunction-Description->RANfunction-Name->ranFunction-ShortName
    p_E2SM_KPM_RANfunction_Description->ranFunction_Name.ranFunction_ShortName = "hardcode string valueu"; // change printable string here
    //end of hc-ranFunction_ShortName -idx5- primitive

    //end of hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->RANfunction-Name alias = -1
    //hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->RANfunction-Name alias = -1 -mandatory
    //hc-ranFunction_E2SM_OID -idx7- primitive in scope - pid = 10 Printable STRING - E2SM-KPM-RANfunction-Description->RANfunction-Name->ranFunction-E2SM-OID
    p_E2SM_KPM_RANfunction_Description->ranFunction_Name.ranFunction_E2SM_OID = "1.3.6.1.4.1.53148.1.2.2.2"; // change printable string here
    //end of hc-ranFunction_E2SM_OID -idx7- primitive

    //end of hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->RANfunction-Name alias = -1
    //hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->RANfunction-Name alias = -1 -mandatory
    //hc-ranFunction_Description -idx9- primitive in scope - pid = 10 Printable STRING - E2SM-KPM-RANfunction-Description->RANfunction-Name->ranFunction-Description
    p_E2SM_KPM_RANfunction_Description->ranFunction_Name.ranFunction_Description = "hardcode string valueu"; // change printable string here
    //end of hc-ranFunction_Description -idx9- primitive

    //end of hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->RANfunction-Name alias = -1
    //hc-sequence-ELEM 4: E2SM-KPM-RANfunction-Description->RANfunction-Name alias = -1 -optional
    p_E2SM_KPM_RANfunction_Description->ranFunction_Name.bitmask |= E2AP_RANFUNCTION_NAME_e2ap_RAN_FUNCTION_INSTANCE_PRESENT;
    //hc-ranFunction_Instance -idx11 - primitive in scope - pid = 15 - INTEGER  - E2SM-KPM-RANfunction-Description->RANfunction-Name->ranFunction-Instance
    p_E2SM_KPM_RANfunction_Description->ranFunction_Name.ranFunction_Instance = 875; // change integer here
    //end of hc-ranFunction_Instance -idx11- primitive

    //end of hc-sequence-ELEM 4: E2SM-KPM-RANfunction-Description->RANfunction-Name alias = -1
    /*=== END SEQUENCE -idx3 RANfunction-Name -ROOTS2 ===*/

    //end of hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description alias = -1
    //hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description alias = -1 -optional
    p_E2SM_KPM_RANfunction_Description->bitmask |= E2AP_E2SM_KPM_RANFUNCTION_DESCRIPTION_e2ap_RIC_EVENT_TRIGGER_STYLE_LIST_PRESENT;
    p_E2SM_KPM_RANfunction_Description->ric_EventTriggerStyle_List.RIC_EventTriggerStyle_Item_count = 1;
    /*=== START SEQUENCE -idx13 -ROOTS3 RIC-EventTriggerStyle-Item ===*/
    //hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-EventTriggerStyle-List->RIC-EventTriggerStyle-Item alias = 15 -mandatory
    //hc-ric_EventTriggerStyle_Type -idx15- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-EventTriggerStyle-List->RIC-EventTriggerStyle-Item->RIC-Style-Type
    p_E2SM_KPM_RANfunction_Description->ric_EventTriggerStyle_List.RIC_EventTriggerStyle_Item[0].ric_EventTriggerStyle_Type = 875;// change integer here
    //end of hc-ric_EventTriggerStyle_Type -idx15- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-EventTriggerStyle-List->RIC-EventTriggerStyle-Item alias = 15
    //hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-EventTriggerStyle-List->RIC-EventTriggerStyle-Item alias = 10 -mandatory
    //hc-ric_EventTriggerStyle_Name -idx17- alias primitive - pid = 10 PrintableString - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-EventTriggerStyle-List->RIC-EventTriggerStyle-Item->RIC-Style-Name
    p_E2SM_KPM_RANfunction_Description->ric_EventTriggerStyle_List.RIC_EventTriggerStyle_Item[0].ric_EventTriggerStyle_Name =  "hardcode string valueu"; // change printable string here
    //end of hc-ric_EventTriggerStyle_Name -idx17- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-EventTriggerStyle-List->RIC-EventTriggerStyle-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-EventTriggerStyle-List->RIC-EventTriggerStyle-Item alias = 15 -mandatory
    //hc-ric_EventTriggerFormat_Type -idx19- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-EventTriggerStyle-List->RIC-EventTriggerStyle-Item->RIC-Format-Type
    p_E2SM_KPM_RANfunction_Description->ric_EventTriggerStyle_List.RIC_EventTriggerStyle_Item[0].ric_EventTriggerFormat_Type = 875;// change integer here
    //end of hc-ric_EventTriggerFormat_Type -idx19- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-EventTriggerStyle-List->RIC-EventTriggerStyle-Item alias = 15
    /*=== END SEQUENCE -idx13 RIC-EventTriggerStyle-Item -ROOTS3 ===*/

    //end of hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description alias = -1
    //hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description alias = -1 -optional
    p_E2SM_KPM_RANfunction_Description->bitmask |= E2AP_E2SM_KPM_RANFUNCTION_DESCRIPTION_e2ap_RIC_REPORT_STYLE_LIST_PRESENT;
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item_count = 1;
    /*=== START SEQUENCE -idx21 -ROOTS4 RIC-ReportStyle-Item ===*/
    //hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item alias = 15 -mandatory
    //hc-ric_ReportStyle_Type -idx23- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->RIC-Style-Type
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].ric_ReportStyle_Type = 875;// change integer here
    //end of hc-ric_ReportStyle_Type -idx23- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item alias = 15
    //hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item alias = 10 -mandatory
    //hc-ric_ReportStyle_Name -idx25- alias primitive - pid = 10 PrintableString - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->RIC-Style-Name
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].ric_ReportStyle_Name =  "hardcode string valueu"; // change printable string here
    //end of hc-ric_ReportStyle_Name -idx25- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item alias = 15 -mandatory
    //hc-ric_ActionFormat_Type -idx27- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->RIC-Format-Type
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].ric_ActionFormat_Type = 875;// change integer here
    //end of hc-ric_ActionFormat_Type -idx27- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item alias = 15
    //hc-sequence-ELEM 4: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item alias = -1 -mandatory
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item_count = 1;
    /*=== START SEQUENCE -idx29 -ROOTS5 MeasurementInfo-Action-Item ===*/
    //hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item alias = 10 -mandatory
    //hc-measName -idx31- alias primitive - pid = 10 PrintableString - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->MeasurementTypeName
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].measName =  "hardcode string valueu"; // change printable string here
    //end of hc-measName -idx31- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item alias = 10
    //hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item alias = 5 -optional
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].bitmask |= E2AP_MEASUREMENT_INFO_ACTION_ITEM_e2ap_MEAS_ID_PRESENT;
    //hc-measID -idx33- alias primitive - pid = 5 - INTEGER - min:1 - max:65536  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->MeasurementTypeID
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].measID = 32768;// change integer here
    //end of hc-measID -idx33- alias primitive
    //end of hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item alias = 5
    //hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item alias = -1 -optional
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].bitmask |= E2AP_MEASUREMENT_INFO_ACTION_ITEM_e2ap_BIN_RANGE_DEF_PRESENT;
    /*=== START SEQUENCE -idx35 -ROOTS6 BinRangeDefinition ===*/
    //hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition alias = -1 -mandatory
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListX.BinRangeItem_count = 1;
    /*=== START SEQUENCE -idx37 -ROOTS7 BinRangeItem ===*/
    //hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = 5 -mandatory
    //hc-binIndex -idx39- alias primitive - pid = 5 - INTEGER - min:1 - max:65535  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinIndex
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListX.BinRangeItem[0].binIndex = 32768;// change integer here
    //end of hc-binIndex -idx39- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = 5
    //hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = -1 -mandatory
    /*=== START CHOICE -rootc1 - BinRangeValue ===*/
    #if 1 //hc-choice-ELEM 1 -idx42 -rootc1: BinRangeValue->INTEGER - alias = -1
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListX.BinRangeItem[0].startValue.choice_type = E2AP_BIN_RANGE_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx43 - primitive in scope - pid = 15 - INTEGER  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueInt
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListX.BinRangeItem[0].startValue.valueInt = 875; // change integer here
    //end of hc-valueInt -idx43- primitive

    #endif /*choice-ELEM 1 -idx42 -rootc1 - BinRangeValue->INTEGER */

    #if 0 //hc-choice-ELEM 2 -idx44 -rootc1: BinRangeValue->REAL - alias = -1
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListX.BinRangeItem[0].startValue.choice_type = E2AP_BIN_RANGE_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx45- primitive in scope - pid = 17 REAL - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueReal
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListX.BinRangeItem[0].startValue.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx45- primitive

    #endif /*choice-ELEM 2 -idx44 -rootc1 - BinRangeValue->REAL */

    /*=== END CHOICE -rootc1 - BinRangeValue ===*/

    //end of hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = -1
    //hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = -1 -mandatory
    /*=== START CHOICE -rootc2 - BinRangeValue ===*/
    #if 1 //hc-choice-ELEM 1 -idx48 -rootc2: BinRangeValue->INTEGER - alias = -1
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListX.BinRangeItem[0].endValue.choice_type = E2AP_BIN_RANGE_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx49 - primitive in scope - pid = 15 - INTEGER  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueInt
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListX.BinRangeItem[0].endValue.valueInt = 875; // change integer here
    //end of hc-valueInt -idx49- primitive

    #endif /*choice-ELEM 1 -idx48 -rootc2 - BinRangeValue->INTEGER */

    #if 0 //hc-choice-ELEM 2 -idx50 -rootc2: BinRangeValue->REAL - alias = -1
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListX.BinRangeItem[0].endValue.choice_type = E2AP_BIN_RANGE_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx51- primitive in scope - pid = 17 REAL - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueReal
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListX.BinRangeItem[0].endValue.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx51- primitive

    #endif /*choice-ELEM 2 -idx50 -rootc2 - BinRangeValue->REAL */

    /*=== END CHOICE -rootc2 - BinRangeValue ===*/

    //end of hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = -1
    /*=== END SEQUENCE -idx37 BinRangeItem -ROOTS7 ===*/

    //end of hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition alias = -1
    //hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition alias = -1 -optional
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.bitmask |= E2AP_BIN_RANGE_DEFINITION_e2ap_BIN_RANGE_LIST_Y_PRESENT;
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListY.BinRangeItem_count = 1;
    /*=== START SEQUENCE -idx53 -ROOTS8 BinRangeItem ===*/
    //hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = 5 -mandatory
    //hc-binIndex -idx55- alias primitive - pid = 5 - INTEGER - min:1 - max:65535  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinIndex
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListY.BinRangeItem[0].binIndex = 32768;// change integer here
    //end of hc-binIndex -idx55- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = 5
    //hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = -1 -mandatory
    /*=== START CHOICE -rootc3 - BinRangeValue ===*/
    #if 1 //hc-choice-ELEM 1 -idx58 -rootc3: BinRangeValue->INTEGER - alias = -1
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListY.BinRangeItem[0].startValue.choice_type = E2AP_BIN_RANGE_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx59 - primitive in scope - pid = 15 - INTEGER  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueInt
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListY.BinRangeItem[0].startValue.valueInt = 875; // change integer here
    //end of hc-valueInt -idx59- primitive

    #endif /*choice-ELEM 1 -idx58 -rootc3 - BinRangeValue->INTEGER */

    #if 0 //hc-choice-ELEM 2 -idx60 -rootc3: BinRangeValue->REAL - alias = -1
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListY.BinRangeItem[0].startValue.choice_type = E2AP_BIN_RANGE_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx61- primitive in scope - pid = 17 REAL - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueReal
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListY.BinRangeItem[0].startValue.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx61- primitive

    #endif /*choice-ELEM 2 -idx60 -rootc3 - BinRangeValue->REAL */

    /*=== END CHOICE -rootc3 - BinRangeValue ===*/

    //end of hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = -1
    //hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = -1 -mandatory
    /*=== START CHOICE -rootc4 - BinRangeValue ===*/
    #if 1 //hc-choice-ELEM 1 -idx64 -rootc4: BinRangeValue->INTEGER - alias = -1
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListY.BinRangeItem[0].endValue.choice_type = E2AP_BIN_RANGE_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx65 - primitive in scope - pid = 15 - INTEGER  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueInt
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListY.BinRangeItem[0].endValue.valueInt = 875; // change integer here
    //end of hc-valueInt -idx65- primitive

    #endif /*choice-ELEM 1 -idx64 -rootc4 - BinRangeValue->INTEGER */

    #if 0 //hc-choice-ELEM 2 -idx66 -rootc4: BinRangeValue->REAL - alias = -1
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListY.BinRangeItem[0].endValue.choice_type = E2AP_BIN_RANGE_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx67- primitive in scope - pid = 17 REAL - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueReal
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListY.BinRangeItem[0].endValue.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx67- primitive

    #endif /*choice-ELEM 2 -idx66 -rootc4 - BinRangeValue->REAL */

    /*=== END CHOICE -rootc4 - BinRangeValue ===*/

    //end of hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = -1
    /*=== END SEQUENCE -idx53 BinRangeItem -ROOTS8 ===*/

    //end of hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition alias = -1
    //hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition alias = -1 -optional
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.bitmask |= E2AP_BIN_RANGE_DEFINITION_e2ap_BIN_RANGE_LIST_Z_PRESENT;
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListZ.BinRangeItem_count = 1;
    /*=== START SEQUENCE -idx69 -ROOTS9 BinRangeItem ===*/
    //hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = 5 -mandatory
    //hc-binIndex -idx71- alias primitive - pid = 5 - INTEGER - min:1 - max:65535  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinIndex
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListZ.BinRangeItem[0].binIndex = 32768;// change integer here
    //end of hc-binIndex -idx71- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = 5
    //hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = -1 -mandatory
    /*=== START CHOICE -rootc5 - BinRangeValue ===*/
    #if 1 //hc-choice-ELEM 1 -idx74 -rootc5: BinRangeValue->INTEGER - alias = -1
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListZ.BinRangeItem[0].startValue.choice_type = E2AP_BIN_RANGE_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx75 - primitive in scope - pid = 15 - INTEGER  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueInt
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListZ.BinRangeItem[0].startValue.valueInt = 875; // change integer here
    //end of hc-valueInt -idx75- primitive

    #endif /*choice-ELEM 1 -idx74 -rootc5 - BinRangeValue->INTEGER */

    #if 0 //hc-choice-ELEM 2 -idx76 -rootc5: BinRangeValue->REAL - alias = -1
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListZ.BinRangeItem[0].startValue.choice_type = E2AP_BIN_RANGE_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx77- primitive in scope - pid = 17 REAL - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueReal
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListZ.BinRangeItem[0].startValue.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx77- primitive

    #endif /*choice-ELEM 2 -idx76 -rootc5 - BinRangeValue->REAL */

    /*=== END CHOICE -rootc5 - BinRangeValue ===*/

    //end of hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = -1
    //hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = -1 -mandatory
    /*=== START CHOICE -rootc6 - BinRangeValue ===*/
    #if 1 //hc-choice-ELEM 1 -idx80 -rootc6: BinRangeValue->INTEGER - alias = -1
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListZ.BinRangeItem[0].endValue.choice_type = E2AP_BIN_RANGE_VALUE_e2ap_VALUE_INT;
    //hc-valueInt -idx81 - primitive in scope - pid = 15 - INTEGER  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueInt
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListZ.BinRangeItem[0].endValue.valueInt = 875; // change integer here
    //end of hc-valueInt -idx81- primitive

    #endif /*choice-ELEM 1 -idx80 -rootc6 - BinRangeValue->INTEGER */

    #if 0 //hc-choice-ELEM 2 -idx82 -rootc6: BinRangeValue->REAL - alias = -1
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListZ.BinRangeItem[0].endValue.choice_type = E2AP_BIN_RANGE_VALUE_e2ap_VALUE_REAL;
    //hc-valueReal -idx83- primitive in scope - pid = 17 REAL - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueReal
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].measInfo_Action_List.MeasurementInfo_Action_Item[0].binRangeDef.binRangeListZ.BinRangeItem[0].endValue.valueReal = 1.23; // change real value here
    //end of hc-valueReal -idx83- primitive

    #endif /*choice-ELEM 2 -idx82 -rootc6 - BinRangeValue->REAL */

    /*=== END CHOICE -rootc6 - BinRangeValue ===*/

    //end of hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem alias = -1
    /*=== END SEQUENCE -idx69 BinRangeItem -ROOTS9 ===*/

    //end of hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition alias = -1
    /*=== END SEQUENCE -idx35 BinRangeDefinition -ROOTS6 ===*/

    //end of hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item alias = -1
    /*=== END SEQUENCE -idx29 MeasurementInfo-Action-Item -ROOTS5 ===*/

    //end of hc-sequence-ELEM 4: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item alias = -1
    //hc-sequence-ELEM 5: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item alias = 15 -mandatory
    //hc-ric_IndicationHeaderFormat_Type -idx85- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->RIC-Format-Type
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].ric_IndicationHeaderFormat_Type = 875;// change integer here
    //end of hc-ric_IndicationHeaderFormat_Type -idx85- alias primitive
    //end of hc-sequence-ELEM 5: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item alias = 15
    //hc-sequence-ELEM 6: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item alias = 15 -mandatory
    //hc-ric_IndicationMessageFormat_Type -idx87- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->RIC-Format-Type
    p_E2SM_KPM_RANfunction_Description->ric_ReportStyle_List.RIC_ReportStyle_Item[0].ric_IndicationMessageFormat_Type = 875;// change integer here
    //end of hc-ric_IndicationMessageFormat_Type -idx87- alias primitive
    //end of hc-sequence-ELEM 6: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item alias = 15
    /*=== END SEQUENCE -idx21 RIC-ReportStyle-Item -ROOTS4 ===*/

    //end of hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description alias = -1
    //hc-sequence-ELEM 4: E2SM-KPM-RANfunction-Description alias = -1 -optional
    p_E2SM_KPM_RANfunction_Description->bitmask |= E2AP_E2SM_KPM_RANFUNCTION_DESCRIPTION_e2ap_RIC_INTEGRATED_REPORT_STYLE_LIST_PRESENT;
    p_E2SM_KPM_RANfunction_Description->ric_IntegratedReportStyle_List.RIC_IntegratedReportStyle_Item_count = 1;
    /*=== START SEQUENCE -idx89 -ROOTS10 RIC-IntegratedReportStyle-Item ===*/
    //hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item alias = 15 -mandatory
    //hc-ric_ReportStyle_Type -idx91- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->RIC-Style-Type
    p_E2SM_KPM_RANfunction_Description->ric_IntegratedReportStyle_List.RIC_IntegratedReportStyle_Item[0].ric_ReportStyle_Type = 875;// change integer here
    //end of hc-ric_ReportStyle_Type -idx91- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item alias = 15
    //hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item alias = 10 -mandatory
    //hc-ric_ReportStyle_Name -idx93- alias primitive - pid = 10 PrintableString - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->RIC-Style-Name
    p_E2SM_KPM_RANfunction_Description->ric_IntegratedReportStyle_List.RIC_IntegratedReportStyle_Item[0].ric_ReportStyle_Name =  "hardcode string valueu"; // change printable string here
    //end of hc-ric_ReportStyle_Name -idx93- alias primitive

    //end of hc-sequence-ELEM 2: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item alias = 10
    //hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item alias = 15 -mandatory
    //hc-ric_ActionFormat_Type -idx95- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->RIC-Format-Type
    p_E2SM_KPM_RANfunction_Description->ric_IntegratedReportStyle_List.RIC_IntegratedReportStyle_Item[0].ric_ActionFormat_Type = 875;// change integer here
    //end of hc-ric_ActionFormat_Type -idx95- alias primitive
    //end of hc-sequence-ELEM 3: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item alias = 15
    //hc-sequence-ELEM 4: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item alias = 15 -mandatory
    //hc-ric_IndicationHeaderFormat_Type -idx97- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->RIC-Format-Type
    p_E2SM_KPM_RANfunction_Description->ric_IntegratedReportStyle_List.RIC_IntegratedReportStyle_Item[0].ric_IndicationHeaderFormat_Type = 875;// change integer here
    //end of hc-ric_IndicationHeaderFormat_Type -idx97- alias primitive
    //end of hc-sequence-ELEM 4: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item alias = 15
    //hc-sequence-ELEM 5: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item alias = 15 -mandatory
    //hc-ric_IndicationMessageFormat_Type -idx99- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->RIC-Format-Type
    p_E2SM_KPM_RANfunction_Description->ric_IntegratedReportStyle_List.RIC_IntegratedReportStyle_Item[0].ric_IndicationMessageFormat_Type = 875;// change integer here
    //end of hc-ric_IndicationMessageFormat_Type -idx99- alias primitive
    //end of hc-sequence-ELEM 5: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item alias = 15
    //hc-sequence-ELEM 6: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item alias = -1 -mandatory
    p_E2SM_KPM_RANfunction_Description->ric_IntegratedReportStyle_List.RIC_IntegratedReportStyle_Item[0].ric_FundamentalLevelReportStyle_List.RIC_FundamentalLevelReportStyle_Item_count = 1;
    /*=== START SEQUENCE -idx101 -ROOTS11 RIC-FundamentalLevelReportStyle-Item ===*/
    //hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->RIC-IntegratedReportStyle-Item-ric-FundamentalLevelReportStyle-List->RIC-FundamentalLevelReportStyle-Item alias = 15 -mandatory
    //hc-ric_ReportStyle_Type -idx103- alias primitive - pid = 15 - INTEGER - min:-1 - max:-1  - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->RIC-IntegratedReportStyle-Item-ric-FundamentalLevelReportStyle-List->RIC-FundamentalLevelReportStyle-Item->RIC-Style-Type
    p_E2SM_KPM_RANfunction_Description->ric_IntegratedReportStyle_List.RIC_IntegratedReportStyle_Item[0].ric_FundamentalLevelReportStyle_List.RIC_FundamentalLevelReportStyle_Item[0].ric_ReportStyle_Type = 875;// change integer here
    //end of hc-ric_ReportStyle_Type -idx103- alias primitive
    //end of hc-sequence-ELEM 1: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->RIC-IntegratedReportStyle-Item-ric-FundamentalLevelReportStyle-List->RIC-FundamentalLevelReportStyle-Item alias = 15
    /*=== END SEQUENCE -idx101 RIC-FundamentalLevelReportStyle-Item -ROOTS11 ===*/

    //end of hc-sequence-ELEM 6: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item alias = -1
    //hc-sequence-ELEM 7: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item alias = -1 -optional
    p_E2SM_KPM_RANfunction_Description->ric_IntegratedReportStyle_List.RIC_IntegratedReportStyle_Item[0].bitmask |= E2AP_RIC_INTEGRATED_REPORT_STYLE_ITEM_e2ap_RIC_MULTIPLE_INDIVIDUAL_REPORTING_SUPPORT_PRESENT;
    //hc-ric_MultipleIndividualReportingSupport -idx105- primitive in scope - pid = 13 ENUMURATE - E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->ric-MultipleIndividualReportingSupport
    p_E2SM_KPM_RANfunction_Description->ric_IntegratedReportStyle_List.RIC_IntegratedReportStyle_Item[0].ric_MultipleIndividualReportingSupport = E2AP_RIC_INTEGRATED_REPORT_STYLE_ITEM_RIC_MULTIPLE_INDIVIDUAL_REPORTING_SUPPORT_TRUE; // change enum value here
    //end of hc-ric_MultipleIndividualReportingSupport -idx105- primitive
    //end of hc-sequence-ELEM 7: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item alias = -1
    /*=== END SEQUENCE -idx89 RIC-IntegratedReportStyle-Item -ROOTS10 ===*/

    //end of hc-sequence-ELEM 4: E2SM-KPM-RANfunction-Description alias = -1
    /*=== END SEQUENCE -idx1 E2SM-KPM-RANfunction-Description -ROOTS1 ===*/

    return XNAP_SUCCESS;
}
/*
E2SM-KPM-RANfunction-Description : (E2SM-KPM-RANfunction-Description) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-KPM-RANfunction-Description
    ranFunction-Name : (RANfunction-Name) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->RANfunction-Name
        ranFunction-ShortName : (ranFunction-ShortName) 					---- (PrintableString) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->RANfunction-Name->ranFunction-ShortName
        ranFunction-E2SM-OID : (ranFunction-E2SM-OID) 					---- (PrintableString) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->RANfunction-Name->ranFunction-E2SM-OID
        ranFunction-Description : (ranFunction-Description) 					---- (PrintableString) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->RANfunction-Name->ranFunction-Description
        ranFunction-Instance : (ranFunction-Instance) 					---- (INTEGER) ---- [O] ----PATH: E2SM-KPM-RANfunction-Description->RANfunction-Name->ranFunction-Instance
    ric-EventTriggerStyle-List : (E2SM-KPM-RANfunction-Description-ric-EventTriggerStyle-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-EventTriggerStyle-List
        RIC-EventTriggerStyle-Item : (RIC-EventTriggerStyle-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-EventTriggerStyle-List->RIC-EventTriggerStyle-Item
            ric-EventTriggerStyle-Type : (RIC-Style-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-EventTriggerStyle-List->RIC-EventTriggerStyle-Item->RIC-Style-Type
            ric-EventTriggerStyle-Name : (RIC-Style-Name) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-EventTriggerStyle-List->RIC-EventTriggerStyle-Item->RIC-Style-Name
            ric-EventTriggerFormat-Type : (RIC-Format-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-EventTriggerStyle-List->RIC-EventTriggerStyle-Item->RIC-Format-Type
    ric-ReportStyle-List : (E2SM-KPM-RANfunction-Description-ric-ReportStyle-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List
        RIC-ReportStyle-Item : (RIC-ReportStyle-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item
            ric-ReportStyle-Type : (RIC-Style-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->RIC-Style-Type
            ric-ReportStyle-Name : (RIC-Style-Name) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->RIC-Style-Name
            ric-ActionFormat-Type : (RIC-Format-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->RIC-Format-Type
            measInfo-Action-List : (MeasurementInfo-Action-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List
                MeasurementInfo-Action-Item : (MeasurementInfo-Action-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item
                    measName : (MeasurementTypeName) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->MeasurementTypeName
                    measID : (MeasurementTypeID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->MeasurementTypeID
                    binRangeDef : (BinRangeDefinition) 					---- (SEQUENCE) ---- [O] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition
                        binRangeListX : (BinRangeList) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList
                            BinRangeItem : (BinRangeItem) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem
                                binIndex : (BinIndex) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinIndex
                                startValue : (BinRangeValue) 					---- (CHOICE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue
                                    valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueInt
                                    valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueReal
                                endValue : (BinRangeValue) 					---- (CHOICE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue
                                    valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueInt
                                    valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueReal
                        binRangeListY : (BinRangeList) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList
                            BinRangeItem : (BinRangeItem) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem
                                binIndex : (BinIndex) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinIndex
                                startValue : (BinRangeValue) 					---- (CHOICE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue
                                    valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueInt
                                    valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueReal
                                endValue : (BinRangeValue) 					---- (CHOICE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue
                                    valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueInt
                                    valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueReal
                        binRangeListZ : (BinRangeList) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList
                            BinRangeItem : (BinRangeItem) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem
                                binIndex : (BinIndex) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinIndex
                                startValue : (BinRangeValue) 					---- (CHOICE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue
                                    valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueInt
                                    valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueReal
                                endValue : (BinRangeValue) 					---- (CHOICE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue
                                    valueInt : (valueInt) 					---- (INTEGER) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueInt
                                    valueReal : (valueReal) 					---- (REAL) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->MeasurementInfo-Action-List->MeasurementInfo-Action-Item->BinRangeDefinition->BinRangeList->BinRangeItem->BinRangeValue->valueReal
            ric-IndicationHeaderFormat-Type : (RIC-Format-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->RIC-Format-Type
            ric-IndicationMessageFormat-Type : (RIC-Format-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-ReportStyle-List->RIC-ReportStyle-Item->RIC-Format-Type
    ric-IntegratedReportStyle-List : (E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List) 					---- (SEQ-OF-ITEM) ---- [O] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List
        RIC-IntegratedReportStyle-Item : (RIC-IntegratedReportStyle-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item
            ric-ReportStyle-Type : (RIC-Style-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->RIC-Style-Type
            ric-ReportStyle-Name : (RIC-Style-Name) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->RIC-Style-Name
            ric-ActionFormat-Type : (RIC-Format-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->RIC-Format-Type
            ric-IndicationHeaderFormat-Type : (RIC-Format-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->RIC-Format-Type
            ric-IndicationMessageFormat-Type : (RIC-Format-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->RIC-Format-Type
            ric-FundamentalLevelReportStyle-List : (RIC-IntegratedReportStyle-Item-ric-FundamentalLevelReportStyle-List) 					---- (SEQ-OF-ITEM) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->RIC-IntegratedReportStyle-Item-ric-FundamentalLevelReportStyle-List
                RIC-FundamentalLevelReportStyle-Item : (RIC-FundamentalLevelReportStyle-Item) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->RIC-IntegratedReportStyle-Item-ric-FundamentalLevelReportStyle-List->RIC-FundamentalLevelReportStyle-Item
                    ric-ReportStyle-Type : (RIC-Style-Type) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->RIC-IntegratedReportStyle-Item-ric-FundamentalLevelReportStyle-List->RIC-FundamentalLevelReportStyle-Item->RIC-Style-Type
            ric-MultipleIndividualReportingSupport : (ric-MultipleIndividualReportingSupport) 					---- (ENUMERATED) ---- [O] ----PATH: E2SM-KPM-RANfunction-Description->E2SM-KPM-RANfunction-Description-ric-IntegratedReportStyle-List->RIC-IntegratedReportStyle-Item->ric-MultipleIndividualReportingSupport

RECURSION LIST:[]
RECURSION MARK LIST:set()
*/
#endif // ASSIGN_HARDCODE_E2SM_KPM_RANFUNCTION_DESCRIPTION_H

