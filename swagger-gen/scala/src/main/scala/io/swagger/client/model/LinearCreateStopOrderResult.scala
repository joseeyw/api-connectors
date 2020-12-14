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

package io.swagger.client.model


case class LinearCreateStopOrderResult (
  stopOrderId: Option[String] = None,
  userId: Option[Long] = None,
  side: Option[String] = None,
  symbol: Option[String] = None,
  orderType: Option[String] = None,
  price: Option[Double] = None,
  qty: Option[Double] = None,
  timeInForce: Option[String] = None,
  orderStatus: Option[String] = None,
  triggerPrice: Option[Double] = None,
  orderLinkId: Option[String] = None,
  createdAt: Option[String] = None,
  updatedAt: Option[String] = None,
  takeProfit: Option[Double] = None,
  stopLoss: Option[Double] = None,
  tpTriggerBy: Option[String] = None,
  slTriggerBy: Option[String] = None
)

