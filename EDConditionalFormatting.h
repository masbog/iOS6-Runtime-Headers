/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject  {
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
}

+ (id)conditionalFormatting;

- (void)sortRulesByPriority;
- (void)insertRule:(id)arg1 atIndex:(unsigned int)arg2;
- (id)ruleAtIndex:(unsigned int)arg1;
- (unsigned int)ruleCount;
- (void)addRule:(id)arg1;
- (void)addRange:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)rangeAtIndex:(unsigned int)arg1;
- (unsigned int)rangeCount;

@end
