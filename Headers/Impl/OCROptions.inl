// This file is autogenerated: please see the codegen template "Options"
namespace pdftron{ namespace PDF{ 

inline OCROptions::OCROptions()
	: m_obj_set()
	, m_dict()
{
	m_dict = m_obj_set.CreateDict();
}

inline OCROptions::~OCROptions()
{
}


inline OCROptions& OCROptions::AddIgnoreZonesForPage(const RectCollection& regions, int page_num)
{
	OptionsBase::InsertRectCollection(m_dict, "IgnoreZones", regions, page_num - 1);
	return *this;
}


inline OCROptions& OCROptions::AddLang(const UString& value)
{
	OptionsBase::PushBackText(m_dict, "Langs", (value));
	return *this;
}


inline OCROptions& OCROptions::AddTextZonesForPage(const RectCollection& regions, int page_num)
{
	OptionsBase::InsertRectCollection(m_dict, "TextZones", regions, page_num - 1);
	return *this;
}


inline SDF::Obj& OCROptions::GetInternalObj()
{
	return m_dict;
}

}
}
