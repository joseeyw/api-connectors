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
 * LinearCreateStopOrderResult.h
 *
 * Create Linear Stop Order
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_LinearCreateStopOrderResult_H_
#define IO_SWAGGER_CLIENT_MODEL_LinearCreateStopOrderResult_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Create Linear Stop Order
/// </summary>
class  LinearCreateStopOrderResult
    : public ModelBase
{
public:
    LinearCreateStopOrderResult();
    virtual ~LinearCreateStopOrderResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// LinearCreateStopOrderResult members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStopOrderId() const;
    bool stopOrderIdIsSet() const;
    void unsetStop_order_id();
    void setStopOrderId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    int64_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUser_id();
    void setUserId(int64_t value);
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
    utility::string_t getSymbol() const;
    bool symbolIsSet() const;
    void unsetSymbol();
    void setSymbol(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrderType() const;
    bool orderTypeIsSet() const;
    void unsetOrder_type();
    void setOrderType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getPrice() const;
    bool priceIsSet() const;
    void unsetPrice();
    void setPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getQty() const;
    bool qtyIsSet() const;
    void unsetQty();
    void setQty(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTimeInForce() const;
    bool timeInForceIsSet() const;
    void unsetTime_in_force();
    void setTimeInForce(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrderStatus() const;
    bool orderStatusIsSet() const;
    void unsetOrder_status();
    void setOrderStatus(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getTriggerPrice() const;
    bool triggerPriceIsSet() const;
    void unsetTrigger_price();
    void setTriggerPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrderLinkId() const;
    bool orderLinkIdIsSet() const;
    void unsetOrder_link_id();
    void setOrderLinkId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreated_at();
    void setCreatedAt(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdated_at();
    void setUpdatedAt(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getTakeProfit() const;
    bool takeProfitIsSet() const;
    void unsetTake_profit();
    void setTakeProfit(double value);
    /// <summary>
    /// 
    /// </summary>
    double getStopLoss() const;
    bool stopLossIsSet() const;
    void unsetStop_loss();
    void setStopLoss(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTpTriggerBy() const;
    bool tpTriggerByIsSet() const;
    void unsetTp_trigger_by();
    void setTpTriggerBy(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSlTriggerBy() const;
    bool slTriggerByIsSet() const;
    void unsetSl_trigger_by();
    void setSlTriggerBy(utility::string_t value);

protected:
    utility::string_t m_Stop_order_id;
    bool m_Stop_order_idIsSet;
    int64_t m_User_id;
    bool m_User_idIsSet;
    utility::string_t m_Side;
    bool m_SideIsSet;
    utility::string_t m_Symbol;
    bool m_SymbolIsSet;
    utility::string_t m_Order_type;
    bool m_Order_typeIsSet;
    double m_Price;
    bool m_PriceIsSet;
    double m_Qty;
    bool m_QtyIsSet;
    utility::string_t m_Time_in_force;
    bool m_Time_in_forceIsSet;
    utility::string_t m_Order_status;
    bool m_Order_statusIsSet;
    double m_Trigger_price;
    bool m_Trigger_priceIsSet;
    utility::string_t m_Order_link_id;
    bool m_Order_link_idIsSet;
    utility::string_t m_Created_at;
    bool m_Created_atIsSet;
    utility::string_t m_Updated_at;
    bool m_Updated_atIsSet;
    double m_Take_profit;
    bool m_Take_profitIsSet;
    double m_Stop_loss;
    bool m_Stop_lossIsSet;
    utility::string_t m_Tp_trigger_by;
    bool m_Tp_trigger_byIsSet;
    utility::string_t m_Sl_trigger_by;
    bool m_Sl_trigger_byIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_LinearCreateStopOrderResult_H_ */
