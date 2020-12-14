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

/*
 * LinearPrevFundingResp.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_LinearPrevFundingResp_H_
#define IO_SWAGGER_CLIENT_MODEL_LinearPrevFundingResp_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  LinearPrevFundingResp
    : public ModelBase
{
public:
    LinearPrevFundingResp();
    virtual ~LinearPrevFundingResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// LinearPrevFundingResp members

    /// <summary>
    /// 
    /// </summary>
    double getExecFee() const;
    bool execFeeIsSet() const;
    void unsetExec_fee();
    void setExecFee(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getExecTime() const;
    bool execTimeIsSet() const;
    void unsetExec_time();
    void setExecTime(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getFundingRate() const;
    bool fundingRateIsSet() const;
    void unsetFunding_rate();
    void setFundingRate(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSide() const;
    bool sideIsSet() const;
    void unsetSide();
    void setSide(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getSize() const;
    bool sizeIsSet() const;
    void unsetSize();
    void setSize(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSymbol() const;
    bool symbolIsSet() const;
    void unsetSymbol();
    void setSymbol(utility::string_t value);

protected:
    double m_Exec_fee;
    bool m_Exec_feeIsSet;
    utility::string_t m_Exec_time;
    bool m_Exec_timeIsSet;
    double m_Funding_rate;
    bool m_Funding_rateIsSet;
    utility::string_t m_Side;
    bool m_SideIsSet;
    double m_Size;
    bool m_SizeIsSet;
    utility::string_t m_Symbol;
    bool m_SymbolIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_LinearPrevFundingResp_H_ */
