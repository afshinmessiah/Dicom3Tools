// Automatically generated from template - EDITS WILL BE LOST
//
// Generated by convert.awk with options or defaults ...
//
// 	 role=wholeheader
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

class GEN_HeaderClass
{
public:
	GEN_HeaderClass(istream *ist,GEN_FileStructureInformation &fileinfo);

	GEN_HeaderClass_FILEHDR *GEN_HeaderInstance_FILEHDR;
	GEN_HeaderClass_UIDHDR *GEN_HeaderInstance_UIDHDR;
	GEN_HeaderClass_HISTOHDR *GEN_HeaderInstance_HISTOHDR;
	GEN_HeaderClass_SUITEHDR *GEN_HeaderInstance_SUITEHDR;
	GEN_HeaderClass_EXAMHDR *GEN_HeaderInstance_EXAMHDR;
	GEN_HeaderClass_SERIESHDR *GEN_HeaderInstance_SERIESHDR;
	GEN_HeaderClass_CTHDR *GEN_HeaderInstance_CTHDR;
	GEN_HeaderClass_MRHDR *GEN_HeaderInstance_MRHDR;
};
