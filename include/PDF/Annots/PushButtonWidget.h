//---------------------------------------------------------------------------------------
// Copyright (c) 2001-2020 by PDFTron Systems Inc. All Rights Reserved.
// Consult legal.txt regarding legal and license information.
//---------------------------------------------------------------------------------------
#ifndef PDFTRON_H_CPPPDFPushButtonWidget
#define PDFTRON_H_CPPPDFPushButtonWidget

#include <PDF/Annots/Widget.h>

namespace pdftron {
	namespace PDF {
		namespace Annots {

/** 
 *  An object representing a push button used in a PDF Form.
 */
class PushButtonWidget : public Widget
{
public:
	/**
	 * Creates a Push Button Widget annotation and initialize it using given Cos/SDF object.
	 *
	 * <p>
	 * <b> Note: </b> The constructor does not copy any data, but is instead the logical
	 * equivalent of a type cast.
	 *
	 * @param d The object to use to initialize the PushButtonWidget
	 */
	PushButtonWidget(SDF::Obj d = 0);

	/**
	 * Creates a Push Button Widget annotation and initialize it using given annotation object.
	 *
	 * <p> 
	 * <b> Note: </b>  The constructor does not copy any data, but is instead the logical
	 * equivalent of a type cast.
	 *
	 * @param annot the annotation from which to create a Push Button Widget.
	 */
	PushButtonWidget(const Annot& annot);

	/**
	 * Creates a new Push Button Widget annotation, in the specified document.
	 *
	 * @param doc The document to which the annotation is added.
	 * @param pos A rectangle specifying the annotation's bounds, specified in
	 * user space coordinates.
	 * @param field_name The name of the field for which to create a PushButton widget.
	 * @return A newly created default Push Button Widget annotation.
	 */
	static PushButtonWidget Create(PDFDoc& doc, const Rect& pos, const UString& field_name = "");

	/**
	 * Creates a new Widget annotation, in the specified document.
	 *
	 * @param doc The document to which the annotation is added.
	 * @param pos A rectangle specifying the annotation's bounds, specified in
	 * user space coordinates.
	 * @param field the field for which to create a Push Button Widget.
	 * @return A newly created default Push Button Widget annotation.
	 */
	static PushButtonWidget Create(PDFDoc& doc, const Rect& pos, const Field& field);
};
		}; //namespace Annots
	}; //namespace PDF
}; //namespace trn

#include <Impl/PushButtonWidget.inl>

#endif // PDFTRON_H_CPPPDFPushButtonWidget