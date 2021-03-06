/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class NSNumber, NSString, NSMutableDictionary;

@interface ACDClient : NSObject  {
    struct _xpc_connection_s { } *_connection;
    NSString *_bundleID;
    struct __CFBundle { } *_bundle;
    NSNumber *_pid;
    NSString *_localizedAppName;
    NSString *_name;
    NSMutableDictionary *_accessOptions;
}

@property(retain) NSString * bundleID;
@property(readonly) struct __CFBundle { }* bundle;
@property(readonly) NSString * localizedAppName;
@property(readonly) NSString * adamOrDisplayID;
@property(readonly) NSString * name;
@property(readonly) NSNumber * pid;
@property(readonly) struct _xpc_connection_s { }* connection;

+ (id)clientWithBundleID:(id)arg1;

- (id)localizedAppName;
- (id)adamOrDisplayID;
- (BOOL)hasEntitlement:(id)arg1;
- (void)setBundleID:(id)arg1;
- (id)bundleID;
- (id)pid;
- (struct __CFBundle { }*)bundle;
- (id)initWithConnection:(struct _xpc_connection_s { }*)arg1;
- (void)dealloc;
- (id)name;
- (void).cxx_destruct;
- (struct _xpc_connection_s { }*)connection;
- (id)debugDescription;

@end
