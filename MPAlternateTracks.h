/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class MPAVItem, NSMutableDictionary, NSDictionary;

@interface MPAlternateTracks : NSObject  {
    MPAVItem *_item;
    NSDictionary *_alternateTracks;
    NSMutableDictionary *_trackChangeDictionary;
}

@property(getter=isLoaded,readonly) BOOL loaded;

+ (id)fallbackSubtitleOptionForAsset:(id)arg1 withSelectedAudioOption:(id)arg2;

- (unsigned int)trackCountForTypes:(unsigned int)arg1;
- (BOOL)hasTracksForTypes:(unsigned int)arg1;
- (void)setTrack:(id)arg1 forType:(unsigned int)arg2;
- (id)currentTrackForType:(unsigned int)arg1;
- (id)initWithItem:(id)arg1;
- (id)_titleOfOption:(id)arg1;
- (void)commitTrackChanges;
- (void)beginTrackChanges;
- (id)_keyForTrackType:(unsigned int)arg1;
- (unsigned int)indexOfCurrentTrackForType:(unsigned int)arg1;
- (id)tracksForType:(unsigned int)arg1;
- (void)dealloc;
- (void)reloadData;
- (BOOL)isLoaded;

@end
