// Automatically generated from template - EDITS WILL BE LOST
//
// Generated by convert.awk with options or defaults ...
//
// 	 role=constructheader
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

IMTN_HeaderClass::IMTN_HeaderClass(istream *ist)
{
	IMTN_HeaderInstance_MAINHDR = 0;
	IMTN_HeaderInstance_MAINHDR = new
		IMTN_HeaderClass_MAINHDR(ist,IMTN_Offset_MAINHDR_ptr);

	IMTN_HeaderInstance_FILEHDR = 0;
	IMTN_HeaderInstance_FILEHDR = new
		IMTN_HeaderClass_FILEHDR(ist IMTN_MethodConstructorArgs_FILEHDR);

	IMTN_HeaderInstance_SLICEHDR = 0;
	IMTN_HeaderInstance_SLICEHDR = new
		IMTN_HeaderClass_SLICEHDR(ist IMTN_MethodConstructorArgs_SLICEHDR);

}

