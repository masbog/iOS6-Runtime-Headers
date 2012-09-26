/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableDictionary, NSDictionary;

@interface MCRestrictionsPayload : MCPayload  {
    NSMutableDictionary *_restrictions;
}

@property(readonly) NSDictionary * restrictions;

+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)typeStrings;

- (void)_insertRestrictedBoolForKey:(id)arg1 value:(id)arg2 preferenc:(BOOL)arg3;
- (id)restrictions;
- (id)_defaultMediaSettings;
- (id)_enforcedFeatureStrings;
- (id)_restrictedFeatureStrings;
- (id)_invalidFieldErrorWithFieldName:(id)arg1;
- (id)subtitle1Description;
- (id)installationWarnings;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void).cxx_destruct;
- (id)description;

@end