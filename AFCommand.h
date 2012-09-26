/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSString, NSDictionary;

@interface AFCommand : NSObject  {
    NSString *_name;
    NSDictionary *_commandInfo;
    id _context;
}

@property(readonly) NSString * name;
@property(readonly) NSString * domain;
@property(readonly) BOOL needsReply;


- (id)commandValueForKey:(id)arg1;
- (id)aceDictionary;
- (BOOL)needsReply;
- (id)initWithMessage:(id)arg1;
- (id)context;
- (id)name;
- (id)domain;
- (void).cxx_destruct;
- (id)description;

@end