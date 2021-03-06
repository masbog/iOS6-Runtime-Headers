/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class NSString, MPAVController, MPMovieSnapshotController;

@interface MPVideoView : UIView  {
    MPAVController *_player;
    MPMovieSnapshotController *_snapshotController;
    NSString *_moviePath;
    NSString *_movieSubtitle;
    NSString *_movieTitle;
    NSString *_videoID;
    double _startTime;
    double _stopTime;
    unsigned int _scaleMode;
}

@property MPAVController * player;
@property(retain) NSString * movieSubtitle;
@property(retain) NSString * movieTitle;
@property(copy) NSString * videoID;
@property double startTime;
@property double stopTime;
@property(readonly) BOOL canChangeScaleMode;
@property unsigned int scaleMode;
@property(readonly) unsigned int effectiveScaleMode;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } movieFrame;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } movieContentFrame;

+ (Class)layerClass;

- (void)scheduleThumbnailWithSize:(struct CGSize { float x1; float x2; })arg1 orientation:(int)arg2 time:(float)arg3 delegate:(id)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })movieFrame;
- (void)playFromBeginning;
- (void)playWhenLikelyToKeepUp;
- (void)setScaleMode:(unsigned int)arg1 duration:(float)arg2;
- (void)prepareAVControllerQueue;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)cancelSnapshots;
- (void)setScaleMode:(unsigned int)arg1;
- (BOOL)canChangeScaleMode;
- (void)setScaleMode:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setStopTime:(double)arg1;
- (id)videoID;
- (double)stopTime;
- (id)moviePath;
- (void)toggleScaleMode:(BOOL)arg1;
- (void)setMovieWithPath:(id)arg1;
- (void)setVideoID:(id)arg1;
- (void)_bufferingStateChangedNotification:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })movieContentFrame;
- (void)setMovieTitle:(id)arg1;
- (void)setMovieSubtitle:(id)arg1;
- (unsigned int)effectiveScaleMode;
- (unsigned int)scaleMode;
- (id)movieSubtitle;
- (id)movieTitle;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void)play;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (double)startTime;
- (void)setStartTime:(double)arg1;

@end
