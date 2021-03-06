Module="AcquisitionContext"
	Sequence="AcquisitionContextSequence"			Type="2"	VM="0-n"
		Name="ValueType"							Type="3"	StringDefinedTerms="AcquisitionContextValueTypes"
		Name="ObservationDateTime"					Type="3"
		Sequence="ConceptNameCodeSequence"			Type="1"	VM="1"	# should check for 1 and only 1 item present
			InvokeMacro="CodeSequenceMacro"
		SequenceEnd
		Name="ReferencedFrameNumber"				Type="1C"	NoCondition=""	NotZeroError=""
		Verify="ReferencedFrameNumber"							Condition="ReferencedFrameNumberOrReferencedFrameNumbersPresentButNMImageInstance"	ThenErrorMessage="May not be present for NM Image"
		Name="NumericValue"							Type="1C"	VM="1-n" Condition="AcquisitionContextItemIsNumeric"
		Name="FloatingPointValue"					Type="1C"	VM="1-n" NoCondition=""																# should check that VM is same as NumericValue :(
		Verify="FloatingPointValue"								Condition="FloatingPointValuePresentButAcquisitionContextItemIsNotNumeric"			ThenErrorMessage="May not be present when NumericValue is absent"
		Name="RationalNumeratorValue"				Type="1C"	VM="1-n" NoCondition=""																# should check that VM is same as NumericValue :(
		Verify="RationalNumeratorValue"							Condition="RationalNumeratorValuePresentButAcquisitionContextItemIsNotNumeric"		ThenErrorMessage="May not be present when NumericValue is absent"
		Name="RationalDenominatorValue"				Type="1C"	VM="1-n" Condition="RationalNumeratorValueIsPresent" NotZeroError=""				# should check that VM is same as NumericValue :(
		Verify="RationalDenominatorValue"						Condition="RationalDenominatorValuePresentButAcquisitionContextItemIsNotNumeric"	ThenErrorMessage="May not be present when NumericValue is absent"
		Sequence="MeasurementUnitsCodeSequence"		Type="1C"	VM="1"	Condition="NeedMeasurementUnitsCodeSequence"
			InvokeMacro="CodeSequenceMacro"
		SequenceEnd
		Verify="MeasurementUnitsCodeSequence"					Condition="MeasurementUnitsCodeSequencePresentAndNumericValueAbsent"	ThenErrorMessage="May not be present when NumericValue is absent"
		Name="Date"									Type="1C"	Condition="AcquisitionContextItemIsDate"
		Name="Time"									Type="1C"	Condition="AcquisitionContextItemIsTime"
		Name="PersonName"							Type="1C"	Condition="AcquisitionContextItemIsPersonName"
		Name="TextValue"							Type="1C"	Condition="AcquisitionContextItemIsTextValue"
		Sequence="ConceptCodeSequence"				Type="1C"	VM="1"	Condition="AcquisitionContextItemIsConceptCodeSequence"
			InvokeMacro="CodeSequenceMacro"
		SequenceEnd
	SequenceEnd
	Name="AcquisitionContextDescription"			Type="3"
ModuleEnd

