/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface IMHandleRegistrarInternal : NSObject  {
    NSMutableDictionary *_siblingsMap;
    NSMutableDictionary *_accountSiblingsMap;
    NSMutableDictionary *_existingAccountSiblingsMap;
    NSMutableDictionary *_chatSiblingsMap;
    NSMutableDictionary *_existingChatSiblingsMap;
    NSMutableArray *_allIMHandles;
    NSMutableDictionary *_candidateNamesMap;
    NSMutableDictionary *_usedUniqueNames;
    NSMutableSet *_knownConflictingNames;
    int _nameStyle;
}


- (void)dealloc;

@end
