/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, OADBulletFont, OADTextSpacing, OADBulletSize, OADBulletColor, OADBulletProperties;

@interface OADParagraphProperties : OADCharacterProperties  {
    OADBulletSize *mBulletSize;
    OADBulletColor *mBulletColor;
    OADBulletFont *mBulletFont;
    OADBulletProperties *mBulletProperties;
    OADTextSpacing *mLineSpacing;
    OADTextSpacing *mBeforeSpacing;
    OADTextSpacing *mAfterSpacing;
    NSMutableArray *mTabStops;
    double mLeftMargin;
    double mRightMargin;
    double mIndent;
    double mDefaultTab;
    int mLevel;
    int mBulletCharSet;
    unsigned char mAlign;
    unsigned char mWrap;
    unsigned char mFontAlign;
    unsigned int mIsRightToLeft : 1;
    unsigned int mIsLatinLineBreak : 1;
    unsigned int mIsHangingPunctuation : 1;
    unsigned int mHasTabStops : 1;
    unsigned int mHasLeftMargin : 1;
    unsigned int mHasRightMargin : 1;
    unsigned int mHasLevel : 1;
    unsigned int mHasIndent : 1;
    unsigned int mHasAlign : 1;
    unsigned int mHasDefaultTab : 1;
    unsigned int mHasIsRightToLeft : 1;
    unsigned int mHasWrap : 1;
    unsigned int mHasFontAlign : 1;
    unsigned int mHasIsLatinLineBreak : 1;
    unsigned int mHasIsHangingPunctuation : 1;
    unsigned int mHasBulletCharSet : 1;
}

@property BOOL hasBulletCharSet;
@property int bulletCharSet;

+ (id)defaultProperties;

- (void)setHasBulletCharSet:(BOOL)arg1;
- (void)setBulletCharSet:(int)arg1;
- (int)bulletCharSet;
- (BOOL)isHangingPunctuation;
- (BOOL)isLatinLineBreak;
- (int)fontAlign;
- (BOOL)isRightToLeft;
- (double)defaultTab;
- (id)addTabStop;
- (id)tabStopAtIndex:(unsigned int)arg1;
- (unsigned int)tabStopCount;
- (void)clearTabStops;
- (BOOL)hasBulletCharSet;
- (BOOL)hasIsHangingPunctuation;
- (BOOL)hasIsLatinLineBreak;
- (BOOL)hasFontAlign;
- (BOOL)hasWrap;
- (BOOL)hasIsRightToLeft;
- (BOOL)hasDefaultTab;
- (BOOL)hasLevel;
- (BOOL)hasRightMargin;
- (BOOL)hasTabStops;
- (void)setBulletFont:(id)arg1;
- (void)setBulletColor:(id)arg1;
- (void)setBulletSize:(id)arg1;
- (void)setIsHangingPunctuation:(BOOL)arg1;
- (void)setIsLatinLineBreak:(BOOL)arg1;
- (void)setFontAlign:(int)arg1;
- (void)setIsRightToLeft:(BOOL)arg1;
- (void)setDefaultTab:(double)arg1;
- (void)setAfterSpacing:(id)arg1;
- (void)setBeforeSpacing:(id)arg1;
- (void)overrideWithProperties:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (id)initWithDefaults;
- (id)afterSpacing;
- (BOOL)hasAfterSpacing;
- (id)beforeSpacing;
- (BOOL)hasBeforeSpacing;
- (BOOL)hasLineSpacing;
- (BOOL)hasIndent;
- (BOOL)hasLeftMargin;
- (BOOL)hasAlign;
- (BOOL)hasBulletProperties;
- (id)bulletColor;
- (BOOL)hasBulletColor;
- (id)bulletFont;
- (BOOL)hasBulletFont;
- (BOOL)hasBulletSize;
- (double)nonOveridenLeftMargin;
- (id)bulletSize;
- (id)bulletProperties;
- (double)indent;
- (void)setBulletProperties:(id)arg1;
- (void)setIndent:(double)arg1;
- (double)rightMargin;
- (double)leftMargin;
- (void)setRightMargin:(double)arg1;
- (void)setLeftMargin:(double)arg1;
- (void)setWrap:(int)arg1;
- (int)wrap;
- (void)setAlign:(int)arg1;
- (int)align;
- (void)setLineSpacing:(id)arg1;
- (id)lineSpacing;
- (id)tabStops;
- (id)init;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (int)level;
- (void)setLevel:(int)arg1;

@end