// Automatically generated from template - EDITS WILL BE LOST
//
// Generated by convert.awk with options or defaults ...
//
// 	 role=dicom
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

void 
HIMR_Header_BothClass::ToDicom_Template(AttributeList *list,unsigned imagenumber)
{
	(void)imagenumber;

	(*list)+=new ShortStringAttribute(
		TagFromName(StationName),
		HIMR_HeaderInstance_IMGHDR->UTNO);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(Columns),
		HIMR_HeaderInstance_IMGHDR->MATX);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(Rows),
		HIMR_HeaderInstance_IMGHDR->MATY);

	(*list)+=new LongStringAttribute(
		TagFromName(SoftwareVersions),
		String_Use(HIMR_HeaderInstance_IMGHDR->XIVN));

	(*list)+=new LongStringAttribute(
		TagFromName(ManufacturerModelName),
		String_Use(HIMR_HeaderInstance_IMGHDR->XISYTP));

	(*list)+=new LongStringAttribute(
		TagFromName(InstitutionName),
		String_Use(HIMR_HeaderInstance_IMGHDR->XIHP));

	(*list)+=new PersonNameAttribute(
		TagFromName(PatientName),
		String_Use(HIMR_HeaderInstance_IMGHDR->XINM));

	(*list)+=new IntegerStringAttribute(
		TagFromName(InstanceNumber),
		String_Use(HIMR_HeaderInstance_IMGHDR->XISN));

	(*list)+=new CodeStringAttribute(
		TagFromName(PatientSex),
		String_Use(HIMR_HeaderInstance_IMGHDR->XISX));

	(*list)+=new DecimalStringAttribute(
		TagFromName(SliceThickness),
		String_Use(HIMR_HeaderInstance_IMGHDR->XISLS));

	(*list)+=new DecimalStringAttribute(
		TagFromName(RepetitionTime),
		String_Use(HIMR_HeaderInstance_IMGHDR->XITR));

	(*list)+=new DecimalStringAttribute(
		TagFromName(EchoTime),
		String_Use(HIMR_HeaderInstance_IMGHDR->MITE));

	(*list)+=new DecimalStringAttribute(
		TagFromName(InversionTime),
		String_Use(HIMR_HeaderInstance_IMGHDR->MITI));

	(*list)+=new IntegerStringAttribute(
		TagFromName(ImagesInAcquisition),
		String_Use(HIMR_HeaderInstance_IMGHDR->MIMSMAX));

	(*list)+=new IntegerStringAttribute(
		TagFromName(EchoTrainLength),
		String_Use(HIMR_HeaderInstance_IMGHDR->MIMEMAX));

	(*list)+=new IntegerStringAttribute(
		TagFromName(AcquisitionNumber),
		String_Use(HIMR_HeaderInstance_IMGHDR->MIMS));

	(*list)+=new IntegerStringAttribute(
		TagFromName(EchoNumbers),
		String_Use(HIMR_HeaderInstance_IMGHDR->MIME));

	(*list)+=new DecimalStringAttribute(
		TagFromName(ReconstructionDiameter),
		String_Use(HIMR_HeaderInstance_IMGHDR->XIDFOV));

	(*list)+=new DecimalStringAttribute(
		TagFromName(NumberOfAverages),
		HIMR_HeaderInstance_IMGHDR->MIAVG);

	(*list)+=new DecimalStringAttribute(
		TagFromName(FlipAngle),
		HIMR_HeaderInstance_IMGHDR->MIFLANG);

	(*list)+=new ShortStringAttribute(
		TagFromName(ReceiveCoilName),
		String_Use(HIMR_HeaderInstance_IMGHDR->MICILNAM));

	(*list)+=new LongStringAttribute(
		TagFromName(PatientID),
		String_Use(HIMR_HeaderInstance_IMGHDR->XIFD16));

	(*list)+=new UnsignedShortAttribute(
		TagFromName(BitsStored),16);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(BitsAllocated),16);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(HighBit),15);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(PixelRepresentation),0);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(PixelPaddingValue),0);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(SamplesPerPixel),1);

	(*list)+=new CodeStringAttribute(
		TagFromName(PhotometricInterpretation),"MONOCHROME2");

	(*list)+=new DecimalStringAttribute(
		TagFromName(RescaleIntercept),"0");

	(*list)+=new PersonNameAttribute(
		TagFromName(ReferringPhysicianName));

	(*list)+=new ShortStringAttribute(
		TagFromName(StudyID),"0");

	(*list)+=new LongStringAttribute(
		TagFromName(Manufacturer),"Hitachi Medical Systems");

}

