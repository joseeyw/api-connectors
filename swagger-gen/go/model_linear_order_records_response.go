/*
 * Bybit API
 *
 * ## REST API for the Bybit Exchange. Base URI: [https://api.bybit.com]  
 *
 * API version: 0.2.10
 * Contact: support@bybit.com
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package swagger

type LinearOrderRecordsResponse struct {
	CurrentPage int64 `json:"current_page,omitempty"`
	Data []LinearListOrderResult `json:"data,omitempty"`
}
