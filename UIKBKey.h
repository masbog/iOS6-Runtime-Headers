/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIKBAttributeList;

@interface UIKBKey : UIKBShape <NSCoding, NSCopying, UIKBCacheKey> {
    NSString *m_name;
    NSString *m_representedString;
    NSString *m_displayString;
    NSString *m_displayType;
    NSString *m_interactionType;
    NSString *m_variantType;
    UIKBAttributeList *m_attributes;
    unsigned int m_displayTypeHint;
    NSString *m_displayRowHint;
    NSArray *m_variantKeys;
    NSString *m_overrideDisplayString;
    NSString *m_clientVariantRepresentedString;
    NSString *m_clientVariantActionName;
    BOOL m_visible;
    BOOL m_ghost;
    int m_splitMode;
    NSArray *m_flicks;
}

@property(copy) NSString * name;
@property(copy) NSString * representedString;
@property(copy) NSString * displayString;
@property(copy) NSString * displayType;
@property(copy) NSString * interactionType;
@property(copy) NSString * variantType;
@property(copy) UIKBAttributeList * attributes;
@property unsigned int displayTypeHint;
@property(retain) NSString * displayRowHint;
@property(copy) NSArray * variantKeys;
@property(copy) NSString * overrideDisplayString;
@property(copy) NSString * clientVariantRepresentedString;
@property(copy) NSString * clientVariantActionName;
@property(copy) NSString * tint;
@property(copy) NSString * rendering;
@property BOOL visible;
@property BOOL hidden;
@property BOOL disabled;
@property(readonly) BOOL isClientVariantOverride;
@property(retain) NSArray * flicks;
@property BOOL isGhost;
@property int splitMode;
@property(readonly) NSString * cacheKey;

+ (id)keyWithKey:(id)arg1;
+ (id)key;

- (void)setHidden:(BOOL)arg1;
- (BOOL)hidden;
- (id)init;
- (void)dealloc;
- (void)setDisabled:(BOOL)arg1;
- (id)name;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setFlicks:(id)arg1;
- (id)flicks;
- (void)setVariantKeys:(id)arg1;
- (void)setTint:(id)arg1;
- (id)tint;
- (id)variantDisplayString;
- (id)initWithName:(id)arg1 representedString:(id)arg2 displayString:(id)arg3 displayType:(id)arg4 interactionType:(id)arg5 variantType:(id)arg6 attributes:(id)arg7 geometry:(id)arg8 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg9 paddedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg10;
- (id)variantKeys;
- (id)initWithName:(id)arg1 representedString:(id)arg2 displayString:(id)arg3 displayType:(id)arg4 interactionType:(id)arg5 variantType:(id)arg6 attributes:(id)arg7 geometry:(id)arg8 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg9 paddedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg10 ghost:(BOOL)arg11;
- (void)setSplitMode:(int)arg1;
- (int)splitMode;
- (void)setIsGhost:(BOOL)arg1;
- (BOOL)isGhost;
- (void)setAttributes:(id)arg1;
- (void)setVariantType:(id)arg1;
- (void)mergeAttributes:(id)arg1;
- (void)setInteractionType:(id)arg1;
- (BOOL)behavesAsShiftKey;
- (void)setRendering:(id)arg1;
- (void)setVariantPopupBias:(id)arg1;
- (id)clientVariantRepresentedString;
- (id)clientVariantActionName;
- (void)setDisplayType:(id)arg1;
- (id)variantPopupBias;
- (BOOL)isClientVariantOverride;
- (void)removeClientVariantActionInfo;
- (void)setClientVariantRepresentedString:(id)arg1;
- (void)setClientVariantActionName:(id)arg1;
- (void)setOverrideDisplayString:(id)arg1;
- (id)variantType;
- (void)setDisplayRowHint:(id)arg1;
- (void)setRepresentedString:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setDisplayTypeHint:(unsigned int)arg1;
- (id)cacheKey;
- (id)displayString;
- (unsigned int)displayTypeHint;
- (id)overrideDisplayString;
- (id)interactionType;
- (id)rendering;
- (id)displayRowHint;
- (id)displayType;
- (BOOL)visible;
- (id)representedString;
- (BOOL)disabled;
- (void)setVisible:(BOOL)arg1;
- (int)textAlignment;
- (void)setTextAlignment:(int)arg1;
- (id)attributes;
- (void)setName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
