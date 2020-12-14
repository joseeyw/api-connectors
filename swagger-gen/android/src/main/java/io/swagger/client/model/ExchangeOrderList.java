/**
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api.bybit.com]  
 *
 * OpenAPI spec version: 0.2.10
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

package io.swagger.client.model;

import java.math.BigDecimal;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Asset Exchange Records
 **/
@ApiModel(description = "Asset Exchange Records")
public class ExchangeOrderList {
  
  @SerializedName("from_coin")
  private String fromCoin = null;
  @SerializedName("to_coin")
  private String toCoin = null;
  @SerializedName("from_amount")
  private BigDecimal fromAmount = null;
  @SerializedName("to_amount")
  private BigDecimal toAmount = null;
  @SerializedName("exchange_rate")
  private BigDecimal exchangeRate = null;
  @SerializedName("from_fee")
  private BigDecimal fromFee = null;
  @SerializedName("created_at")
  private String createdAt = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public String getFromCoin() {
    return fromCoin;
  }
  public void setFromCoin(String fromCoin) {
    this.fromCoin = fromCoin;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getToCoin() {
    return toCoin;
  }
  public void setToCoin(String toCoin) {
    this.toCoin = toCoin;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getFromAmount() {
    return fromAmount;
  }
  public void setFromAmount(BigDecimal fromAmount) {
    this.fromAmount = fromAmount;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getToAmount() {
    return toAmount;
  }
  public void setToAmount(BigDecimal toAmount) {
    this.toAmount = toAmount;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getExchangeRate() {
    return exchangeRate;
  }
  public void setExchangeRate(BigDecimal exchangeRate) {
    this.exchangeRate = exchangeRate;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getFromFee() {
    return fromFee;
  }
  public void setFromFee(BigDecimal fromFee) {
    this.fromFee = fromFee;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getCreatedAt() {
    return createdAt;
  }
  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ExchangeOrderList exchangeOrderList = (ExchangeOrderList) o;
    return (this.fromCoin == null ? exchangeOrderList.fromCoin == null : this.fromCoin.equals(exchangeOrderList.fromCoin)) &&
        (this.toCoin == null ? exchangeOrderList.toCoin == null : this.toCoin.equals(exchangeOrderList.toCoin)) &&
        (this.fromAmount == null ? exchangeOrderList.fromAmount == null : this.fromAmount.equals(exchangeOrderList.fromAmount)) &&
        (this.toAmount == null ? exchangeOrderList.toAmount == null : this.toAmount.equals(exchangeOrderList.toAmount)) &&
        (this.exchangeRate == null ? exchangeOrderList.exchangeRate == null : this.exchangeRate.equals(exchangeOrderList.exchangeRate)) &&
        (this.fromFee == null ? exchangeOrderList.fromFee == null : this.fromFee.equals(exchangeOrderList.fromFee)) &&
        (this.createdAt == null ? exchangeOrderList.createdAt == null : this.createdAt.equals(exchangeOrderList.createdAt));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.fromCoin == null ? 0: this.fromCoin.hashCode());
    result = 31 * result + (this.toCoin == null ? 0: this.toCoin.hashCode());
    result = 31 * result + (this.fromAmount == null ? 0: this.fromAmount.hashCode());
    result = 31 * result + (this.toAmount == null ? 0: this.toAmount.hashCode());
    result = 31 * result + (this.exchangeRate == null ? 0: this.exchangeRate.hashCode());
    result = 31 * result + (this.fromFee == null ? 0: this.fromFee.hashCode());
    result = 31 * result + (this.createdAt == null ? 0: this.createdAt.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ExchangeOrderList {\n");
    
    sb.append("  fromCoin: ").append(fromCoin).append("\n");
    sb.append("  toCoin: ").append(toCoin).append("\n");
    sb.append("  fromAmount: ").append(fromAmount).append("\n");
    sb.append("  toAmount: ").append(toAmount).append("\n");
    sb.append("  exchangeRate: ").append(exchangeRate).append("\n");
    sb.append("  fromFee: ").append(fromFee).append("\n");
    sb.append("  createdAt: ").append(createdAt).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
