/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2018 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include <openssl/cmperr.h>

#ifndef OPENSSL_NO_ERR

static const ERR_STRING_DATA CMP_str_functs[] = {
    {ERR_PACK(ERR_LIB_CMP, CMP_F_ADD_EXTENSION, 0), "add_extension"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_CMP_CALC_PROTECTION, 0),
     "CMP_calc_protection"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_CMP_CERTREPMESSAGE_CERTRESPONSE_GET0, 0),
     "CMP_CERTREPMESSAGE_certResponse_get0"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_CMP_CERTRESPONSE_GET_CERTIFICATE, 0),
     "CMP_CERTRESPONSE_get_certificate"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_CMP_CERTSTATUS_SET_CERTHASH, 0),
     "CMP_CERTSTATUS_set_certHash"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_CMP_GEN_NEW, 0), "CMP_gen_new"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_CMP_PKIFREETEXT_PUSH_STR, 0),
     "CMP_PKIFREETEXT_push_str"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_CMP_PKISI_PKISTATUS_GET_STRING, 0),
     "CMP_PKISI_PKIStatus_get_string"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_CMP_POLLREPCONTENT_POLLREP_GET0, 0),
     "CMP_POLLREPCONTENT_pollRep_get0"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_CMP_PROCESS_CERT_REQUEST, 0),
     "CMP_process_cert_request"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_CMP_REVREPCONTENT_PKISTATUSINFO_GET, 0),
     "CMP_REVREPCONTENT_PKIStatusInfo_get"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_CMP_VERIFY_PBMAC, 0), "CMP_verify_PBMAC"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_CMP_VERIFY_POPO, 0), "cmp_verify_popo"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_CMP_VERIFY_SIGNATURE, 0),
     "CMP_verify_signature"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_CRM_NEW, 0), "crm_new"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_FIND_SRVCERT, 0), "find_srvcert"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_GET_CERT_STATUS, 0), "get_cert_status"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_ASN1_OCTET_STRING_SET1, 0),
     "OSSL_CMP_ASN1_OCTET_STRING_set1"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_ASN1_OCTET_STRING_SET1_BYTES, 0),
     "OSSL_CMP_ASN1_OCTET_STRING_set1_bytes"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CERTCONF_NEW, 0),
     "OSSL_CMP_certConf_new"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CERTREP_NEW, 0),
     "OSSL_CMP_certrep_new"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CERTREQ_NEW, 0),
     "OSSL_CMP_certreq_new"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_CAPUBS_GET1, 0),
     "OSSL_CMP_CTX_caPubs_get1"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_CREATE, 0),
     "OSSL_CMP_CTX_create"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_EXTRACERTSIN_GET1, 0),
     "OSSL_CMP_CTX_extraCertsIn_get1"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_EXTRACERTSOUT_PUSH1, 0),
     "OSSL_CMP_CTX_extraCertsOut_push1"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_INIT, 0), "OSSL_CMP_CTX_init"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_PUSH_FREETEXT, 0),
     "OSSL_CMP_CTX_push_freeText"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET0_NEWPKEY, 0),
     "OSSL_CMP_CTX_set0_newPkey"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET0_PKEY, 0),
     "OSSL_CMP_CTX_set0_pkey"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET0_REQEXTENSIONS, 0),
     "OSSL_CMP_CTX_set0_reqExtensions"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_CAPUBS, 0),
     "OSSL_CMP_CTX_set1_caPubs"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_CLCERT, 0),
     "OSSL_CMP_CTX_set1_clCert"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_EXPECTED_SENDER, 0),
     "OSSL_CMP_CTX_set1_expected_sender"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_EXTRACERTSIN, 0),
     "OSSL_CMP_CTX_set1_extraCertsIn"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_EXTRACERTSOUT, 0),
     "OSSL_CMP_CTX_set1_extraCertsOut"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_ISSUER, 0),
     "OSSL_CMP_CTX_set1_issuer"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_LAST_SENDERNONCE, 0),
     "OSSL_CMP_CTX_set1_last_senderNonce"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_NEWCLCERT, 0),
     "OSSL_CMP_CTX_set1_newClCert"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_NEWPKEY, 0),
     "OSSL_CMP_CTX_set1_newPkey"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_OLDCLCERT, 0),
     "OSSL_CMP_CTX_set1_oldClCert"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_P10CSR, 0),
     "OSSL_CMP_CTX_set1_p10CSR"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_PKEY, 0),
     "OSSL_CMP_CTX_set1_pkey"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_PROXYNAME, 0),
     "OSSL_CMP_CTX_set1_proxyName"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_RECIPIENT, 0),
     "OSSL_CMP_CTX_set1_recipient"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_RECIPNONCE, 0),
     "OSSL_CMP_CTX_set1_recipNonce"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_REFERENCEVALUE, 0),
     "OSSL_CMP_CTX_set1_referenceValue"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_SECRETVALUE, 0),
     "OSSL_CMP_CTX_set1_secretValue"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_SERVERNAME, 0),
     "OSSL_CMP_CTX_set1_serverName"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_SERVERPATH, 0),
     "OSSL_CMP_CTX_set1_serverPath"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_SRVCERT, 0),
     "OSSL_CMP_CTX_set1_srvCert"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_SUBJECTNAME, 0),
     "OSSL_CMP_CTX_set1_subjectName"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET1_TRANSACTIONID, 0),
     "OSSL_CMP_CTX_set1_transactionID"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET_PROXYPORT, 0),
     "OSSL_CMP_CTX_set_proxyPort"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SET_SERVERPORT, 0),
     "OSSL_CMP_CTX_set_serverPort"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_CTX_SUBJECTALTNAME_PUSH1, 0),
     "OSSL_CMP_CTX_subjectAltName_push1"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_ERROR_NEW, 0), "OSSL_CMP_error_new"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_EXCHANGE_CERTCONF, 0),
     "OSSL_CMP_exchange_certConf"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_EXCHANGE_ERROR, 0),
     "OSSL_CMP_exchange_error"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_EXEC_CR_SES, 0),
     "OSSL_CMP_exec_CR_ses"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_EXEC_GENM_SES, 0),
     "OSSL_CMP_exec_GENM_ses"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_EXEC_IR_SES, 0),
     "OSSL_CMP_exec_IR_ses"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_EXEC_KUR_SES, 0),
     "OSSL_CMP_exec_KUR_ses"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_EXEC_P10CR_SES, 0),
     "OSSL_CMP_exec_P10CR_ses"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_EXEC_RR_SES, 0),
     "OSSL_CMP_exec_RR_ses"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_HDR_GENERALINFO_ITEM_PUSH0, 0),
     "OSSL_CMP_HDR_generalInfo_item_push0"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_HDR_INIT, 0), "OSSL_CMP_HDR_init"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_HDR_PUSH0_FREETEXT, 0),
     "OSSL_CMP_HDR_push0_freeText"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_HDR_PUSH1_FREETEXT, 0),
     "OSSL_CMP_HDR_push1_freeText"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_HDR_SET_MESSAGETIME, 0),
     "OSSL_CMP_HDR_set_messageTime"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_HDR_SET_VERSION, 0),
     "OSSL_CMP_HDR_set_version"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_MSG_CHECK_RECEIVED, 0),
     "OSSL_CMP_MSG_check_received"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_MSG_CREATE, 0),
     "OSSL_CMP_MSG_create"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_MSG_GENERALINFO_ITEMS_PUSH1, 0),
     "OSSL_CMP_MSG_generalInfo_items_push1"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_MSG_GENM_ITEMS_PUSH1, 0),
     "OSSL_CMP_MSG_genm_items_push1"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_MSG_GENM_ITEM_PUSH0, 0),
     "OSSL_CMP_MSG_genm_item_push0"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_MSG_HTTP_PERFORM, 0),
     "OSSL_CMP_MSG_http_perform"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_MSG_PROTECT, 0),
     "OSSL_CMP_MSG_protect"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_PKICONF_NEW, 0),
     "OSSL_CMP_pkiconf_new"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_PKISI_PKIFAILUREINFO_GET, 0),
     "OSSL_CMP_PKISI_PKIFailureInfo_get"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_PKISI_PKISTATUS_GET, 0),
     "OSSL_CMP_PKISI_PKIStatus_get"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_POLLREP_NEW, 0),
     "OSSL_CMP_pollRep_new"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_POLLREQ_NEW, 0),
     "OSSL_CMP_pollReq_new"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_RP_NEW, 0), "OSSL_CMP_rp_new"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_RR_NEW, 0), "OSSL_CMP_rr_new"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_SRV_CTX_CREATE, 0),
     "OSSL_CMP_SRV_CTX_create"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_STATUSINFO_NEW, 0),
     "OSSL_CMP_statusInfo_new"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_VALIDATE_CERT_PATH, 0),
     "OSSL_CMP_validate_cert_path"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_OSSL_CMP_VALIDATE_MSG, 0),
     "OSSL_CMP_validate_msg"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_POLLFORRESPONSE, 0), "pollForResponse"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_PROCESS_CERTCONF, 0), "process_certConf"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_PROCESS_ERROR, 0), "process_error"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_PROCESS_GENM, 0), "process_genm"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_PROCESS_POLLREQ, 0), "process_pollReq"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_PROCESS_REQUEST, 0), "process_request"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_PROCESS_RR, 0), "process_rr"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_SAVE_STATUSINFO, 0), "save_statusInfo"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_SEND_RECEIVE_CHECK, 0), "send_receive_check"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_SET1_AOSTR_ELSE_RANDOM, 0),
     "set1_aostr_else_random"},
    {ERR_PACK(ERR_LIB_CMP, CMP_F_SET1_GENERAL_NAME, 0), "set1_general_name"},
    {0, NULL}
};

static const ERR_STRING_DATA CMP_str_reasons[] = {
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ALGORITHM_NOT_SUPPORTED),
    "algorithm not supported"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_CERTIFICATE_NOT_ACCEPTED),
    "certificate not accepted"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_CERTIFICATE_NOT_FOUND),
    "certificate not found"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_CERTREQMSG_NOT_FOUND),
    "certreqmsg not found"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_CERTRESPONSE_NOT_FOUND),
    "certresponse not found"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_CERT_AND_KEY_DO_NOT_MATCH),
    "cert and key do not match"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_CP_NOT_RECEIVED), "cp not received"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ENCOUNTERED_KEYUPDATEWARNING),
    "encountered keyupdatewarning"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ENCOUNTERED_UNSUPPORTED_PKISTATUS),
    "encountered unsupported pkistatus"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ENCOUNTERED_WAITING),
    "encountered waiting"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_CALCULATING_PROTECTION),
    "error calculating protection"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_CREATING_CERTCONF),
    "error creating certconf"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_CREATING_CERTREP),
    "error creating certrep"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_CREATING_CR), "error creating cr"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_CREATING_ERROR),
    "error creating error"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_CREATING_GENM),
    "error creating genm"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_CREATING_GENP),
    "error creating genp"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_CREATING_IR), "error creating ir"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_CREATING_KUR), "error creating kur"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_CREATING_P10CR),
    "error creating p10cr"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_CREATING_PKICONF),
    "error creating pkiconf"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_CREATING_POLLREP),
    "error creating pollrep"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_CREATING_POLLREQ),
    "error creating pollreq"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_CREATING_RP), "error creating rp"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_CREATING_RR), "error creating rr"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_DECODING_MESSAGE),
    "error decoding message"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_PARSING_PKISTATUS),
    "error parsing pkistatus"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_PROCESSING_CERTREQ),
    "error processing certreq"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_PROCESSING_MSG),
    "error processing msg"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_PROTECTING_MESSAGE),
    "error protecting message"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_PUSHING_GENERALINFO_ITEM),
    "error pushing generalinfo item"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_PUSHING_GENERALINFO_ITEMS),
    "error pushing generalinfo items"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_PUSHING_GENM_ITEMS),
    "error pushing genm items"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_SENDING_REQUEST),
    "error sending request"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_SETTING_CERTHASH),
    "error setting certhash"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_ERROR_VALIDATING_PROTECTION),
    "error validating protection"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_FAILED_EXTRACTING_PUBKEY),
    "failed extracting pubkey"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_FAILED_TO_RECEIVE_PKIMESSAGE),
    "failed to receive pkimessage"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_FAILED_TO_SEND_REQUEST),
    "failed to send request"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_FAILURE_OBTAINING_RANDOM),
    "failure obtaining random"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_GENP_NOT_RECEIVED), "genp not received"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_INVALID_ARGS), "invalid args"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_INVALID_CONTEXT), "invalid context"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_INVALID_PARAMETERS), "invalid parameters"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_IP_NOT_RECEIVED), "ip not received"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_KUP_NOT_RECEIVED), "kup not received"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_MISSING_KEY_INPUT_FOR_CREATING_PROTECTION),
    "missing key input for creating protection"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_MISSING_KEY_USAGE_DIGITALSIGNATURE),
    "missing key usage digitalsignature"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_MISSING_PROTECTION), "missing protection"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_MULTIPLE_RESPONSES_NOT_SUPPORTED),
    "multiple responses not supported"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_MULTIPLE_SAN_SOURCES),
    "multiple san sources"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_NO_SENDER_NO_REFERENCE),
    "no sender no reference"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_NO_SUITABLE_SERVER_CERT),
    "no suitable server cert"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_NO_VALID_SERVER_CERT_FOUND),
    "no valid server cert found"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_NULL_ARGUMENT), "null argument"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_PKIBODY_ERROR), "pkibody error"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_PKICONF_NOT_RECEIVED),
    "pkiconf not received"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_PKISTATUSINFO_NOT_FOUND),
    "pkistatusinfo not found"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_POLLREP_NOT_RECEIVED),
    "pollrep not received"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_POTENTIALLY_INVALID_CERTIFICATE),
    "potentially invalid certificate"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_RECEIVED_ERROR), "received error"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_RECEIVED_NEGATIVE_CHECKAFTER_IN_POLLREP),
    "received negative checkafter in pollrep"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_RECIPNONCE_UNMATCHED),
    "recipnonce unmatched"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_REQUEST_NOT_ACCEPTED),
    "request not accepted"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_REQUEST_REJECTED_BY_CA),
    "request rejected by ca"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_RP_NOT_RECEIVED), "rp not received"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_SENDER_GENERALNAME_TYPE_NOT_SUPPORTED),
    "sender generalname type not supported"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_TLS_ERROR), "tls error"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_TOTAL_TIMEOUT), "total timeout"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_TRANSACTIONID_UNMATCHED),
    "transactionid unmatched"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_UNEXPECTED_PKIBODY), "unexpected pkibody"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_UNEXPECTED_PKISTATUS),
    "unexpected pkistatus"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_UNEXPECTED_REQUEST_ID),
    "unexpected request id"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_UNEXPECTED_SENDER), "unexpected sender"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_UNKNOWN_ALGORITHM_ID),
    "unknown algorithm id"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_UNKNOWN_CERT_TYPE), "unknown cert type"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_UNKNOWN_PKISTATUS), "unknown pkistatus"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_UNSUPPORTED_ALGORITHM),
    "unsupported algorithm"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_UNSUPPORTED_KEY_TYPE),
    "unsupported key type"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_UNSUPPORTED_PROTECTION_ALG_DHBASEDMAC),
    "unsupported protection alg dhbasedmac"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_WRONG_ALGORITHM_OID),
    "wrong algorithm oid"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_WRONG_CERT_HASH), "wrong cert hash"},
    {ERR_PACK(ERR_LIB_CMP, 0, CMP_R_WRONG_PBM_VALUE), "wrong pbm value"},
    {0, NULL}
};

#endif

int ERR_load_CMP_strings(void)
{
#ifndef OPENSSL_NO_ERR
    if (ERR_func_error_string(CMP_str_functs[0].error) == NULL) {
        ERR_load_strings_const(CMP_str_functs);
        ERR_load_strings_const(CMP_str_reasons);
    }
#endif
    return 1;
}
