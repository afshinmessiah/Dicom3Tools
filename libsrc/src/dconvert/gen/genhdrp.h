// Automatically generated from template - EDITS WILL BE LOST
//
// Generated by convert.awk with options or defaults ...
//
// 	 role=headerpart
// 	 prefix=GEN_
// 	 dicomfunctionname=ToDicom_Template
// 	 dumpcommonfunctionname=DumpCommon
// 	 dumpselectedimagefunctionname=DumpSelectedImage
// 	 headeroffsetprefix=GEN_Offset
// 	 headeroffsetsuffix=ptr
// 	 headerclassprefix=GEN_HeaderClass
// 	 headerdicomclassprefix=GEN_Header_BothClass
// 	 headerdumpclassprefix=GEN_Header_BothClass
// 	 headerinstanceprefix=GEN_HeaderInstance
// 	 methodnameprefix=GEN_Method
// 	 methodconstructorargsprefix=GEN_MethodConstructorArgs
// 	 headerclassparameters=

class GEN_HeaderClass_FILEHDR {
public:
	GEN_HeaderClass_FILEHDR(istream *ist,long offset)
		 { ReadProprietaryHeader(ist,offset,sizeof *this,(char *)this); }

	Int32_B 	IH_img_magic	; // at 0
	Int32_B 	IH_img_hdr_length	; // at 4
	Int32_B 	IH_img_width	; // at 8
	Int32_B 	IH_img_height	; // at 12
	Int32_B 	IH_img_depth	; // at 16
	Int32_B 	IH_img_compress	; // at 20
	Int32_B 	IH_img_dwindow	; // at 24
	Int32_B 	IH_img_dlevel	; // at 28
	Int32_B 	IH_img_bgshade	; // at 32
	Int32_B 	IH_img_ovrflow	; // at 36
	Int32_B 	IH_img_undflow	; // at 40
	Int32_B 	IH_img_top_offset	; // at 44
	Int32_B 	IH_img_bot_offset	; // at 48
	Int16_B 	IH_img_version	; // at 52
	Uint16_B 	IH_img_checksum	; // at 54
	Int32_B 	IH_img_p_id	; // at 56
	Int32_B 	IH_img_l_id	; // at 60
	Int32_B 	IH_img_p_unpack	; // at 64
	Int32_B 	IH_img_l_unpack	; // at 68
	Int32_B 	IH_img_p_compress	; // at 72
	Int32_B 	IH_img_l_compress	; // at 76
	Int32_B 	IH_img_p_histo	; // at 80
	Int32_B 	IH_img_l_histo	; // at 84
	Int32_B 	IH_img_p_text	; // at 88
	Int32_B 	IH_img_l_text	; // at 92
	Int32_B 	IH_img_p_graphics	; // at 96
	Int32_B 	IH_img_l_graphics	; // at 100
	Int32_B 	IH_img_p_dbHdr	; // at 104
	Int32_B 	IH_img_l_dbHdr	; // at 108
	Int32_B 	IH_img_levelOffset	; // at 112
	Int32_B 	IH_img_p_user	; // at 116
	Int32_B 	IH_img_l_user	; // at 120
	Int32_B 	IH_img_p_suite	; // at 124
	Int32_B 	IH_img_l_suite	; // at 128
	Int32_B 	IH_img_p_exam	; // at 132
	Int32_B 	IH_img_l_exam	; // at 136
	Int32_B 	IH_img_p_series	; // at 140
	Int32_B 	IH_img_l_series	; // at 144
	Int32_B 	IH_img_p_image	; // at 148
	Int32_B 	IH_img_l_image	; // at 152
};

class GEN_HeaderClass_UIDHDR {
public:
	GEN_HeaderClass_UIDHDR(istream *ist,long offset)
		 { ReadProprietaryHeader(ist,offset,sizeof *this,(char *)this); }

	Int32_B 	ID_id_version	; // at 0
	String<80> 	ID_id_text	; // at 4
};

class GEN_HeaderClass_HISTOHDR {
public:
	GEN_HeaderClass_HISTOHDR(istream *ist,long offset)
		 { ReadProprietaryHeader(ist,offset,sizeof *this,(char *)this); }

	Int32_B 	HS_hs_version	; // at 0
	IEEE_Float32_B 	HS_hs_sd	; // at 4
	Int16_B 	HS_hs_mean	; // at 8
	Int16_B 	HS_hs_min	; // at 10
	Int16_B 	HS_hs_max	; // at 12
	Int16_B 	HS_hs_first	; // at 14
	Int16_B 	HS_hs_region	; // at 16
	Int16_B 	HS_hs_length	; // at 18
};

class GEN_HeaderClass_SUITEHDR {
public:
	GEN_HeaderClass_SUITEHDR(istream *ist,long offset)
		 { ReadProprietaryHeader(ist,offset,sizeof *this,(char *)this); }

	String<4> 	SU_su_id	; // at 0
	Int16_B 	SU_su_uniq	; // at 4
	String<1> 	SU_su_diskid	; // at 6
	String<13> 	SU_prodid	; // at 7
	String<2> 	SU_su_verscre	; // at 20
	String<2> 	SU_su_verscur	; // at 22
	Uint32_B 	SU_su_checksum	; // at 24
	String<85> 	SU_su_padding	; // at 28
};

class GEN_HeaderClass_EXAMHDR {
public:
	GEN_HeaderClass_EXAMHDR(istream *ist,long offset)
		 { ReadProprietaryHeader(ist,offset,sizeof *this,(char *)this); }

	String<4> 	EX_ex_suid	; // at 0
	Int16_B 	EX_ex_uniq	; // at 4
	String<1> 	EX_ex_diskid	; // at 6
	char 		reserved_1	[1]	;
	Uint16_B 	EX_ex_no	; // at 8
	String<33> 	EX_hospname	; // at 10
	char 		reserved_2	[1]	;
	Int16_B 	EX_detect	; // at 44
	Int32_B 	EX_numcells	; // at 46
	IEEE_Float32_B 	EX_zerocell	; // at 50
	IEEE_Float32_B 	EX_cellspace	; // at 54
	IEEE_Float32_B 	EX_srctodet	; // at 58
	IEEE_Float32_B 	EX_srctoiso	; // at 62
	Int16_B 	EX_tubetyp	; // at 66
	Int16_B 	EX_dastyp	; // at 68
	Int16_B 	EX_num_dcnk	; // at 70
	Int16_B 	EX_dcn_len	; // at 72
	Int16_B 	EX_dcn_density	; // at 74
	Int16_B 	EX_dcn_stepsize	; // at 76
	Int16_B 	EX_dcn_shiftcnt	; // at 78
	Int32_B 	EX_magstrength	; // at 80
	String<13> 	EX_patid	; // at 84
	String<25> 	EX_patname	; // at 97
	Int16_B 	EX_patage	; // at 122
	Int16_B 	EX_patian	; // at 124
	Int16_B 	EX_patsex	; // at 126
	Int32_B 	EX_patweight	; // at 128
	Int16_B 	EX_trauma	; // at 132
	String<61> 	EX_hist	; // at 134
	String<13> 	EX_reqnum	; // at 195
	Unix_DateTime_B 	EX_ex_datetime	; // at 208
	String<33> 	EX_refphy	; // at 212
	String<33> 	EX_diagrad	; // at 245
	String<4> 	EX_op	; // at 278
	String<23> 	EX_ex_desc	; // at 282
	String<3> 	EX_ex_typ	; // at 305
	Int16_B 	EX_ex_format	; // at 308
	IEEE_Float64_B 	EX_firstaxtime	; // at 310
	String<9> 	EX_ex_sysid	; // at 318
	char 		reserved_3	[1]	;
	Unix_DateTime_B 	EX_ex_lastmod	; // at 328
	Int16_B 	EX_protocolflag	; // at 332
	String<13> 	EX_ex_alloc_key	; // at 334
	char 		reserved_4	[1]	;
	Int32_B 	EX_ex_delta_cnt	; // at 348
	String<2> 	EX_ex_verscre	; // at 352
	String<2> 	EX_ex_verscur	; // at 354
	Uint32_B 	EX_ex_checksum	; // at 356
	Int32_B 	EX_ex_complete	; // at 360
	Int32_B 	EX_ex_seriesct	; // at 364
	Int32_B 	EX_ex_numarch	; // at 368
	Int32_B 	EX_ex_numseries	; // at 372
	Uint32_B 	EX_ex_series_l	; // at 376
	Uint32_B 	EX_ex_series_d	; // at 380
	Int32_B 	EX_ex_numunser	; // at 384
	Uint32_B 	EX_ex_unseries_l	; // at 388
	Uint32_B 	EX_ex_unseries_d	; // at 392
	Int32_B 	EX_ex_toarchcnt	; // at 396
	Uint32_B 	EX_ex_toarchive_l	; // at 400
	Uint32_B 	EX_ex_toarchive_d	; // at 404
	Int32_B 	EX_ex_prospcnt	; // at 408
	Uint32_B 	EX_ex_prosp_l	; // at 412
	Uint32_B 	EX_ex_prosp_d	; // at 416
	Int32_B 	EX_ex_modelnum	; // at 420
	Int32_B 	EX_ex_modelcnt	; // at 424
	Uint32_B 	EX_ex_models_l	; // at 428
	Uint32_B 	EX_ex_models_d	; // at 432
	Int16_B 	EX_ex_stat	; // at 436
	String<16> 	EX_uniq_sys_id	; // at 438
	String<16> 	EX_service_id	; // at 454
	String<4> 	EX_mobile_loc	; // at 470
	String<32> 	EX_study_uid	; // at 474
	String<518> 	EX_ex_padding	; // at 506
};

class GEN_HeaderClass_SERIESHDR {
public:
	GEN_HeaderClass_SERIESHDR(istream *ist,long offset)
		 { ReadProprietaryHeader(ist,offset,sizeof *this,(char *)this); }

	String<4> 	SE_se_suid	; // at 0
	Int16_B 	SE_se_uniq	; // at 4
	String<1> 	SE_se_diskid	; // at 6
	char 		reserved_5	[1]	;
	Uint16_B 	SE_se_exno	; // at 8
	Int16_B 	SE_se_no	; // at 10
	Unix_DateTime_B 	SE_se_datetime	; // at 12
	Unix_DateTime_B 	SE_se_actual_dt	; // at 16
	String<30> 	SE_se_desc	; // at 20
	String<9> 	SE_pr_sysid	; // at 50
	String<9> 	SE_pansysid	; // at 59
	Int16_B 	SE_se_typ	; // at 68
	Int16_B 	SE_se_source	; // at 70
	Int16_B 	SE_se_plane	; // at 72
	Int16_B 	SE_scan_type	; // at 74
	Int32_B 	SE_position	; // at 76
	Int32_B 	SE_entry	; // at 80
	String<3> 	SE_anref	; // at 84
	char 		reserved_6	[1]	;
	IEEE_Float32_B 	SE_lmhor	; // at 88
	String<25> 	SE_prtcl	; // at 92
	char 		reserved_7	[1]	;
	Int16_B 	SE_se_contrast	; // at 118
	String<1> 	SE_start_ras	; // at 120
	char 		reserved_8	[1]	;
	IEEE_Float32_B 	SE_start_loc	; // at 122
	String<1> 	SE_end_ras	; // at 126
	char 		reserved_9	[1]	;
	IEEE_Float32_B 	SE_end_loc	; // at 128
	Int16_B 	SE_se_pseq	; // at 132
	Int16_B 	SE_se_sortorder	; // at 134
	Int32_B 	SE_se_lndmrkcnt	; // at 136
	Int16_B 	SE_se_nacq	; // at 140
	Int16_B 	SE_xbasest	; // at 142
	Int16_B 	SE_xbaseend	; // at 144
	Int16_B 	SE_xenhst	; // at 146
	Int16_B 	SE_xenhend	; // at 148
	Unix_DateTime_B 	SE_se_lastmod	; // at 150
	String<13> 	SE_se_alloc_key	; // at 154
	char 		reserved_10	[1]	;
	Int32_B 	SE_se_delta_cnt	; // at 168
	String<2> 	SE_se_verscre	; // at 172
	String<2> 	SE_se_verscur	; // at 174
	IEEE_Float32_B 	SE_se_pds_a	; // at 176
	IEEE_Float32_B 	SE_se_pds_c	; // at 180
	IEEE_Float32_B 	SE_se_pds_u	; // at 184
	Uint32_B 	SE_se_checksum	; // at 188
	Int32_B 	SE_se_complete	; // at 192
	Int32_B 	SE_se_numarch	; // at 196
	Int32_B 	SE_se_imagect	; // at 200
	Int32_B 	SE_se_numimages	; // at 204
	Uint32_B 	SE_se_images_l	; // at 208
	Uint32_B 	SE_se_images_d	; // at 212
	Int32_B 	SE_se_numunimg	; // at 216
	Uint32_B 	SE_se_unimages_l	; // at 220
	Uint32_B 	SE_se_unimages_d	; // at 224
	Int32_B 	SE_se_toarchcnt	; // at 228
	Uint32_B 	SE_se_toarchive_l	; // at 232
	Uint32_B 	SE_se_toarchive_d	; // at 236
	IEEE_Float32_B 	SE_echo1_alpha	; // at 240
	IEEE_Float32_B 	SE_echo1_beta	; // at 244
	Uint16_B 	SE_echo1_window	; // at 248
	Int16_B 	SE_echo1_level	; // at 250
	IEEE_Float32_B 	SE_echo2_alpha	; // at 252
	IEEE_Float32_B 	SE_echo2_beta	; // at 256
	Uint16_B 	SE_echo2_window	; // at 260
	Int16_B 	SE_echo2_level	; // at 262
	IEEE_Float32_B 	SE_echo3_alpha	; // at 264
	IEEE_Float32_B 	SE_echo3_beta	; // at 268
	Uint16_B 	SE_echo3_window	; // at 272
	Int16_B 	SE_echo3_level	; // at 274
	IEEE_Float32_B 	SE_echo4_alpha	; // at 276
	IEEE_Float32_B 	SE_echo4_beta	; // at 280
	Uint16_B 	SE_echo4_window	; // at 284
	Int16_B 	SE_echo4_level	; // at 286
	IEEE_Float32_B 	SE_echo5_alpha	; // at 288
	IEEE_Float32_B 	SE_echo5_beta	; // at 292
	Uint16_B 	SE_echo5_window	; // at 296
	Int16_B 	SE_echo5_level	; // at 298
	IEEE_Float32_B 	SE_echo6_alpha	; // at 300
	IEEE_Float32_B 	SE_echo6_beta	; // at 304
	Uint16_B 	SE_echo6_window	; // at 308
	Int16_B 	SE_echo6_level	; // at 310
	IEEE_Float32_B 	SE_echo7_alpha	; // at 312
	IEEE_Float32_B 	SE_echo7_beta	; // at 316
	Uint16_B 	SE_echo7_window	; // at 320
	Int16_B 	SE_echo7_level	; // at 322
	IEEE_Float32_B 	SE_echo8_alpha	; // at 324
	IEEE_Float32_B 	SE_echo8_beta	; // at 328
	Uint16_B 	SE_echo8_window	; // at 332
	Int16_B 	SE_echo8_level	; // at 334
	String<32> 	SE_series_uid	; // at 336
	String<32> 	SE_landmark_uid	; // at 368
	String<32> 	SE_equipmnt_uid	; // at 400
	String<588> 	SE_se_padding	; // at 432
};

class GEN_HeaderClass_CTHDR {
public:
	GEN_HeaderClass_CTHDR(istream *ist,long offset)
		 { ReadProprietaryHeader(ist,offset,sizeof *this,(char *)this); }

	String<4> 	CT_im_suid	; // at 0
	Int16_B 	CT_im_uniq	; // at 4
	String<1> 	CT_im_diskid	; // at 6
	char 		reserved_11	[1]	;
	Uint16_B 	CT_im_exno	; // at 8
	Int16_B 	CT_im_seno	; // at 10
	Int16_B 	CT_im_no	; // at 12
	Unix_DateTime_B 	CT_im_datetime	; // at 14
	Unix_DateTime_B 	CT_im_actual_dt	; // at 18
	IEEE_Float32_B 	CT_sctime	; // at 22
	IEEE_Float32_B 	CT_slthick	; // at 26
	Int16_B 	CT_imatrix_X	; // at 30
	Int16_B 	CT_imatrix_Y	; // at 32
	IEEE_Float32_B 	CT_dfov	; // at 34
	IEEE_Float32_B 	CT_dfov_rect	; // at 38
	IEEE_Float32_B 	CT_dim_X	; // at 42
	IEEE_Float32_B 	CT_dim_Y	; // at 46
	IEEE_Float32_B 	CT_pixsize_X	; // at 50
	IEEE_Float32_B 	CT_pixsize_Y	; // at 54
	String<14> 	CT_pdid	; // at 58
	String<17> 	CT_contrastIV	; // at 72
	String<17> 	CT_contrastOral	; // at 89
	Int16_B 	CT_contmode	; // at 106
	Int16_B 	CT_serrx	; // at 108
	Int16_B 	CT_imgrx	; // at 110
	Int16_B 	CT_screenformat	; // at 112
	Int16_B 	CT_plane	; // at 114
	IEEE_Float32_B 	CT_scanspacing	; // at 116
	Int16_B 	CT_im_compress	; // at 120
	Int16_B 	CT_im_scouttype	; // at 122
	String<1> 	CT_loc_ras	; // at 124
	char 		reserved_12	[1]	;
	IEEE_Float32_B 	CT_loc	; // at 126
	IEEE_Float32_B 	CT_ctr_R	; // at 130
	IEEE_Float32_B 	CT_ctr_A	; // at 134
	IEEE_Float32_B 	CT_ctr_S	; // at 138
	IEEE_Float32_B 	CT_norm_R	; // at 142
	IEEE_Float32_B 	CT_norm_A	; // at 146
	IEEE_Float32_B 	CT_norm_S	; // at 150
	IEEE_Float32_B 	CT_tlhc_R	; // at 154
	IEEE_Float32_B 	CT_tlhc_A	; // at 158
	IEEE_Float32_B 	CT_tlhc_S	; // at 162
	IEEE_Float32_B 	CT_trhc_R	; // at 166
	IEEE_Float32_B 	CT_trhc_A	; // at 170
	IEEE_Float32_B 	CT_trhc_S	; // at 174
	IEEE_Float32_B 	CT_brhc_R	; // at 178
	IEEE_Float32_B 	CT_brhc_A	; // at 182
	IEEE_Float32_B 	CT_brhc_S	; // at 186
	String<4> 	CT_forimgrev	; // at 190
	IEEE_Float32_B 	CT_sctstr	; // at 194
	IEEE_Float32_B 	CT_sctend	; // at 198
	IEEE_Float32_B 	CT_tblspd	; // at 202
	IEEE_Float32_B 	CT_tblht	; // at 206
	IEEE_Float32_B 	CT_midstime	; // at 210
	Int16_B 	CT_midsflag	; // at 214
	Int32_B 	CT_kvolt	; // at 216
	Int32_B 	CT_mamp	; // at 220
	IEEE_Float32_B 	CT_gantilt	; // at 224
	Int32_B 	CT_azimuth	; // at 228
	IEEE_Float32_B 	CT_ganvel	; // at 232
	Int32_B 	CT_ganfilt	; // at 236
	IEEE_Float32_B 	CT_trigon	; // at 240
	IEEE_Float32_B 	CT_degrot	; // at 244
	IEEE_Float32_B 	CT_xrayon	; // at 248
	IEEE_Float32_B 	CT_xrayoff	; // at 252
	Int32_B 	CT_numtrig	; // at 256
	Int16_B 	CT_inviews	; // at 260
	IEEE_Float32_B 	CT_view1ang	; // at 262
	IEEE_Float32_B 	CT_trigfreq	; // at 266
	Int32_B 	CT_trigsrc	; // at 270
	Int32_B 	CT_fpagain	; // at 274
	Int32_B 	CT_scanopmode	; // at 278
	Int32_B 	CT_outsrc	; // at 282
	Int32_B 	CT_adin	; // at 286
	Int32_B 	CT_calmode	; // at 290
	Int32_B 	CT_calfreq	; // at 294
	Int32_B 	CT_regxm	; // at 298
	Int32_B 	CT_autozero	; // at 302
	Int16_B 	CT_sfovtyp	; // at 306
	Int16_B 	CT_phantsize	; // at 308
	Int16_B 	CT_phanttyp	; // at 310
	Int16_B 	CT_filttyp	; // at 312
	Int16_B 	CT_reconalg	; // at 314
	Int16_B 	CT_perisflag	; // at 316
	Int16_B 	CT_iboneflag	; // at 318
	Int16_B 	CT_statflag	; // at 320
	Int16_B 	CT_computetyp	; // at 322
	Int16_B 	CT_segnum	; // at 324
	Int16_B 	CT_segstotal	; // at 326
	IEEE_Float32_B 	CT_isd	; // at 328
	IEEE_Float32_B 	CT_sfovmm	; // at 332
	Int16_B 	CT_scannum	; // at 336
	Int16_B 	CT_viewstrtchan	; // at 338
	Int16_B 	CT_viewcompfctr	; // at 340
	Int16_B 	CT_outviews	; // at 342
	Int16_B 	CT_overranges	; // at 344
	Int16_B 	CT_totrefchan	; // at 346
	Int32_B 	CT_scdatasize	; // at 348
	Int16_B 	CT_refchan1	; // at 352
	Int16_B 	CT_refchan2	; // at 354
	Int16_B 	CT_refchan3	; // at 356
	Int16_B 	CT_refchan4	; // at 358
	Int16_B 	CT_refchan5	; // at 360
	Int16_B 	CT_refchan6	; // at 362
	Int16_B 	CT_postproc	; // at 364
	Int32_B 	CT_xmpat	; // at 366
	Int16_B 	CT_rottyp	; // at 370
	Int16_B 	CT_rawdataflag	; // at 372
	IEEE_Float32_B 	CT_ct_scalefact	; // at 374
	Int16_B 	CT_ct_water_num	; // at 378
	Int16_B 	CT_ct_bone_num	; // at 380
	IEEE_Float32_B 	CT_bbh_coef1	; // at 382
	IEEE_Float32_B 	CT_bbh_coef2	; // at 386
	IEEE_Float32_B 	CT_bbh_coef3	; // at 390
	Int16_B 	CT_bbh_numblend	; // at 394
	Int32_B 	CT_firstchan	; // at 396
	Int32_B 	CT_numchan	; // at 400
	Int32_B 	CT_chaninc	; // at 404
	Int32_B 	CT_firstview	; // at 408
	Int32_B 	CT_numview	; // at 412
	Int32_B 	CT_viewinc	; // at 416
	Int32_B 	CT_windowrange	; // at 420
	IEEE_Float32_B 	CT_scalemin	; // at 424
	IEEE_Float32_B 	CT_scalemax	; // at 428
	Int32_B 	CT_datamod	; // at 432
	String<13> 	CT_qcalfile	; // at 436
	String<13> 	CT_calmodfile	; // at 449
	Int16_B 	CT_wordsperview	; // at 462
	String<1> 	CT_rl_ras	; // at 464
	String<1> 	CT_ap_ras	; // at 465
	String<1> 	CT_sctstr_ras	; // at 466
	String<1> 	CT_sctend_ras	; // at 467
	String<3> 	CT_sct_anref	; // at 468
	char 		reserved_13	[1]	;
	Int16_B 	CT_pps_scalwin	; // at 472
	Int16_B 	CT_pps_qcalflag	; // at 474
	Int16_B 	CT_pps_pcalflag	; // at 476
	Int16_B 	CT_pps_thetafix	; // at 478
	Int16_B 	CT_pps_bhflag	; // at 480
	Int16_B 	CT_spot_size	; // at 482
	Int16_B 	CT_spot_pos	; // at 484
	Int16_B 	CT_recondataset	; // at 486
	Int16_B 	CT_ndetcellsfov	; // at 488
	IEEE_Float64_B 	CT_strtscantime	; // at 490
	Int16_B 	CT_gandir	; // at 498
	Int16_B 	CT_rotorspeed	; // at 500
	Int16_B 	CT_trigmode	; // at 502
	IEEE_Float32_B 	CT_sitilt	; // at 504
	IEEE_Float32_B 	CT_targcen_R	; // at 508
	IEEE_Float32_B 	CT_targcen_A	; // at 512
	Int16_B 	CT_backprojflag	; // at 516
	Int16_B 	CT_fatqestflag	; // at 518
	IEEE_Float32_B 	CT_zavg	; // at 520
	IEEE_Float32_B 	CT_leftrefavg	; // at 524
	IEEE_Float32_B 	CT_leftrefmax	; // at 528
	IEEE_Float32_B 	CT_rightrefavg	; // at 532
	IEEE_Float32_B 	CT_rightrefmax	; // at 536
	String<13> 	CT_im_alloc_key	; // at 540
	char 		reserved_14	[1]	;
	Unix_DateTime_B 	CT_im_lastmod	; // at 554
	String<2> 	CT_im_verscre	; // at 558
	String<2> 	CT_im_verscur	; // at 560
	Int32_B 	CT_im_pds_a	; // at 562
	Int32_B 	CT_im_pds_c	; // at 566
	Int32_B 	CT_im_pds_u	; // at 570
	Uint32_B 	CT_im_checksum	; // at 574
	Int32_B 	CT_im_archived	; // at 578
	Int32_B 	CT_im_complete	; // at 582
	Int16_B 	CT_biop_pos	; // at 586
	IEEE_Float32_B 	CT_biop_tloc	; // at 588
	IEEE_Float32_B 	CT_biop_refloc	; // at 592
	Int16_B 	CT_ref_chan	; // at 596
	IEEE_Float32_B 	CT_bp_coef	; // at 598
	Int16_B 	CT_psc	; // at 602
	Int16_B 	CT_overrng_corr	; // at 604
	IEEE_Float32_B 	CT_dyn_z_alpha	; // at 606
	String<1> 	CT_ref_img	; // at 610
	String<1> 	CT_sum_img	; // at 611
	Uint16_B 	CT_img_window	; // at 612
	Int16_B 	CT_img_level	; // at 614
	Int32_B 	CT_slop_int_1	; // at 616
	Int32_B 	CT_slop_int_2	; // at 620
	Int32_B 	CT_slop_int_3	; // at 624
	Int32_B 	CT_slop_int_4	; // at 628
	Int32_B 	CT_slop_int_5	; // at 632
	IEEE_Float32_B 	CT_slop_float_1	; // at 636
	IEEE_Float32_B 	CT_slop_float_2	; // at 640
	IEEE_Float32_B 	CT_slop_float_3	; // at 644
	IEEE_Float32_B 	CT_slop_float_4	; // at 648
	IEEE_Float32_B 	CT_slop_float_5	; // at 652
	String<16> 	CT_slop_str_1	; // at 656
	String<16> 	CT_slop_str_2	; // at 672
	IEEE_Float32_B 	CT_deltastart	; // at 688
	Int32_B 	CT_maxOverrange	; // at 692
	IEEE_Float32_B 	CT_avgOverrange	; // at 696
	Int16_B 	CT_afterglow	; // at 700
	Uint16_B 	CT_z_blocked	; // at 702
	Uint16_B 	CT_ref1_blocked	; // at 704
	Uint16_B 	CT_ref2_blocked	; // at 706
	Uint16_B 	CT_ref3_blocked	; // at 708
	Uint16_B 	CT_ref4_blocked	; // at 710
	Uint16_B 	CT_ref5_blocked	; // at 712
	Int16_B 	CT_integrity	; // at 714
	String<8> 	CT_pitchRatio	; // at 716
	String<32> 	CT_image_uid	; // at 724
	String<32> 	CT_sop_uid	; // at 756
	IEEE_Float32_B 	CT_xraydelay	; // at 788
	IEEE_Float32_B 	CT_xrayduration	; // at 792
	String<223> 	CT_ct_padding	; // at 796
};

class GEN_HeaderClass_MRHDR {
public:
	GEN_HeaderClass_MRHDR(istream *ist,long offset)
		 { ReadProprietaryHeader(ist,offset,sizeof *this,(char *)this); }

	String<4> 	MR_im_suid	; // at 0
	Int16_B 	MR_im_uniq	; // at 4
	String<1> 	MR_im_diskid	; // at 6
	char 		reserved_15	[1]	;
	Uint16_B 	MR_im_exno	; // at 8
	Int16_B 	MR_im_seno	; // at 10
	Int16_B 	MR_im_no	; // at 12
	Unix_DateTime_B 	MR_im_datetime	; // at 14
	Unix_DateTime_B 	MR_im_actual_dt	; // at 18
	IEEE_Float32_B 	MR_sctime	; // at 22
	IEEE_Float32_B 	MR_slthick	; // at 26
	Int16_B 	MR_imatrix_X	; // at 30
	Int16_B 	MR_imatrix_Y	; // at 32
	IEEE_Float32_B 	MR_dfov	; // at 34
	IEEE_Float32_B 	MR_dfov_rect	; // at 38
	IEEE_Float32_B 	MR_dim_X	; // at 42
	IEEE_Float32_B 	MR_dim_Y	; // at 46
	IEEE_Float32_B 	MR_pixsize_X	; // at 50
	IEEE_Float32_B 	MR_pixsize_Y	; // at 54
	String<14> 	MR_pdid	; // at 58
	String<17> 	MR_contrastIV	; // at 72
	String<17> 	MR_contrastOral	; // at 89
	Int16_B 	MR_contmode	; // at 106
	Int16_B 	MR_serrx	; // at 108
	Int16_B 	MR_imgrx	; // at 110
	Int16_B 	MR_screenformat	; // at 112
	Int16_B 	MR_plane	; // at 114
	IEEE_Float32_B 	MR_scanspacing	; // at 116
	Int16_B 	MR_im_compress	; // at 120
	Int16_B 	MR_im_scouttype	; // at 122
	String<1> 	MR_loc_ras	; // at 124
	char 		reserved_16	[1]	;
	IEEE_Float32_B 	MR_loc	; // at 126
	IEEE_Float32_B 	MR_ctr_R	; // at 130
	IEEE_Float32_B 	MR_ctr_A	; // at 134
	IEEE_Float32_B 	MR_ctr_S	; // at 138
	IEEE_Float32_B 	MR_norm_R	; // at 142
	IEEE_Float32_B 	MR_norm_A	; // at 146
	IEEE_Float32_B 	MR_norm_S	; // at 150
	IEEE_Float32_B 	MR_tlhc_R	; // at 154
	IEEE_Float32_B 	MR_tlhc_A	; // at 158
	IEEE_Float32_B 	MR_tlhc_S	; // at 162
	IEEE_Float32_B 	MR_trhc_R	; // at 166
	IEEE_Float32_B 	MR_trhc_A	; // at 170
	IEEE_Float32_B 	MR_trhc_S	; // at 174
	IEEE_Float32_B 	MR_brhc_R	; // at 178
	IEEE_Float32_B 	MR_brhc_A	; // at 182
	IEEE_Float32_B 	MR_brhc_S	; // at 186
	String<4> 	MR_forimgrev	; // at 190
	Int32_B 	MR_tr	; // at 194
	Int32_B 	MR_ti	; // at 198
	Int32_B 	MR_te	; // at 202
	Int32_B 	MR_te2	; // at 206
	Int16_B 	MR_numecho	; // at 210
	Int16_B 	MR_echonum	; // at 212
	IEEE_Float32_B 	MR_tbldlta	; // at 214
	IEEE_Float32_B 	MR_nex	; // at 218
	Int16_B 	MR_contig	; // at 222
	Int16_B 	MR_hrtrate	; // at 224
	Int32_B 	MR_tdel	; // at 226
	IEEE_Float32_B 	MR_saravg	; // at 230
	IEEE_Float32_B 	MR_sarpeak	; // at 234
	Int16_B 	MR_monsar	; // at 238
	Int16_B 	MR_trgwindow	; // at 240
	IEEE_Float32_B 	MR_reptime	; // at 242
	Int16_B 	MR_imgpcyc	; // at 246
	Int16_B 	MR_xmtgain	; // at 248
	Int16_B 	MR_rcvgain1	; // at 250
	Int16_B 	MR_rcvgain2	; // at 252
	Int16_B 	MR_mr_flip	; // at 254
	Int32_B 	MR_mindat	; // at 256
	Int16_B 	MR_cphase	; // at 260
	Int16_B 	MR_swappf	; // at 262
	Int16_B 	MR_pauseint	; // at 264
	IEEE_Float32_B 	MR_pausetime	; // at 266
	Int32_B 	MR_obplane	; // at 270
	Int32_B 	MR_slocfov	; // at 274
	Int32_B 	MR_xmtfreq	; // at 278
	Int32_B 	MR_autoxmtfreq	; // at 282
	Int16_B 	MR_autoxmtgain	; // at 286
	Int16_B 	MR_prescan_r1	; // at 288
	Int16_B 	MR_prescan_r2	; // at 290
	Int32_B 	MR_user_bitmap	; // at 292
	Int16_B 	MR_cenfreq	; // at 296
	Int16_B 	MR_imode	; // at 298
	Int32_B 	MR_iopt	; // at 300
	Int16_B 	MR_pseq	; // at 304
	Int16_B 	MR_pseqmode	; // at 306
	String<33> 	MR_psdname	; // at 308
	char 		reserved_17	[1]	;
	Unix_DateTime_B 	MR_psd_datetime	; // at 342
	String<13> 	MR_psd_iname	; // at 346
	char 		reserved_18	[1]	;
	Int16_B 	MR_ctyp	; // at 360
	String<17> 	MR_cname	; // at 362
	char 		reserved_19	[1]	;
	Int16_B 	MR_surfctyp	; // at 380
	Int16_B 	MR_surfcext	; // at 382
	Int32_B 	MR_rawrunnum	; // at 384
	Uint32_B 	MR_cal_fldstr	; // at 388
	Int16_B 	MR_supp_tech	; // at 392
	IEEE_Float32_B 	MR_vbw	; // at 394
	Int16_B 	MR_slquant	; // at 398
	Int16_B 	MR_gpre	; // at 400
	Int32_B 	MR_intr_del	; // at 402
	IEEE_Float32_B 	MR_user0	; // at 406
	IEEE_Float32_B 	MR_user1	; // at 410
	IEEE_Float32_B 	MR_user2	; // at 414
	IEEE_Float32_B 	MR_user3	; // at 418
	IEEE_Float32_B 	MR_user4	; // at 422
	IEEE_Float32_B 	MR_user5	; // at 426
	IEEE_Float32_B 	MR_user6	; // at 430
	IEEE_Float32_B 	MR_user7	; // at 434
	IEEE_Float32_B 	MR_user8	; // at 438
	IEEE_Float32_B 	MR_user9	; // at 442
	IEEE_Float32_B 	MR_user10	; // at 446
	IEEE_Float32_B 	MR_user11	; // at 450
	IEEE_Float32_B 	MR_user12	; // at 454
	IEEE_Float32_B 	MR_user13	; // at 458
	IEEE_Float32_B 	MR_user14	; // at 462
	IEEE_Float32_B 	MR_user15	; // at 466
	IEEE_Float32_B 	MR_user16	; // at 470
	IEEE_Float32_B 	MR_user17	; // at 474
	IEEE_Float32_B 	MR_user18	; // at 478
	IEEE_Float32_B 	MR_user19	; // at 482
	IEEE_Float32_B 	MR_user20	; // at 486
	IEEE_Float32_B 	MR_user21	; // at 490
	IEEE_Float32_B 	MR_user22	; // at 494
	IEEE_Float32_B 	MR_user23	; // at 498
	IEEE_Float32_B 	MR_user24	; // at 502
	String<13> 	MR_im_alloc_key	; // at 506
	char 		reserved_20	[1]	;
	Unix_DateTime_B 	MR_im_lastmod	; // at 520
	String<2> 	MR_im_verscre	; // at 524
	String<2> 	MR_im_verscur	; // at 526
	Int32_B 	MR_im_pds_a	; // at 528
	Int32_B 	MR_im_pds_c	; // at 532
	Int32_B 	MR_im_pds_u	; // at 536
	Uint32_B 	MR_im_checksum	; // at 540
	Int32_B 	MR_im_archived	; // at 544
	Int32_B 	MR_im_complete	; // at 548
	Int16_B 	MR_satbits	; // at 552
	Int16_B 	MR_scic	; // at 554
	Int16_B 	MR_satxloc1	; // at 556
	Int16_B 	MR_satxloc2	; // at 558
	Int16_B 	MR_satyloc1	; // at 560
	Int16_B 	MR_satyloc2	; // at 562
	Int16_B 	MR_satzloc1	; // at 564
	Int16_B 	MR_satzloc2	; // at 566
	Int16_B 	MR_satxthick	; // at 568
	Int16_B 	MR_satythick	; // at 570
	Int16_B 	MR_satzthick	; // at 572
	Int16_B 	MR_flax	; // at 574
	Int16_B 	MR_venc	; // at 576
	Int16_B 	MR_thk_disclmr	; // at 578
	Int16_B 	MR_ps_flag	; // at 580
	Int16_B 	MR_ps_status	; // at 582
	Int16_B 	MR_image_type	; // at 584
	Int16_B 	MR_vas_collapse	; // at 586
	IEEE_Float32_B 	MR_user23n	; // at 588
	IEEE_Float32_B 	MR_user24n	; // at 592
	Int16_B 	MR_proj_alg	; // at 596
	String<13> 	MR_proj_name	; // at 598
	char 		reserved_21	[1]	;
	IEEE_Float32_B 	MR_x_axis_rot	; // at 612
	IEEE_Float32_B 	MR_y_axis_rot	; // at 616
	IEEE_Float32_B 	MR_z_axis_rot	; // at 620
	Int32_B 	MR_thresh_min1	; // at 624
	Int32_B 	MR_thresh_max1	; // at 628
	Int32_B 	MR_thresh_min2	; // at 632
	Int32_B 	MR_thresh_max2	; // at 636
	Int16_B 	MR_echo_trn_len	; // at 640
	Int16_B 	MR_frac_echo	; // at 642
	Int16_B 	MR_prep_pulse	; // at 644
	Int16_B 	MR_cphasenum	; // at 646
	Int16_B 	MR_var_echo	; // at 648
	String<1> 	MR_ref_img	; // at 650
	String<1> 	MR_sum_img	; // at 651
	Uint16_B 	MR_img_window	; // at 652
	Int16_B 	MR_img_level	; // at 654
	Int32_B 	MR_slop_int_1	; // at 656
	Int32_B 	MR_slop_int_2	; // at 660
	Int32_B 	MR_slop_int_3	; // at 664
	Int32_B 	MR_slop_int_4	; // at 668
	Int32_B 	MR_slop_int_5	; // at 672
	IEEE_Float32_B 	MR_slop_float_1	; // at 676
	IEEE_Float32_B 	MR_slop_float_2	; // at 680
	IEEE_Float32_B 	MR_slop_float_3	; // at 684
	IEEE_Float32_B 	MR_slop_float_4	; // at 688
	IEEE_Float32_B 	MR_slop_float_5	; // at 692
	String<16> 	MR_slop_str_1	; // at 696
	String<16> 	MR_slop_str_2	; // at 712
	Int16_B 	MR_scanactno	; // at 728
	Int16_B 	MR_vasflags	; // at 730
	IEEE_Float32_B 	MR_vencscale	; // at 732
	Int16_B 	MR_integrity	; // at 736
	Int32_B 	MR_fphase	; // at 738
	Int16_B 	MR_freq_dir	; // at 742
	Int16_B 	MR_vas_mode	; // at 744
	String<32> 	MR_image_uid	; // at 746
	String<32> 	MR_sop_uid	; // at 778
	String<212> 	MR_mr_padding	; // at 810
};
