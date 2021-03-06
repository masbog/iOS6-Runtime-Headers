/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface PLGatekeeperClient : NSObject  {
    NSObject<OS_xpc_object> *connection;
}

@property(readonly) NSObject<OS_dispatch_queue> * replyQueue;
@property NSObject<OS_xpc_object> * connection;

+ (id)sharedInstance;

- (void)automaticallyDeleteEmptyAlbum:(id)arg1;
- (id)emailAddressForKey:(int)arg1;
- (int)keyForEmailAddress:(id)arg1;
- (unsigned long long)attemptToPurgeSharedAssetsSpace:(unsigned long long)arg1;
- (unsigned long long)purgeableSharedAssetsSpace;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)sendDaemonJob:(id)arg1 replyHandler:(id)arg2;
- (void)cleanupForStoreDemoMode;
- (void)clearAllBulletinsWithLastClearedRecordID:(unsigned int)arg1;
- (id)getThumbnailImageDataForBulletinWithRecordID:(unsigned int)arg1;
- (int)getCurrentApplicationBadgeCount;
- (id)getCurrentBulletins;
- (void)repairSingletonObjects;
- (void)createPhotostreamAlbumWithStreamID:(id)arg1;
- (void)enablePhotostreamsWithStreamID:(id)arg1;
- (void)recoverFromCrashIfNeeded;
- (void)clearChangeStore;
- (void)recalculateCachedAlbumCounts;
- (void)notifyAboutTerminationDueToUncaughtException:(id)arg1;
- (void)writeDataInBackground:(id)arg1 toFileURL:(id)arg2;
- (void)updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2;
- (void)cleanupAfteriTunesSync;
- (void)finalizeOTARestoreRecreatingAlbums:(BOOL)arg1;
- (void)updateModelAfterOTARestore;
- (void)updateStackedImageCacheForAlbum:(id)arg1;
- (void)updateCameraPreviewWellImage:(id)arg1;
- (void)updateThumbnailsForPhoto:(id)arg1 generatePreviewImage:(BOOL)arg2 waitForReply:(BOOL)arg3;
- (void)launchAssetsd;
- (void)importFileSystemAssetsWaitingForReply:(BOOL)arg1;
- (void)createPhotoLibraryDatabase;
- (void)addAssetWithURL:(id)arg1 toAlbumWithUUID:(id)arg2 handler:(id)arg3;
- (void)addGroupWithName:(id)arg1 handler:(id)arg2;
- (id)imageDataFromAssetURL:(id)arg1 format:(int)arg2;
- (void)requestImageFromAssetURL:(id)arg1 format:(int)arg2 handler:(id)arg3;
- (id)fileURLForNewAssetWithType:(unsigned int)arg1 extension:(id)arg2;
- (void)saveAssetWithJobDictionary:(id)arg1 handler:(id)arg2 imageSurface:(void*)arg3 previewImageSurface:(void*)arg4;
- (int)fileDescriptorForAssetURL:(id)arg1;
- (void)requestAccessWithHandler:(id)arg1;
- (void)waitUntilConnectionSendsAllMessages;
- (void)updateThumbnailsForPhoto:(id)arg1 generatePreviewImage:(BOOL)arg2 waitForReply:(BOOL)arg3 assignNewIndex:(BOOL)arg4;
- (void)setConnection:(id)arg1;
- (id)sendQueue;
- (id)replyQueue;
- (void)getLibrarySizes:(id)arg1;
- (void)dataMigrationWillFinish;
- (void)cleanupModelAfteriTunesRestore;
- (unsigned int)secondsNeededToCleanupModelAfteriTunesRestore;
- (void)getPhotosAndVideosCountWithHandler:(id)arg1;
- (id)fileURLForAssetURL:(id)arg1 withAdjustments:(BOOL)arg2;
- (id)init;
- (id)connection;

@end
