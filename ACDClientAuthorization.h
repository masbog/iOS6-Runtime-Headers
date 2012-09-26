/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class NSSet, ACDClient, NSDictionary;

@interface ACDClientAuthorization : NSObject  {
    NSSet *_grantedPermissions;
    BOOL _isGranted;
    ACDClient *_client;
    NSDictionary *_options;
}

@property BOOL isGranted;
@property(retain) ACDClient * client;
@property(retain) NSSet * grantedPermissions;
@property(retain) NSDictionary * options;


- (id)grantedPermissions;
- (void)setGrantedPermissions:(id)arg1;
- (void)setIsGranted:(BOOL)arg1;
- (id)initForClient:(id)arg1;
- (void)setClient:(id)arg1;
- (void).cxx_destruct;
- (void)setOptions:(id)arg1;
- (BOOL)isGranted;
- (id)client;
- (id)options;

@end