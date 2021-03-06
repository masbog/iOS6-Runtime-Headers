/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSError, NSString;

@interface GKHostReachability : GKReachability  {
    NSString *_hostName;
    NSError *_error;
}

@property(retain) NSString * hostName;
@property(retain) NSError * error;

+ (id)_gkReachabilityWithHostName:(id)arg1;

- (void)dealloc;
- (void)setHostName:(id)arg1;
- (void)setError:(id)arg1;
- (id)hostName;
- (id)error;

@end
