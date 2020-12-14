/**
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api.bybit.com]  
 *
 * OpenAPI spec version: 0.2.10
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.4.8
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.BybitApi);
  }
}(this, function(expect, BybitApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new BybitApi.LinearClosedPnlRecordResult();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('LinearClosedPnlRecordResult', function() {
    it('should create an instance of LinearClosedPnlRecordResult', function() {
      // uncomment below and update the code to test LinearClosedPnlRecordResult
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be.a(BybitApi.LinearClosedPnlRecordResult);
    });

    it('should have the property avgEntryPrice (base name: "avg_entry_price")', function() {
      // uncomment below and update the code to test the property avgEntryPrice
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

    it('should have the property avgExitPrice (base name: "avg_exit_price")', function() {
      // uncomment below and update the code to test the property avgExitPrice
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

    it('should have the property closedPnl (base name: "closed_pnl")', function() {
      // uncomment below and update the code to test the property closedPnl
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

    it('should have the property closedSize (base name: "closed_size")', function() {
      // uncomment below and update the code to test the property closedSize
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

    it('should have the property createdAt (base name: "created_at")', function() {
      // uncomment below and update the code to test the property createdAt
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

    it('should have the property cumEntryValue (base name: "cum_entry_value")', function() {
      // uncomment below and update the code to test the property cumEntryValue
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

    it('should have the property cumExitValue (base name: "cum_exit_value")', function() {
      // uncomment below and update the code to test the property cumExitValue
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

    it('should have the property execType (base name: "exec_type")', function() {
      // uncomment below and update the code to test the property execType
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

    it('should have the property fillCount (base name: "fill_count")', function() {
      // uncomment below and update the code to test the property fillCount
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

    it('should have the property leverage (base name: "leverage")', function() {
      // uncomment below and update the code to test the property leverage
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

    it('should have the property orderId (base name: "order_id")', function() {
      // uncomment below and update the code to test the property orderId
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

    it('should have the property orderPrice (base name: "order_price")', function() {
      // uncomment below and update the code to test the property orderPrice
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

    it('should have the property orderType (base name: "order_type")', function() {
      // uncomment below and update the code to test the property orderType
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

    it('should have the property qty (base name: "qty")', function() {
      // uncomment below and update the code to test the property qty
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

    it('should have the property side (base name: "side")', function() {
      // uncomment below and update the code to test the property side
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

    it('should have the property symbol (base name: "symbol")', function() {
      // uncomment below and update the code to test the property symbol
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

    it('should have the property userId (base name: "user_id")', function() {
      // uncomment below and update the code to test the property userId
      //var instance = new BybitApi.LinearClosedPnlRecordResult();
      //expect(instance).to.be();
    });

  });

}));
