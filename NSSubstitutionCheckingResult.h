/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSSubstitutionCheckingResult : NSTextCheckingResult  {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    NSString *_replacementString;
}


- (void)dealloc;
- (id)description;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2;
- (id)replacementString;
- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end