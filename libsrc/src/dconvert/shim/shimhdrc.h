// Automatically generated from template - EDITS WILL BE LOST
//
// Generated by convert.awk with options or defaults ...
//
// 	 role=constructheader
// 	 prefix=SHIM_
// 	 dicomfunctionname=ToDicom_Template
// 	 dumpcommonfunctionname=DumpCommon
// 	 dumpselectedimagefunctionname=DumpSelectedImage
// 	 headeroffsetprefix=SHIM_Offset
// 	 headeroffsetsuffix=ptr
// 	 headerclassprefix=SHIM_HeaderClass
// 	 headerdicomclassprefix=SHIM_Header_BothClass
// 	 headerdumpclassprefix=SHIM_Header_BothClass
// 	 headerinstanceprefix=SHIM_HeaderInstance
// 	 methodnameprefix=SHIM_Method
// 	 methodconstructorargsprefix=SHIM_MethodConstructorArgs
// 	 headerclassparameters=

SHIM_HeaderClass::SHIM_HeaderClass(istream *ist)
{
	SHIM_HeaderInstance_MAINHDR = 0;
	SHIM_HeaderInstance_MAINHDR = new
		SHIM_HeaderClass_MAINHDR(ist,SHIM_Offset_MAINHDR_ptr);

}

