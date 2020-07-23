// Automatically generated from template - EDITS WILL BE LOST
//
// Generated by convert.awk with options or defaults ...
//
// 	 role=dicom
// 	 prefix=PACE_
// 	 dicomfunctionname=ToDicom_Template
// 	 dumpcommonfunctionname=DumpCommon
// 	 dumpselectedimagefunctionname=DumpSelectedImage
// 	 headeroffsetprefix=PACE_Offset
// 	 headeroffsetsuffix=ptr
// 	 headerclassprefix=PACE_HeaderClass
// 	 headerdicomclassprefix=PACE_Header_BothClass
// 	 headerdumpclassprefix=PACE_Header_BothClass
// 	 headerinstanceprefix=PACE_HeaderInstance
// 	 methodnameprefix=PACE_Method
// 	 methodconstructorargsprefix=PACE_MethodConstructorArgs
// 	 headerclassparameters=

void 
PACE_Header_BothClass::ToDicom_Template(AttributeList *list,unsigned imagenumber)
{
	(void)imagenumber;

	(*list)+=new LongStringAttribute(
		TagFromName(DeviceSerialNumber),
		PACE_HeaderInstance_STDHDR->SMACHINE);

	(*list)+=new ShortStringAttribute(
		TagFromName(StudyID),
		String_Use(PACE_HeaderInstance_STDHDR->SSTUDYNO));

	(*list)+=new LongStringAttribute(
		TagFromName(PatientID),
		String_Use(PACE_HeaderInstance_STDHDR->SPATID));

	(*list)+=new PersonNameAttribute(
		TagFromName(PatientName),
		String_Use(PACE_HeaderInstance_STDHDR->SPATNAME));

	(*list)+=new DecimalStringAttribute(
		TagFromName(PatientWeight),
		String_Use(PACE_HeaderInstance_STDHDR->SWEIGHT));

	(*list)+=new CodeStringAttribute(
		TagFromName(PatientSex),
		String_Use(PACE_HeaderInstance_STDHDR->SSEX));

	(*list)+=new LongStringAttribute(
		TagFromName(Manufacturer),
		String_Use(PACE_HeaderInstance_STDHDR->SMAKER));

	(*list)+=new LongStringAttribute(
		TagFromName(ManufacturerModelName),
		String_Use(PACE_HeaderInstance_STDHDR->SMODELNM));

	(*list)+=new LongStringAttribute(
		TagFromName(InstitutionName),
		String_Use(PACE_HeaderInstance_STDHDR->SHOSP));

	(*list)+=new IntegerStringAttribute(
		TagFromName(SeriesInStudy),
		PACE_HeaderInstance_STDHDR->SNOSER);

	(*list)+=new IntegerStringAttribute(
		TagFromName(AcquisitionsInStudy),
		PACE_HeaderInstance_STDHDR->SNOACQ);

	(*list)+=new IntegerStringAttribute(
		TagFromName(ImagesInAcquisition),
		PACE_HeaderInstance_STDHDR->SNOIMG);

	(*list)+=new IntegerStringAttribute(
		TagFromName(SeriesNumber),
		String_Use(PACE_HeaderInstance_IMGHDR->ISERNO));

	(*list)+=new IntegerStringAttribute(
		TagFromName(AcquisitionNumber),
		String_Use(PACE_HeaderInstance_IMGHDR->IACQNO));

	(*list)+=new IntegerStringAttribute(
		TagFromName(InstanceNumber),
		String_Use(PACE_HeaderInstance_IMGHDR->IIMGNO));

	(*list)+=new CodeStringAttribute(
		TagFromName(BodyPartExamined),
		String_Use(PACE_HeaderInstance_IMGHDR->IANATOMY));

	(*list)+=new LongStringAttribute(
		TagFromName(PositionReferenceIndicator),
		String_Use(PACE_HeaderInstance_IMGHDR->IAREFHF));

	(*list)+=new DecimalStringAttribute(
		TagFromName(SliceThickness),
		String_Use(PACE_HeaderInstance_IMGHDR->ISTHICK));

	if (PACE_isct) (*list)+=new DecimalStringAttribute(
		TagFromName(GantryDetectorTilt),
		String_Use(PACE_HeaderInstance_CTHDR->IGTILT));

	if (PACE_isct) (*list)+=new IntegerStringAttribute(
		TagFromName(ExposureTime),
		String_Use(PACE_HeaderInstance_CTHDR->IEXPTIME));

	if (PACE_isct) (*list)+=new IntegerStringAttribute(
		TagFromName(XRayTubeCurrent),
		String_Use(PACE_HeaderInstance_CTHDR->IEXPRATE));

	if (PACE_isct) (*list)+=new IntegerStringAttribute(
		TagFromName(Exposure),
		String_Use(PACE_HeaderInstance_CTHDR->IEXPOSE));

	if (PACE_isct) (*list)+=new DecimalStringAttribute(
		TagFromName(KVP),
		String_Use(PACE_HeaderInstance_CTHDR->IKVP));

	if (PACE_isct) (*list)+=new CodeStringAttribute(
		TagFromName(RotationDirection),
		String_Use(PACE_HeaderInstance_CTHDR->IROTDIR));

	if (PACE_isct) (*list)+=new ShortStringAttribute(
		TagFromName(FilterType),
		String_Use(PACE_HeaderInstance_CTHDR->IFILTER));

	if (PACE_ismr) (*list)+=new IntegerStringAttribute(
		TagFromName(EchoNumbers),
		String_Use(PACE_HeaderInstance_MRHDR->IECHO));

	if (PACE_ismr) (*list)+=new IntegerStringAttribute(
		TagFromName(EchoTrainLength),
		String_Use(PACE_HeaderInstance_MRHDR->INOOFECH));

	if (PACE_ismr) (*list)+=new DecimalStringAttribute(
		TagFromName(NumberOfAverages),
		String_Use(PACE_HeaderInstance_MRHDR->INEX));

	if (PACE_ismr) (*list)+=new DecimalStringAttribute(
		TagFromName(RepetitionTime),
		String_Use(PACE_HeaderInstance_MRHDR->ITR));

	if (PACE_ismr) (*list)+=new DecimalStringAttribute(
		TagFromName(InversionTime),
		String_Use(PACE_HeaderInstance_MRHDR->ITI));

	if (PACE_ismr) (*list)+=new DecimalStringAttribute(
		TagFromName(EchoTime),
		String_Use(PACE_HeaderInstance_MRHDR->ITE));

	if (PACE_ismr) (*list)+=new DecimalStringAttribute(
		TagFromName(MagneticFieldStrength),
		String_Use(PACE_HeaderInstance_MRHDR->IMAGNET));

	(*list)+=new DateStringAttribute(
		TagFromName(DateOfLastCalibration),
		Date(PACE_HeaderInstance_IMGHDR2->ICALDATE));

	(*list)+=new TimeStringAttribute(
		TagFromName(TimeOfLastCalibration),
		Time(PACE_HeaderInstance_IMGHDR2->ICALTIME));

	(*list)+=new ShortStringAttribute(
		TagFromName(ConvolutionKernel),
		String_Use(PACE_HeaderInstance_IMGHDR2->IRMODE));

	(*list)+=new UnsignedShortAttribute(
		TagFromName(Columns),
		PACE_HeaderInstance_IMGHDR2->IXAXIS);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(Rows),
		PACE_HeaderInstance_IMGHDR2->IYAXIS);

	(*list)+=new DecimalStringAttribute(
		TagFromName(WindowCenter),
		PACE_HeaderInstance_IMGHDR2->IWINDOWC);

	(*list)+=new DecimalStringAttribute(
		TagFromName(WindowWidth),
		PACE_HeaderInstance_IMGHDR2->IWINDOWL);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(PixelPaddingValue),0);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(BitsAllocated),16);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(BitsStored),16);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(HighBit),15);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(PixelRepresentation),1);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(SamplesPerPixel),1);

	(*list)+=new CodeStringAttribute(
		TagFromName(PhotometricInterpretation),"MONOCHROME2");

	(*list)+=new DecimalStringAttribute(
		TagFromName(RescaleIntercept),"0");

	(*list)+=new DecimalStringAttribute(
		TagFromName(RescaleSlope),"1");

	(*list)+=new PersonNameAttribute(
		TagFromName(ReferringPhysicianName));

	(*list)+=new PersonNameAttribute(
		TagFromName(PerformingPhysicianName));

	(*list)+=new PersonNameAttribute(
		TagFromName(OperatorsName));

	(*list)+=new ShortStringAttribute(
		TagFromName(AccessionNumber));

	(*list)+=new DateStringAttribute(
		TagFromName(PatientBirthDate));

}

