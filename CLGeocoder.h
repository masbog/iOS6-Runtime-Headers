/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class CLGeocoderInternal;

@interface CLGeocoder : NSObject  {
    CLGeocoderInternal *_internal;
}

@property(getter=isGeocoding,readonly) BOOL geocoding;


- (void)_notifyPartialResult:(id)arg1;
- (id)_placemarkWithLocation:(id)arg1;
- (void)cancelGeocode;
- (void)geocodeAddressString:(id)arg1 completionHandler:(id)arg2;
- (void)geocodeAddressDictionary:(id)arg1 completionHandler:(id)arg2;
- (void)reverseGeocodeLocation:(id)arg1 completionHandler:(id)arg2;
- (void)reverseGeocodeLocation:(id)arg1 localResultsOnly:(BOOL)arg2 completionHandler:(id)arg3;
- (void)_notifyResult:(id)arg1 error:(id)arg2;
- (void)_notifyError:(id)arg1;
- (void)_notifyResult:(id)arg1;
- (id)_placemarkWithPlace:(id)arg1;
- (void)_notifyCancel;
- (void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 completionHandler:(id)arg3;
- (void)_request:(id)arg1 didReturnError:(id)arg2;
- (void)_ensureMainThreadExecutionContextForBlock:(id)arg1;
- (void)_request:(id)arg1 didReturnResponse:(id)arg2;
- (void)_setLoggingPropertiesForRequest:(id)arg1;
- (void)_request:(id)arg1 didReturnError:(id)arg2 partialResultForLocation:(id)arg3;
- (void)_notifyNoResult;
- (BOOL)isGeocoding;
- (void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 completionHandler:(id)arg3;
- (void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 localResultsOnly:(BOOL)arg3 completionHandler:(id)arg4;
- (id)init;
- (void)dealloc;

@end
