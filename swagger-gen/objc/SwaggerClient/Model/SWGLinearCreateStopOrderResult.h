#import <Foundation/Foundation.h>
#import "SWGObject.h"

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





@protocol SWGLinearCreateStopOrderResult
@end

@interface SWGLinearCreateStopOrderResult : SWGObject


@property(nonatomic) NSString* stopOrderId;

@property(nonatomic) NSNumber* userId;

@property(nonatomic) NSString* side;

@property(nonatomic) NSString* symbol;

@property(nonatomic) NSString* orderType;

@property(nonatomic) NSNumber* price;

@property(nonatomic) NSNumber* qty;

@property(nonatomic) NSString* timeInForce;

@property(nonatomic) NSString* orderStatus;

@property(nonatomic) NSNumber* triggerPrice;

@property(nonatomic) NSString* orderLinkId;

@property(nonatomic) NSString* createdAt;

@property(nonatomic) NSString* updatedAt;

@property(nonatomic) NSNumber* takeProfit;

@property(nonatomic) NSNumber* stopLoss;

@property(nonatomic) NSString* tpTriggerBy;

@property(nonatomic) NSString* slTriggerBy;

@end
