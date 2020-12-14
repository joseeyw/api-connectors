/**
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api.bybit.com]  
 *
 * OpenAPI spec version: 0.2.10
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "MarkPriceKlineInfo.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

MarkPriceKlineInfo::MarkPriceKlineInfo()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Symbol = utility::conversions::to_string_t("");
    m_SymbolIsSet = false;
    m_Period = utility::conversions::to_string_t("");
    m_PeriodIsSet = false;
    m_Start_at = 0;
    m_Start_atIsSet = false;
    m_Open = 0;
    m_OpenIsSet = false;
    m_High = 0;
    m_HighIsSet = false;
    m_Low = 0;
    m_LowIsSet = false;
    m_Close = 0;
    m_CloseIsSet = false;
}

MarkPriceKlineInfo::~MarkPriceKlineInfo()
{
}

void MarkPriceKlineInfo::validate()
{
    // TODO: implement validation
}

web::json::value MarkPriceKlineInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_SymbolIsSet)
    {
        val[utility::conversions::to_string_t("symbol")] = ModelBase::toJson(m_Symbol);
    }
    if(m_PeriodIsSet)
    {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(m_Period);
    }
    if(m_Start_atIsSet)
    {
        val[utility::conversions::to_string_t("start_at")] = ModelBase::toJson(m_Start_at);
    }
    if(m_OpenIsSet)
    {
        val[utility::conversions::to_string_t("open")] = ModelBase::toJson(m_Open);
    }
    if(m_HighIsSet)
    {
        val[utility::conversions::to_string_t("high")] = ModelBase::toJson(m_High);
    }
    if(m_LowIsSet)
    {
        val[utility::conversions::to_string_t("low")] = ModelBase::toJson(m_Low);
    }
    if(m_CloseIsSet)
    {
        val[utility::conversions::to_string_t("close")] = ModelBase::toJson(m_Close);
    }

    return val;
}

void MarkPriceKlineInfo::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("symbol")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("symbol")];
        if(!fieldValue.is_null())
        {
            setSymbol(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("period")];
        if(!fieldValue.is_null())
        {
            setPeriod(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_at")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("start_at")];
        if(!fieldValue.is_null())
        {
            setStartAt(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("open")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("open")];
        if(!fieldValue.is_null())
        {
            setOpen(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("high")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("high")];
        if(!fieldValue.is_null())
        {
            setHigh(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("low")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("low")];
        if(!fieldValue.is_null())
        {
            setLow(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("close")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("close")];
        if(!fieldValue.is_null())
        {
            setClose(ModelBase::int32_tFromJson(fieldValue));
        }
    }
}

void MarkPriceKlineInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_SymbolIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("symbol"), m_Symbol));
        
    }
    if(m_PeriodIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("period"), m_Period));
        
    }
    if(m_Start_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("start_at"), m_Start_at));
    }
    if(m_OpenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("open"), m_Open));
    }
    if(m_HighIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("high"), m_High));
    }
    if(m_LowIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("low"), m_Low));
    }
    if(m_CloseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("close"), m_Close));
    }
}

void MarkPriceKlineInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("symbol")))
    {
        setSymbol(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("symbol"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("period")))
    {
        setPeriod(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("period"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("start_at")))
    {
        setStartAt(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("start_at"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("open")))
    {
        setOpen(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("open"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("high")))
    {
        setHigh(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("high"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("low")))
    {
        setLow(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("low"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("close")))
    {
        setClose(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("close"))));
    }
}

int32_t MarkPriceKlineInfo::getId() const
{
    return m_Id;
}


void MarkPriceKlineInfo::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool MarkPriceKlineInfo::idIsSet() const
{
    return m_IdIsSet;
}

void MarkPriceKlineInfo::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t MarkPriceKlineInfo::getSymbol() const
{
    return m_Symbol;
}


void MarkPriceKlineInfo::setSymbol(utility::string_t value)
{
    m_Symbol = value;
    m_SymbolIsSet = true;
}
bool MarkPriceKlineInfo::symbolIsSet() const
{
    return m_SymbolIsSet;
}

void MarkPriceKlineInfo::unsetSymbol()
{
    m_SymbolIsSet = false;
}

utility::string_t MarkPriceKlineInfo::getPeriod() const
{
    return m_Period;
}


void MarkPriceKlineInfo::setPeriod(utility::string_t value)
{
    m_Period = value;
    m_PeriodIsSet = true;
}
bool MarkPriceKlineInfo::periodIsSet() const
{
    return m_PeriodIsSet;
}

void MarkPriceKlineInfo::unsetPeriod()
{
    m_PeriodIsSet = false;
}

int32_t MarkPriceKlineInfo::getStartAt() const
{
    return m_Start_at;
}


void MarkPriceKlineInfo::setStartAt(int32_t value)
{
    m_Start_at = value;
    m_Start_atIsSet = true;
}
bool MarkPriceKlineInfo::startAtIsSet() const
{
    return m_Start_atIsSet;
}

void MarkPriceKlineInfo::unsetStart_at()
{
    m_Start_atIsSet = false;
}

int32_t MarkPriceKlineInfo::getOpen() const
{
    return m_Open;
}


void MarkPriceKlineInfo::setOpen(int32_t value)
{
    m_Open = value;
    m_OpenIsSet = true;
}
bool MarkPriceKlineInfo::openIsSet() const
{
    return m_OpenIsSet;
}

void MarkPriceKlineInfo::unsetOpen()
{
    m_OpenIsSet = false;
}

int32_t MarkPriceKlineInfo::getHigh() const
{
    return m_High;
}


void MarkPriceKlineInfo::setHigh(int32_t value)
{
    m_High = value;
    m_HighIsSet = true;
}
bool MarkPriceKlineInfo::highIsSet() const
{
    return m_HighIsSet;
}

void MarkPriceKlineInfo::unsetHigh()
{
    m_HighIsSet = false;
}

int32_t MarkPriceKlineInfo::getLow() const
{
    return m_Low;
}


void MarkPriceKlineInfo::setLow(int32_t value)
{
    m_Low = value;
    m_LowIsSet = true;
}
bool MarkPriceKlineInfo::lowIsSet() const
{
    return m_LowIsSet;
}

void MarkPriceKlineInfo::unsetLow()
{
    m_LowIsSet = false;
}

int32_t MarkPriceKlineInfo::getClose() const
{
    return m_Close;
}


void MarkPriceKlineInfo::setClose(int32_t value)
{
    m_Close = value;
    m_CloseIsSet = true;
}
bool MarkPriceKlineInfo::closeIsSet() const
{
    return m_CloseIsSet;
}

void MarkPriceKlineInfo::unsetClose()
{
    m_CloseIsSet = false;
}

}
}
}
}

