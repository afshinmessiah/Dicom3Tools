// Automatically generated from template - EDITS WILL BE LOST
//
// Generated by convert.awk with options or defaults ...
//
// 	 role=constructheader
// 	 prefix=SOMP_
// 	 dicomfunctionname=ToDicom_Template
// 	 dumpcommonfunctionname=DumpCommon
// 	 dumpselectedimagefunctionname=DumpSelectedImage
// 	 headeroffsetprefix=SOMP_Offset
// 	 headeroffsetsuffix=ptr
// 	 headerclassprefix=SOMP_HeaderClass
// 	 headerdicomclassprefix=SOMP_Header_BothClass
// 	 headerdumpclassprefix=SOMP_Header_BothClass
// 	 headerinstanceprefix=SOMP_HeaderInstance
// 	 methodnameprefix=SOMP_Method
// 	 methodconstructorargsprefix=SOMP_MethodConstructorArgs
// 	 headerclassparameters=

SOMP_HeaderClass::SOMP_HeaderClass(istream *ist)
{
	SOMP_HeaderInstance_BINHDR = 0;
	SOMP_HeaderInstance_BINHDR = new
		SOMP_HeaderClass_BINHDR(ist,SOMP_Offset_BINHDR_ptr);

	SOMP_HeaderInstance_TEXTHDR = 0;
	SOMP_HeaderInstance_TEXTHDR = new
		SOMP_HeaderClass_TEXTHDR(ist,SOMP_Offset_TEXTHDR_ptr);

}
