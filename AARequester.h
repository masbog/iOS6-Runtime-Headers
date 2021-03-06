/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AARequest, AAResponse, NSMutableData, NSURLConnection, NSHTTPURLResponse;

@interface AARequester : NSOperation  {
    AARequest *_request;
    AAResponse *_response;
    NSURLConnection *_urlConnection;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    NSMutableData *_data;
    NSHTTPURLResponse *_httpResponse;
    Class _responseClass;
    BOOL _isExecuting;
    BOOL _isFinished;
    BOOL _canceled;
    BOOL _isCanceled;
}

@property(getter=isExecuting) BOOL executing;
@property(getter=isFinished) BOOL finished;
@property(getter=isCanceled) BOOL canceled;


- (void)setExecuting:(BOOL)arg1;
- (void)setCanceled:(BOOL)arg1;
- (void)_callHandler;
- (id)initWithRequest:(id)arg1 handler:(id)arg2;
- (BOOL)isCanceled;
- (void)setFinished:(BOOL)arg1;
- (void)start;
- (void).cxx_destruct;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)cancel;
- (BOOL)isExecuting;
- (BOOL)isFinished;

@end
