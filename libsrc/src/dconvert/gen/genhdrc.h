// Automatically generated from template - EDITS WILL BE LOST
//
// Generated by convert.awk with options or defaults ...
//
// 	 role=constructheader
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
// 	 headerclassparameters=,GEN_FileStructureInformation &fileinfo

GEN_HeaderClass::GEN_HeaderClass(istream *ist,GEN_FileStructureInformation &fileinfo)
{
	GEN_HeaderInstance_FILEHDR = 0;
	GEN_HeaderInstance_FILEHDR = new
		GEN_HeaderClass_FILEHDR(ist,GEN_Offset_FILEHDR_ptr);

	GEN_HeaderInstance_UIDHDR = 0;
	if (GEN_hasuid) GEN_HeaderInstance_UIDHDR = new
		GEN_HeaderClass_UIDHDR(ist,GEN_Offset_UIDHDR_ptr);

	GEN_HeaderInstance_HISTOHDR = 0;
	if (GEN_hashisto) GEN_HeaderInstance_HISTOHDR = new
		GEN_HeaderClass_HISTOHDR(ist,GEN_Offset_HISTOHDR_ptr);

	GEN_HeaderInstance_SUITEHDR = 0;
	GEN_HeaderInstance_SUITEHDR = new
		GEN_HeaderClass_SUITEHDR(ist,GEN_Offset_SUITEHDR_ptr);

	GEN_HeaderInstance_EXAMHDR = 0;
	GEN_HeaderInstance_EXAMHDR = new
		GEN_HeaderClass_EXAMHDR(ist,GEN_Offset_EXAMHDR_ptr);

	GEN_HeaderInstance_SERIESHDR = 0;
	GEN_HeaderInstance_SERIESHDR = new
		GEN_HeaderClass_SERIESHDR(ist,GEN_Offset_SERIESHDR_ptr);

	GEN_HeaderInstance_CTHDR = 0;
	if (GEN_isct) GEN_HeaderInstance_CTHDR = new
		GEN_HeaderClass_CTHDR(ist,GEN_Offset_CTHDR_ptr);

	GEN_HeaderInstance_MRHDR = 0;
	if (GEN_ismr) GEN_HeaderInstance_MRHDR = new
		GEN_HeaderClass_MRHDR(ist,GEN_Offset_MRHDR_ptr);

}
