/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVAssetWriterInputWritingHelper, NSObject<OS_dispatch_queue>;

@interface AVAssetWriterInputMediaDataRequester : NSObject  {
    AVAssetWriterInputWritingHelper *_writingHelper;
    NSObject<OS_dispatch_queue> *_requestQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _requestBlock;

}

@property(readonly) NSObject<OS_dispatch_queue> * requestQueue;
@property(readonly) id requestBlock;


- (void)_requestMediaDataIfReady;
- (id)requestBlock;
- (id)requestQueue;
- (void)startRequestingMediaData;
- (id)initWithAssetWriterInputWritingHelper:(id)arg1 requestQueue:(id)arg2 requestBlock:(id)arg3;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)finalize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end