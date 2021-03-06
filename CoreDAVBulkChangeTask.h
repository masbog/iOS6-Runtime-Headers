/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet, NSString, NSData, NSDictionary, NSSet;

@interface CoreDAVBulkChangeTask : CoreDAVTask  {
    NSString *_appSpecificNamespace;
    NSString *_appSpecificDataProp;
    NSDictionary *_uuidsToAddActions;
    NSDictionary *_hrefsToModDeleteActions;
    NSString *_checkCTag;
    BOOL _simple;
    BOOL _returnChangedData;
    NSData *_pushedData;
    BOOL _validCTag;
    NSString *_nextCTag;
    NSMutableSet *_bulkChangeResponses;
    NSString *_requestDataContentType;
}

@property(readonly) NSDictionary * uuidsToAddActions;
@property(readonly) NSDictionary * hrefsToModDeleteActions;
@property(readonly) NSString * nextCTag;
@property(readonly) NSSet * bulkChangeResponses;


- (id)hrefsToModDeleteActions;
- (id)uuidsToAddActions;
- (id)bulkChangeResponses;
- (void)fillOutDataWithUUIDsToAddActions:(id)arg1 hrefsToModDeleteActions:(id)arg2;
- (id)additionalHeaderValues;
- (id)nextCTag;
- (id)initWithURL:(id)arg1 checkCTag:(id)arg2 simple:(BOOL)arg3 returnChangedData:(BOOL)arg4 uuidsToAddActions:(id)arg5 hrefsToModDeleteActions:(id)arg6;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)dealloc;

@end
