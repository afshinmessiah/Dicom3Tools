// Automatically generated from template - EDITS WILL BE LOST
//
// Generated by convert.awk with options or defaults ...
//
// 	 role=headerpart
// 	 prefix=IMTN_
// 	 dicomfunctionname=ToDicom_Template
// 	 dumpcommonfunctionname=DumpCommon
// 	 dumpselectedimagefunctionname=DumpSelectedImage
// 	 headeroffsetprefix=IMTN_Offset
// 	 headeroffsetsuffix=ptr
// 	 headerclassprefix=IMTN_HeaderClass
// 	 headerdicomclassprefix=IMTN_Header_BothClass
// 	 headerdumpclassprefix=IMTN_Header_BothClass
// 	 headerinstanceprefix=IMTN_HeaderInstance
// 	 methodnameprefix=IMTN_Method
// 	 methodconstructorargsprefix=IMTN_MethodConstructorArgs
// 	 headerclassparameters=

class IMTN_HeaderClass_MAINHDR {
public:
	IMTN_HeaderClass_MAINHDR(istream *ist,long offset)
		 { ReadProprietaryHeader(ist,offset,sizeof *this,(char *)this); }

	Uint16_L 	FHENTRIES	; // at 0
	Uint16_L 	FHCOUNT	; // at 2
	Uint16_L 	FHDATA	; // at 4
	Uint16_L 	SLENTRIES	; // at 6
	Uint16_L 	SLCOUNT	; // at 8
	Uint16_L 	SLTBPOSN	; // at 10
	Uint16_L 	SLTBSIZE	; // at 12
	Uint16_L 	VERSION	; // at 14
	Uint16_L 	BLKDETOFF	; // at 16
	Uint16_L 	BLKFHENTRIES	; // at 18
	Uint16_L 	BLKFHDATA	; // at 20
	Uint16_L 	BLKSLENTRIES	; // at 22
	Uint16_L 	BLKSLTBPOSN	; // at 24
	Uint16_L 	BLKSLTBDATA	; // at 26
	Uint16_L 	DETOFF	; // at 28
};

