/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem  {
    NSMutableSet *_responses;
    NSMutableSet *_successfulICS;
    NSMutableSet *_failedResponseItems;
}

@property(retain) NSMutableSet * responses;
@property(retain) NSMutableSet * successfulICS;
@property(retain) NSMutableSet * failedResponseItems;


- (id)failedResponseItems;
- (id)successfulICS;
- (void)addNewTopLevelItem:(id)arg1;
- (void)setFailedResponseItems:(id)arg1;
- (void)setSuccessfulICS:(id)arg1;
- (void)setResponses:(id)arg1;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)responses;
- (void)dealloc;
- (id)description;

@end