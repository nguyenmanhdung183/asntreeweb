#ifndef ASSIGN_HARDCODE_E2SM_KPM_INDICATION_HEADER_H
#define ASSIGN_HARDCODE_E2SM_KPM_INDICATION_HEADER_H
#include<stdio.h>
#include"output_main.h"
#include "MAIN_STRUCT.h"

xnap_return_et assign_hardcode_value_E2SM_KPM_IndicationHeader(_e2ap_E2SM_KPM_IndicationHeader_t* p_E2SM_KPM_IndicationHeader)
{
    /*=== START SEQUENCE -idx1 -ROOTS1 E2SM-KPM-IndicationHeader ===*/
    //hc-sequence-ELEM 1: E2SM-KPM-IndicationHeader alias = -1 -mandatory
    /*=== START CHOICE -rootc1 - E2SM-KPM-IndicationHeader-indicationHeader-formats ===*/
    #if 1 //hc-choice-ELEM 1 -idx4 -rootc1: E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM_KPM_IndicationHeader_Format1 - alias = -1
    p_E2SM_KPM_IndicationHeader->indicationHeader_formats.choice_type = E2AP_E2SM_KPM_INDICATION_HEADER_INDICATION_HEADER_FORMATS_e2ap_INDICATION_HEADER_FORMAT1;
    /*=== START SEQUENCE -idx5 -ROOTS2 E2SM-KPM-IndicationHeader-Format1 ===*/
    //hc-sequence-ELEM 1: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1 alias = 8 -mandatory
    //hc-colletStartTime -idx7- alias primitive - pid = 8 - OCTET STRING - E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1->TimeStamp
    OSOCTET temp_buff_for_colletStartTime[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08}; // min =8 - max = 8 bytes change octetstring data here
    p_E2SM_KPM_IndicationHeader->indicationHeader_formats.indicationHeader_Format1.colletStartTime.numocts = sizeof(temp_buff_for_colletStartTime);
    XNAP_MEMCPY(p_E2SM_KPM_IndicationHeader->indicationHeader_formats.indicationHeader_Format1.colletStartTime.data, temp_buff_for_colletStartTime, sizeof(temp_buff_for_colletStartTime)); // change octetstring data here
    //end of hc-colletStartTime -idx7- alias primitive

    //end of hc-sequence-ELEM 1: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1 alias = 8
    //hc-sequence-ELEM 2: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1 alias = -1 -optional
    p_E2SM_KPM_IndicationHeader->indicationHeader_formats.indicationHeader_Format1.bitmask |= E2AP_E2SM_KPM_INDICATION_HEADER_FORMAT1_e2ap_FILE_FORMATVERSION_PRESENT;
    //hc-fileFormatversion -idx9- primitive in scope - pid = 10 Printable STRING - E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1->fileFormatversion
    p_E2SM_KPM_IndicationHeader->indicationHeader_formats.indicationHeader_Format1.fileFormatversion = "hardcode string valueu"; // change printable string here
    //end of hc-fileFormatversion -idx9- primitive

    //end of hc-sequence-ELEM 2: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1 alias = -1
    //hc-sequence-ELEM 3: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1 alias = -1 -optional
    p_E2SM_KPM_IndicationHeader->indicationHeader_formats.indicationHeader_Format1.bitmask |= E2AP_E2SM_KPM_INDICATION_HEADER_FORMAT1_e2ap_SENDER_NAME_PRESENT;
    //hc-senderName -idx11- primitive in scope - pid = 10 Printable STRING - E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1->senderName
    p_E2SM_KPM_IndicationHeader->indicationHeader_formats.indicationHeader_Format1.senderName = "hardcode string valueu"; // change printable string here
    //end of hc-senderName -idx11- primitive

    //end of hc-sequence-ELEM 3: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1 alias = -1
    //hc-sequence-ELEM 4: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1 alias = -1 -optional
    p_E2SM_KPM_IndicationHeader->indicationHeader_formats.indicationHeader_Format1.bitmask |= E2AP_E2SM_KPM_INDICATION_HEADER_FORMAT1_e2ap_SENDER_TYPE_PRESENT;
    //hc-senderType -idx13- primitive in scope - pid = 10 Printable STRING - E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1->senderType
    p_E2SM_KPM_IndicationHeader->indicationHeader_formats.indicationHeader_Format1.senderType = "hardcode string valueu"; // change printable string here
    //end of hc-senderType -idx13- primitive

    //end of hc-sequence-ELEM 4: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1 alias = -1
    //hc-sequence-ELEM 5: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1 alias = -1 -optional
    p_E2SM_KPM_IndicationHeader->indicationHeader_formats.indicationHeader_Format1.bitmask |= E2AP_E2SM_KPM_INDICATION_HEADER_FORMAT1_e2ap_VENDOR_NAME_PRESENT;
    //hc-vendorName -idx15- primitive in scope - pid = 10 Printable STRING - E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1->vendorName
    p_E2SM_KPM_IndicationHeader->indicationHeader_formats.indicationHeader_Format1.vendorName = "hardcode string valueu"; // change printable string here
    //end of hc-vendorName -idx15- primitive

    //end of hc-sequence-ELEM 5: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1 alias = -1
    //hc-sequence-ELEM 6: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1 alias = 6 -optional
    p_E2SM_KPM_IndicationHeader->indicationHeader_formats.indicationHeader_Format1.bitmask |= E2AP_E2SM_KPM_INDICATION_HEADER_FORMAT1_e2ap_JOB_ID_PRESENT;
    //hc-jobID -idx17- alias primitive - pid = 6 - INTEGER - min:1 - max:65535  - E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1->JobID
    p_E2SM_KPM_IndicationHeader->indicationHeader_formats.indicationHeader_Format1.jobID = 32768;// change integer here
    //end of hc-jobID -idx17- alias primitive
    //end of hc-sequence-ELEM 6: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1 alias = 6
    /*=== END SEQUENCE -idx5 E2SM-KPM-IndicationHeader-Format1 -ROOTS2 ===*/

    #endif /*choice-ELEM 1 -idx4 -rootc1 - E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1 */

    /*=== END CHOICE -rootc1 - E2SM-KPM-IndicationHeader-indicationHeader-formats ===*/

    //end of hc-sequence-ELEM 1: E2SM-KPM-IndicationHeader alias = -1
    /*=== END SEQUENCE -idx1 E2SM-KPM-IndicationHeader -ROOTS1 ===*/

    return XNAP_SUCCESS;
}
/*
E2SM-KPM-IndicationHeader : (E2SM-KPM-IndicationHeader) 					---- (SEQUENCE) ---- [UNK] ----PATH: E2SM-KPM-IndicationHeader
    indicationHeader-formats : (E2SM-KPM-IndicationHeader-indicationHeader-formats) 					---- (CHOICE) ---- [M] ----PATH: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats
        indicationHeader-Format1 : (E2SM-KPM-IndicationHeader-Format1) 					---- (SEQUENCE) ---- [M] ----PATH: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1
            colletStartTime : (TimeStamp) 					---- (PRIMITIVE) ---- [M] ----PATH: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1->TimeStamp
            fileFormatversion : (fileFormatversion) 					---- (PrintableString) ---- [O] ----PATH: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1->fileFormatversion
            senderName : (senderName) 					---- (PrintableString) ---- [O] ----PATH: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1->senderName
            senderType : (senderType) 					---- (PrintableString) ---- [O] ----PATH: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1->senderType
            vendorName : (vendorName) 					---- (PrintableString) ---- [O] ----PATH: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1->vendorName
            jobID : (JobID) 					---- (PRIMITIVE) ---- [O] ----PATH: E2SM-KPM-IndicationHeader->E2SM-KPM-IndicationHeader-indicationHeader-formats->E2SM-KPM-IndicationHeader-Format1->JobID

RECURSION LIST:[]
RECURSION MARK LIST:set()
*/
#endif // ASSIGN_HARDCODE_E2SM_KPM_INDICATION_HEADER_H

