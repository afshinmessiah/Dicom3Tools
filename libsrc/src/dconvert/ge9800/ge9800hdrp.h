// Automatically generated from template - EDITS WILL BE LOST
//
// Generated by convert.awk with options or defaults ...
//
// 	 role=headerpart
// 	 prefix=GE9800_
// 	 dicomfunctionname=ToDicom_Template
// 	 dumpcommonfunctionname=DumpCommon
// 	 dumpselectedimagefunctionname=DumpSelectedImage
// 	 headeroffsetprefix=GE9800_Offset
// 	 headeroffsetsuffix=ptr
// 	 headerclassprefix=GE9800_HeaderClass
// 	 headerdicomclassprefix=GE9800_Header_BothClass
// 	 headerdumpclassprefix=GE9800_Header_BothClass
// 	 headerinstanceprefix=GE9800_HeaderInstance
// 	 methodnameprefix=GE9800_Method
// 	 methodconstructorargsprefix=GE9800_MethodConstructorArgs
// 	 headerclassparameters=

class GE9800_HeaderClass_GLOBALHDR {
public:
	GE9800_HeaderClass_GLOBALHDR(istream *ist,long offset)
		 { ReadProprietaryHeader(ist,offset,sizeof *this,(char *)this); }

	String<6> 	unknown6	; // at 0
	String<2> 	unknown7	; // at 6
	String<2> 	unknown8	; // at 8
	String<2> 	unknown9	; // at 10
	Int16_B 	unknown10	; // at 12
	Int16_B 	unknown11	; // at 14
	Int16_B 	unknown12	; // at 16
	Int16_B 	unknown13	; // at 18
	Int16_B 	unknown14	; // at 20
	Int16_B 	unknown15	; // at 22
	Int16_B 	unknown16	; // at 24
	char 		reserved_1	[6]	;
	String<14> 	unknown18	; // at 32
	char 		reserved_2	[18]	;
	String<2> 	unknown20	; // at 64
	Int16_B 	GLOBALHDRPTR	; // at 66
	Int16_B 	EXAMHDRPTR	; // at 68
	Int16_B 	IMAGE1HDRPTR	; // at 70
	Int16_B 	IMAGE2HDRPTR	; // at 72
	Int16_B 	IMAGEMAPPTR	; // at 74
	Int16_B 	IMAGEDATAPTR	; // at 76
	Int16_B 	GLOBALHDRLNG	; // at 78
	Int16_B 	EXAMHDRLNG	; // at 80
	Int16_B 	IMAGE1HDRLNG	; // at 82
	Int16_B 	IMAGE2HDRLNG	; // at 84
	Int16_B 	IMAGEMAPLNG	; // at 86
	Int16_B 	IMAGEDATALNG	; // at 88
	Int16_B 	unknown36	; // at 90
	Int16_B 	unknown37	; // at 92
	Int16_B 	unknown38	; // at 94
	char 		reserved_3	[4]	;
	Int16_B 	unknown39	; // at 100
	char 		reserved_4	[4]	;
	Int16_B 	unknown40	; // at 106
	char 		reserved_5	[4]	;
	Int16_B 	unknown41	; // at 112
	char 		reserved_6	[4]	;
	Int16_B 	unknown42	; // at 118
	char 		reserved_7	[4]	;
	Int16_B 	unknown43	; // at 124
	char 		reserved_8	[66]	;
	Int16_B 	unknown44	; // at 192
	Int16_B 	unknown45	; // at 194
};

class GE9800_HeaderClass_EXAMHDR {
public:
	GE9800_HeaderClass_EXAMHDR(istream *ist,long offset)
		 { ReadProprietaryHeader(ist,offset,sizeof *this,(char *)this); }

	String<2> 	unknown49	; // at 0
	Int16_B 	unknown50	; // at 2
	Int16_B 	unknown51	; // at 4
	Int16_B 	StudyNumber	; // at 6
	String<14> 	unknown53	; // at 8
	String<12> 	unknown54	; // at 22
	String<30> 	unknown55	; // at 34
	String<30> 	unknown56	; // at 64
	String<24> 	unknown57	; // at 94
	String<30> 	unknown58	; // at 118
	String<4> 	unknown59	; // at 148
	String<80> 	unknown60	; // at 152
	Int16_B 	unknown64	; // at 232
	Int16_B 	unknown65	; // at 234
	Int16_B 	unknown66	; // at 236
	Int16_B 	unknown67	; // at 238
	Int16_B 	unknown68	; // at 240
	Int16_B 	unknown69	; // at 242
	Int16_B 	EXAMSTARTDATEMM	; // at 244
	Int16_B 	EXAMSTARTDATEDD	; // at 246
	Int16_B 	EXAMSTARTDATEYY	; // at 248
	Int16_B 	EXAMSTARTTIMEHH	; // at 250
	Int16_B 	EXAMSTARTTIMEMM	; // at 252
	Int16_B 	EXAMSTARTTIMESS	; // at 254
	Int16_B 	unknown76	; // at 256
	Int16_B 	unknown77	; // at 258
	Int16_B 	unknown78	; // at 260
	Int16_B 	unknown79	; // at 262
	Int16_B 	unknown80	; // at 264
	Int16_B 	unknown81	; // at 266
	Int16_B 	unknown82	; // at 268
	Int16_B 	unknown83	; // at 270
	Int16_B 	unknown87	; // at 272
	Int16_B 	unknown88	; // at 274
	DG_Float_F 	unknown89	; // at 276
	DG_Float_F 	unknown90	; // at 280
	DG_Float_F 	unknown91	; // at 284
	DG_Float_F 	unknown92	; // at 288
	Int16_B 	unknown93	; // at 292
	String<4> 	unknown94	; // at 294
	Int16_B 	unknown95	; // at 298
	String<4> 	unknown96	; // at 300
	Int16_B 	unknown97	; // at 304
	Int16_B 	unknown98	; // at 306
	Int16_B 	unknown99	; // at 308
	Int16_B 	unknown100	; // at 310
	Int16_B 	unknown104	; // at 312
	Int16_B 	unknown105	; // at 314
	Int16_B 	unknown106	; // at 316
	Int16_B 	unknown107	; // at 318
	Int16_B 	unknown108	; // at 320
	Int16_B 	unknown109	; // at 322
	Int16_B 	unknown110	; // at 324
	String<2> 	unknown111	; // at 326
	Int16_B 	unknown112	; // at 328
	Int16_B 	unknown113	; // at 330
	Int16_B 	unknown114	; // at 332
	Int16_B 	unknown115	; // at 334
	Int16_B 	unknown116	; // at 336
	Int16_B 	unknown117	; // at 338
	Int16_B 	unknown118	; // at 340
	Int16_B 	unknown119	; // at 342
};

class GE9800_HeaderClass_IMAGE1HDR {
public:
	GE9800_HeaderClass_IMAGE1HDR(istream *ist,long offset)
		 { ReadProprietaryHeader(ist,offset,sizeof *this,(char *)this); }

	String<2> 	unknown123	; // at 0
	Int16_B 	unknown124	; // at 2
	Int16_B 	unknown125	; // at 4
	String<14> 	unknown126	; // at 6
	Int16_B 	unknown127	; // at 20
	Int16_B 	unknown128	; // at 22
	Int16_B 	GroupType	; // at 24
	Int16_B 	unknown130	; // at 26
	String<30> 	unknown131	; // at 28
	char 		reserved_9	[34]	;
	Int16_B 	unknown132	; // at 92
	Int16_B 	ImageNumber	; // at 94
	Int16_B 	PatientType	; // at 96
	Int16_B 	PatientOrientation	; // at 98
	Int16_B 	APPatientOrientation	; // at 100
	String<6> 	PositionReference	; // at 102
	Int16_B 	unknown138	; // at 108
	String<64> 	unknown139	; // at 110
	Int16_B 	BowtieFilter	; // at 174
	DG_Float_F 	unknown141	; // at 176
	Int16_B 	unknown142	; // at 180
	Int16_B 	TubeCurrent	; // at 182
	DG_Float_F 	GantryAngle	; // at 184
	DG_Float_F 	unknown145	; // at 188
	DG_Float_F 	SlicePosition	; // at 192
	DG_Float_F 	ScanTime	; // at 196
	Int16_B 	unknown148	; // at 200
	Int16_B 	unknown149	; // at 202
	Int16_B 	STARTOFSCANDATEMM	; // at 204
	Int16_B 	STARTOFSCANDATEDD	; // at 206
	Int16_B 	STARTOFSCANDATEYY	; // at 208
	Int16_B 	STARTOFSCANTIMEHH	; // at 210
	Int16_B 	STARTOFSCANTIMEMM	; // at 212
	Int16_B 	STARTOFSCANTIMESS	; // at 214
	Int16_B 	ENDOFSCANTIMEHH	; // at 216
	Int16_B 	ENDOFSCANTIMEMM	; // at 218
	Int16_B 	ENDOFSCANTIMESS	; // at 220
	Int16_B 	unknown159	; // at 222
	Int16_B 	unknown160	; // at 224
	Int16_B 	unknown164	; // at 226
	Int16_B 	unknown165	; // at 228
	Int16_B 	unknown166	; // at 230
	Int16_B 	unknown167	; // at 232
	DG_Float_F 	unknown168	; // at 234
	DG_Float_F 	unknown169	; // at 238
	Int16_B 	RotationDirection	; // at 242
	Int16_B 	unknown171	; // at 244
	Int16_B 	ImageSize	; // at 246
	DG_Float_F 	unknown176	; // at 248
	Int16_B 	TubeAzimuth	; // at 252
	DG_Float_F 	ScoutEndLocation	; // at 254
	DG_Float_F 	ViewSpacing	; // at 258
	Int16_B 	DetectorsPerView	; // at 262
	Int16_B 	unknown184	; // at 264
	Int16_B 	unknown185	; // at 266
	Int16_B 	unknown186	; // at 268
	Int16_B 	unknown187	; // at 270
	Int16_B 	ViewsPerScan	; // at 272
	Int16_B 	unknown192	; // at 274
	Int16_B 	unknown193	; // at 276
	Int16_B 	unknown194	; // at 278
	Int16_B 	unknown195	; // at 280
	Int16_B 	unknown196	; // at 282
	Int16_B 	unknown197	; // at 284
	DG_Float_F 	XDiameter	; // at 286
	DG_Float_F 	YDiameter	; // at 290
	DG_Float_F 	Pixel256	; // at 294
	DG_Float_F 	Pixel320	; // at 298
	DG_Float_F 	Pixel512	; // at 302
	Int16_B 	unknown209	; // at 306
	DG_Float_F 	MagFactor	; // at 308
	DG_Float_F 	XCenter	; // at 312
	DG_Float_F 	YCenter	; // at 316
	Int16_B 	WindowSetting	; // at 320
	Int16_B 	LevelSetting	; // at 322
	Int16_B 	unknown218	; // at 324
	Int16_B 	unknown219	; // at 326
	Int16_B 	unknown220	; // at 328
	Int16_B 	RECONDATEMM	; // at 330
	Int16_B 	RECONDATEDD	; // at 332
	Int16_B 	RECONDATEYY	; // at 334
	Int16_B 	RECONTIMEHH	; // at 336
	Int16_B 	RECONTIMEMM	; // at 338
	Int16_B 	RECONTIMESS	; // at 340
	Int16_B 	unknown227	; // at 342
	Int16_B 	unknown228	; // at 344
	Int16_B 	unknown229	; // at 346
	Int16_B 	UseImageMap	; // at 348
	String<80> 	unknown231	; // at 350
	DG_Float_F 	ReconPixelSize	; // at 430
	Int16_B 	FileType	; // at 434
	Int16_B 	DataRange	; // at 436
	Int16_B 	unknown238	; // at 438
	Int16_B 	unknown239	; // at 440
	Int16_B 	PreprocessReconType	; // at 442
	DG_Float_F 	ReconXDiameter	; // at 444
	DG_Float_F 	ReconYDiameter	; // at 448
	DG_Float_F 	ReconXCenter	; // at 452
	DG_Float_F 	ReconYCenter	; // at 456
	DG_Float_F 	ReconMagFactor	; // at 460
	Int16_B 	unknown249	; // at 464
	Int16_B 	unknown250	; // at 466
	Int16_B 	unknown251	; // at 468
	Int16_B 	unknown252	; // at 470
	Int16_B 	unknown253	; // at 472
	Int16_B 	unknown254	; // at 474
	Int16_B 	unknown255	; // at 476
	String<2> 	unknown257	; // at 478
	Int16_B 	unknown258	; // at 480
	Int16_B 	unknown259	; // at 482
	Int16_B 	unknown260	; // at 484
	Int16_B 	unknown261	; // at 486
};

class GE9800_HeaderClass_IMAGE2HDR {
public:
	GE9800_HeaderClass_IMAGE2HDR(istream *ist,long offset)
		 { ReadProprietaryHeader(ist,offset,sizeof *this,(char *)this); }

	Int16_B 	unknown265	; // at 0
	Int16_B 	unknown266	; // at 2
	Int16_B 	unknown267	; // at 4
	Int16_B 	unknown268	; // at 6
	Int16_B 	unknown269	; // at 8
	Int16_B 	unknown270	; // at 10
	Int16_B 	unknown271	; // at 12
	Int16_B 	unknown272	; // at 14
	Int16_B 	unknown273	; // at 16
	Int16_B 	unknown274	; // at 18
	Int16_B 	unknown275	; // at 20
	Int16_B 	unknown276	; // at 22
	Int16_B 	unknown277	; // at 24
	Int16_B 	unknown278	; // at 26
	Int16_B 	unknown279	; // at 28
	Int16_B 	unknown280	; // at 30
	Int16_B 	unknown281	; // at 32
	Int16_B 	unknown282	; // at 34
	Int16_B 	unknown283	; // at 36
	Int16_B 	unknown284	; // at 38
	String<20> 	unknown285	; // at 40
	Int16_B 	unknown286	; // at 60
	Int16_B 	unknown287	; // at 62
	DG_Float_F 	unknown288	; // at 64
	DG_Float_F 	unknown289	; // at 68
	DG_Float_F 	unknown290	; // at 72
	DG_Float_F 	unknown291	; // at 76
	DG_Float_F 	unknown292	; // at 80
	Int16_B 	unknown293	; // at 84
	Int16_B 	unknown294	; // at 86
	Int16_B 	unknown295	; // at 88
	Int16_B 	unknown296	; // at 90
	Int16_B 	unknown297	; // at 92
	Int16_B 	unknown298	; // at 94
	Int16_B 	unknown299	; // at 96
	Int16_B 	unknown300	; // at 98
	Int16_B 	unknown301	; // at 100
	Int16_B 	unknown302	; // at 102
	Int16_B 	unknown303	; // at 104
	char 		reserved_10	[6]	;
	Int16_B 	unknown304	; // at 112
	Int16_B 	unknown305	; // at 114
	Int16_B 	unknown306	; // at 116
	Int16_B 	unknown307	; // at 118
	Int16_B 	unknown308	; // at 120
	Int16_B 	unknown309	; // at 122
	Int16_B 	unknown310	; // at 124
	Int16_B 	unknown311	; // at 126
	Int16_B 	unknown312	; // at 128
	Int16_B 	unknown313	; // at 130
	Int16_B 	unknown314	; // at 132
	Int16_B 	unknown315	; // at 134
	Int16_B 	unknown316	; // at 136
	Int16_B 	unknown317	; // at 138
	Int16_B 	unknown318	; // at 140
	DG_Float_F 	unknown319	; // at 142
	Int16_B 	unknown320	; // at 146
	Int16_B 	unknown321	; // at 148
	Int16_B 	unknown322	; // at 150
	DG_Float_F 	unknown323	; // at 152
	DG_Float_F 	unknown324	; // at 156
	Int16_B 	unknown325	; // at 160
	Int16_B 	unknown326	; // at 162
	Int16_B 	unknown327	; // at 164
	Int16_B 	unknown328	; // at 166
	Int16_B 	unknown329	; // at 168
	Int16_B 	unknown330	; // at 170
	Int16_B 	unknown331	; // at 172
	Int16_B 	unknown332	; // at 174
	Int16_B 	unknown333	; // at 176
	Int16_B 	unknown334	; // at 178
	Int16_B 	unknown335	; // at 180
	Int16_B 	unknown336	; // at 182
	Int16_B 	unknown337	; // at 184
	Int16_B 	unknown338	; // at 186
	Int16_B 	unknown339	; // at 188
	Int16_B 	unknown340	; // at 190
	Int16_B 	unknown341	; // at 192
};
