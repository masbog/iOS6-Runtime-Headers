/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSCoding> {
    NSArray *_sections;
    NSArray *_sectionIndexTitles;
}

@property(readonly) NSArray * sections;
@property(copy) NSArray * sectionIndexTitles;
@property(readonly) unsigned int count;


- (unsigned int)indexOfSectionForSectionIndexTitleAtIndex:(unsigned int)arg1;
- (void)setSectionIndexTitles:(id)arg1;
- (void)dealloc;
- (unsigned int)count;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)sections;
- (id)sectionIndexTitles;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end