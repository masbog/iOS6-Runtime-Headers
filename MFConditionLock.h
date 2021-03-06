/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject> {
    NSString *_name;
    id _delegate;
}

+ (void)initialize;

- (id)initWithName:(id)arg1 condition:(int)arg2 andDelegate:(id)arg3;
- (BOOL)isLockedByMe;
- (id)initWithName:(id)arg1 andDelegate:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)unlockWithCondition:(int)arg1;
- (BOOL)lockWhenCondition:(int)arg1 beforeDate:(id)arg2;
- (BOOL)lockBeforeDate:(id)arg1;
- (void)unlock;

@end
