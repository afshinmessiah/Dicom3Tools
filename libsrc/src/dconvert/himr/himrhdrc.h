// Automatically generated from template - EDITS WILL BE LOST
//
// Generated by convert.awk with options or defaults ...
//
// 	 role=constructheader
// 	 prefix=HIMR_
// 	 dicomfunctionname=ToDicom_Template
// 	 dumpcommonfunctionname=DumpCommon
// 	 dumpselectedimagefunctionname=DumpSelectedImage
// 	 headeroffsetprefix=HIMR_Offset
// 	 headeroffsetsuffix=ptr
// 	 headerclassprefix=HIMR_HeaderClass
// 	 headerdicomclassprefix=HIMR_Header_BothClass
// 	 headerdumpclassprefix=HIMR_Header_BothClass
// 	 headerinstanceprefix=HIMR_HeaderInstance
// 	 methodnameprefix=HIMR_Method
// 	 methodconstructorargsprefix=HIMR_MethodConstructorArgs
// 	 headerclassparameters=

HIMR_HeaderClass::HIMR_HeaderClass(istream *ist)
{
	HIMR_HeaderInstance_IMGHDR = 0;
	HIMR_HeaderInstance_IMGHDR = new
		HIMR_HeaderClass_IMGHDR(ist,HIMR_Offset_IMGHDR_ptr);

}

