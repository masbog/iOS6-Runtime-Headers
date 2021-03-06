/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMAVCamera;

@interface IMAVLocalPreviewClient : NSObject <IMSystemMonitorListener> {
    BOOL _wantsPreview;
}

@property(readonly) BOOL isPreviewRunning;
@property unsigned int cameraType;
@property unsigned int cameraOrientation;
@property IMAVCamera * localCamera;
@property void* localVideoLayer;
@property void* localVideoBackLayer;

+ (id)sharedInstance;

- (void)endAnimationToPreview;
- (void)beginAnimationToPreview;
- (void)endAnimationToPIP;
- (void)beginAnimationToPIP;
- (void)_updatePreviewState;
- (BOOL)_shouldPreviewBeRunning;
- (void)_avDaemonConnected;
- (BOOL)isPreviewRunning;
- (void)startPreview;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void*)localVideoBackLayer;
- (void)setLocalVideoLayer:(void*)arg1;
- (void*)localVideoLayer;
- (void)stopPreview;
- (void)setCameraOrientation:(unsigned int)arg1;
- (void)setCameraType:(unsigned int)arg1;
- (unsigned int)cameraOrientation;
- (unsigned int)cameraType;
- (id)localCamera;
- (void)setLocalCamera:(id)arg1;
- (void)didReceiveCommError;
- (void)didReceiveErrorFromCamera:(unsigned int)arg1 error:(id)arg2;
- (void)didChangeLocalVideoAttributes:(id)arg1;
- (void)didReceiveFirstPreviewFrameFromCamera:(unsigned int)arg1;
- (void)didStopPreview;
- (void)didStartPreview;
- (void)systemScreenDidPowerDown;
- (void)systemScreenDidPowerUp;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (id)init;
- (void)dealloc;

@end
