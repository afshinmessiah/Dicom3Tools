// Automatically generated from template - EDITS WILL BE LOST
//
// Generated by convert.awk with options or defaults ...
//
// 	 role=wholeheader
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

class IMTN_HeaderClass
{
public:
	IMTN_HeaderClass(istream *ist);

	IMTN_HeaderClass_MAINHDR *IMTN_HeaderInstance_MAINHDR;
	IMTN_HeaderClass_FILEHDR *IMTN_HeaderInstance_FILEHDR;
	IMTN_HeaderClass_SLICEHDR *IMTN_HeaderInstance_SLICEHDR;
};
