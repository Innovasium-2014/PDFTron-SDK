//---------------------------------------------------------------------------------------
// Copyright (c) 2001-2020 by PDFTron Systems Inc. All Rights Reserved.
// Consult legal.txt regarding legal and license information.
//---------------------------------------------------------------------------------------
#ifndef PDFTRON_H_CPPPDFAnnotsSignatureWidget
#define PDFTRON_H_CPPPDFAnnotsSignatureWidget

#include <PDF/Annots/SignatureWidget.h>
#include <PDF/Image.h>

namespace pdftron { 
		namespace PDF {
			namespace Annots {
/** 
 * An object representing a Signature used in a PDF Form. These Widgets can be signed directly, or signed using a DigitalSignatureField.
 */
class SignatureWidget : public Widget
{
	public:
	/**
	 * Creates a SignatureWidget annotation and initializes it using given Cos/SDF object.
	 * 
	 * @param d the input Cos/SDF object
	 * @note The constructor does not copy any data, but is instead the logical
	 * equivalent of a type cast.
	*/
	SignatureWidget(SDF::Obj d = 0);
	
	/**
	 * Creates a Widget annotation and initializes it using given annotation object.
	 * @param annot the annot
	 * @note The constructor does not copy any data, but is instead the logical
	 * equivalent of a type cast.
	 */
	SignatureWidget(const Annot& annot);
	
	/**
	 * Retrieves the DigitalSignatureField associated with this SignatureWidget.
	 *
	 * @return A DigitalSignatureField object representing the digital signature form field associated with this signature widget annotation.
	*/
	DigitalSignatureField GetDigitalSignatureField();
	
	/** 
	 * A function that will create and add an appearance to this widget
	 * by centering an image within it. 
	 * 
	 * @param img A PDF::Image object representing the image to use.
	 *
	 */
	void CreateSignatureAppearance(Image& img);

	/**
	 * Creates a new SignatureWidget annotation in the specified document, and adds an associated signature form field to the document.
	 *
	 * @param doc The document to which the widget is to be added.
	 * @param pos A rectangle specifying the widget's bounds in default user space units.
	 * @param field_name The name of the digital signature field to create. Optional - autogenerated by default.
	 * 
	 * @return A newly-created blank SignatureWidget annotation.
	 */
	static SignatureWidget Create(PDFDoc& doc, const Rect& pos, const UString& field_name = "");
	
	/**
	 * Creates a new SignatureWidget annotation associated with a particular form field in the specified document.
	 *
	 * @param doc The document to which the widget is to be added.
	 * @param pos A rectangle specifying the widget's bounds in default user space units.
	 * @param field The digital signature field for which to create a signature widget.
	 * 
	 * @return A newly-created blank SignatureWidget annotation.
	 */
	static SignatureWidget Create(PDFDoc& doc, const Rect& pos, const Field& field);
	
	/**
	 * Creates a new SignatureWidget annotation associated with a particular DigitalSignatureField object (representing a signature-type form field) in the specified document.
	 *
	 * @param doc The document to which the widget is to be added.
	 * @param pos A rectangle specifying the widget's bounds in default user space units.
	 * @param field The digital signature field for which to create a signature widget.
	 * 
	 * @return A newly-created blank SignatureWidget annotation.
	 */
	static SignatureWidget Create(PDFDoc& doc, const Rect& pos, const DigitalSignatureField& field);

};//class SignatureWidget
			};//namespace Annot
		};//namespace PDF
};//namespace pdftron
#include <Impl/SignatureWidget.inl>

#endif // PDFTRON_H_CPPPDFAnnotsSignatureWidget
