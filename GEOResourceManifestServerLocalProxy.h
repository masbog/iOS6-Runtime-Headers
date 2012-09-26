/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOActiveTileGroup, NSURLConnection, NSMutableData, GEORegionalResourcesLoader, NSLock, <GEOResourceManifestServerProxyDelegate>, GEOResourceManifestDownload, NSError, GEOResourceLoader, NSString, NSMutableDictionary, GEORegionalResourcesInfo, NSTimer;

@interface GEOResourceManifestServerLocalProxy : NSObject <NSURLConnectionDelegate, GEOResourceLoaderDelegate, GEOResourceManifestServerProxy> {
    <GEOResourceManifestServerProxyDelegate> *_delegate;
    NSURLConnection *_connection;
    NSMutableData *_responseData;
    NSString *_responseETag;
    BOOL _isObservingManifestReachability;
    NSTimer *_manifestUpdateTimer;
    BOOL _isObservingTileGroupReachability;
    NSTimer *_tileGroupUpdateTimer;
    GEOResourceManifestDownload *_resourceManifest;
    GEOActiveTileGroup *_activeTileGroup;
    GEORegionalResourcesInfo *_regionalResourcesInfo;
    GEOResourceLoader *_resourceLoader;
    NSMutableDictionary *_resourceRetainCounts;
    GEORegionalResourcesLoader *_regionalResourcesLoader;
    BOOL _started;
    BOOL _hiDPI;
    unsigned int _manifestRetryCount;
    unsigned int _tileGroupRetryCount;
    NSString *_authToken;
    NSLock *_authTokenLock;
    NSError *_lastResourceManifestLoadError;
}

@property <GEOResourceManifestServerProxyDelegate> * delegate;


- (id)resourceLoader:(id)arg1 resourceNamesForTileGroupWithIdentifier:(unsigned int)arg2 type:(int)arg3;
- (void)_writeManifestToDisk:(id)arg1;
- (void)_updateTimerFired:(id)arg1;
- (id)_manifestURL;
- (void)_updateManifest;
- (void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)arg1;
- (void)_changeActiveTileGroup:(id)arg1;
- (void)_retainResource:(id)arg1;
- (void)_tileGroupTimerFired:(id)arg1;
- (void)_forceChangeActiveTileGroup:(id)arg1;
- (void)_registerReachabilityObserver:(unsigned int)arg1;
- (void)_writeActiveTileGroupToDisk:(id)arg1;
- (oneway void)releaseResources:(id)arg1;
- (oneway void)retainResources:(id)arg1;
- (void)_scheduleUpdateTimerWithTimeInterval:(double)arg1;
- (BOOL)_updateManifestIfNecessary;
- (void)_considerChangingActiveTileGroup;
- (void)_loadFromDisk;
- (void)_cancelConnection;
- (oneway void)refreshActiveTileGroup;
- (oneway void)resetActiveTileGroup;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)getResourceManifestWithHandler:(id)arg1;
- (oneway void)cancelRegionalResourcesLoadForKeys:(id)arg1;
- (oneway void)loadRegionalResourcesForKeys:(id)arg1 allowNetwork:(BOOL)arg2;
- (void)closeConnection;
- (void)openConnection;
- (oneway void)startServer:(id)arg1;
- (id)authToken;
- (void)_cleanupConnection;
- (oneway void)forceUpdate;
- (void)_reachabilityChanged:(id)arg1;
- (void)_countryProvidersDidChange:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end