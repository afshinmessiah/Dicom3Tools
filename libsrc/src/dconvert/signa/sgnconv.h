// Automatically generated from template - EDITS WILL BE LOST
//
// Generated by convert.awk with options or defaults ...
//
// 	 role=dicom
// 	 prefix=SGN_
// 	 dicomfunctionname=ToDicom_Template
// 	 dumpcommonfunctionname=DumpCommon
// 	 dumpselectedimagefunctionname=DumpSelectedImage
// 	 headeroffsetprefix=SGN_Offset
// 	 headeroffsetsuffix=ptr
// 	 headerclassprefix=SGN_HeaderClass
// 	 headerdicomclassprefix=SGN_Header_BothClass
// 	 headerdumpclassprefix=SGN_Header_BothClass
// 	 headerinstanceprefix=SGN_HeaderInstance
// 	 methodnameprefix=SGN_Method
// 	 methodconstructorargsprefix=SGN_MethodConstructorArgs
// 	 headerclassparameters=

void 
SGN_Header_BothClass::ToDicom_Template(AttributeList *list,unsigned imagenumber)
{
	(void)imagenumber;

	(*list)+=new ShortStringAttribute(
		TagFromName(StudyID),
		String_Use(SGN_HeaderInstance_STUDYHDR->StudyNumber));

	(*list)+=new PersonNameAttribute(
		TagFromName(PatientName),
		String_Use(SGN_HeaderInstance_STUDYHDR->unknown21));

	(*list)+=new LongStringAttribute(
		TagFromName(PatientID),
		String_Use(SGN_HeaderInstance_STUDYHDR->unknown22));

	(*list)+=new CodeStringAttribute(
		TagFromName(PatientSex),
		String_Use(SGN_HeaderInstance_STUDYHDR->unknown25));

	(*list)+=new PersonNameAttribute(
		TagFromName(ReferringPhysicianName),
		String_Use(SGN_HeaderInstance_STUDYHDR->unknown27));

	(*list)+=new PersonNameAttribute(
		TagFromName(PerformingPhysicianName),
		String_Use(SGN_HeaderInstance_STUDYHDR->unknown28));

	(*list)+=new PersonNameAttribute(
		TagFromName(OperatorsName),
		String_Use(SGN_HeaderInstance_STUDYHDR->unknown29));

	(*list)+=new LongStringAttribute(
		TagFromName(StudyDescription),
		String_Use(SGN_HeaderInstance_STUDYHDR->unknown30));

	(*list)+=new LongTextAttribute(
		TagFromName(AdditionalPatientHistory),
		String_Use(SGN_HeaderInstance_STUDYHDR->unknown31));

	(*list)+=new LongStringAttribute(
		TagFromName(InstitutionName),
		String_Use(SGN_HeaderInstance_STUDYHDR->unknown33));

	(*list)+=new IntegerStringAttribute(
		TagFromName(SeriesNumber),
		String_Use(SGN_HeaderInstance_SERIESHDR->SeriesNumber));

	(*list)+=new LongStringAttribute(
		TagFromName(SeriesDescription),
		String_Use(SGN_HeaderInstance_SERIESHDR->unknown56));

	(*list)+=new LongStringAttribute(
		TagFromName(ContrastBolusAgent),
		String_Use(SGN_HeaderInstance_SERIESHDR->unknown60));

	(*list)+=new DecimalStringAttribute(
		TagFromName(ReconstructionDiameter),
		SGN_HeaderInstance_SERIESHDR->FieldOfView);

	(*list)+=new LongStringAttribute(
		TagFromName(PositionReferenceIndicator),
		String_Use(SGN_HeaderInstance_SERIESHDR->LongitudinalReference));

	(*list)+=new LongStringAttribute(
		TagFromName(ProtocolName),
		String_Use(SGN_HeaderInstance_SERIESHDR->unknown86));

	(*list)+=new LongStringAttribute(
		TagFromName(SoftwareVersions),
		String_Use(SGN_HeaderInstance_IMAGEHDR->unknown108));

	(*list)+=new IntegerStringAttribute(
		TagFromName(InstanceNumber),
		String_Use(SGN_HeaderInstance_IMAGEHDR->ImageNumber));

	(*list)+=new ShortStringAttribute(
		TagFromName(StationName),
		String_Use(SGN_HeaderInstance_IMAGEHDR->unknown123));

	(*list)+=new DecimalStringAttribute(
		TagFromName(SliceLocation),
		SGN_HeaderInstance_IMAGEHDR->SliceLocation);

	(*list)+=new DecimalStringAttribute(
		TagFromName(SliceThickness),
		SGN_HeaderInstance_IMAGEHDR->unknown132);

	(*list)+=new DecimalStringAttribute(
		TagFromName(SpacingBetweenSlices),
		SGN_HeaderInstance_IMAGEHDR->unknown133);

	(*list)+=new IntegerStringAttribute(
		TagFromName(EchoNumbers),
		SGN_HeaderInstance_IMAGEHDR->unknown144);

	(*list)+=new IntegerStringAttribute(
		TagFromName(ImagesInAcquisition),
		SGN_HeaderInstance_IMAGEHDR->unknown145);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(Rows),
		SGN_HeaderInstance_IMAGEHDR->unknown159);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(Columns),
		SGN_HeaderInstance_IMAGEHDR->unknown160);

	(*list)+=new DecimalStringAttribute(
		TagFromName(NumberOfAverages),
		SGN_HeaderInstance_IMAGEHDR->unknown167);

	(*list)+=new DecimalStringAttribute(
		TagFromName(SAR),
		SGN_HeaderInstance_IMAGEHDR->unknown169);

	(*list)+=new IntegerStringAttribute(
		TagFromName(HeartRate),
		SGN_HeaderInstance_IMAGEHDR->unknown172);

	(*list)+=new IntegerStringAttribute(
		TagFromName(TriggerWindow),
		SGN_HeaderInstance_IMAGEHDR->unknown174);

	(*list)+=new IntegerStringAttribute(
		TagFromName(CardiacNumberOfImages),
		SGN_HeaderInstance_IMAGEHDR->unknown176);

	(*list)+=new IntegerStringAttribute(
		TagFromName(IntervalsAcquired),
		SGN_HeaderInstance_IMAGEHDR->unknown177);

	(*list)+=new DecimalStringAttribute(
		TagFromName(FlipAngle),
		SGN_HeaderInstance_IMAGEHDR->unknown184);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(BitsAllocated),16);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(BitsStored),12);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(HighBit),11);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(PixelRepresentation),0);

	(*list)+=new UnsignedShortAttribute(
		TagFromName(SamplesPerPixel),1);

	(*list)+=new CodeStringAttribute(
		TagFromName(PhotometricInterpretation),"MONOCHROME2");

	(*list)+=new ShortStringAttribute(
		TagFromName(AccessionNumber));

	(*list)+=new DateStringAttribute(
		TagFromName(PatientBirthDate));

	(*list)+=new LongStringAttribute(
		TagFromName(Manufacturer),"GE Medical Systems");

	(*list)+=new LongStringAttribute(
		TagFromName(ManufacturerModelName),"Signa");

	(*list)+=new UIStringAttribute(
		TagFromName(SOPClassUID),"1.2.840.10008.5.1.4.1.1.4");

	(*list)+=new CodeStringAttribute(
		TagFromName(Modality),"MR");

}

