/* Generated by RuntimeBrowser.
   Image: /Users/steipete/Library/Application Support/iPhone Simulator/6.0/Applications/169BE991-A55A-4056-B56F-2FCCE879D4E7/OCRuntime.app/OCRuntime
 */

@class NSString, NSMutableArray;

@interface ClassStub : NSObject  {
    BOOL shouldSortSubclasses;
    BOOL subclassesAreSorted;
    NSString *stubClassname;
    NSString *imagePath;
    NSMutableArray *subclassesStubs;
}

@property(retain) NSString * stubClassname;
@property(retain) NSMutableArray * subclassesStubs;
@property(retain) NSString * imagePath;

+ (id)classStubWithClass:(Class)arg1;
+ (void)thisClassIsPartOfTheRuntimeBrowser;

- (id)nodeName;
- (id)imagePath;
- (id)initWithClass:(Class)arg1;
- (void)dealloc;
- (int)compare:(id)arg1;
- (id)description;
- (BOOL)canBeSavedAsHeader;
- (id)nodeInfo;
- (BOOL)containsSearchString:(id)arg1;
- (void)addSubclassStub:(id)arg1;
- (BOOL)writeAtPath:(id)arg1;
- (id)children;
- (id)protocolsTokens;
- (id)methodsTokens;
- (id)ivarTokens;
- (void)setSubclassesStubs:(id)arg1;
- (void)setImagePath:(id)arg1;
- (void)setStubClassname:(id)arg1;
- (id)protocolsTokensForClass:(Class)arg1 includeSuperclassesProtocols:(BOOL)arg2;
- (id)protocolsTokensForClass:(Class)arg1;
- (id)methodsTokensForClass:(Class)arg1;
- (id)subclassesStubs;
- (id)stubClassname;

@end
