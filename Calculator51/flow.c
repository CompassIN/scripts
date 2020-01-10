/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 05/24/2019 09:56:07
    Flow details:
    Build details: 4.1.14 (build# 114)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_web_url("CalculatorHttpsSoap11Endpoint",
        "URL=https://156.56.179.164:9443/services/Calculator.CalculatorHttpsSoap11Endpoint/",
        "HEADER=SOAPAction:urn:add",
        "HEADER=Content-Type:text/xml",
        "METHOD=POST",
        BODY_BEGIN,
        "<s11:Envelope xmlns:s11='http://schemas.xmlsoap.org/soap/envelope/'>
          <s11:Body>
            <ns:add xmlns:ns='http://c.b.a'>
        <!-- optional -->
              <ns:n1>?999?</ns:n1>
        <!-- optional -->
              <ns:n2>?999?</ns:n2>
            </ns:add>
          </s11:Body>
        </s11:Envelope>"
        BODY_END
        );

    ns_web_url("CalculatorHttpSoap11Endpoint",
        "URL=http://156.56.179.164:9763/services/Calculator.CalculatorHttpSoap11Endpoint/",
        "HEADER=SOAPAction:urn:add",
        "HEADER=Content-Type:text/xml",
        "METHOD=POST",
        BODY_BEGIN,
        "<s11:Envelope xmlns:s11='http://schemas.xmlsoap.org/soap/envelope/'>
          <s11:Body>
            <ns:add xmlns:ns='http://c.b.a'>
        <!-- optional -->
              <ns:n1>?999?</ns:n1>
        <!-- optional -->
              <ns:n2>?999?</ns:n2>
            </ns:add>
          </s11:Body>
        </s11:Envelope>"
        BODY_END
        );

    ns_web_url("CalculatorHttpSoap12Endpoint",
        "URL=http://156.56.179.164:9763/services/Calculator.CalculatorHttpSoap12Endpoint/",
        "HEADER=SOAPAction:urn:add",
        "HEADER=Content-Type:text/xml",
        "METHOD=POST",
        BODY_BEGIN,
        "<s12:Envelope xmlns:s12='http://www.w3.org/2003/05/soap-envelope'>
          <s12:Body>
            <ns:add xmlns:ns='http://c.b.a'>
        <!-- optional -->
              <ns:n1>?999?</ns:n1>
        <!-- optional -->
              <ns:n2>?999?</ns:n2>
            </ns:add>
          </s12:Body>
        </s12:Envelope>"
        BODY_END
        );

    ns_web_url("CalculatorHttpsSoap12Endpoint",
        "URL=https://156.56.179.164:9443/services/Calculator.CalculatorHttpsSoap12Endpoint/",
        "HEADER=SOAPAction:urn:add",
        "HEADER=Content-Type:text/xml",
        "METHOD=POST",
        BODY_BEGIN,
        "<s12:Envelope xmlns:s12='http://www.w3.org/2003/05/soap-envelope'>
          <s12:Body>
            <ns:add xmlns:ns='http://c.b.a'>
        <!-- optional -->
              <ns:n1>?999?</ns:n1>
        <!-- optional -->
              <ns:n2>?999?</ns:n2>
            </ns:add>
          </s12:Body>
        </s12:Envelope>"
        BODY_END
        );


}
