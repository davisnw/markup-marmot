#pragma once

#include <xercesc/sax2/DefaultHandler.hpp>

class SaxWriter : public xercesc::DefaultHandler
{
public:
	SaxWriter();

	virtual void characters(const XMLCh* const chars, const XMLSize_t length);

	virtual void endElement(const XMLCh* const uri,	const XMLCh* const localname, const XMLCh* const qname);

	virtual void ignorableWhitespace(const XMLCh* const chars, const XMLSize_t length);

	virtual void processingInstruction(const XMLCh* const target, const XMLCh* const data);

	virtual void startElement(const XMLCh* const uri, const XMLCh* const localname,	const XMLCh* const qname, const xercesc::Attributes& attrs);

	virtual void comment(const XMLCh* const chars, const XMLSize_t length);

	virtual void endCDATA();

	virtual void endDTD();

	virtual void startCDATA();

	virtual void startDTD(const XMLCh* const name, const XMLCh* const publicId, const XMLCh* const systemId);



	~SaxWriter();
};

