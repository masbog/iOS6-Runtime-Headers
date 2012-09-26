/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSArray;

@interface _UIActivityIndicatorViewArtworkItem : NSObject <NSDiscardableContent> {
    NSString *_artKey;
    NSArray *_images;
    struct { 
        unsigned int isDiscarded : 1; 
        unsigned int useCount; 
    } _flags;
}

@property(readonly) NSString * artKey;
@property(retain) NSArray * images;


- (void)dealloc;
- (BOOL)isContentDiscarded;
- (void)discardContentIfPossible;
- (unsigned int)hash;
- (id)artKey;
- (id)initWithArtKey:(id)arg1;
- (void)setImages:(id)arg1;
- (id)images;
- (void)endContentAccess;
- (BOOL)beginContentAccess;

@end