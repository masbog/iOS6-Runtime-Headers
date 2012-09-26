/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTextListStyle, NSMutableArray, OADTextBodyProperties;

@interface OADTextBody : NSObject  {
    OADTextBodyProperties *mProperties;
    NSMutableArray *mParagraphs;
    OADTextListStyle *mTextListStyle;
}


- (void)addParagraphsFromTextBody:(id)arg1;
- (id)findFirstTextRunOfClass:(Class)arg1;
- (void)removeTrailingNewlines;
- (void)applyTextListStyle:(id)arg1;
- (id)overrideTextListStyle;
- (void)removeAllParagraphs;
- (id)textListStyle;
- (void)flattenProperties;
- (void)removeUnnecessaryOverrides;
- (id)addParagraph;
- (void)setParentTextListStyle:(id)arg1;
- (unsigned int)paragraphCount;
- (id)plainText;
- (id)paragraphAtIndex:(unsigned int)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)isEmpty;
- (void)setProperties:(id)arg1;
- (id)properties;

@end