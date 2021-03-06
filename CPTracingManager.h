/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSMTraceBuffer;

@interface CPTracingManager : NSObject  {
    TSMTraceBuffer *mBuffer;
    unsigned int mCount;
}

+ (id)_singletonAlloc;
+ (id)sharedManager;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)teardown;
- (void)setup;
- (void)dealloc;
- (unsigned int)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
